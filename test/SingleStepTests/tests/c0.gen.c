#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_C0, _C0_0000) {
    const struct CPU_State initial_cpu = {.pc=0x7435, .a=0x3a, .x=0x37, .y=0x3e, .sp=0xa2, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7435, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7436, .a=0x3a, .x=0x37, .y=0x3e, .sp=0xa2, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x7435, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7435, .value=0xc0, .type=IO_READ},
        {.addr=0x7436, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0001) {
    const struct CPU_State initial_cpu = {.pc=0xe2aa, .a=0x6f, .x=0x41, .y=0xc3, .sp=0xae, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xe2aa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe2ab, .a=0x6f, .x=0x41, .y=0xc3, .sp=0xae, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe2aa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe2aa, .value=0xc0, .type=IO_READ},
        {.addr=0xe2ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0002) {
    const struct CPU_State initial_cpu = {.pc=0xa654, .a=0x39, .x=0x9a, .y=0xb7, .sp=0x26, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa654, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa655, .a=0x39, .x=0x9a, .y=0xb7, .sp=0x26, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xa654, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa654, .value=0xc0, .type=IO_READ},
        {.addr=0xa655, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0003) {
    const struct CPU_State initial_cpu = {.pc=0xa45a, .a=0xc0, .x=0xcc, .y=0xa7, .sp=0xc1, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa45a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa45b, .a=0xc0, .x=0xcc, .y=0xa7, .sp=0xc1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa45a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa45a, .value=0xc0, .type=IO_READ},
        {.addr=0xa45b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0004) {
    const struct CPU_State initial_cpu = {.pc=0x243a, .a=0x2e, .x=0x5a, .y=0xeb, .sp=0xe4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x243a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x243b, .a=0x2e, .x=0x5a, .y=0xeb, .sp=0xe4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x243a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x243a, .value=0xc0, .type=IO_READ},
        {.addr=0x243b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0005) {
    const struct CPU_State initial_cpu = {.pc=0xfd3f, .a=0xa8, .x=0xff, .y=0xce, .sp=0x70, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfd40, .a=0xa8, .x=0xff, .y=0xce, .sp=0x70, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xfd3f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfd3f, .value=0xc0, .type=IO_READ},
        {.addr=0xfd40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0006) {
    const struct CPU_State initial_cpu = {.pc=0x6d5e, .a=0xe2, .x=0xe0, .y=0x03, .sp=0xbc, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6d5f, .a=0xe2, .x=0xe0, .y=0x03, .sp=0xbc, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6d5e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6d5e, .value=0xc0, .type=IO_READ},
        {.addr=0x6d5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x412c, .a=0xe6, .x=0x7d, .y=0x59, .sp=0x07, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x412c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x412d, .a=0xe6, .x=0x7d, .y=0x59, .sp=0x07, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x412c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x412c, .value=0xc0, .type=IO_READ},
        {.addr=0x412d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0008) {
    const struct CPU_State initial_cpu = {.pc=0x93fd, .a=0x88, .x=0x87, .y=0xc9, .sp=0x5c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x93fd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x88, .x=0x87, .y=0xc9, .sp=0x5c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x93fd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x93fd, .value=0xc0, .type=IO_READ},
        {.addr=0x93fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0009) {
    const struct CPU_State initial_cpu = {.pc=0x3aaa, .a=0x81, .x=0x26, .y=0x46, .sp=0xfb, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3aaa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3aab, .a=0x81, .x=0x26, .y=0x46, .sp=0xfb, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x3aaa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3aaa, .value=0xc0, .type=IO_READ},
        {.addr=0x3aab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000A) {
    const struct CPU_State initial_cpu = {.pc=0xc037, .a=0x83, .x=0x0c, .y=0x27, .sp=0x51, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc037, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc038, .a=0x83, .x=0x0c, .y=0x27, .sp=0x51, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc037, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc037, .value=0xc0, .type=IO_READ},
        {.addr=0xc038, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000B) {
    const struct CPU_State initial_cpu = {.pc=0xbef3, .a=0x4c, .x=0x58, .y=0x3f, .sp=0xcc, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xbef3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbef4, .a=0x4c, .x=0x58, .y=0x3f, .sp=0xcc, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xbef3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbef3, .value=0xc0, .type=IO_READ},
        {.addr=0xbef4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000C) {
    const struct CPU_State initial_cpu = {.pc=0xbd6f, .a=0xf9, .x=0x4a, .y=0x0e, .sp=0xb3, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd6f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbd70, .a=0xf9, .x=0x4a, .y=0x0e, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbd6f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbd6f, .value=0xc0, .type=IO_READ},
        {.addr=0xbd70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000D) {
    const struct CPU_State initial_cpu = {.pc=0x0ac9, .a=0xae, .x=0x6e, .y=0x9f, .sp=0xf2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0aca, .a=0xae, .x=0x6e, .y=0x9f, .sp=0xf2, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0ac9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0ac9, .value=0xc0, .type=IO_READ},
        {.addr=0x0aca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000E) {
    const struct CPU_State initial_cpu = {.pc=0x323c, .a=0x23, .x=0xaa, .y=0xdd, .sp=0xfc, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x323c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x323d, .a=0x23, .x=0xaa, .y=0xdd, .sp=0xfc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x323c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x323c, .value=0xc0, .type=IO_READ},
        {.addr=0x323d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_000F) {
    const struct CPU_State initial_cpu = {.pc=0xf4d0, .a=0xf3, .x=0x18, .y=0x47, .sp=0xf6, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf4d1, .a=0xf3, .x=0x18, .y=0x47, .sp=0xf6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf4d0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf4d0, .value=0xc0, .type=IO_READ},
        {.addr=0xf4d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0010) {
    const struct CPU_State initial_cpu = {.pc=0x2611, .a=0x82, .x=0x9b, .y=0x0c, .sp=0xae, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2611, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2612, .a=0x82, .x=0x9b, .y=0x0c, .sp=0xae, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x2611, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2611, .value=0xc0, .type=IO_READ},
        {.addr=0x2612, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6c9d, .a=0xba, .x=0x67, .y=0xaf, .sp=0x36, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6c9e, .a=0xba, .x=0x67, .y=0xaf, .sp=0x36, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6c9d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6c9d, .value=0xc0, .type=IO_READ},
        {.addr=0x6c9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0012) {
    const struct CPU_State initial_cpu = {.pc=0x3197, .a=0xe7, .x=0x4f, .y=0x38, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3197, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3198, .a=0xe7, .x=0x4f, .y=0x38, .sp=0xdb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3197, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3197, .value=0xc0, .type=IO_READ},
        {.addr=0x3198, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0964, .a=0xfb, .x=0x52, .y=0xde, .sp=0xa7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0964, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0965, .a=0xfb, .x=0x52, .y=0xde, .sp=0xa7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0964, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0964, .value=0xc0, .type=IO_READ},
        {.addr=0x0965, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0014) {
    const struct CPU_State initial_cpu = {.pc=0x5971, .a=0xe4, .x=0x9c, .y=0x48, .sp=0x5f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5971, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5972, .a=0xe4, .x=0x9c, .y=0x48, .sp=0x5f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5971, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5971, .value=0xc0, .type=IO_READ},
        {.addr=0x5972, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0015) {
    const struct CPU_State initial_cpu = {.pc=0xcfed, .a=0xda, .x=0xaf, .y=0x89, .sp=0x66, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xcfed, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcfee, .a=0xda, .x=0xaf, .y=0x89, .sp=0x66, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xcfed, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcfed, .value=0xc0, .type=IO_READ},
        {.addr=0xcfee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0016) {
    const struct CPU_State initial_cpu = {.pc=0xac88, .a=0x7d, .x=0xfc, .y=0xea, .sp=0xd5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xac88, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xac89, .a=0x7d, .x=0xfc, .y=0xea, .sp=0xd5, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xac88, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xac88, .value=0xc0, .type=IO_READ},
        {.addr=0xac89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0017) {
    const struct CPU_State initial_cpu = {.pc=0xba62, .a=0x5d, .x=0x3c, .y=0x6f, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xba62, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xba63, .a=0x5d, .x=0x3c, .y=0x6f, .sp=0xf0, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xba62, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xba62, .value=0xc0, .type=IO_READ},
        {.addr=0xba63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0018) {
    const struct CPU_State initial_cpu = {.pc=0x5238, .a=0xbe, .x=0x7f, .y=0x53, .sp=0x0b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5238, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5239, .a=0xbe, .x=0x7f, .y=0x53, .sp=0x0b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x5238, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5238, .value=0xc0, .type=IO_READ},
        {.addr=0x5239, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0019) {
    const struct CPU_State initial_cpu = {.pc=0x5e9c, .a=0x79, .x=0x14, .y=0x52, .sp=0xdb, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5e9c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e9d, .a=0x79, .x=0x14, .y=0x52, .sp=0xdb, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5e9c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e9c, .value=0xc0, .type=IO_READ},
        {.addr=0x5e9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9b98, .a=0xc4, .x=0xfb, .y=0x16, .sp=0x67, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9b98, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9b99, .a=0xc4, .x=0xfb, .y=0x16, .sp=0x67, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9b98, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9b98, .value=0xc0, .type=IO_READ},
        {.addr=0x9b99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001B) {
    const struct CPU_State initial_cpu = {.pc=0x8759, .a=0x15, .x=0x61, .y=0x03, .sp=0x35, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8759, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x875a, .a=0x15, .x=0x61, .y=0x03, .sp=0x35, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8759, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8759, .value=0xc0, .type=IO_READ},
        {.addr=0x875a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001C) {
    const struct CPU_State initial_cpu = {.pc=0x64bd, .a=0x32, .x=0x08, .y=0x0a, .sp=0xf3, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x64bd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x64be, .a=0x32, .x=0x08, .y=0x0a, .sp=0xf3, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x64bd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x64bd, .value=0xc0, .type=IO_READ},
        {.addr=0x64be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001D) {
    const struct CPU_State initial_cpu = {.pc=0x43eb, .a=0x64, .x=0x79, .y=0x4e, .sp=0x6e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x43eb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0x64, .x=0x79, .y=0x4e, .sp=0x6e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x43eb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x43eb, .value=0xc0, .type=IO_READ},
        {.addr=0x43ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001E) {
    const struct CPU_State initial_cpu = {.pc=0x9595, .a=0x2d, .x=0xdd, .y=0xc6, .sp=0xe4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9595, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9596, .a=0x2d, .x=0xdd, .y=0xc6, .sp=0xe4, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x9595, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9595, .value=0xc0, .type=IO_READ},
        {.addr=0x9596, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_001F) {
    const struct CPU_State initial_cpu = {.pc=0x5314, .a=0x9b, .x=0x20, .y=0xa4, .sp=0x36, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5314, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5315, .a=0x9b, .x=0x20, .y=0xa4, .sp=0x36, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x5314, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5314, .value=0xc0, .type=IO_READ},
        {.addr=0x5315, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0020) {
    const struct CPU_State initial_cpu = {.pc=0xb8f8, .a=0xa0, .x=0x84, .y=0x0e, .sp=0x79, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb8f9, .a=0xa0, .x=0x84, .y=0x0e, .sp=0x79, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xb8f8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb8f8, .value=0xc0, .type=IO_READ},
        {.addr=0xb8f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0021) {
    const struct CPU_State initial_cpu = {.pc=0xd4ea, .a=0xef, .x=0x39, .y=0xbb, .sp=0xe7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd4eb, .a=0xef, .x=0x39, .y=0xbb, .sp=0xe7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xd4ea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd4ea, .value=0xc0, .type=IO_READ},
        {.addr=0xd4eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0022) {
    const struct CPU_State initial_cpu = {.pc=0x7d46, .a=0xe2, .x=0x12, .y=0x70, .sp=0x61, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7d46, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d47, .a=0xe2, .x=0x12, .y=0x70, .sp=0x61, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7d46, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d46, .value=0xc0, .type=IO_READ},
        {.addr=0x7d47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0023) {
    const struct CPU_State initial_cpu = {.pc=0x313e, .a=0x52, .x=0x2d, .y=0xb3, .sp=0xae, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x313e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x313f, .a=0x52, .x=0x2d, .y=0xb3, .sp=0xae, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x313e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x313e, .value=0xc0, .type=IO_READ},
        {.addr=0x313f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0024) {
    const struct CPU_State initial_cpu = {.pc=0xe694, .a=0x64, .x=0x7b, .y=0x71, .sp=0x79, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xe694, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe695, .a=0x64, .x=0x7b, .y=0x71, .sp=0x79, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xe694, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe694, .value=0xc0, .type=IO_READ},
        {.addr=0xe695, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd32e, .a=0x99, .x=0x87, .y=0x57, .sp=0x09, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd32e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd32f, .a=0x99, .x=0x87, .y=0x57, .sp=0x09, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xd32e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd32e, .value=0xc0, .type=IO_READ},
        {.addr=0xd32f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0026) {
    const struct CPU_State initial_cpu = {.pc=0xc4d9, .a=0xe8, .x=0x82, .y=0xcb, .sp=0xeb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc4da, .a=0xe8, .x=0x82, .y=0xcb, .sp=0xeb, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc4d9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc4d9, .value=0xc0, .type=IO_READ},
        {.addr=0xc4da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0027) {
    const struct CPU_State initial_cpu = {.pc=0x7d5c, .a=0x23, .x=0x02, .y=0x4b, .sp=0x69, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7d5c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d5d, .a=0x23, .x=0x02, .y=0x4b, .sp=0x69, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x7d5c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d5c, .value=0xc0, .type=IO_READ},
        {.addr=0x7d5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2b7e, .a=0x8a, .x=0x69, .y=0x04, .sp=0x45, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2b7e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2b7f, .a=0x8a, .x=0x69, .y=0x04, .sp=0x45, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x2b7e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2b7e, .value=0xc0, .type=IO_READ},
        {.addr=0x2b7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0029) {
    const struct CPU_State initial_cpu = {.pc=0xb733, .a=0x59, .x=0xa8, .y=0x0d, .sp=0x93, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb733, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb734, .a=0x59, .x=0xa8, .y=0x0d, .sp=0x93, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb733, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb733, .value=0xc0, .type=IO_READ},
        {.addr=0xb734, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1efb, .a=0x43, .x=0xef, .y=0xe8, .sp=0xfe, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1efb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1efc, .a=0x43, .x=0xef, .y=0xe8, .sp=0xfe, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1efb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1efb, .value=0xc0, .type=IO_READ},
        {.addr=0x1efc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002B) {
    const struct CPU_State initial_cpu = {.pc=0x7822, .a=0xb6, .x=0xe0, .y=0xac, .sp=0xe7, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7822, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7823, .a=0xb6, .x=0xe0, .y=0xac, .sp=0xe7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7822, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7822, .value=0xc0, .type=IO_READ},
        {.addr=0x7823, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002C) {
    const struct CPU_State initial_cpu = {.pc=0x3982, .a=0xfe, .x=0x70, .y=0xc6, .sp=0x4a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3982, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3983, .a=0xfe, .x=0x70, .y=0xc6, .sp=0x4a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3982, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3982, .value=0xc0, .type=IO_READ},
        {.addr=0x3983, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002D) {
    const struct CPU_State initial_cpu = {.pc=0x7414, .a=0x68, .x=0xe2, .y=0x33, .sp=0x49, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7414, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7415, .a=0x68, .x=0xe2, .y=0x33, .sp=0x49, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x7414, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7414, .value=0xc0, .type=IO_READ},
        {.addr=0x7415, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002E) {
    const struct CPU_State initial_cpu = {.pc=0xf813, .a=0xd0, .x=0x55, .y=0xcf, .sp=0x8f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf813, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf814, .a=0xd0, .x=0x55, .y=0xcf, .sp=0x8f, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf813, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf813, .value=0xc0, .type=IO_READ},
        {.addr=0xf814, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_002F) {
    const struct CPU_State initial_cpu = {.pc=0x01d3, .a=0x40, .x=0x31, .y=0xa1, .sp=0xea, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x01d4, .a=0x40, .x=0x31, .y=0xa1, .sp=0xea, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x01d3, .value=0xc0, .type=IO_READ},
        {.addr=0x01d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0030) {
    const struct CPU_State initial_cpu = {.pc=0x963d, .a=0x8a, .x=0xbb, .y=0xf0, .sp=0x43, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x963d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x963e, .a=0x8a, .x=0xbb, .y=0xf0, .sp=0x43, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x963d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x963d, .value=0xc0, .type=IO_READ},
        {.addr=0x963e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0031) {
    const struct CPU_State initial_cpu = {.pc=0xcb78, .a=0x75, .x=0x78, .y=0x5d, .sp=0xa0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xcb78, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcb79, .a=0x75, .x=0x78, .y=0x5d, .sp=0xa0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcb78, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcb78, .value=0xc0, .type=IO_READ},
        {.addr=0xcb79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0032) {
    const struct CPU_State initial_cpu = {.pc=0x9f9b, .a=0xb9, .x=0x60, .y=0x0f, .sp=0xaf, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9f9c, .a=0xb9, .x=0x60, .y=0x0f, .sp=0xaf, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x9f9b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9f9b, .value=0xc0, .type=IO_READ},
        {.addr=0x9f9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0033) {
    const struct CPU_State initial_cpu = {.pc=0x1840, .a=0x9a, .x=0x0d, .y=0xb0, .sp=0x5c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1840, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1841, .a=0x9a, .x=0x0d, .y=0xb0, .sp=0x5c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1840, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1840, .value=0xc0, .type=IO_READ},
        {.addr=0x1841, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0034) {
    const struct CPU_State initial_cpu = {.pc=0xd047, .a=0x4b, .x=0x9b, .y=0x1d, .sp=0x56, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd047, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd048, .a=0x4b, .x=0x9b, .y=0x1d, .sp=0x56, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xd047, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd047, .value=0xc0, .type=IO_READ},
        {.addr=0xd048, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0035) {
    const struct CPU_State initial_cpu = {.pc=0xe673, .a=0xbf, .x=0x12, .y=0xc5, .sp=0x4a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe673, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe674, .a=0xbf, .x=0x12, .y=0xc5, .sp=0x4a, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe673, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe673, .value=0xc0, .type=IO_READ},
        {.addr=0xe674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0036) {
    const struct CPU_State initial_cpu = {.pc=0x1cc2, .a=0xed, .x=0x09, .y=0xc8, .sp=0xd6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1cc3, .a=0xed, .x=0x09, .y=0xc8, .sp=0xd6, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1cc2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1cc2, .value=0xc0, .type=IO_READ},
        {.addr=0x1cc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0037) {
    const struct CPU_State initial_cpu = {.pc=0xc77c, .a=0xf7, .x=0xa6, .y=0xfc, .sp=0x59, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc77c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc77d, .a=0xf7, .x=0xa6, .y=0xfc, .sp=0x59, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xc77c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc77c, .value=0xc0, .type=IO_READ},
        {.addr=0xc77d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0038) {
    const struct CPU_State initial_cpu = {.pc=0x6f62, .a=0x5b, .x=0xfb, .y=0x31, .sp=0x0e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6f62, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6f63, .a=0x5b, .x=0xfb, .y=0x31, .sp=0x0e, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x6f62, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6f62, .value=0xc0, .type=IO_READ},
        {.addr=0x6f63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0039) {
    const struct CPU_State initial_cpu = {.pc=0x2c9e, .a=0xc8, .x=0x52, .y=0x76, .sp=0xfa, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2c9f, .a=0xc8, .x=0x52, .y=0x76, .sp=0xfa, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x2c9e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2c9e, .value=0xc0, .type=IO_READ},
        {.addr=0x2c9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003A) {
    const struct CPU_State initial_cpu = {.pc=0x44b8, .a=0x3b, .x=0xdd, .y=0xca, .sp=0xde, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x44b8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x44b9, .a=0x3b, .x=0xdd, .y=0xca, .sp=0xde, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x44b8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x44b8, .value=0xc0, .type=IO_READ},
        {.addr=0x44b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003B) {
    const struct CPU_State initial_cpu = {.pc=0x27f0, .a=0xaf, .x=0xca, .y=0xec, .sp=0xcf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x27f0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x27f1, .a=0xaf, .x=0xca, .y=0xec, .sp=0xcf, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x27f0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x27f0, .value=0xc0, .type=IO_READ},
        {.addr=0x27f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6260, .a=0x09, .x=0x47, .y=0x42, .sp=0xdc, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6260, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6261, .a=0x09, .x=0x47, .y=0x42, .sp=0xdc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6260, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6260, .value=0xc0, .type=IO_READ},
        {.addr=0x6261, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003D) {
    const struct CPU_State initial_cpu = {.pc=0xffb2, .a=0xb4, .x=0xee, .y=0xa6, .sp=0x76, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xffb2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xffb3, .a=0xb4, .x=0xee, .y=0xa6, .sp=0x76, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xffb2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xffb2, .value=0xc0, .type=IO_READ},
        {.addr=0xffb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003E) {
    const struct CPU_State initial_cpu = {.pc=0x8fb1, .a=0x5c, .x=0x00, .y=0x3f, .sp=0xd2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8fb2, .a=0x5c, .x=0x00, .y=0x3f, .sp=0xd2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x8fb1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8fb1, .value=0xc0, .type=IO_READ},
        {.addr=0x8fb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_003F) {
    const struct CPU_State initial_cpu = {.pc=0xa755, .a=0x71, .x=0x40, .y=0x18, .sp=0xf2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa755, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa756, .a=0x71, .x=0x40, .y=0x18, .sp=0xf2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa755, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa755, .value=0xc0, .type=IO_READ},
        {.addr=0xa756, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0040) {
    const struct CPU_State initial_cpu = {.pc=0xc8e7, .a=0xaa, .x=0x7c, .y=0x58, .sp=0x9d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc8e8, .a=0xaa, .x=0x7c, .y=0x58, .sp=0x9d, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xc8e7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc8e7, .value=0xc0, .type=IO_READ},
        {.addr=0xc8e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0041) {
    const struct CPU_State initial_cpu = {.pc=0xefb7, .a=0xa5, .x=0x9d, .y=0x31, .sp=0x91, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xefb7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xefb8, .a=0xa5, .x=0x9d, .y=0x31, .sp=0x91, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xefb7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xefb7, .value=0xc0, .type=IO_READ},
        {.addr=0xefb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0042) {
    const struct CPU_State initial_cpu = {.pc=0xda29, .a=0x17, .x=0x19, .y=0x55, .sp=0x27, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xda29, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xda2a, .a=0x17, .x=0x19, .y=0x55, .sp=0x27, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xda29, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xda29, .value=0xc0, .type=IO_READ},
        {.addr=0xda2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0043) {
    const struct CPU_State initial_cpu = {.pc=0x60ef, .a=0x98, .x=0x64, .y=0x5d, .sp=0xd9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x60ef, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x60f0, .a=0x98, .x=0x64, .y=0x5d, .sp=0xd9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x60ef, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x60ef, .value=0xc0, .type=IO_READ},
        {.addr=0x60f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0044) {
    const struct CPU_State initial_cpu = {.pc=0xb0a2, .a=0xea, .x=0xd2, .y=0xcf, .sp=0x1f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb0a3, .a=0xea, .x=0xd2, .y=0xcf, .sp=0x1f, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xb0a2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb0a2, .value=0xc0, .type=IO_READ},
        {.addr=0xb0a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0045) {
    const struct CPU_State initial_cpu = {.pc=0xb4ca, .a=0x9b, .x=0x41, .y=0x6e, .sp=0x88, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ca, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb4cb, .a=0x9b, .x=0x41, .y=0x6e, .sp=0x88, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb4ca, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb4ca, .value=0xc0, .type=IO_READ},
        {.addr=0xb4cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe333, .a=0x66, .x=0x95, .y=0xe0, .sp=0xb0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe333, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe334, .a=0x66, .x=0x95, .y=0xe0, .sp=0xb0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe333, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe333, .value=0xc0, .type=IO_READ},
        {.addr=0xe334, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x832b, .a=0xa8, .x=0x8c, .y=0x79, .sp=0x1d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x832b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x832c, .a=0xa8, .x=0x8c, .y=0x79, .sp=0x1d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x832b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x832b, .value=0xc0, .type=IO_READ},
        {.addr=0x832c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0048) {
    const struct CPU_State initial_cpu = {.pc=0x5e01, .a=0xb2, .x=0x6c, .y=0xbc, .sp=0xb2, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5e01, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e02, .a=0xb2, .x=0x6c, .y=0xbc, .sp=0xb2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5e01, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e01, .value=0xc0, .type=IO_READ},
        {.addr=0x5e02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0049) {
    const struct CPU_State initial_cpu = {.pc=0x1104, .a=0x41, .x=0x9e, .y=0x89, .sp=0xd0, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x1104, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1105, .a=0x41, .x=0x9e, .y=0x89, .sp=0xd0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1104, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1104, .value=0xc0, .type=IO_READ},
        {.addr=0x1105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004A) {
    const struct CPU_State initial_cpu = {.pc=0x626f, .a=0xd8, .x=0xe5, .y=0xe0, .sp=0xe3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x626f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6270, .a=0xd8, .x=0xe5, .y=0xe0, .sp=0xe3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x626f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x626f, .value=0xc0, .type=IO_READ},
        {.addr=0x6270, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004B) {
    const struct CPU_State initial_cpu = {.pc=0x6efa, .a=0x13, .x=0x17, .y=0xf5, .sp=0x68, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6efa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6efb, .a=0x13, .x=0x17, .y=0xf5, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6efa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6efa, .value=0xc0, .type=IO_READ},
        {.addr=0x6efb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004C) {
    const struct CPU_State initial_cpu = {.pc=0x9bd8, .a=0xfc, .x=0xa7, .y=0x32, .sp=0xd6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bd9, .a=0xfc, .x=0xa7, .y=0x32, .sp=0xd6, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x9bd8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bd8, .value=0xc0, .type=IO_READ},
        {.addr=0x9bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf80b, .a=0x86, .x=0xf2, .y=0x11, .sp=0x2b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf80b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf80c, .a=0x86, .x=0xf2, .y=0x11, .sp=0x2b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf80b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf80b, .value=0xc0, .type=IO_READ},
        {.addr=0xf80c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004E) {
    const struct CPU_State initial_cpu = {.pc=0x1d6c, .a=0xbb, .x=0xf4, .y=0xe7, .sp=0xc0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d6c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1d6d, .a=0xbb, .x=0xf4, .y=0xe7, .sp=0xc0, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x1d6c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1d6c, .value=0xc0, .type=IO_READ},
        {.addr=0x1d6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_004F) {
    const struct CPU_State initial_cpu = {.pc=0x4afb, .a=0xa6, .x=0x92, .y=0x3b, .sp=0xdf, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4afb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4afc, .a=0xa6, .x=0x92, .y=0x3b, .sp=0xdf, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x4afb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4afb, .value=0xc0, .type=IO_READ},
        {.addr=0x4afc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0050) {
    const struct CPU_State initial_cpu = {.pc=0xe975, .a=0x16, .x=0x8c, .y=0x08, .sp=0x68, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xe975, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe976, .a=0x16, .x=0x8c, .y=0x08, .sp=0x68, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xe975, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe975, .value=0xc0, .type=IO_READ},
        {.addr=0xe976, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0051) {
    const struct CPU_State initial_cpu = {.pc=0xfbd3, .a=0x28, .x=0x45, .y=0xd0, .sp=0xfc, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfbd4, .a=0x28, .x=0x45, .y=0xd0, .sp=0xfc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfbd3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfbd3, .value=0xc0, .type=IO_READ},
        {.addr=0xfbd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc4cc, .a=0xd8, .x=0x63, .y=0x09, .sp=0x8c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4cc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc4cd, .a=0xd8, .x=0x63, .y=0x09, .sp=0x8c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc4cc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc4cc, .value=0xc0, .type=IO_READ},
        {.addr=0xc4cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2f39, .a=0x32, .x=0xbb, .y=0xbf, .sp=0x4f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2f39, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2f3a, .a=0x32, .x=0xbb, .y=0xbf, .sp=0x4f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2f39, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2f39, .value=0xc0, .type=IO_READ},
        {.addr=0x2f3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0054) {
    const struct CPU_State initial_cpu = {.pc=0x649c, .a=0xf8, .x=0x4b, .y=0x15, .sp=0x77, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x649c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x649d, .a=0xf8, .x=0x4b, .y=0x15, .sp=0x77, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x649c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x649c, .value=0xc0, .type=IO_READ},
        {.addr=0x649d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0055) {
    const struct CPU_State initial_cpu = {.pc=0x439e, .a=0xad, .x=0x24, .y=0x56, .sp=0x70, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x439e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x439f, .a=0xad, .x=0x24, .y=0x56, .sp=0x70, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x439e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x439e, .value=0xc0, .type=IO_READ},
        {.addr=0x439f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0056) {
    const struct CPU_State initial_cpu = {.pc=0x4da8, .a=0x3f, .x=0xfc, .y=0x61, .sp=0x7f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4da8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4da9, .a=0x3f, .x=0xfc, .y=0x61, .sp=0x7f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4da8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4da8, .value=0xc0, .type=IO_READ},
        {.addr=0x4da9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0057) {
    const struct CPU_State initial_cpu = {.pc=0x5198, .a=0xa3, .x=0x00, .y=0x93, .sp=0x98, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5198, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5199, .a=0xa3, .x=0x00, .y=0x93, .sp=0x98, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5198, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5198, .value=0xc0, .type=IO_READ},
        {.addr=0x5199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0058) {
    const struct CPU_State initial_cpu = {.pc=0x58cc, .a=0x39, .x=0x09, .y=0x48, .sp=0x14, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x58cc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x58cd, .a=0x39, .x=0x09, .y=0x48, .sp=0x14, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x58cc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x58cc, .value=0xc0, .type=IO_READ},
        {.addr=0x58cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0059) {
    const struct CPU_State initial_cpu = {.pc=0x2ab7, .a=0x03, .x=0xfc, .y=0x29, .sp=0xc2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2ab8, .a=0x03, .x=0xfc, .y=0x29, .sp=0xc2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2ab7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2ab7, .value=0xc0, .type=IO_READ},
        {.addr=0x2ab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005A) {
    const struct CPU_State initial_cpu = {.pc=0x2ec1, .a=0xb4, .x=0x75, .y=0x96, .sp=0xfa, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2ec1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2ec2, .a=0xb4, .x=0x75, .y=0x96, .sp=0xfa, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2ec1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2ec1, .value=0xc0, .type=IO_READ},
        {.addr=0x2ec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005B) {
    const struct CPU_State initial_cpu = {.pc=0x5e44, .a=0x71, .x=0xfa, .y=0x99, .sp=0x58, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5e44, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e45, .a=0x71, .x=0xfa, .y=0x99, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5e44, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e44, .value=0xc0, .type=IO_READ},
        {.addr=0x5e45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005C) {
    const struct CPU_State initial_cpu = {.pc=0x03a5, .a=0xb9, .x=0xc5, .y=0x3d, .sp=0xc7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x03a5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x03a6, .a=0xb9, .x=0xc5, .y=0x3d, .sp=0xc7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x03a5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x03a5, .value=0xc0, .type=IO_READ},
        {.addr=0x03a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005D) {
    const struct CPU_State initial_cpu = {.pc=0xab04, .a=0x67, .x=0xc0, .y=0x52, .sp=0x78, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xab04, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xab05, .a=0x67, .x=0xc0, .y=0x52, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xab04, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xab04, .value=0xc0, .type=IO_READ},
        {.addr=0xab05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005E) {
    const struct CPU_State initial_cpu = {.pc=0x486d, .a=0xe6, .x=0x4a, .y=0x67, .sp=0x37, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x486d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x486e, .a=0xe6, .x=0x4a, .y=0x67, .sp=0x37, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x486d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x486d, .value=0xc0, .type=IO_READ},
        {.addr=0x486e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_005F) {
    const struct CPU_State initial_cpu = {.pc=0x36be, .a=0xd4, .x=0x2d, .y=0xfd, .sp=0xe9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x36be, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x36bf, .a=0xd4, .x=0x2d, .y=0xfd, .sp=0xe9, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x36be, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x36be, .value=0xc0, .type=IO_READ},
        {.addr=0x36bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0060) {
    const struct CPU_State initial_cpu = {.pc=0xc265, .a=0x30, .x=0x1f, .y=0x94, .sp=0xbd, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc265, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc266, .a=0x30, .x=0x1f, .y=0x94, .sp=0xbd, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xc265, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc265, .value=0xc0, .type=IO_READ},
        {.addr=0xc266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0061) {
    const struct CPU_State initial_cpu = {.pc=0xc121, .a=0x0c, .x=0xb6, .y=0x39, .sp=0x11, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xc121, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc122, .a=0x0c, .x=0xb6, .y=0x39, .sp=0x11, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xc121, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc121, .value=0xc0, .type=IO_READ},
        {.addr=0xc122, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0062) {
    const struct CPU_State initial_cpu = {.pc=0xb807, .a=0x5c, .x=0x9b, .y=0x7b, .sp=0x22, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb807, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb808, .a=0x5c, .x=0x9b, .y=0x7b, .sp=0x22, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xb807, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb807, .value=0xc0, .type=IO_READ},
        {.addr=0xb808, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x6f65, .a=0x0e, .x=0x5c, .y=0x23, .sp=0x4f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x6f65, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6f66, .a=0x0e, .x=0x5c, .y=0x23, .sp=0x4f, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x6f65, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6f65, .value=0xc0, .type=IO_READ},
        {.addr=0x6f66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0064) {
    const struct CPU_State initial_cpu = {.pc=0x3a63, .a=0xa2, .x=0x5f, .y=0x78, .sp=0xf6, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3a63, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a64, .a=0xa2, .x=0x5f, .y=0x78, .sp=0xf6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3a63, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a63, .value=0xc0, .type=IO_READ},
        {.addr=0x3a64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0065) {
    const struct CPU_State initial_cpu = {.pc=0x1489, .a=0xeb, .x=0x0a, .y=0x7b, .sp=0xec, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1489, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x148a, .a=0xeb, .x=0x0a, .y=0x7b, .sp=0xec, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1489, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1489, .value=0xc0, .type=IO_READ},
        {.addr=0x148a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0066) {
    const struct CPU_State initial_cpu = {.pc=0xe4ff, .a=0x55, .x=0xb3, .y=0xdb, .sp=0xfe, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe500, .a=0x55, .x=0xb3, .y=0xdb, .sp=0xfe, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe4ff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe4ff, .value=0xc0, .type=IO_READ},
        {.addr=0xe500, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0067) {
    const struct CPU_State initial_cpu = {.pc=0x3911, .a=0xdc, .x=0x63, .y=0x28, .sp=0x91, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3911, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3912, .a=0xdc, .x=0x63, .y=0x28, .sp=0x91, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3911, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3911, .value=0xc0, .type=IO_READ},
        {.addr=0x3912, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0068) {
    const struct CPU_State initial_cpu = {.pc=0xa119, .a=0x51, .x=0xc6, .y=0xe7, .sp=0x96, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa119, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa11a, .a=0x51, .x=0xc6, .y=0xe7, .sp=0x96, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xa119, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa119, .value=0xc0, .type=IO_READ},
        {.addr=0xa11a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0069) {
    const struct CPU_State initial_cpu = {.pc=0xf44b, .a=0xf2, .x=0xb9, .y=0xfd, .sp=0xcc, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf44b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf44c, .a=0xf2, .x=0xb9, .y=0xfd, .sp=0xcc, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xf44b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf44b, .value=0xc0, .type=IO_READ},
        {.addr=0xf44c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006A) {
    const struct CPU_State initial_cpu = {.pc=0xcde3, .a=0xf7, .x=0x5c, .y=0x26, .sp=0x24, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xcde3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcde4, .a=0xf7, .x=0x5c, .y=0x26, .sp=0x24, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xcde3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcde3, .value=0xc0, .type=IO_READ},
        {.addr=0xcde4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006B) {
    const struct CPU_State initial_cpu = {.pc=0xe2be, .a=0xbe, .x=0x89, .y=0xe9, .sp=0xf9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2be, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe2bf, .a=0xbe, .x=0x89, .y=0xe9, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe2be, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe2be, .value=0xc0, .type=IO_READ},
        {.addr=0xe2bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006C) {
    const struct CPU_State initial_cpu = {.pc=0xd52d, .a=0x81, .x=0xdf, .y=0xed, .sp=0x77, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd52d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd52e, .a=0x81, .x=0xdf, .y=0xed, .sp=0x77, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xd52d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd52d, .value=0xc0, .type=IO_READ},
        {.addr=0xd52e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x51bd, .a=0x42, .x=0xd2, .y=0x97, .sp=0x30, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x51bd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x51be, .a=0x42, .x=0xd2, .y=0x97, .sp=0x30, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x51bd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x51bd, .value=0xc0, .type=IO_READ},
        {.addr=0x51be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006E) {
    const struct CPU_State initial_cpu = {.pc=0x9cba, .a=0x27, .x=0xc4, .y=0x12, .sp=0x18, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9cba, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9cbb, .a=0x27, .x=0xc4, .y=0x12, .sp=0x18, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9cba, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9cba, .value=0xc0, .type=IO_READ},
        {.addr=0x9cbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_006F) {
    const struct CPU_State initial_cpu = {.pc=0x8d0f, .a=0x54, .x=0x73, .y=0xd8, .sp=0xf1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8d0f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8d10, .a=0x54, .x=0x73, .y=0xd8, .sp=0xf1, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x8d0f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8d0f, .value=0xc0, .type=IO_READ},
        {.addr=0x8d10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6b25, .a=0xaa, .x=0x38, .y=0xd9, .sp=0x9f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6b25, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6b26, .a=0xaa, .x=0x38, .y=0xd9, .sp=0x9f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6b25, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6b25, .value=0xc0, .type=IO_READ},
        {.addr=0x6b26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0071) {
    const struct CPU_State initial_cpu = {.pc=0xc6f0, .a=0x12, .x=0xab, .y=0x2b, .sp=0xb7, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc6f1, .a=0x12, .x=0xab, .y=0x2b, .sp=0xb7, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xc6f0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc6f0, .value=0xc0, .type=IO_READ},
        {.addr=0xc6f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0093, .a=0x1a, .x=0x23, .y=0x20, .sp=0x3d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0094, .a=0x1a, .x=0x23, .y=0x20, .sp=0x3d, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0093, .value=0xc0, .type=IO_READ},
        {.addr=0x0094, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb3b5, .a=0xa5, .x=0x96, .y=0x4d, .sp=0x26, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb3b5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb3b6, .a=0xa5, .x=0x96, .y=0x4d, .sp=0x26, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb3b5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb3b5, .value=0xc0, .type=IO_READ},
        {.addr=0xb3b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe935, .a=0x7c, .x=0x08, .y=0x9f, .sp=0x4d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe935, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe936, .a=0x7c, .x=0x08, .y=0x9f, .sp=0x4d, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xe935, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe935, .value=0xc0, .type=IO_READ},
        {.addr=0xe936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0075) {
    const struct CPU_State initial_cpu = {.pc=0xa9ef, .a=0x24, .x=0xe1, .y=0x4b, .sp=0x6b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ef, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa9f0, .a=0x24, .x=0xe1, .y=0x4b, .sp=0x6b, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xa9ef, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa9ef, .value=0xc0, .type=IO_READ},
        {.addr=0xa9f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0076) {
    const struct CPU_State initial_cpu = {.pc=0xd463, .a=0x88, .x=0xb7, .y=0xc2, .sp=0xe1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd463, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd464, .a=0x88, .x=0xb7, .y=0xc2, .sp=0xe1, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd463, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd463, .value=0xc0, .type=IO_READ},
        {.addr=0xd464, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0077) {
    const struct CPU_State initial_cpu = {.pc=0xde52, .a=0xf4, .x=0x09, .y=0x76, .sp=0x5b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xde52, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xde53, .a=0xf4, .x=0x09, .y=0x76, .sp=0x5b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xde52, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xde52, .value=0xc0, .type=IO_READ},
        {.addr=0xde53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0078) {
    const struct CPU_State initial_cpu = {.pc=0xc432, .a=0x88, .x=0x6f, .y=0x4c, .sp=0x1c, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc432, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc433, .a=0x88, .x=0x6f, .y=0x4c, .sp=0x1c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc432, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc432, .value=0xc0, .type=IO_READ},
        {.addr=0xc433, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0079) {
    const struct CPU_State initial_cpu = {.pc=0xd71f, .a=0xc4, .x=0x0b, .y=0x14, .sp=0x6c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd71f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd720, .a=0xc4, .x=0x0b, .y=0x14, .sp=0x6c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd71f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd71f, .value=0xc0, .type=IO_READ},
        {.addr=0xd720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007A) {
    const struct CPU_State initial_cpu = {.pc=0xa3a0, .a=0x20, .x=0x73, .y=0xc4, .sp=0x1e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa3a0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa3a1, .a=0x20, .x=0x73, .y=0xc4, .sp=0x1e, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xa3a0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa3a0, .value=0xc0, .type=IO_READ},
        {.addr=0xa3a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007B) {
    const struct CPU_State initial_cpu = {.pc=0xdfe3, .a=0x5f, .x=0x4f, .y=0x1a, .sp=0x30, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdfe4, .a=0x5f, .x=0x4f, .y=0x1a, .sp=0x30, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xdfe3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdfe3, .value=0xc0, .type=IO_READ},
        {.addr=0xdfe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007C) {
    const struct CPU_State initial_cpu = {.pc=0x0466, .a=0x3a, .x=0x3f, .y=0x64, .sp=0x44, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0466, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0467, .a=0x3a, .x=0x3f, .y=0x64, .sp=0x44, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0466, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0466, .value=0xc0, .type=IO_READ},
        {.addr=0x0467, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007D) {
    const struct CPU_State initial_cpu = {.pc=0x618d, .a=0xa9, .x=0x40, .y=0x4d, .sp=0x32, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x618d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x618e, .a=0xa9, .x=0x40, .y=0x4d, .sp=0x32, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x618d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x618d, .value=0xc0, .type=IO_READ},
        {.addr=0x618e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007E) {
    const struct CPU_State initial_cpu = {.pc=0x44a7, .a=0x19, .x=0xd0, .y=0xcd, .sp=0x46, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x44a7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x44a8, .a=0x19, .x=0xd0, .y=0xcd, .sp=0x46, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x44a7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x44a7, .value=0xc0, .type=IO_READ},
        {.addr=0x44a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x41ea, .a=0xb5, .x=0xe6, .y=0xad, .sp=0xec, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x41ea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x41eb, .a=0xb5, .x=0xe6, .y=0xad, .sp=0xec, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x41ea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x41ea, .value=0xc0, .type=IO_READ},
        {.addr=0x41eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0080) {
    const struct CPU_State initial_cpu = {.pc=0x1807, .a=0x31, .x=0xba, .y=0xf4, .sp=0x80, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1807, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1808, .a=0x31, .x=0xba, .y=0xf4, .sp=0x80, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x1807, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1807, .value=0xc0, .type=IO_READ},
        {.addr=0x1808, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0081) {
    const struct CPU_State initial_cpu = {.pc=0xf56f, .a=0xc5, .x=0x9f, .y=0xac, .sp=0xd3, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf56f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf570, .a=0xc5, .x=0x9f, .y=0xac, .sp=0xd3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf56f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf56f, .value=0xc0, .type=IO_READ},
        {.addr=0xf570, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x17a2, .a=0xa4, .x=0x03, .y=0x10, .sp=0x09, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x17a2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x17a3, .a=0xa4, .x=0x03, .y=0x10, .sp=0x09, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x17a2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x17a2, .value=0xc0, .type=IO_READ},
        {.addr=0x17a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0083) {
    const struct CPU_State initial_cpu = {.pc=0x03ec, .a=0x7d, .x=0xc0, .y=0xcb, .sp=0x81, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x03ec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x03ed, .a=0x7d, .x=0xc0, .y=0xcb, .sp=0x81, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x03ec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x03ec, .value=0xc0, .type=IO_READ},
        {.addr=0x03ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0084) {
    const struct CPU_State initial_cpu = {.pc=0x1861, .a=0x84, .x=0xcb, .y=0xb7, .sp=0x28, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1861, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1862, .a=0x84, .x=0xcb, .y=0xb7, .sp=0x28, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x1861, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1861, .value=0xc0, .type=IO_READ},
        {.addr=0x1862, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0085) {
    const struct CPU_State initial_cpu = {.pc=0xa3c5, .a=0xf4, .x=0x75, .y=0xbd, .sp=0xf9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa3c6, .a=0xf4, .x=0x75, .y=0xbd, .sp=0xf9, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xa3c5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa3c5, .value=0xc0, .type=IO_READ},
        {.addr=0xa3c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0086) {
    const struct CPU_State initial_cpu = {.pc=0x6e36, .a=0xa8, .x=0x03, .y=0xa7, .sp=0x0b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x6e36, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6e37, .a=0xa8, .x=0x03, .y=0xa7, .sp=0x0b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x6e36, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6e36, .value=0xc0, .type=IO_READ},
        {.addr=0x6e37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0087) {
    const struct CPU_State initial_cpu = {.pc=0x9a73, .a=0x7b, .x=0x38, .y=0x7f, .sp=0xd3, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9a73, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9a74, .a=0x7b, .x=0x38, .y=0x7f, .sp=0xd3, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9a73, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9a73, .value=0xc0, .type=IO_READ},
        {.addr=0x9a74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4ed8, .a=0x01, .x=0xdf, .y=0x3d, .sp=0x26, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4ed9, .a=0x01, .x=0xdf, .y=0x3d, .sp=0x26, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4ed8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4ed8, .value=0xc0, .type=IO_READ},
        {.addr=0x4ed9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe3e7, .a=0x41, .x=0x8f, .y=0x45, .sp=0xfc, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe3e8, .a=0x41, .x=0x8f, .y=0x45, .sp=0xfc, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xe3e7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe3e7, .value=0xc0, .type=IO_READ},
        {.addr=0xe3e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008A) {
    const struct CPU_State initial_cpu = {.pc=0x42c2, .a=0x23, .x=0x09, .y=0x46, .sp=0xcf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x42c2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x42c3, .a=0x23, .x=0x09, .y=0x46, .sp=0xcf, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x42c2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x42c2, .value=0xc0, .type=IO_READ},
        {.addr=0x42c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008B) {
    const struct CPU_State initial_cpu = {.pc=0xeb23, .a=0x32, .x=0xee, .y=0xca, .sp=0xd4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xeb23, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xeb24, .a=0x32, .x=0xee, .y=0xca, .sp=0xd4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xeb23, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xeb23, .value=0xc0, .type=IO_READ},
        {.addr=0xeb24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008C) {
    const struct CPU_State initial_cpu = {.pc=0x4d10, .a=0x47, .x=0xc0, .y=0x76, .sp=0xd3, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4d10, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4d11, .a=0x47, .x=0xc0, .y=0x76, .sp=0xd3, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x4d10, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4d10, .value=0xc0, .type=IO_READ},
        {.addr=0x4d11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3bdb, .a=0x71, .x=0x84, .y=0xd2, .sp=0x2b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3bdb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3bdc, .a=0x71, .x=0x84, .y=0xd2, .sp=0x2b, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x3bdb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3bdb, .value=0xc0, .type=IO_READ},
        {.addr=0x3bdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6298, .a=0x30, .x=0xbe, .y=0x5c, .sp=0x27, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6298, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6299, .a=0x30, .x=0xbe, .y=0x5c, .sp=0x27, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6298, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6298, .value=0xc0, .type=IO_READ},
        {.addr=0x6299, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_008F) {
    const struct CPU_State initial_cpu = {.pc=0x76be, .a=0xa7, .x=0x37, .y=0x0b, .sp=0x2c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x76be, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x76bf, .a=0xa7, .x=0x37, .y=0x0b, .sp=0x2c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x76be, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x76be, .value=0xc0, .type=IO_READ},
        {.addr=0x76bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0090) {
    const struct CPU_State initial_cpu = {.pc=0xae2e, .a=0x8c, .x=0x8e, .y=0x9d, .sp=0x06, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xae2e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xae2f, .a=0x8c, .x=0x8e, .y=0x9d, .sp=0x06, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xae2e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xae2e, .value=0xc0, .type=IO_READ},
        {.addr=0xae2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x8387, .a=0x55, .x=0x0d, .y=0x00, .sp=0x2a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8387, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8388, .a=0x55, .x=0x0d, .y=0x00, .sp=0x2a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8387, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8387, .value=0xc0, .type=IO_READ},
        {.addr=0x8388, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0092) {
    const struct CPU_State initial_cpu = {.pc=0xb3f4, .a=0x65, .x=0xb8, .y=0xec, .sp=0x2e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb3f5, .a=0x65, .x=0xb8, .y=0xec, .sp=0x2e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xb3f4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb3f4, .value=0xc0, .type=IO_READ},
        {.addr=0xb3f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0093) {
    const struct CPU_State initial_cpu = {.pc=0xd0f4, .a=0x96, .x=0xde, .y=0x2d, .sp=0xc8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd0f5, .a=0x96, .x=0xde, .y=0x2d, .sp=0xc8, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xd0f4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd0f4, .value=0xc0, .type=IO_READ},
        {.addr=0xd0f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8da0, .a=0xba, .x=0x2d, .y=0x56, .sp=0x42, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8da0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8da1, .a=0xba, .x=0x2d, .y=0x56, .sp=0x42, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8da0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8da0, .value=0xc0, .type=IO_READ},
        {.addr=0x8da1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0095) {
    const struct CPU_State initial_cpu = {.pc=0x20dc, .a=0xa3, .x=0x12, .y=0xc0, .sp=0x2d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x20dc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x20dd, .a=0xa3, .x=0x12, .y=0xc0, .sp=0x2d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x20dc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x20dc, .value=0xc0, .type=IO_READ},
        {.addr=0x20dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0096) {
    const struct CPU_State initial_cpu = {.pc=0x10c6, .a=0x59, .x=0x4a, .y=0x3d, .sp=0xb3, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x10c6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x10c7, .a=0x59, .x=0x4a, .y=0x3d, .sp=0xb3, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x10c6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x10c6, .value=0xc0, .type=IO_READ},
        {.addr=0x10c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0097) {
    const struct CPU_State initial_cpu = {.pc=0xd17f, .a=0xcd, .x=0x36, .y=0xa5, .sp=0xf9, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd17f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd180, .a=0xcd, .x=0x36, .y=0xa5, .sp=0xf9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd17f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd17f, .value=0xc0, .type=IO_READ},
        {.addr=0xd180, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0098) {
    const struct CPU_State initial_cpu = {.pc=0x7ffc, .a=0x46, .x=0x9b, .y=0x11, .sp=0x04, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7ffc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7ffd, .a=0x46, .x=0x9b, .y=0x11, .sp=0x04, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7ffc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7ffc, .value=0xc0, .type=IO_READ},
        {.addr=0x7ffd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0099) {
    const struct CPU_State initial_cpu = {.pc=0x74c3, .a=0x09, .x=0x56, .y=0xd9, .sp=0x02, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x74c3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x74c4, .a=0x09, .x=0x56, .y=0xd9, .sp=0x02, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x74c3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x74c3, .value=0xc0, .type=IO_READ},
        {.addr=0x74c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009A) {
    const struct CPU_State initial_cpu = {.pc=0xcc30, .a=0x5a, .x=0x13, .y=0xcb, .sp=0x85, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xcc30, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcc31, .a=0x5a, .x=0x13, .y=0xcb, .sp=0x85, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xcc30, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcc30, .value=0xc0, .type=IO_READ},
        {.addr=0xcc31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009B) {
    const struct CPU_State initial_cpu = {.pc=0x4c87, .a=0x57, .x=0x6e, .y=0x9d, .sp=0x81, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c87, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4c88, .a=0x57, .x=0x6e, .y=0x9d, .sp=0x81, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x4c87, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4c87, .value=0xc0, .type=IO_READ},
        {.addr=0x4c88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009C) {
    const struct CPU_State initial_cpu = {.pc=0xe184, .a=0x5c, .x=0xaf, .y=0x0c, .sp=0x12, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe184, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe185, .a=0x5c, .x=0xaf, .y=0x0c, .sp=0x12, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xe184, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe184, .value=0xc0, .type=IO_READ},
        {.addr=0xe185, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009D) {
    const struct CPU_State initial_cpu = {.pc=0x88b2, .a=0x50, .x=0x74, .y=0x76, .sp=0xe2, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x88b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x88b3, .a=0x50, .x=0x74, .y=0x76, .sp=0xe2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x88b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x88b2, .value=0xc0, .type=IO_READ},
        {.addr=0x88b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x5d9d, .a=0x54, .x=0xbc, .y=0x85, .sp=0x44, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5d9d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5d9e, .a=0x54, .x=0xbc, .y=0x85, .sp=0x44, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5d9d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5d9d, .value=0xc0, .type=IO_READ},
        {.addr=0x5d9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_009F) {
    const struct CPU_State initial_cpu = {.pc=0x7e06, .a=0x7b, .x=0xe2, .y=0x7c, .sp=0x5c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x7e06, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7e07, .a=0x7b, .x=0xe2, .y=0x7c, .sp=0x5c, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x7e06, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7e06, .value=0xc0, .type=IO_READ},
        {.addr=0x7e07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x32e6, .a=0xda, .x=0x11, .y=0x36, .sp=0x94, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x32e6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x32e7, .a=0xda, .x=0x11, .y=0x36, .sp=0x94, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x32e6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x32e6, .value=0xc0, .type=IO_READ},
        {.addr=0x32e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xd71f, .a=0x51, .x=0x5c, .y=0xc4, .sp=0x96, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd71f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd720, .a=0x51, .x=0x5c, .y=0xc4, .sp=0x96, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd71f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd71f, .value=0xc0, .type=IO_READ},
        {.addr=0xd720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xab05, .a=0xdd, .x=0xff, .y=0x0a, .sp=0x8d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xab05, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xab06, .a=0xdd, .x=0xff, .y=0x0a, .sp=0x8d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xab05, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xab05, .value=0xc0, .type=IO_READ},
        {.addr=0xab06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xef32, .a=0x3a, .x=0x11, .y=0x11, .sp=0xd3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xef32, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xef33, .a=0x3a, .x=0x11, .y=0x11, .sp=0xd3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xef32, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xef32, .value=0xc0, .type=IO_READ},
        {.addr=0xef33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x47f0, .a=0xd0, .x=0x68, .y=0xbe, .sp=0xd9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x47f0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x47f1, .a=0xd0, .x=0x68, .y=0xbe, .sp=0xd9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x47f0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x47f0, .value=0xc0, .type=IO_READ},
        {.addr=0x47f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2cff, .a=0xac, .x=0xd4, .y=0xb4, .sp=0xd0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2cff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2d00, .a=0xac, .x=0xd4, .y=0xb4, .sp=0xd0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2cff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2cff, .value=0xc0, .type=IO_READ},
        {.addr=0x2d00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xb7e1, .a=0x71, .x=0xb5, .y=0xbe, .sp=0xa4, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb7e2, .a=0x71, .x=0xb5, .y=0xbe, .sp=0xa4, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xb7e1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb7e1, .value=0xc0, .type=IO_READ},
        {.addr=0xb7e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x69ac, .a=0x36, .x=0xd5, .y=0xf3, .sp=0x76, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x69ac, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x69ad, .a=0x36, .x=0xd5, .y=0xf3, .sp=0x76, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x69ac, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x69ac, .value=0xc0, .type=IO_READ},
        {.addr=0x69ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xefe8, .a=0x6d, .x=0x0c, .y=0xc9, .sp=0x80, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xefe8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xefe9, .a=0x6d, .x=0x0c, .y=0xc9, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xefe8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xefe8, .value=0xc0, .type=IO_READ},
        {.addr=0xefe9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x1c95, .a=0x60, .x=0x55, .y=0x4c, .sp=0x1d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1c96, .a=0x60, .x=0x55, .y=0x4c, .sp=0x1d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1c95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1c95, .value=0xc0, .type=IO_READ},
        {.addr=0x1c96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x49ed, .a=0xa8, .x=0xc1, .y=0xa4, .sp=0x06, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x49ed, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x49ee, .a=0xa8, .x=0xc1, .y=0xa4, .sp=0x06, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x49ed, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x49ed, .value=0xc0, .type=IO_READ},
        {.addr=0x49ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xda66, .a=0x5a, .x=0x57, .y=0x46, .sp=0xf0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xda66, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xda67, .a=0x5a, .x=0x57, .y=0x46, .sp=0xf0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xda66, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xda66, .value=0xc0, .type=IO_READ},
        {.addr=0xda67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xc529, .a=0x0f, .x=0xaa, .y=0x1e, .sp=0xa7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc529, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc52a, .a=0x0f, .x=0xaa, .y=0x1e, .sp=0xa7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc529, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc529, .value=0xc0, .type=IO_READ},
        {.addr=0xc52a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x48a4, .a=0x3d, .x=0xac, .y=0x2a, .sp=0x62, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x48a4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x48a5, .a=0x3d, .x=0xac, .y=0x2a, .sp=0x62, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x48a4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x48a4, .value=0xc0, .type=IO_READ},
        {.addr=0x48a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x98f0, .a=0xfa, .x=0x3e, .y=0x43, .sp=0xb4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x98f0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x98f1, .a=0xfa, .x=0x3e, .y=0x43, .sp=0xb4, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x98f0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x98f0, .value=0xc0, .type=IO_READ},
        {.addr=0x98f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x3e58, .a=0x4f, .x=0xa4, .y=0x0b, .sp=0xa0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3e58, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3e59, .a=0x4f, .x=0xa4, .y=0x0b, .sp=0xa0, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3e58, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3e58, .value=0xc0, .type=IO_READ},
        {.addr=0x3e59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf000, .a=0x21, .x=0xec, .y=0xae, .sp=0xb6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf000, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf001, .a=0x21, .x=0xec, .y=0xae, .sp=0xb6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf000, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf000, .value=0xc0, .type=IO_READ},
        {.addr=0xf001, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xde48, .a=0x8e, .x=0xc0, .y=0x17, .sp=0x18, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xde48, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xde49, .a=0x8e, .x=0xc0, .y=0x17, .sp=0x18, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xde48, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xde48, .value=0xc0, .type=IO_READ},
        {.addr=0xde49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x5fc9, .a=0x2d, .x=0x6a, .y=0x7d, .sp=0x8b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5fca, .a=0x2d, .x=0x6a, .y=0x7d, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5fc9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5fc9, .value=0xc0, .type=IO_READ},
        {.addr=0x5fca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xfe8e, .a=0x49, .x=0xf1, .y=0x90, .sp=0x22, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfe8e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfe8f, .a=0x49, .x=0xf1, .y=0x90, .sp=0x22, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfe8e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfe8e, .value=0xc0, .type=IO_READ},
        {.addr=0xfe8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xa3f9, .a=0x16, .x=0x02, .y=0xb0, .sp=0x37, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa3fa, .a=0x16, .x=0x02, .y=0xb0, .sp=0x37, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xa3f9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa3f9, .value=0xc0, .type=IO_READ},
        {.addr=0xa3fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x1646, .a=0x24, .x=0x80, .y=0x6b, .sp=0xb8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1646, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1647, .a=0x24, .x=0x80, .y=0x6b, .sp=0xb8, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x1646, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1646, .value=0xc0, .type=IO_READ},
        {.addr=0x1647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xe80b, .a=0x39, .x=0x59, .y=0x78, .sp=0x7a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe80b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe80c, .a=0x39, .x=0x59, .y=0x78, .sp=0x7a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xe80b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe80b, .value=0xc0, .type=IO_READ},
        {.addr=0xe80c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9ee2, .a=0xf6, .x=0xea, .y=0x84, .sp=0xee, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9ee3, .a=0xf6, .x=0xea, .y=0x84, .sp=0xee, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x9ee2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9ee2, .value=0xc0, .type=IO_READ},
        {.addr=0x9ee3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x9f0a, .a=0x40, .x=0x91, .y=0x46, .sp=0xec, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9f0b, .a=0x40, .x=0x91, .y=0x46, .sp=0xec, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9f0a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9f0a, .value=0xc0, .type=IO_READ},
        {.addr=0x9f0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x5c96, .a=0x17, .x=0xb7, .y=0xeb, .sp=0xc2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5c96, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5c97, .a=0x17, .x=0xb7, .y=0xeb, .sp=0xc2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5c96, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5c96, .value=0xc0, .type=IO_READ},
        {.addr=0x5c97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x25b3, .a=0x1c, .x=0xe8, .y=0x06, .sp=0x74, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x25b3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x25b4, .a=0x1c, .x=0xe8, .y=0x06, .sp=0x74, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x25b3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x25b3, .value=0xc0, .type=IO_READ},
        {.addr=0x25b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x8133, .a=0x7a, .x=0x79, .y=0xa4, .sp=0x48, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8133, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8134, .a=0x7a, .x=0x79, .y=0xa4, .sp=0x48, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x8133, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8133, .value=0xc0, .type=IO_READ},
        {.addr=0x8134, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xb147, .a=0xc4, .x=0xed, .y=0x16, .sp=0x2e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb147, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb148, .a=0xc4, .x=0xed, .y=0x16, .sp=0x2e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb147, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb147, .value=0xc0, .type=IO_READ},
        {.addr=0xb148, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xa4e5, .a=0x0f, .x=0x15, .y=0x92, .sp=0xba, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa4e6, .a=0x0f, .x=0x15, .y=0x92, .sp=0xba, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa4e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa4e5, .value=0xc0, .type=IO_READ},
        {.addr=0xa4e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x770a, .a=0xf8, .x=0x9a, .y=0xde, .sp=0x81, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x770a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x770b, .a=0xf8, .x=0x9a, .y=0xde, .sp=0x81, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x770a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x770a, .value=0xc0, .type=IO_READ},
        {.addr=0x770b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x726f, .a=0x13, .x=0x6b, .y=0xaa, .sp=0xd2, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x726f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7270, .a=0x13, .x=0x6b, .y=0xaa, .sp=0xd2, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x726f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x726f, .value=0xc0, .type=IO_READ},
        {.addr=0x7270, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x5085, .a=0xa9, .x=0x9e, .y=0x1e, .sp=0x96, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5085, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5086, .a=0xa9, .x=0x9e, .y=0x1e, .sp=0x96, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x5085, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5085, .value=0xc0, .type=IO_READ},
        {.addr=0x5086, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x9cf7, .a=0xc3, .x=0xe4, .y=0x37, .sp=0xe6, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9cf8, .a=0xc3, .x=0xe4, .y=0x37, .sp=0xe6, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x9cf7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9cf7, .value=0xc0, .type=IO_READ},
        {.addr=0x9cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xc8c4, .a=0x5e, .x=0x7a, .y=0xa3, .sp=0x85, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc8c5, .a=0x5e, .x=0x7a, .y=0xa3, .sp=0x85, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xc8c4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc8c4, .value=0xc0, .type=IO_READ},
        {.addr=0xc8c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x9bf5, .a=0xec, .x=0x09, .y=0xd7, .sp=0xf6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bf6, .a=0xec, .x=0x09, .y=0xd7, .sp=0xf6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9bf5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bf5, .value=0xc0, .type=IO_READ},
        {.addr=0x9bf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x1821, .a=0x61, .x=0x77, .y=0x02, .sp=0x13, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1821, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1822, .a=0x61, .x=0x77, .y=0x02, .sp=0x13, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x1821, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1821, .value=0xc0, .type=IO_READ},
        {.addr=0x1822, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x5ecf, .a=0x32, .x=0x7c, .y=0x73, .sp=0x15, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ecf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5ed0, .a=0x32, .x=0x7c, .y=0x73, .sp=0x15, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x5ecf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5ecf, .value=0xc0, .type=IO_READ},
        {.addr=0x5ed0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x5b6c, .a=0x9b, .x=0x22, .y=0x16, .sp=0x5b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5b6c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5b6d, .a=0x9b, .x=0x22, .y=0x16, .sp=0x5b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x5b6c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5b6c, .value=0xc0, .type=IO_READ},
        {.addr=0x5b6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x852c, .a=0x2d, .x=0x65, .y=0x90, .sp=0x36, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x852c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x852d, .a=0x2d, .x=0x65, .y=0x90, .sp=0x36, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x852c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x852c, .value=0xc0, .type=IO_READ},
        {.addr=0x852d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb91c, .a=0x53, .x=0xd6, .y=0x9c, .sp=0x13, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb91c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb91d, .a=0x53, .x=0xd6, .y=0x9c, .sp=0x13, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xb91c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb91c, .value=0xc0, .type=IO_READ},
        {.addr=0xb91d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1a0a, .a=0x98, .x=0x6b, .y=0x8a, .sp=0xf7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1a0b, .a=0x98, .x=0x6b, .y=0x8a, .sp=0xf7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1a0a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1a0a, .value=0xc0, .type=IO_READ},
        {.addr=0x1a0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0e9f, .a=0x5c, .x=0xb6, .y=0x4a, .sp=0xe8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0e9f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0ea0, .a=0x5c, .x=0xb6, .y=0x4a, .sp=0xe8, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0e9f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0e9f, .value=0xc0, .type=IO_READ},
        {.addr=0x0ea0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3567, .a=0x6b, .x=0xbe, .y=0x74, .sp=0xe8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x3567, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3568, .a=0x6b, .x=0xbe, .y=0x74, .sp=0xe8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3567, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3567, .value=0xc0, .type=IO_READ},
        {.addr=0x3568, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x688c, .a=0x6e, .x=0x49, .y=0x37, .sp=0xc7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x688c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x688d, .a=0x6e, .x=0x49, .y=0x37, .sp=0xc7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x688c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x688c, .value=0xc0, .type=IO_READ},
        {.addr=0x688d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xb0a0, .a=0xc4, .x=0xeb, .y=0xf4, .sp=0xd6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb0a1, .a=0xc4, .x=0xeb, .y=0xf4, .sp=0xd6, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xb0a0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb0a0, .value=0xc0, .type=IO_READ},
        {.addr=0xb0a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x2d42, .a=0xbf, .x=0x89, .y=0x9c, .sp=0x20, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d42, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2d43, .a=0xbf, .x=0x89, .y=0x9c, .sp=0x20, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2d42, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2d42, .value=0xc0, .type=IO_READ},
        {.addr=0x2d43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x3e95, .a=0x3a, .x=0xd1, .y=0x0e, .sp=0x8f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3e95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3e96, .a=0x3a, .x=0xd1, .y=0x0e, .sp=0x8f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3e95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3e95, .value=0xc0, .type=IO_READ},
        {.addr=0x3e96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x6882, .a=0x74, .x=0xac, .y=0x00, .sp=0xc3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6882, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6883, .a=0x74, .x=0xac, .y=0x00, .sp=0xc3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6882, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6882, .value=0xc0, .type=IO_READ},
        {.addr=0x6883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x7c05, .a=0xe7, .x=0x93, .y=0xb7, .sp=0x3e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c05, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7c06, .a=0xe7, .x=0x93, .y=0xb7, .sp=0x3e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7c05, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7c05, .value=0xc0, .type=IO_READ},
        {.addr=0x7c06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x4701, .a=0xd6, .x=0x26, .y=0x2f, .sp=0xd7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4701, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4702, .a=0xd6, .x=0x26, .y=0x2f, .sp=0xd7, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4701, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4701, .value=0xc0, .type=IO_READ},
        {.addr=0x4702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x4894, .a=0x1b, .x=0x8b, .y=0x41, .sp=0x9f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4894, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4895, .a=0x1b, .x=0x8b, .y=0x41, .sp=0x9f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4894, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4894, .value=0xc0, .type=IO_READ},
        {.addr=0x4895, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x997d, .a=0x07, .x=0x74, .y=0xa3, .sp=0xfc, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x997d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x997e, .a=0x07, .x=0x74, .y=0xa3, .sp=0xfc, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x997d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x997d, .value=0xc0, .type=IO_READ},
        {.addr=0x997e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x0753, .a=0x5b, .x=0xa3, .y=0x8d, .sp=0x14, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0753, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0754, .a=0x5b, .x=0xa3, .y=0x8d, .sp=0x14, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0753, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0753, .value=0xc0, .type=IO_READ},
        {.addr=0x0754, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xd1d2, .a=0x76, .x=0xeb, .y=0xfe, .sp=0x20, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd1d2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd1d3, .a=0x76, .x=0xeb, .y=0xfe, .sp=0x20, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd1d2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd1d2, .value=0xc0, .type=IO_READ},
        {.addr=0xd1d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x6c3d, .a=0x9f, .x=0xd5, .y=0x2b, .sp=0xdb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x6c3d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6c3e, .a=0x9f, .x=0xd5, .y=0x2b, .sp=0xdb, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x6c3d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6c3d, .value=0xc0, .type=IO_READ},
        {.addr=0x6c3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x7358, .a=0xd2, .x=0x02, .y=0x7a, .sp=0x86, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x7358, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7359, .a=0xd2, .x=0x02, .y=0x7a, .sp=0x86, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7358, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7358, .value=0xc0, .type=IO_READ},
        {.addr=0x7359, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x388b, .a=0xf7, .x=0xf8, .y=0xf0, .sp=0x93, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x388b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x388c, .a=0xf7, .x=0xf8, .y=0xf0, .sp=0x93, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x388b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x388b, .value=0xc0, .type=IO_READ},
        {.addr=0x388c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7522, .a=0x2d, .x=0x48, .y=0x0f, .sp=0x32, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7522, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7523, .a=0x2d, .x=0x48, .y=0x0f, .sp=0x32, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7522, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7522, .value=0xc0, .type=IO_READ},
        {.addr=0x7523, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x53b0, .a=0x5f, .x=0x15, .y=0xdc, .sp=0x1c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x53b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x53b1, .a=0x5f, .x=0x15, .y=0xdc, .sp=0x1c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x53b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x53b0, .value=0xc0, .type=IO_READ},
        {.addr=0x53b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x9142, .a=0x8a, .x=0x6b, .y=0x71, .sp=0x3d, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9142, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0x8a, .x=0x6b, .y=0x71, .sp=0x3d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x9142, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9142, .value=0xc0, .type=IO_READ},
        {.addr=0x9143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xee42, .a=0x3d, .x=0x4f, .y=0xfb, .sp=0x29, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xee42, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xee43, .a=0x3d, .x=0x4f, .y=0xfb, .sp=0x29, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xee42, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xee42, .value=0xc0, .type=IO_READ},
        {.addr=0xee43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x18b5, .a=0xbd, .x=0xef, .y=0x2a, .sp=0xd8, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x18b5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x18b6, .a=0xbd, .x=0xef, .y=0x2a, .sp=0xd8, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x18b5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x18b5, .value=0xc0, .type=IO_READ},
        {.addr=0x18b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xa442, .a=0x4c, .x=0xc6, .y=0xc9, .sp=0x62, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa442, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa443, .a=0x4c, .x=0xc6, .y=0xc9, .sp=0x62, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa442, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa442, .value=0xc0, .type=IO_READ},
        {.addr=0xa443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x949e, .a=0x0b, .x=0x25, .y=0x52, .sp=0xab, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x949e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x949f, .a=0x0b, .x=0x25, .y=0x52, .sp=0xab, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x949e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x949e, .value=0xc0, .type=IO_READ},
        {.addr=0x949f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x34bb, .a=0x20, .x=0xdb, .y=0x22, .sp=0xc8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x34bb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x34bc, .a=0x20, .x=0xdb, .y=0x22, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x34bb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x34bb, .value=0xc0, .type=IO_READ},
        {.addr=0x34bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x36c7, .a=0x1c, .x=0x55, .y=0x08, .sp=0x46, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x36c7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x36c8, .a=0x1c, .x=0x55, .y=0x08, .sp=0x46, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x36c7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x36c7, .value=0xc0, .type=IO_READ},
        {.addr=0x36c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x319a, .a=0xc1, .x=0x15, .y=0x2d, .sp=0xca, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x319a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x319b, .a=0xc1, .x=0x15, .y=0x2d, .sp=0xca, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x319a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x319a, .value=0xc0, .type=IO_READ},
        {.addr=0x319b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xff11, .a=0xa9, .x=0xa0, .y=0x5b, .sp=0x55, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xff11, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xff12, .a=0xa9, .x=0xa0, .y=0x5b, .sp=0x55, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xff11, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xff11, .value=0xc0, .type=IO_READ},
        {.addr=0xff12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xde22, .a=0xf6, .x=0xec, .y=0x9c, .sp=0xd7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xde22, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xde23, .a=0xf6, .x=0xec, .y=0x9c, .sp=0xd7, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xde22, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xde22, .value=0xc0, .type=IO_READ},
        {.addr=0xde23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x549a, .a=0xff, .x=0x1f, .y=0x97, .sp=0xd0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x549a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x549b, .a=0xff, .x=0x1f, .y=0x97, .sp=0xd0, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x549a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x549a, .value=0xc0, .type=IO_READ},
        {.addr=0x549b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa366, .a=0x82, .x=0x37, .y=0xfe, .sp=0x82, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa366, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa367, .a=0x82, .x=0x37, .y=0xfe, .sp=0x82, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xa366, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa366, .value=0xc0, .type=IO_READ},
        {.addr=0xa367, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x6cae, .a=0x00, .x=0x02, .y=0xb3, .sp=0x2e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6cae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6caf, .a=0x00, .x=0x02, .y=0xb3, .sp=0x2e, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x6cae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6cae, .value=0xc0, .type=IO_READ},
        {.addr=0x6caf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x947c, .a=0xdf, .x=0x6f, .y=0xf8, .sp=0xfa, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x947c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x947d, .a=0xdf, .x=0x6f, .y=0xf8, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x947c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x947c, .value=0xc0, .type=IO_READ},
        {.addr=0x947d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x6b0f, .a=0xef, .x=0x86, .y=0x83, .sp=0x47, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6b0f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6b10, .a=0xef, .x=0x86, .y=0x83, .sp=0x47, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6b0f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6b0f, .value=0xc0, .type=IO_READ},
        {.addr=0x6b10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xc345, .a=0xdb, .x=0xfc, .y=0x4c, .sp=0x9e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc345, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc346, .a=0xdb, .x=0xfc, .y=0x4c, .sp=0x9e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc345, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc345, .value=0xc0, .type=IO_READ},
        {.addr=0xc346, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xed89, .a=0x7d, .x=0xaf, .y=0x29, .sp=0x51, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xed89, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xed8a, .a=0x7d, .x=0xaf, .y=0x29, .sp=0x51, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xed89, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xed89, .value=0xc0, .type=IO_READ},
        {.addr=0xed8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x7010, .a=0x18, .x=0xf6, .y=0x39, .sp=0x40, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x7010, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7011, .a=0x18, .x=0xf6, .y=0x39, .sp=0x40, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x7010, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7010, .value=0xc0, .type=IO_READ},
        {.addr=0x7011, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xa51c, .a=0xd6, .x=0x1d, .y=0xff, .sp=0x66, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa51c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa51d, .a=0xd6, .x=0x1d, .y=0xff, .sp=0x66, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xa51c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa51c, .value=0xc0, .type=IO_READ},
        {.addr=0xa51d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xce19, .a=0x31, .x=0xff, .y=0x55, .sp=0xa9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xce19, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xce1a, .a=0x31, .x=0xff, .y=0x55, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xce19, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xce19, .value=0xc0, .type=IO_READ},
        {.addr=0xce1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x3a9e, .a=0x88, .x=0x87, .y=0x50, .sp=0xf9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3a9e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a9f, .a=0x88, .x=0x87, .y=0x50, .sp=0xf9, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x3a9e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a9e, .value=0xc0, .type=IO_READ},
        {.addr=0x3a9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xa3f7, .a=0x5e, .x=0x96, .y=0x3f, .sp=0xf5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa3f8, .a=0x5e, .x=0x96, .y=0x3f, .sp=0xf5, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xa3f7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa3f7, .value=0xc0, .type=IO_READ},
        {.addr=0xa3f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x1733, .a=0x99, .x=0x23, .y=0xc2, .sp=0x4b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1733, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1734, .a=0x99, .x=0x23, .y=0xc2, .sp=0x4b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1733, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1733, .value=0xc0, .type=IO_READ},
        {.addr=0x1734, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x72b0, .a=0x91, .x=0xd1, .y=0xe6, .sp=0xc6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x72b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x72b1, .a=0x91, .x=0xd1, .y=0xe6, .sp=0xc6, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x72b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x72b0, .value=0xc0, .type=IO_READ},
        {.addr=0x72b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3bb7, .a=0xbe, .x=0xed, .y=0xe9, .sp=0x78, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3bb8, .a=0xbe, .x=0xed, .y=0xe9, .sp=0x78, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3bb7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3bb7, .value=0xc0, .type=IO_READ},
        {.addr=0x3bb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xec72, .a=0x47, .x=0x62, .y=0xa3, .sp=0x71, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xec72, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xec73, .a=0x47, .x=0x62, .y=0xa3, .sp=0x71, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xec72, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xec72, .value=0xc0, .type=IO_READ},
        {.addr=0xec73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0b2b, .a=0x27, .x=0xaf, .y=0xe2, .sp=0x84, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0b2b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0b2c, .a=0x27, .x=0xaf, .y=0xe2, .sp=0x84, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0b2b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0b2b, .value=0xc0, .type=IO_READ},
        {.addr=0x0b2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x2cd9, .a=0xfd, .x=0xbd, .y=0x57, .sp=0xf8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2cda, .a=0xfd, .x=0xbd, .y=0x57, .sp=0xf8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x2cd9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2cd9, .value=0xc0, .type=IO_READ},
        {.addr=0x2cda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2a6d, .a=0xf9, .x=0xbb, .y=0xf9, .sp=0x4c, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2a6d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2a6e, .a=0xf9, .x=0xbb, .y=0xf9, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2a6d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2a6d, .value=0xc0, .type=IO_READ},
        {.addr=0x2a6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x9165, .a=0x22, .x=0x1b, .y=0xa9, .sp=0xcd, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x9165, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9166, .a=0x22, .x=0x1b, .y=0xa9, .sp=0xcd, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9165, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9165, .value=0xc0, .type=IO_READ},
        {.addr=0x9166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x5633, .a=0x7c, .x=0x60, .y=0xdd, .sp=0x41, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5633, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5634, .a=0x7c, .x=0x60, .y=0xdd, .sp=0x41, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x5633, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5633, .value=0xc0, .type=IO_READ},
        {.addr=0x5634, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x5a40, .a=0xc2, .x=0x87, .y=0x02, .sp=0xd8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x5a40, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5a41, .a=0xc2, .x=0x87, .y=0x02, .sp=0xd8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5a40, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5a40, .value=0xc0, .type=IO_READ},
        {.addr=0x5a41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xf607, .a=0x74, .x=0x07, .y=0x8e, .sp=0x0d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf607, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf608, .a=0x74, .x=0x07, .y=0x8e, .sp=0x0d, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xf607, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf607, .value=0xc0, .type=IO_READ},
        {.addr=0xf608, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xef48, .a=0xdd, .x=0x46, .y=0x0d, .sp=0xec, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xef48, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xef49, .a=0xdd, .x=0x46, .y=0x0d, .sp=0xec, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xef48, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xef48, .value=0xc0, .type=IO_READ},
        {.addr=0xef49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x5238, .a=0x59, .x=0xbd, .y=0x67, .sp=0xfd, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5238, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5239, .a=0x59, .x=0xbd, .y=0x67, .sp=0xfd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5238, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5238, .value=0xc0, .type=IO_READ},
        {.addr=0x5239, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xe6b4, .a=0x39, .x=0xab, .y=0x2d, .sp=0x72, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe6b4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe6b5, .a=0x39, .x=0xab, .y=0x2d, .sp=0x72, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe6b4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe6b4, .value=0xc0, .type=IO_READ},
        {.addr=0xe6b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0100) {
    const struct CPU_State initial_cpu = {.pc=0xe01c, .a=0x4b, .x=0x18, .y=0xb0, .sp=0x13, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe01c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe01d, .a=0x4b, .x=0x18, .y=0xb0, .sp=0x13, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xe01c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe01c, .value=0xc0, .type=IO_READ},
        {.addr=0xe01d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0101) {
    const struct CPU_State initial_cpu = {.pc=0xe60b, .a=0xee, .x=0x41, .y=0x04, .sp=0xfa, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe60b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe60c, .a=0xee, .x=0x41, .y=0x04, .sp=0xfa, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xe60b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe60b, .value=0xc0, .type=IO_READ},
        {.addr=0xe60c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0102) {
    const struct CPU_State initial_cpu = {.pc=0xe008, .a=0x54, .x=0x4a, .y=0x3a, .sp=0x6f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe008, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe009, .a=0x54, .x=0x4a, .y=0x3a, .sp=0x6f, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe008, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe008, .value=0xc0, .type=IO_READ},
        {.addr=0xe009, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x96ac, .a=0x6b, .x=0x52, .y=0xdd, .sp=0x9d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x96ac, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x96ad, .a=0x6b, .x=0x52, .y=0xdd, .sp=0x9d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x96ac, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x96ac, .value=0xc0, .type=IO_READ},
        {.addr=0x96ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0104) {
    const struct CPU_State initial_cpu = {.pc=0x779d, .a=0xb6, .x=0xa5, .y=0x69, .sp=0x41, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x779d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x779e, .a=0xb6, .x=0xa5, .y=0x69, .sp=0x41, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x779d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x779d, .value=0xc0, .type=IO_READ},
        {.addr=0x779e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0105) {
    const struct CPU_State initial_cpu = {.pc=0x4ec7, .a=0x6e, .x=0x90, .y=0x57, .sp=0x02, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4ec8, .a=0x6e, .x=0x90, .y=0x57, .sp=0x02, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x4ec7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4ec7, .value=0xc0, .type=IO_READ},
        {.addr=0x4ec8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0106) {
    const struct CPU_State initial_cpu = {.pc=0x049e, .a=0x32, .x=0x5f, .y=0x22, .sp=0x80, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x049e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x049f, .a=0x32, .x=0x5f, .y=0x22, .sp=0x80, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x049e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x049e, .value=0xc0, .type=IO_READ},
        {.addr=0x049f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0107) {
    const struct CPU_State initial_cpu = {.pc=0xfffd, .a=0xe7, .x=0xc3, .y=0x16, .sp=0x6b, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xfffd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfffe, .a=0xe7, .x=0xc3, .y=0x16, .sp=0x6b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xfffd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfffd, .value=0xc0, .type=IO_READ},
        {.addr=0xfffe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0108) {
    const struct CPU_State initial_cpu = {.pc=0x0664, .a=0x70, .x=0x58, .y=0x0a, .sp=0x4e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0664, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0665, .a=0x70, .x=0x58, .y=0x0a, .sp=0x4e, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0664, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0664, .value=0xc0, .type=IO_READ},
        {.addr=0x0665, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa31b, .a=0x09, .x=0xdc, .y=0x2f, .sp=0x41, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa31b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa31c, .a=0x09, .x=0xdc, .y=0x2f, .sp=0x41, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa31b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa31b, .value=0xc0, .type=IO_READ},
        {.addr=0xa31c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010A) {
    const struct CPU_State initial_cpu = {.pc=0xc60f, .a=0xfd, .x=0x98, .y=0x43, .sp=0x63, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc60f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc610, .a=0xfd, .x=0x98, .y=0x43, .sp=0x63, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc60f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc60f, .value=0xc0, .type=IO_READ},
        {.addr=0xc610, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010B) {
    const struct CPU_State initial_cpu = {.pc=0xd9a3, .a=0xc7, .x=0x82, .y=0xb6, .sp=0x07, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd9a4, .a=0xc7, .x=0x82, .y=0xb6, .sp=0x07, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xd9a3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd9a3, .value=0xc0, .type=IO_READ},
        {.addr=0xd9a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010C) {
    const struct CPU_State initial_cpu = {.pc=0x7270, .a=0x3e, .x=0x33, .y=0x8b, .sp=0xad, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x7270, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7271, .a=0x3e, .x=0x33, .y=0x8b, .sp=0xad, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7270, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7270, .value=0xc0, .type=IO_READ},
        {.addr=0x7271, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010D) {
    const struct CPU_State initial_cpu = {.pc=0x1115, .a=0xe0, .x=0x49, .y=0x44, .sp=0x59, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x1115, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1116, .a=0xe0, .x=0x49, .y=0x44, .sp=0x59, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1115, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1115, .value=0xc0, .type=IO_READ},
        {.addr=0x1116, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010E) {
    const struct CPU_State initial_cpu = {.pc=0x7d4a, .a=0x9c, .x=0x8f, .y=0x5f, .sp=0x54, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7d4a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d4b, .a=0x9c, .x=0x8f, .y=0x5f, .sp=0x54, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7d4a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d4a, .value=0xc0, .type=IO_READ},
        {.addr=0x7d4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_010F) {
    const struct CPU_State initial_cpu = {.pc=0x777d, .a=0x7a, .x=0x24, .y=0x6b, .sp=0x2f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x777d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x777e, .a=0x7a, .x=0x24, .y=0x6b, .sp=0x2f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x777d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x777d, .value=0xc0, .type=IO_READ},
        {.addr=0x777e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0110) {
    const struct CPU_State initial_cpu = {.pc=0x202b, .a=0x43, .x=0x62, .y=0x40, .sp=0x60, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x202b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x202c, .a=0x43, .x=0x62, .y=0x40, .sp=0x60, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x202b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x202b, .value=0xc0, .type=IO_READ},
        {.addr=0x202c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0111) {
    const struct CPU_State initial_cpu = {.pc=0x04f0, .a=0xae, .x=0x0c, .y=0xf7, .sp=0x54, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x04f0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x04f1, .a=0xae, .x=0x0c, .y=0xf7, .sp=0x54, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x04f0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x04f0, .value=0xc0, .type=IO_READ},
        {.addr=0x04f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x82b7, .a=0xc8, .x=0x08, .y=0xcb, .sp=0x01, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x82b7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x82b8, .a=0xc8, .x=0x08, .y=0xcb, .sp=0x01, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x82b7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x82b7, .value=0xc0, .type=IO_READ},
        {.addr=0x82b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa5d8, .a=0xa2, .x=0xe1, .y=0x9e, .sp=0x01, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa5d9, .a=0xa2, .x=0xe1, .y=0x9e, .sp=0x01, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xa5d8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa5d8, .value=0xc0, .type=IO_READ},
        {.addr=0xa5d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0114) {
    const struct CPU_State initial_cpu = {.pc=0x4bfa, .a=0xcc, .x=0x8e, .y=0xb9, .sp=0x78, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4bfb, .a=0xcc, .x=0x8e, .y=0xb9, .sp=0x78, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4bfa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4bfa, .value=0xc0, .type=IO_READ},
        {.addr=0x4bfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0115) {
    const struct CPU_State initial_cpu = {.pc=0x5c58, .a=0x9d, .x=0xb1, .y=0x9b, .sp=0xee, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5c58, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5c59, .a=0x9d, .x=0xb1, .y=0x9b, .sp=0xee, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5c58, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5c58, .value=0xc0, .type=IO_READ},
        {.addr=0x5c59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0116) {
    const struct CPU_State initial_cpu = {.pc=0xf3e8, .a=0xa6, .x=0xf2, .y=0x47, .sp=0xcf, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf3e9, .a=0xa6, .x=0xf2, .y=0x47, .sp=0xcf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf3e8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf3e8, .value=0xc0, .type=IO_READ},
        {.addr=0xf3e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0117) {
    const struct CPU_State initial_cpu = {.pc=0x9dff, .a=0x42, .x=0x92, .y=0x24, .sp=0xff, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x9dff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9e00, .a=0x42, .x=0x92, .y=0x24, .sp=0xff, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x9dff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9dff, .value=0xc0, .type=IO_READ},
        {.addr=0x9e00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0118) {
    const struct CPU_State initial_cpu = {.pc=0x4f1c, .a=0x84, .x=0xe4, .y=0x1f, .sp=0x2c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4f1d, .a=0x84, .x=0xe4, .y=0x1f, .sp=0x2c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4f1c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4f1c, .value=0xc0, .type=IO_READ},
        {.addr=0x4f1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0119) {
    const struct CPU_State initial_cpu = {.pc=0x9d35, .a=0x52, .x=0x77, .y=0x57, .sp=0xad, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9d35, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9d36, .a=0x52, .x=0x77, .y=0x57, .sp=0xad, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9d35, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9d35, .value=0xc0, .type=IO_READ},
        {.addr=0x9d36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011A) {
    const struct CPU_State initial_cpu = {.pc=0x1b67, .a=0xe1, .x=0x99, .y=0x6e, .sp=0xec, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x1b67, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1b68, .a=0xe1, .x=0x99, .y=0x6e, .sp=0xec, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x1b67, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1b67, .value=0xc0, .type=IO_READ},
        {.addr=0x1b68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011B) {
    const struct CPU_State initial_cpu = {.pc=0x3723, .a=0xc5, .x=0x19, .y=0xab, .sp=0x60, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3723, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3724, .a=0xc5, .x=0x19, .y=0xab, .sp=0x60, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3723, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3723, .value=0xc0, .type=IO_READ},
        {.addr=0x3724, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011C) {
    const struct CPU_State initial_cpu = {.pc=0x63c9, .a=0x43, .x=0xc9, .y=0x1b, .sp=0x12, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x63c9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x63ca, .a=0x43, .x=0xc9, .y=0x1b, .sp=0x12, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x63c9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x63c9, .value=0xc0, .type=IO_READ},
        {.addr=0x63ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011D) {
    const struct CPU_State initial_cpu = {.pc=0x2438, .a=0x74, .x=0x1e, .y=0xb5, .sp=0xa3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2438, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2439, .a=0x74, .x=0x1e, .y=0xb5, .sp=0xa3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2438, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2438, .value=0xc0, .type=IO_READ},
        {.addr=0x2439, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011E) {
    const struct CPU_State initial_cpu = {.pc=0xcc78, .a=0xd9, .x=0xe1, .y=0x5b, .sp=0xba, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc78, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcc79, .a=0xd9, .x=0xe1, .y=0x5b, .sp=0xba, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcc78, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcc78, .value=0xc0, .type=IO_READ},
        {.addr=0xcc79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7a60, .a=0xba, .x=0x49, .y=0xf4, .sp=0x67, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7a60, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7a61, .a=0xba, .x=0x49, .y=0xf4, .sp=0x67, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7a60, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7a60, .value=0xc0, .type=IO_READ},
        {.addr=0x7a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0120) {
    const struct CPU_State initial_cpu = {.pc=0x3322, .a=0x01, .x=0xd7, .y=0xef, .sp=0x20, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3322, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3323, .a=0x01, .x=0xd7, .y=0xef, .sp=0x20, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3322, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3322, .value=0xc0, .type=IO_READ},
        {.addr=0x3323, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0121) {
    const struct CPU_State initial_cpu = {.pc=0xee3f, .a=0x9c, .x=0x14, .y=0x4a, .sp=0xbb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xee3f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xee40, .a=0x9c, .x=0x14, .y=0x4a, .sp=0xbb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xee3f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xee3f, .value=0xc0, .type=IO_READ},
        {.addr=0xee40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0122) {
    const struct CPU_State initial_cpu = {.pc=0x71b9, .a=0xbc, .x=0xc1, .y=0xbb, .sp=0x0b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x71b9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x71ba, .a=0xbc, .x=0xc1, .y=0xbb, .sp=0x0b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x71b9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x71b9, .value=0xc0, .type=IO_READ},
        {.addr=0x71ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0123) {
    const struct CPU_State initial_cpu = {.pc=0xd8c8, .a=0xe1, .x=0x10, .y=0xd6, .sp=0xab, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd8c9, .a=0xe1, .x=0x10, .y=0xd6, .sp=0xab, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd8c8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd8c8, .value=0xc0, .type=IO_READ},
        {.addr=0xd8c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0124) {
    const struct CPU_State initial_cpu = {.pc=0x62f9, .a=0x16, .x=0x2c, .y=0xb3, .sp=0x32, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x62f9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x62fa, .a=0x16, .x=0x2c, .y=0xb3, .sp=0x32, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x62f9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x62f9, .value=0xc0, .type=IO_READ},
        {.addr=0x62fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0125) {
    const struct CPU_State initial_cpu = {.pc=0xfde7, .a=0x00, .x=0x22, .y=0x1a, .sp=0x72, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xfde7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfde8, .a=0x00, .x=0x22, .y=0x1a, .sp=0x72, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xfde7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfde7, .value=0xc0, .type=IO_READ},
        {.addr=0xfde8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0126) {
    const struct CPU_State initial_cpu = {.pc=0x25a4, .a=0x9e, .x=0xe3, .y=0x3a, .sp=0x0f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x25a4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x25a5, .a=0x9e, .x=0xe3, .y=0x3a, .sp=0x0f, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x25a4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x25a4, .value=0xc0, .type=IO_READ},
        {.addr=0x25a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9ff3, .a=0x3f, .x=0x5d, .y=0xb5, .sp=0x7c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9ff3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9ff4, .a=0x3f, .x=0x5d, .y=0xb5, .sp=0x7c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9ff3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9ff3, .value=0xc0, .type=IO_READ},
        {.addr=0x9ff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0128) {
    const struct CPU_State initial_cpu = {.pc=0x6889, .a=0x69, .x=0xd2, .y=0xdb, .sp=0x16, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6889, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x688a, .a=0x69, .x=0xd2, .y=0xdb, .sp=0x16, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6889, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6889, .value=0xc0, .type=IO_READ},
        {.addr=0x688a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0129) {
    const struct CPU_State initial_cpu = {.pc=0xb661, .a=0xb5, .x=0xc5, .y=0x39, .sp=0xa1, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb661, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb662, .a=0xb5, .x=0xc5, .y=0x39, .sp=0xa1, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xb661, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb661, .value=0xc0, .type=IO_READ},
        {.addr=0xb662, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012A) {
    const struct CPU_State initial_cpu = {.pc=0x5d21, .a=0xdb, .x=0xc3, .y=0xb2, .sp=0x95, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5d21, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5d22, .a=0xdb, .x=0xc3, .y=0xb2, .sp=0x95, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5d21, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5d21, .value=0xc0, .type=IO_READ},
        {.addr=0x5d22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012B) {
    const struct CPU_State initial_cpu = {.pc=0x6a64, .a=0x17, .x=0x37, .y=0xa2, .sp=0xc6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6a64, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6a65, .a=0x17, .x=0x37, .y=0xa2, .sp=0xc6, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x6a64, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6a64, .value=0xc0, .type=IO_READ},
        {.addr=0x6a65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012C) {
    const struct CPU_State initial_cpu = {.pc=0xcb09, .a=0x37, .x=0x8d, .y=0xaa, .sp=0x77, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcb09, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcb0a, .a=0x37, .x=0x8d, .y=0xaa, .sp=0x77, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xcb09, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcb09, .value=0xc0, .type=IO_READ},
        {.addr=0xcb0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012D) {
    const struct CPU_State initial_cpu = {.pc=0xfab3, .a=0x13, .x=0x00, .y=0x70, .sp=0x9d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xfab3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfab4, .a=0x13, .x=0x00, .y=0x70, .sp=0x9d, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xfab3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfab3, .value=0xc0, .type=IO_READ},
        {.addr=0xfab4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012E) {
    const struct CPU_State initial_cpu = {.pc=0x669f, .a=0x12, .x=0x02, .y=0xba, .sp=0x83, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x669f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x66a0, .a=0x12, .x=0x02, .y=0xba, .sp=0x83, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x669f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x669f, .value=0xc0, .type=IO_READ},
        {.addr=0x66a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_012F) {
    const struct CPU_State initial_cpu = {.pc=0x800d, .a=0xa5, .x=0x40, .y=0x37, .sp=0xc3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x800d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x800e, .a=0xa5, .x=0x40, .y=0x37, .sp=0xc3, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x800d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x800d, .value=0xc0, .type=IO_READ},
        {.addr=0x800e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0130) {
    const struct CPU_State initial_cpu = {.pc=0xc7e9, .a=0xd3, .x=0x6b, .y=0x3b, .sp=0x51, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc7ea, .a=0xd3, .x=0x6b, .y=0x3b, .sp=0x51, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc7e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc7e9, .value=0xc0, .type=IO_READ},
        {.addr=0xc7ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0131) {
    const struct CPU_State initial_cpu = {.pc=0x995a, .a=0x23, .x=0x48, .y=0x7f, .sp=0x1e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x995a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x995b, .a=0x23, .x=0x48, .y=0x7f, .sp=0x1e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x995a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x995a, .value=0xc0, .type=IO_READ},
        {.addr=0x995b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0132) {
    const struct CPU_State initial_cpu = {.pc=0x3a39, .a=0xa8, .x=0x34, .y=0xc1, .sp=0x7d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x3a39, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a3a, .a=0xa8, .x=0x34, .y=0xc1, .sp=0x7d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3a39, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a39, .value=0xc0, .type=IO_READ},
        {.addr=0x3a3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0133) {
    const struct CPU_State initial_cpu = {.pc=0xbc7c, .a=0xae, .x=0xbb, .y=0x97, .sp=0xc3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbc7d, .a=0xae, .x=0xbb, .y=0x97, .sp=0xc3, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xbc7c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbc7c, .value=0xc0, .type=IO_READ},
        {.addr=0xbc7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0134) {
    const struct CPU_State initial_cpu = {.pc=0x091b, .a=0xa9, .x=0xa1, .y=0x6a, .sp=0x87, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x091b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x091c, .a=0xa9, .x=0xa1, .y=0x6a, .sp=0x87, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x091b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x091b, .value=0xc0, .type=IO_READ},
        {.addr=0x091c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5c56, .a=0x20, .x=0xc7, .y=0x3e, .sp=0x1e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5c56, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5c57, .a=0x20, .x=0xc7, .y=0x3e, .sp=0x1e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5c56, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5c56, .value=0xc0, .type=IO_READ},
        {.addr=0x5c57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0136) {
    const struct CPU_State initial_cpu = {.pc=0x4f16, .a=0x19, .x=0x13, .y=0xdf, .sp=0xa1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4f16, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4f17, .a=0x19, .x=0x13, .y=0xdf, .sp=0xa1, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x4f16, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4f16, .value=0xc0, .type=IO_READ},
        {.addr=0x4f17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0137) {
    const struct CPU_State initial_cpu = {.pc=0x54d3, .a=0xf1, .x=0x61, .y=0x7c, .sp=0x2c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x54d3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x54d4, .a=0xf1, .x=0x61, .y=0x7c, .sp=0x2c, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x54d3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x54d3, .value=0xc0, .type=IO_READ},
        {.addr=0x54d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0138) {
    const struct CPU_State initial_cpu = {.pc=0x125a, .a=0x20, .x=0xdf, .y=0x56, .sp=0xac, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x125a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x125b, .a=0x20, .x=0xdf, .y=0x56, .sp=0xac, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x125a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x125a, .value=0xc0, .type=IO_READ},
        {.addr=0x125b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0139) {
    const struct CPU_State initial_cpu = {.pc=0xcc1a, .a=0x1c, .x=0xf6, .y=0xd2, .sp=0x8c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcc1b, .a=0x1c, .x=0xf6, .y=0xd2, .sp=0x8c, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xcc1a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcc1a, .value=0xc0, .type=IO_READ},
        {.addr=0xcc1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013A) {
    const struct CPU_State initial_cpu = {.pc=0x16d8, .a=0x5d, .x=0x9e, .y=0x5e, .sp=0x30, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x16d8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x16d9, .a=0x5d, .x=0x9e, .y=0x5e, .sp=0x30, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x16d8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x16d8, .value=0xc0, .type=IO_READ},
        {.addr=0x16d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013B) {
    const struct CPU_State initial_cpu = {.pc=0x4f80, .a=0x4c, .x=0xcc, .y=0xde, .sp=0xac, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4f80, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4f81, .a=0x4c, .x=0xcc, .y=0xde, .sp=0xac, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x4f80, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4f80, .value=0xc0, .type=IO_READ},
        {.addr=0x4f81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013C) {
    const struct CPU_State initial_cpu = {.pc=0x98be, .a=0x19, .x=0x0e, .y=0x95, .sp=0xa0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x98be, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x98bf, .a=0x19, .x=0x0e, .y=0x95, .sp=0xa0, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x98be, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x98be, .value=0xc0, .type=IO_READ},
        {.addr=0x98bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013D) {
    const struct CPU_State initial_cpu = {.pc=0xcf74, .a=0xb9, .x=0xda, .y=0xdc, .sp=0xe1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xcf74, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcf75, .a=0xb9, .x=0xda, .y=0xdc, .sp=0xe1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xcf74, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcf74, .value=0xc0, .type=IO_READ},
        {.addr=0xcf75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc3b9, .a=0xa3, .x=0xe9, .y=0xb5, .sp=0x06, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc3ba, .a=0xa3, .x=0xe9, .y=0xb5, .sp=0x06, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc3b9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc3b9, .value=0xc0, .type=IO_READ},
        {.addr=0xc3ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_013F) {
    const struct CPU_State initial_cpu = {.pc=0xf689, .a=0x77, .x=0xbe, .y=0x9d, .sp=0x01, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf689, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf68a, .a=0x77, .x=0xbe, .y=0x9d, .sp=0x01, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xf689, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf689, .value=0xc0, .type=IO_READ},
        {.addr=0xf68a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x9a4b, .a=0x1f, .x=0x41, .y=0x5b, .sp=0x5f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9a4c, .a=0x1f, .x=0x41, .y=0x5b, .sp=0x5f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9a4b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9a4b, .value=0xc0, .type=IO_READ},
        {.addr=0x9a4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0141) {
    const struct CPU_State initial_cpu = {.pc=0xd497, .a=0x63, .x=0xcf, .y=0xdb, .sp=0x4a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd497, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd498, .a=0x63, .x=0xcf, .y=0xdb, .sp=0x4a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd497, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd497, .value=0xc0, .type=IO_READ},
        {.addr=0xd498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0142) {
    const struct CPU_State initial_cpu = {.pc=0xa907, .a=0xcd, .x=0xe4, .y=0xb1, .sp=0x25, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa907, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa908, .a=0xcd, .x=0xe4, .y=0xb1, .sp=0x25, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa907, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa907, .value=0xc0, .type=IO_READ},
        {.addr=0xa908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0143) {
    const struct CPU_State initial_cpu = {.pc=0x32ff, .a=0x4f, .x=0x67, .y=0x5b, .sp=0xdf, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x32ff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3300, .a=0x4f, .x=0x67, .y=0x5b, .sp=0xdf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x32ff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x32ff, .value=0xc0, .type=IO_READ},
        {.addr=0x3300, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0144) {
    const struct CPU_State initial_cpu = {.pc=0x806c, .a=0xb3, .x=0x9c, .y=0x6e, .sp=0x1f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x806c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x806d, .a=0xb3, .x=0x9c, .y=0x6e, .sp=0x1f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x806c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x806c, .value=0xc0, .type=IO_READ},
        {.addr=0x806d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0145) {
    const struct CPU_State initial_cpu = {.pc=0x0a25, .a=0xc9, .x=0x45, .y=0xf2, .sp=0x00, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0a25, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0a26, .a=0xc9, .x=0x45, .y=0xf2, .sp=0x00, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0a25, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0a25, .value=0xc0, .type=IO_READ},
        {.addr=0x0a26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0146) {
    const struct CPU_State initial_cpu = {.pc=0x3deb, .a=0x1c, .x=0xcc, .y=0x1f, .sp=0xb9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3deb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3dec, .a=0x1c, .x=0xcc, .y=0x1f, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3deb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3deb, .value=0xc0, .type=IO_READ},
        {.addr=0x3dec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0147) {
    const struct CPU_State initial_cpu = {.pc=0xf937, .a=0xa8, .x=0x1f, .y=0x25, .sp=0xbc, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf937, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf938, .a=0xa8, .x=0x1f, .y=0x25, .sp=0xbc, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf937, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf937, .value=0xc0, .type=IO_READ},
        {.addr=0xf938, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0148) {
    const struct CPU_State initial_cpu = {.pc=0x55ea, .a=0xbe, .x=0x9f, .y=0x60, .sp=0x41, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x55ea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x55eb, .a=0xbe, .x=0x9f, .y=0x60, .sp=0x41, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x55ea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x55ea, .value=0xc0, .type=IO_READ},
        {.addr=0x55eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0149) {
    const struct CPU_State initial_cpu = {.pc=0xd75e, .a=0x45, .x=0x94, .y=0x23, .sp=0x02, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd75e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd75f, .a=0x45, .x=0x94, .y=0x23, .sp=0x02, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd75e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd75e, .value=0xc0, .type=IO_READ},
        {.addr=0xd75f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd85e, .a=0x56, .x=0x18, .y=0xbd, .sp=0xd3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd85e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd85f, .a=0x56, .x=0x18, .y=0xbd, .sp=0xd3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd85e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd85e, .value=0xc0, .type=IO_READ},
        {.addr=0xd85f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014B) {
    const struct CPU_State initial_cpu = {.pc=0x3a52, .a=0xfb, .x=0x75, .y=0x9d, .sp=0xd1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x3a52, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a53, .a=0xfb, .x=0x75, .y=0x9d, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3a52, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a52, .value=0xc0, .type=IO_READ},
        {.addr=0x3a53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014C) {
    const struct CPU_State initial_cpu = {.pc=0xc098, .a=0xa6, .x=0x9c, .y=0x07, .sp=0xc3, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc098, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc099, .a=0xa6, .x=0x9c, .y=0x07, .sp=0xc3, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc098, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc098, .value=0xc0, .type=IO_READ},
        {.addr=0xc099, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014D) {
    const struct CPU_State initial_cpu = {.pc=0x513b, .a=0x1e, .x=0x5b, .y=0x3e, .sp=0xe2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x513b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x513c, .a=0x1e, .x=0x5b, .y=0x3e, .sp=0xe2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x513b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x513b, .value=0xc0, .type=IO_READ},
        {.addr=0x513c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014E) {
    const struct CPU_State initial_cpu = {.pc=0x90af, .a=0xf3, .x=0x87, .y=0xd9, .sp=0xc9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x90af, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x90b0, .a=0xf3, .x=0x87, .y=0xd9, .sp=0xc9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x90af, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x90af, .value=0xc0, .type=IO_READ},
        {.addr=0x90b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_014F) {
    const struct CPU_State initial_cpu = {.pc=0x7def, .a=0xca, .x=0xfa, .y=0x6a, .sp=0x6e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7def, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7df0, .a=0xca, .x=0xfa, .y=0x6a, .sp=0x6e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7def, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7def, .value=0xc0, .type=IO_READ},
        {.addr=0x7df0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0150) {
    const struct CPU_State initial_cpu = {.pc=0xcfba, .a=0x4b, .x=0xca, .y=0x43, .sp=0x2d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xcfba, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcfbb, .a=0x4b, .x=0xca, .y=0x43, .sp=0x2d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xcfba, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcfba, .value=0xc0, .type=IO_READ},
        {.addr=0xcfbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0151) {
    const struct CPU_State initial_cpu = {.pc=0x610b, .a=0x96, .x=0x63, .y=0xbf, .sp=0xf9, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x610b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x610c, .a=0x96, .x=0x63, .y=0xbf, .sp=0xf9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x610b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x610b, .value=0xc0, .type=IO_READ},
        {.addr=0x610c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0152) {
    const struct CPU_State initial_cpu = {.pc=0x8d0a, .a=0x47, .x=0xb2, .y=0x75, .sp=0x8e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8d0a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8d0b, .a=0x47, .x=0xb2, .y=0x75, .sp=0x8e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8d0a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8d0a, .value=0xc0, .type=IO_READ},
        {.addr=0x8d0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0153) {
    const struct CPU_State initial_cpu = {.pc=0x6426, .a=0x21, .x=0x8a, .y=0xc6, .sp=0x23, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6426, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6427, .a=0x21, .x=0x8a, .y=0xc6, .sp=0x23, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x6426, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6426, .value=0xc0, .type=IO_READ},
        {.addr=0x6427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1738, .a=0xa7, .x=0x58, .y=0x03, .sp=0x18, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1738, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1739, .a=0xa7, .x=0x58, .y=0x03, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1738, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1738, .value=0xc0, .type=IO_READ},
        {.addr=0x1739, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0155) {
    const struct CPU_State initial_cpu = {.pc=0xb7c2, .a=0x4c, .x=0x18, .y=0x77, .sp=0xa9, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb7c3, .a=0x4c, .x=0x18, .y=0x77, .sp=0xa9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb7c2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb7c2, .value=0xc0, .type=IO_READ},
        {.addr=0xb7c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0156) {
    const struct CPU_State initial_cpu = {.pc=0x4e60, .a=0x35, .x=0x59, .y=0x36, .sp=0x83, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e60, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4e61, .a=0x35, .x=0x59, .y=0x36, .sp=0x83, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4e60, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4e60, .value=0xc0, .type=IO_READ},
        {.addr=0x4e61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0157) {
    const struct CPU_State initial_cpu = {.pc=0xb255, .a=0x8a, .x=0xf8, .y=0xe5, .sp=0xb6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb255, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb256, .a=0x8a, .x=0xf8, .y=0xe5, .sp=0xb6, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xb255, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb255, .value=0xc0, .type=IO_READ},
        {.addr=0xb256, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0158) {
    const struct CPU_State initial_cpu = {.pc=0xca9c, .a=0x2a, .x=0x5f, .y=0xd5, .sp=0xc3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xca9c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0x2a, .x=0x5f, .y=0xd5, .sp=0xc3, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xca9c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xca9c, .value=0xc0, .type=IO_READ},
        {.addr=0xca9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0159) {
    const struct CPU_State initial_cpu = {.pc=0x91c3, .a=0x58, .x=0x1d, .y=0xa6, .sp=0x59, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x91c3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x91c4, .a=0x58, .x=0x1d, .y=0xa6, .sp=0x59, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x91c3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x91c3, .value=0xc0, .type=IO_READ},
        {.addr=0x91c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015A) {
    const struct CPU_State initial_cpu = {.pc=0x853c, .a=0x70, .x=0x70, .y=0xee, .sp=0x89, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x853c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x853d, .a=0x70, .x=0x70, .y=0xee, .sp=0x89, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x853c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x853c, .value=0xc0, .type=IO_READ},
        {.addr=0x853d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015B) {
    const struct CPU_State initial_cpu = {.pc=0x2305, .a=0x02, .x=0x03, .y=0x25, .sp=0x1e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2305, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2306, .a=0x02, .x=0x03, .y=0x25, .sp=0x1e, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x2305, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2305, .value=0xc0, .type=IO_READ},
        {.addr=0x2306, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015C) {
    const struct CPU_State initial_cpu = {.pc=0x7415, .a=0x13, .x=0xe2, .y=0x7d, .sp=0x54, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7415, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7416, .a=0x13, .x=0xe2, .y=0x7d, .sp=0x54, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x7415, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7415, .value=0xc0, .type=IO_READ},
        {.addr=0x7416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015D) {
    const struct CPU_State initial_cpu = {.pc=0x137d, .a=0x1e, .x=0xc1, .y=0x39, .sp=0x10, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x137d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x137e, .a=0x1e, .x=0xc1, .y=0x39, .sp=0x10, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x137d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x137d, .value=0xc0, .type=IO_READ},
        {.addr=0x137e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015E) {
    const struct CPU_State initial_cpu = {.pc=0xae6e, .a=0x43, .x=0x22, .y=0x15, .sp=0x0b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xae6e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xae6f, .a=0x43, .x=0x22, .y=0x15, .sp=0x0b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xae6e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xae6e, .value=0xc0, .type=IO_READ},
        {.addr=0xae6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x59d9, .a=0x45, .x=0xb5, .y=0x5d, .sp=0xdf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x59d9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59da, .a=0x45, .x=0xb5, .y=0x5d, .sp=0xdf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x59d9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59d9, .value=0xc0, .type=IO_READ},
        {.addr=0x59da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0160) {
    const struct CPU_State initial_cpu = {.pc=0x59d8, .a=0x73, .x=0xf0, .y=0x9c, .sp=0x87, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x59d8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59d9, .a=0x73, .x=0xf0, .y=0x9c, .sp=0x87, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x59d8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59d8, .value=0xc0, .type=IO_READ},
        {.addr=0x59d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0161) {
    const struct CPU_State initial_cpu = {.pc=0x4ffe, .a=0x13, .x=0x2b, .y=0xc6, .sp=0x19, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4ffe, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4fff, .a=0x13, .x=0x2b, .y=0xc6, .sp=0x19, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x4ffe, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4ffe, .value=0xc0, .type=IO_READ},
        {.addr=0x4fff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0162) {
    const struct CPU_State initial_cpu = {.pc=0xf9f5, .a=0xa6, .x=0x5e, .y=0xc9, .sp=0xbb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf9f6, .a=0xa6, .x=0x5e, .y=0xc9, .sp=0xbb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf9f5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf9f5, .value=0xc0, .type=IO_READ},
        {.addr=0xf9f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0163) {
    const struct CPU_State initial_cpu = {.pc=0x6a81, .a=0x75, .x=0xe9, .y=0xef, .sp=0x7a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6a81, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6a82, .a=0x75, .x=0xe9, .y=0xef, .sp=0x7a, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x6a81, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6a81, .value=0xc0, .type=IO_READ},
        {.addr=0x6a82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe4aa, .a=0x6b, .x=0xb4, .y=0x2e, .sp=0xd5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe4aa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe4ab, .a=0x6b, .x=0xb4, .y=0x2e, .sp=0xd5, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xe4aa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe4aa, .value=0xc0, .type=IO_READ},
        {.addr=0xe4ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0165) {
    const struct CPU_State initial_cpu = {.pc=0xbcd8, .a=0x01, .x=0xcb, .y=0x8c, .sp=0x0b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbcd9, .a=0x01, .x=0xcb, .y=0x8c, .sp=0x0b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbcd8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbcd8, .value=0xc0, .type=IO_READ},
        {.addr=0xbcd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0166) {
    const struct CPU_State initial_cpu = {.pc=0x4e4b, .a=0x33, .x=0x53, .y=0x16, .sp=0xb8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4e4b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4e4c, .a=0x33, .x=0x53, .y=0x16, .sp=0xb8, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4e4b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4e4b, .value=0xc0, .type=IO_READ},
        {.addr=0x4e4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa482, .a=0x50, .x=0xf3, .y=0x05, .sp=0xd0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xa482, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa483, .a=0x50, .x=0xf3, .y=0x05, .sp=0xd0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa482, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa482, .value=0xc0, .type=IO_READ},
        {.addr=0xa483, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0168) {
    const struct CPU_State initial_cpu = {.pc=0x6130, .a=0x3e, .x=0x99, .y=0xe8, .sp=0xa0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6130, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6131, .a=0x3e, .x=0x99, .y=0xe8, .sp=0xa0, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x6130, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6130, .value=0xc0, .type=IO_READ},
        {.addr=0x6131, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9a7a, .a=0x0f, .x=0x09, .y=0xc7, .sp=0xa6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9a7b, .a=0x0f, .x=0x09, .y=0xc7, .sp=0xa6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9a7a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9a7a, .value=0xc0, .type=IO_READ},
        {.addr=0x9a7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016A) {
    const struct CPU_State initial_cpu = {.pc=0x8ecd, .a=0xab, .x=0x0e, .y=0x9f, .sp=0x9f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x8ecd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8ece, .a=0xab, .x=0x0e, .y=0x9f, .sp=0x9f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8ecd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8ecd, .value=0xc0, .type=IO_READ},
        {.addr=0x8ece, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016B) {
    const struct CPU_State initial_cpu = {.pc=0xd85d, .a=0x3a, .x=0x2e, .y=0x2b, .sp=0x7a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd85d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd85e, .a=0x3a, .x=0x2e, .y=0x2b, .sp=0x7a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd85d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd85d, .value=0xc0, .type=IO_READ},
        {.addr=0xd85e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016C) {
    const struct CPU_State initial_cpu = {.pc=0x85e5, .a=0xa5, .x=0x27, .y=0x1d, .sp=0x1b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x85e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x85e6, .a=0xa5, .x=0x27, .y=0x1d, .sp=0x1b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x85e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x85e5, .value=0xc0, .type=IO_READ},
        {.addr=0x85e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x38d8, .a=0x3f, .x=0xa9, .y=0x88, .sp=0x15, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x38d8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x38d9, .a=0x3f, .x=0xa9, .y=0x88, .sp=0x15, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x38d8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x38d8, .value=0xc0, .type=IO_READ},
        {.addr=0x38d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016E) {
    const struct CPU_State initial_cpu = {.pc=0xb945, .a=0x02, .x=0x9f, .y=0x8f, .sp=0xb7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb945, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb946, .a=0x02, .x=0x9f, .y=0x8f, .sp=0xb7, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xb945, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb945, .value=0xc0, .type=IO_READ},
        {.addr=0xb946, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_016F) {
    const struct CPU_State initial_cpu = {.pc=0x804f, .a=0x79, .x=0xfe, .y=0xc6, .sp=0x95, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x804f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8050, .a=0x79, .x=0xfe, .y=0xc6, .sp=0x95, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x804f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x804f, .value=0xc0, .type=IO_READ},
        {.addr=0x8050, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0170) {
    const struct CPU_State initial_cpu = {.pc=0x133d, .a=0x52, .x=0x89, .y=0x29, .sp=0x10, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x133d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x133e, .a=0x52, .x=0x89, .y=0x29, .sp=0x10, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x133d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x133d, .value=0xc0, .type=IO_READ},
        {.addr=0x133e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0171) {
    const struct CPU_State initial_cpu = {.pc=0x60b6, .a=0x54, .x=0xe9, .y=0x4c, .sp=0x39, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x60b6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x60b7, .a=0x54, .x=0xe9, .y=0x4c, .sp=0x39, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x60b6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x60b6, .value=0xc0, .type=IO_READ},
        {.addr=0x60b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0172) {
    const struct CPU_State initial_cpu = {.pc=0xe99b, .a=0x15, .x=0xd1, .y=0xd0, .sp=0x68, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe99b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe99c, .a=0x15, .x=0xd1, .y=0xd0, .sp=0x68, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe99b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe99b, .value=0xc0, .type=IO_READ},
        {.addr=0xe99c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0173) {
    const struct CPU_State initial_cpu = {.pc=0xa701, .a=0x77, .x=0x7f, .y=0x82, .sp=0xc3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa701, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa702, .a=0x77, .x=0x7f, .y=0x82, .sp=0xc3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa701, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa701, .value=0xc0, .type=IO_READ},
        {.addr=0xa702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x90ca, .a=0x76, .x=0x8c, .y=0xfd, .sp=0x1b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x90ca, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x90cb, .a=0x76, .x=0x8c, .y=0xfd, .sp=0x1b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x90ca, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x90ca, .value=0xc0, .type=IO_READ},
        {.addr=0x90cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0175) {
    const struct CPU_State initial_cpu = {.pc=0x84b2, .a=0xe2, .x=0xde, .y=0xe3, .sp=0x1e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x84b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x84b3, .a=0xe2, .x=0xde, .y=0xe3, .sp=0x1e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x84b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x84b2, .value=0xc0, .type=IO_READ},
        {.addr=0x84b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x49fe, .a=0x56, .x=0x25, .y=0xe2, .sp=0x5f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x49fe, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x49ff, .a=0x56, .x=0x25, .y=0xe2, .sp=0x5f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x49fe, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x49fe, .value=0xc0, .type=IO_READ},
        {.addr=0x49ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0177) {
    const struct CPU_State initial_cpu = {.pc=0x24f5, .a=0x5f, .x=0xe6, .y=0xbd, .sp=0xc3, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x24f5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x24f6, .a=0x5f, .x=0xe6, .y=0xbd, .sp=0xc3, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x24f5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x24f5, .value=0xc0, .type=IO_READ},
        {.addr=0x24f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0178) {
    const struct CPU_State initial_cpu = {.pc=0xc170, .a=0xa3, .x=0xf5, .y=0xbb, .sp=0xda, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc170, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc171, .a=0xa3, .x=0xf5, .y=0xbb, .sp=0xda, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xc170, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc170, .value=0xc0, .type=IO_READ},
        {.addr=0xc171, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0179) {
    const struct CPU_State initial_cpu = {.pc=0xaa07, .a=0xc8, .x=0x9b, .y=0xa7, .sp=0x38, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xaa07, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaa08, .a=0xc8, .x=0x9b, .y=0xa7, .sp=0x38, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xaa07, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaa07, .value=0xc0, .type=IO_READ},
        {.addr=0xaa08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017A) {
    const struct CPU_State initial_cpu = {.pc=0x91d5, .a=0xbf, .x=0xc0, .y=0x5b, .sp=0xbe, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x91d5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x91d6, .a=0xbf, .x=0xc0, .y=0x5b, .sp=0xbe, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x91d5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x91d5, .value=0xc0, .type=IO_READ},
        {.addr=0x91d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017B) {
    const struct CPU_State initial_cpu = {.pc=0xf346, .a=0xf0, .x=0x77, .y=0x39, .sp=0xd5, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf346, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf347, .a=0xf0, .x=0x77, .y=0x39, .sp=0xd5, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf346, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf346, .value=0xc0, .type=IO_READ},
        {.addr=0xf347, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd3d5, .a=0xf2, .x=0x3e, .y=0xe1, .sp=0xb4, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd3d6, .a=0xf2, .x=0x3e, .y=0xe1, .sp=0xb4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd3d5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd3d5, .value=0xc0, .type=IO_READ},
        {.addr=0xd3d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017D) {
    const struct CPU_State initial_cpu = {.pc=0x9864, .a=0xca, .x=0x93, .y=0x04, .sp=0x49, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9864, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9865, .a=0xca, .x=0x93, .y=0x04, .sp=0x49, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x9864, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9864, .value=0xc0, .type=IO_READ},
        {.addr=0x9865, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017E) {
    const struct CPU_State initial_cpu = {.pc=0x2ec4, .a=0x82, .x=0xa2, .y=0x4d, .sp=0xa9, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ec4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2ec5, .a=0x82, .x=0xa2, .y=0x4d, .sp=0xa9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2ec4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2ec4, .value=0xc0, .type=IO_READ},
        {.addr=0x2ec5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_017F) {
    const struct CPU_State initial_cpu = {.pc=0xcd25, .a=0xeb, .x=0x29, .y=0xb6, .sp=0xc3, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xcd25, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcd26, .a=0xeb, .x=0x29, .y=0xb6, .sp=0xc3, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xcd25, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcd25, .value=0xc0, .type=IO_READ},
        {.addr=0xcd26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0180) {
    const struct CPU_State initial_cpu = {.pc=0xe28b, .a=0xa5, .x=0x45, .y=0xa5, .sp=0x94, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe28b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe28c, .a=0xa5, .x=0x45, .y=0xa5, .sp=0x94, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe28b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe28b, .value=0xc0, .type=IO_READ},
        {.addr=0xe28c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0181) {
    const struct CPU_State initial_cpu = {.pc=0x86d3, .a=0x71, .x=0x16, .y=0x41, .sp=0x8e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x86d3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x86d4, .a=0x71, .x=0x16, .y=0x41, .sp=0x8e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x86d3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x86d3, .value=0xc0, .type=IO_READ},
        {.addr=0x86d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0182) {
    const struct CPU_State initial_cpu = {.pc=0x2e37, .a=0x1f, .x=0x27, .y=0x8a, .sp=0x2b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2e37, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2e38, .a=0x1f, .x=0x27, .y=0x8a, .sp=0x2b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x2e37, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2e37, .value=0xc0, .type=IO_READ},
        {.addr=0x2e38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0183) {
    const struct CPU_State initial_cpu = {.pc=0x924e, .a=0x58, .x=0x8c, .y=0x4f, .sp=0x7c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x924e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x924f, .a=0x58, .x=0x8c, .y=0x4f, .sp=0x7c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x924e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x924e, .value=0xc0, .type=IO_READ},
        {.addr=0x924f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0184) {
    const struct CPU_State initial_cpu = {.pc=0x3d50, .a=0x8e, .x=0xc0, .y=0x65, .sp=0x7b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3d50, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3d51, .a=0x8e, .x=0xc0, .y=0x65, .sp=0x7b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3d50, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3d50, .value=0xc0, .type=IO_READ},
        {.addr=0x3d51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0185) {
    const struct CPU_State initial_cpu = {.pc=0x6248, .a=0x21, .x=0x38, .y=0x5b, .sp=0xfa, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6248, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6249, .a=0x21, .x=0x38, .y=0x5b, .sp=0xfa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6248, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6248, .value=0xc0, .type=IO_READ},
        {.addr=0x6249, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0186) {
    const struct CPU_State initial_cpu = {.pc=0x76aa, .a=0x72, .x=0x35, .y=0xb7, .sp=0xb6, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x76aa, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x76ab, .a=0x72, .x=0x35, .y=0xb7, .sp=0xb6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x76aa, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x76aa, .value=0xc0, .type=IO_READ},
        {.addr=0x76ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0187) {
    const struct CPU_State initial_cpu = {.pc=0x496a, .a=0x16, .x=0x1a, .y=0x02, .sp=0xbf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x496a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x496b, .a=0x16, .x=0x1a, .y=0x02, .sp=0xbf, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x496a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x496a, .value=0xc0, .type=IO_READ},
        {.addr=0x496b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0188) {
    const struct CPU_State initial_cpu = {.pc=0x71ec, .a=0x25, .x=0x24, .y=0x99, .sp=0xa5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x71ec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x71ed, .a=0x25, .x=0x24, .y=0x99, .sp=0xa5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x71ec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x71ec, .value=0xc0, .type=IO_READ},
        {.addr=0x71ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0189) {
    const struct CPU_State initial_cpu = {.pc=0x73b9, .a=0x49, .x=0x5a, .y=0xa9, .sp=0xb1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x73b9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x73ba, .a=0x49, .x=0x5a, .y=0xa9, .sp=0xb1, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x73b9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x73b9, .value=0xc0, .type=IO_READ},
        {.addr=0x73ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018A) {
    const struct CPU_State initial_cpu = {.pc=0x14a5, .a=0x2f, .x=0x59, .y=0xda, .sp=0x68, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x14a5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x14a6, .a=0x2f, .x=0x59, .y=0xda, .sp=0x68, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x14a5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x14a5, .value=0xc0, .type=IO_READ},
        {.addr=0x14a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018B) {
    const struct CPU_State initial_cpu = {.pc=0xf2a6, .a=0x76, .x=0x10, .y=0x8f, .sp=0x59, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf2a7, .a=0x76, .x=0x10, .y=0x8f, .sp=0x59, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf2a6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf2a6, .value=0xc0, .type=IO_READ},
        {.addr=0xf2a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018C) {
    const struct CPU_State initial_cpu = {.pc=0xdb55, .a=0xd7, .x=0xd3, .y=0x22, .sp=0xd5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb55, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdb56, .a=0xd7, .x=0xd3, .y=0x22, .sp=0xd5, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xdb55, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdb55, .value=0xc0, .type=IO_READ},
        {.addr=0xdb56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018D) {
    const struct CPU_State initial_cpu = {.pc=0x88fb, .a=0x6a, .x=0x79, .y=0x71, .sp=0xcb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x88fb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x88fc, .a=0x6a, .x=0x79, .y=0x71, .sp=0xcb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x88fb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x88fb, .value=0xc0, .type=IO_READ},
        {.addr=0x88fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018E) {
    const struct CPU_State initial_cpu = {.pc=0x689b, .a=0xb0, .x=0x01, .y=0x17, .sp=0x38, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x689b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x689c, .a=0xb0, .x=0x01, .y=0x17, .sp=0x38, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x689b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x689b, .value=0xc0, .type=IO_READ},
        {.addr=0x689c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_018F) {
    const struct CPU_State initial_cpu = {.pc=0x2b82, .a=0xe3, .x=0x9b, .y=0x3e, .sp=0x1d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2b82, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2b83, .a=0xe3, .x=0x9b, .y=0x3e, .sp=0x1d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2b82, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2b82, .value=0xc0, .type=IO_READ},
        {.addr=0x2b83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5f3a, .a=0x31, .x=0x61, .y=0xe1, .sp=0xc9, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5f3b, .a=0x31, .x=0x61, .y=0xe1, .sp=0xc9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5f3a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5f3a, .value=0xc0, .type=IO_READ},
        {.addr=0x5f3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0191) {
    const struct CPU_State initial_cpu = {.pc=0x76fd, .a=0x68, .x=0x45, .y=0xa4, .sp=0x65, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x76fd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x76fe, .a=0x68, .x=0x45, .y=0xa4, .sp=0x65, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x76fd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x76fd, .value=0xc0, .type=IO_READ},
        {.addr=0x76fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0192) {
    const struct CPU_State initial_cpu = {.pc=0x600a, .a=0x3c, .x=0xbf, .y=0xcc, .sp=0xfd, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x600a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x600b, .a=0x3c, .x=0xbf, .y=0xcc, .sp=0xfd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x600a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x600a, .value=0xc0, .type=IO_READ},
        {.addr=0x600b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0193) {
    const struct CPU_State initial_cpu = {.pc=0x4879, .a=0xcd, .x=0xad, .y=0x2d, .sp=0x43, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4879, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x487a, .a=0xcd, .x=0xad, .y=0x2d, .sp=0x43, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4879, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4879, .value=0xc0, .type=IO_READ},
        {.addr=0x487a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0194) {
    const struct CPU_State initial_cpu = {.pc=0x8c03, .a=0x19, .x=0xe6, .y=0x76, .sp=0x91, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8c03, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8c04, .a=0x19, .x=0xe6, .y=0x76, .sp=0x91, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8c03, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8c03, .value=0xc0, .type=IO_READ},
        {.addr=0x8c04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0195) {
    const struct CPU_State initial_cpu = {.pc=0xbacb, .a=0xfc, .x=0x17, .y=0x86, .sp=0x7b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbacb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbacc, .a=0xfc, .x=0x17, .y=0x86, .sp=0x7b, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xbacb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbacb, .value=0xc0, .type=IO_READ},
        {.addr=0xbacc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0196) {
    const struct CPU_State initial_cpu = {.pc=0x6855, .a=0x91, .x=0x17, .y=0x05, .sp=0xc8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6855, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6856, .a=0x91, .x=0x17, .y=0x05, .sp=0xc8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6855, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6855, .value=0xc0, .type=IO_READ},
        {.addr=0x6856, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb59d, .a=0x31, .x=0x13, .y=0xdd, .sp=0x34, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb59d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb59e, .a=0x31, .x=0x13, .y=0xdd, .sp=0x34, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb59d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb59d, .value=0xc0, .type=IO_READ},
        {.addr=0xb59e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0198) {
    const struct CPU_State initial_cpu = {.pc=0xb205, .a=0x7e, .x=0x9e, .y=0x3d, .sp=0x73, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb205, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb206, .a=0x7e, .x=0x9e, .y=0x3d, .sp=0x73, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xb205, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb205, .value=0xc0, .type=IO_READ},
        {.addr=0xb206, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0199) {
    const struct CPU_State initial_cpu = {.pc=0xf171, .a=0xbd, .x=0xa0, .y=0x43, .sp=0x65, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf171, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf172, .a=0xbd, .x=0xa0, .y=0x43, .sp=0x65, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf171, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf171, .value=0xc0, .type=IO_READ},
        {.addr=0xf172, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019A) {
    const struct CPU_State initial_cpu = {.pc=0x38b4, .a=0xe3, .x=0x7f, .y=0xe0, .sp=0x28, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x38b4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x38b5, .a=0xe3, .x=0x7f, .y=0xe0, .sp=0x28, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x38b4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x38b4, .value=0xc0, .type=IO_READ},
        {.addr=0x38b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019B) {
    const struct CPU_State initial_cpu = {.pc=0x7e1e, .a=0xf3, .x=0xe7, .y=0x57, .sp=0xf0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7e1e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7e1f, .a=0xf3, .x=0xe7, .y=0x57, .sp=0xf0, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x7e1e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7e1e, .value=0xc0, .type=IO_READ},
        {.addr=0x7e1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019C) {
    const struct CPU_State initial_cpu = {.pc=0xa45f, .a=0xa6, .x=0xfd, .y=0x5b, .sp=0xf6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa45f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa460, .a=0xa6, .x=0xfd, .y=0x5b, .sp=0xf6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xa45f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa45f, .value=0xc0, .type=IO_READ},
        {.addr=0xa460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019D) {
    const struct CPU_State initial_cpu = {.pc=0x56ee, .a=0x8e, .x=0x1a, .y=0x88, .sp=0x34, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x56ee, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x56ef, .a=0x8e, .x=0x1a, .y=0x88, .sp=0x34, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x56ee, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x56ee, .value=0xc0, .type=IO_READ},
        {.addr=0x56ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019E) {
    const struct CPU_State initial_cpu = {.pc=0x51f7, .a=0xf0, .x=0x19, .y=0x8a, .sp=0x97, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x51f7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x51f8, .a=0xf0, .x=0x19, .y=0x8a, .sp=0x97, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x51f7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x51f7, .value=0xc0, .type=IO_READ},
        {.addr=0x51f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x60c4, .a=0x08, .x=0x39, .y=0x37, .sp=0xd2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x60c4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x60c5, .a=0x08, .x=0x39, .y=0x37, .sp=0xd2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x60c4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x60c4, .value=0xc0, .type=IO_READ},
        {.addr=0x60c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x274d, .a=0xcf, .x=0xab, .y=0xf1, .sp=0xfd, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x274d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x274e, .a=0xcf, .x=0xab, .y=0xf1, .sp=0xfd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x274d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x274d, .value=0xc0, .type=IO_READ},
        {.addr=0x274e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xf4e1, .a=0x4c, .x=0x33, .y=0x7f, .sp=0xfc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf4e2, .a=0x4c, .x=0x33, .y=0x7f, .sp=0xfc, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xf4e1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf4e1, .value=0xc0, .type=IO_READ},
        {.addr=0xf4e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xb8b8, .a=0x40, .x=0xac, .y=0xc6, .sp=0x54, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb8b9, .a=0x40, .x=0xac, .y=0xc6, .sp=0x54, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xb8b8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb8b8, .value=0xc0, .type=IO_READ},
        {.addr=0xb8b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x467d, .a=0x4b, .x=0xd2, .y=0x09, .sp=0x9f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x467d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x467e, .a=0x4b, .x=0xd2, .y=0x09, .sp=0x9f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x467d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x467d, .value=0xc0, .type=IO_READ},
        {.addr=0x467e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x9711, .a=0x19, .x=0x84, .y=0x73, .sp=0x97, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9711, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9712, .a=0x19, .x=0x84, .y=0x73, .sp=0x97, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x9711, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9711, .value=0xc0, .type=IO_READ},
        {.addr=0x9712, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x57ab, .a=0x02, .x=0x7c, .y=0x7a, .sp=0x2c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x57ab, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x57ac, .a=0x02, .x=0x7c, .y=0x7a, .sp=0x2c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x57ab, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x57ab, .value=0xc0, .type=IO_READ},
        {.addr=0x57ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xf371, .a=0xfb, .x=0x69, .y=0x9d, .sp=0x5a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf371, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf372, .a=0xfb, .x=0x69, .y=0x9d, .sp=0x5a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf371, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf371, .value=0xc0, .type=IO_READ},
        {.addr=0xf372, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xc146, .a=0x85, .x=0xba, .y=0x5b, .sp=0xb1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc146, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc147, .a=0x85, .x=0xba, .y=0x5b, .sp=0xb1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc146, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc146, .value=0xc0, .type=IO_READ},
        {.addr=0xc147, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x9394, .a=0xd8, .x=0x03, .y=0x08, .sp=0xdc, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9394, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9395, .a=0xd8, .x=0x03, .y=0x08, .sp=0xdc, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x9394, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9394, .value=0xc0, .type=IO_READ},
        {.addr=0x9395, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2dc5, .a=0x0a, .x=0xd9, .y=0xb9, .sp=0xb1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2dc6, .a=0x0a, .x=0xd9, .y=0xb9, .sp=0xb1, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x2dc5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2dc5, .value=0xc0, .type=IO_READ},
        {.addr=0x2dc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xd2a9, .a=0x50, .x=0xe1, .y=0xa1, .sp=0xef, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd2aa, .a=0x50, .x=0xe1, .y=0xa1, .sp=0xef, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xd2a9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd2a9, .value=0xc0, .type=IO_READ},
        {.addr=0xd2aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x044f, .a=0x78, .x=0x6b, .y=0xef, .sp=0x21, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x044f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0450, .a=0x78, .x=0x6b, .y=0xef, .sp=0x21, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x044f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x044f, .value=0xc0, .type=IO_READ},
        {.addr=0x0450, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xc664, .a=0x57, .x=0x42, .y=0xe2, .sp=0x7c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc664, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc665, .a=0x57, .x=0x42, .y=0xe2, .sp=0x7c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc664, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc664, .value=0xc0, .type=IO_READ},
        {.addr=0xc665, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x5835, .a=0xe4, .x=0x78, .y=0x9d, .sp=0x0e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5835, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5836, .a=0xe4, .x=0x78, .y=0x9d, .sp=0x0e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x5835, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5835, .value=0xc0, .type=IO_READ},
        {.addr=0x5836, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x70ca, .a=0x28, .x=0x7b, .y=0x6d, .sp=0x69, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x70ca, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x70cb, .a=0x28, .x=0x7b, .y=0x6d, .sp=0x69, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x70ca, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x70ca, .value=0xc0, .type=IO_READ},
        {.addr=0x70cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xaa1b, .a=0xa5, .x=0x4d, .y=0xd3, .sp=0x35, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaa1c, .a=0xa5, .x=0x4d, .y=0xd3, .sp=0x35, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xaa1b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaa1b, .value=0xc0, .type=IO_READ},
        {.addr=0xaa1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5a60, .a=0xe5, .x=0x0b, .y=0x2f, .sp=0x74, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5a60, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5a61, .a=0xe5, .x=0x0b, .y=0x2f, .sp=0x74, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5a60, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5a60, .value=0xc0, .type=IO_READ},
        {.addr=0x5a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xa202, .a=0xf1, .x=0xda, .y=0x90, .sp=0xba, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa202, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa203, .a=0xf1, .x=0xda, .y=0x90, .sp=0xba, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa202, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa202, .value=0xc0, .type=IO_READ},
        {.addr=0xa203, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x9599, .a=0xa7, .x=0x0c, .y=0x84, .sp=0x43, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9599, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x959a, .a=0xa7, .x=0x0c, .y=0x84, .sp=0x43, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9599, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9599, .value=0xc0, .type=IO_READ},
        {.addr=0x959a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x1721, .a=0xd3, .x=0x5e, .y=0x0a, .sp=0x58, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1721, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1722, .a=0xd3, .x=0x5e, .y=0x0a, .sp=0x58, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x1721, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1721, .value=0xc0, .type=IO_READ},
        {.addr=0x1722, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xcda2, .a=0x42, .x=0x96, .y=0xbc, .sp=0x7a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xcda2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcda3, .a=0x42, .x=0x96, .y=0xbc, .sp=0x7a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xcda2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcda2, .value=0xc0, .type=IO_READ},
        {.addr=0xcda3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xb0c3, .a=0xc4, .x=0xaa, .y=0xd8, .sp=0x05, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb0c4, .a=0xc4, .x=0xaa, .y=0xd8, .sp=0x05, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb0c3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb0c3, .value=0xc0, .type=IO_READ},
        {.addr=0xb0c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4cea, .a=0xa1, .x=0x46, .y=0x88, .sp=0x92, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4cea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4ceb, .a=0xa1, .x=0x46, .y=0x88, .sp=0x92, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4cea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4cea, .value=0xc0, .type=IO_READ},
        {.addr=0x4ceb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xc65c, .a=0x24, .x=0xee, .y=0xf7, .sp=0x5e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc65c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc65d, .a=0x24, .x=0xee, .y=0xf7, .sp=0x5e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xc65c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc65c, .value=0xc0, .type=IO_READ},
        {.addr=0xc65d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x14ed, .a=0xd5, .x=0xd4, .y=0x44, .sp=0x2b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x14ed, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x14ee, .a=0xd5, .x=0xd4, .y=0x44, .sp=0x2b, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x14ed, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x14ed, .value=0xc0, .type=IO_READ},
        {.addr=0x14ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xfe52, .a=0xe2, .x=0x35, .y=0x34, .sp=0x35, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xfe52, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfe53, .a=0xe2, .x=0x35, .y=0x34, .sp=0x35, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfe52, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfe52, .value=0xc0, .type=IO_READ},
        {.addr=0xfe53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x4e02, .a=0xa1, .x=0xa6, .y=0x36, .sp=0x6f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4e02, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4e03, .a=0xa1, .x=0xa6, .y=0x36, .sp=0x6f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4e02, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4e02, .value=0xc0, .type=IO_READ},
        {.addr=0x4e03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x5e0b, .a=0xed, .x=0xc3, .y=0x98, .sp=0x78, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5e0b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e0c, .a=0xed, .x=0xc3, .y=0x98, .sp=0x78, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5e0b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e0b, .value=0xc0, .type=IO_READ},
        {.addr=0x5e0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5792, .a=0xa7, .x=0xff, .y=0x9c, .sp=0x89, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5792, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5793, .a=0xa7, .x=0xff, .y=0x9c, .sp=0x89, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5792, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5792, .value=0xc0, .type=IO_READ},
        {.addr=0x5793, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xba60, .a=0xaf, .x=0x49, .y=0x69, .sp=0x5a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xba60, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xba61, .a=0xaf, .x=0x49, .y=0x69, .sp=0x5a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xba60, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xba60, .value=0xc0, .type=IO_READ},
        {.addr=0xba61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x1123, .a=0xfa, .x=0x81, .y=0x2f, .sp=0x16, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1123, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1124, .a=0xfa, .x=0x81, .y=0x2f, .sp=0x16, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x1123, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1123, .value=0xc0, .type=IO_READ},
        {.addr=0x1124, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x7b0d, .a=0x09, .x=0x09, .y=0xc1, .sp=0x7b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b0d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7b0e, .a=0x09, .x=0x09, .y=0xc1, .sp=0x7b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x7b0d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7b0d, .value=0xc0, .type=IO_READ},
        {.addr=0x7b0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x421d, .a=0x63, .x=0x23, .y=0x10, .sp=0x84, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x421d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x421e, .a=0x63, .x=0x23, .y=0x10, .sp=0x84, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x421d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x421d, .value=0xc0, .type=IO_READ},
        {.addr=0x421e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xae98, .a=0x14, .x=0x6a, .y=0x27, .sp=0x34, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xae98, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xae99, .a=0x14, .x=0x6a, .y=0x27, .sp=0x34, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xae98, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xae98, .value=0xc0, .type=IO_READ},
        {.addr=0xae99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x47a4, .a=0xbf, .x=0xba, .y=0xea, .sp=0x1f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x47a4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x47a5, .a=0xbf, .x=0xba, .y=0xea, .sp=0x1f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x47a4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x47a4, .value=0xc0, .type=IO_READ},
        {.addr=0x47a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x5e49, .a=0x94, .x=0x56, .y=0x3b, .sp=0xa0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5e49, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e4a, .a=0x94, .x=0x56, .y=0x3b, .sp=0xa0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5e49, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e49, .value=0xc0, .type=IO_READ},
        {.addr=0x5e4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9de5, .a=0x03, .x=0x76, .y=0xbc, .sp=0x69, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x9de5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9de6, .a=0x03, .x=0x76, .y=0xbc, .sp=0x69, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9de5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9de5, .value=0xc0, .type=IO_READ},
        {.addr=0x9de6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xa4a0, .a=0x48, .x=0x85, .y=0x06, .sp=0xcd, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa4a0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa4a1, .a=0x48, .x=0x85, .y=0x06, .sp=0xcd, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xa4a0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa4a0, .value=0xc0, .type=IO_READ},
        {.addr=0xa4a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x3044, .a=0x73, .x=0x9b, .y=0x4d, .sp=0x57, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3044, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3045, .a=0x73, .x=0x9b, .y=0x4d, .sp=0x57, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x3044, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3044, .value=0xc0, .type=IO_READ},
        {.addr=0x3045, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xef11, .a=0x08, .x=0xeb, .y=0x72, .sp=0x31, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xef11, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xef12, .a=0x08, .x=0xeb, .y=0x72, .sp=0x31, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xef11, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xef11, .value=0xc0, .type=IO_READ},
        {.addr=0xef12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x7c0d, .a=0xe6, .x=0x3a, .y=0x45, .sp=0xc3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7c0d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7c0e, .a=0xe6, .x=0x3a, .y=0x45, .sp=0xc3, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x7c0d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7c0d, .value=0xc0, .type=IO_READ},
        {.addr=0x7c0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xe902, .a=0x1e, .x=0xef, .y=0xc3, .sp=0xd6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xe902, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe903, .a=0x1e, .x=0xef, .y=0xc3, .sp=0xd6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe902, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe902, .value=0xc0, .type=IO_READ},
        {.addr=0xe903, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5211, .a=0x7a, .x=0x69, .y=0xef, .sp=0x74, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5211, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5212, .a=0x7a, .x=0x69, .y=0xef, .sp=0x74, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5211, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5211, .value=0xc0, .type=IO_READ},
        {.addr=0x5212, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xbb5f, .a=0x38, .x=0x92, .y=0xe8, .sp=0x69, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbb60, .a=0x38, .x=0x92, .y=0xe8, .sp=0x69, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xbb5f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbb5f, .value=0xc0, .type=IO_READ},
        {.addr=0xbb60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x0f94, .a=0x32, .x=0x29, .y=0xe1, .sp=0x37, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0f94, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0f95, .a=0x32, .x=0x29, .y=0xe1, .sp=0x37, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0f94, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0f94, .value=0xc0, .type=IO_READ},
        {.addr=0x0f95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x00c0, .a=0xd6, .x=0x11, .y=0x44, .sp=0xc9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x00c1, .a=0xd6, .x=0x11, .y=0x44, .sp=0xc9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x00c0, .value=0xc0, .type=IO_READ},
        {.addr=0x00c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x3ae9, .a=0x71, .x=0x02, .y=0x78, .sp=0xc7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3aea, .a=0x71, .x=0x02, .y=0x78, .sp=0xc7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x3ae9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3ae9, .value=0xc0, .type=IO_READ},
        {.addr=0x3aea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xe6d4, .a=0x8a, .x=0xf9, .y=0xa9, .sp=0xb4, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe6d5, .a=0x8a, .x=0xf9, .y=0xa9, .sp=0xb4, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xe6d4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe6d4, .value=0xc0, .type=IO_READ},
        {.addr=0xe6d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xfc33, .a=0x41, .x=0x6a, .y=0x3d, .sp=0x9e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfc33, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfc34, .a=0x41, .x=0x6a, .y=0x3d, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfc33, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfc33, .value=0xc0, .type=IO_READ},
        {.addr=0xfc34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x4c67, .a=0xb0, .x=0xc9, .y=0x65, .sp=0x0f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x4c67, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4c68, .a=0xb0, .x=0xc9, .y=0x65, .sp=0x0f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4c67, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4c67, .value=0xc0, .type=IO_READ},
        {.addr=0x4c68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3b0f, .a=0x0a, .x=0xe9, .y=0x0e, .sp=0xc6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x3b0f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3b10, .a=0x0a, .x=0xe9, .y=0x0e, .sp=0xc6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3b0f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3b0f, .value=0xc0, .type=IO_READ},
        {.addr=0x3b10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x95ae, .a=0xa7, .x=0x69, .y=0x49, .sp=0x4f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x95ae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x95af, .a=0xa7, .x=0x69, .y=0x49, .sp=0x4f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x95ae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x95ae, .value=0xc0, .type=IO_READ},
        {.addr=0x95af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x3fe1, .a=0xd4, .x=0x46, .y=0x30, .sp=0xbc, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3fe2, .a=0xd4, .x=0x46, .y=0x30, .sp=0xbc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3fe1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3fe1, .value=0xc0, .type=IO_READ},
        {.addr=0x3fe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb4c7, .a=0x0d, .x=0x60, .y=0x2e, .sp=0x21, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb4c7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb4c8, .a=0x0d, .x=0x60, .y=0x2e, .sp=0x21, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb4c7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb4c7, .value=0xc0, .type=IO_READ},
        {.addr=0xb4c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xc687, .a=0xdb, .x=0x0f, .y=0x21, .sp=0xda, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xc687, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc688, .a=0xdb, .x=0x0f, .y=0x21, .sp=0xda, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc687, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc687, .value=0xc0, .type=IO_READ},
        {.addr=0xc688, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x0685, .a=0x26, .x=0xf7, .y=0xab, .sp=0x23, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0685, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0686, .a=0x26, .x=0xf7, .y=0xab, .sp=0x23, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0685, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0685, .value=0xc0, .type=IO_READ},
        {.addr=0x0686, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd011, .a=0xbc, .x=0x71, .y=0x8c, .sp=0x5d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd011, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd012, .a=0xbc, .x=0x71, .y=0x8c, .sp=0x5d, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xd011, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd011, .value=0xc0, .type=IO_READ},
        {.addr=0xd012, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xcd6a, .a=0x89, .x=0xa0, .y=0x54, .sp=0xab, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xcd6a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcd6b, .a=0x89, .x=0xa0, .y=0x54, .sp=0xab, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcd6a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcd6a, .value=0xc0, .type=IO_READ},
        {.addr=0xcd6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xf4e9, .a=0x7c, .x=0x89, .y=0x05, .sp=0x3c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf4ea, .a=0x7c, .x=0x89, .y=0x05, .sp=0x3c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xf4e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf4e9, .value=0xc0, .type=IO_READ},
        {.addr=0xf4ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xc4bd, .a=0x5d, .x=0x27, .y=0x66, .sp=0x8f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc4be, .a=0x5d, .x=0x27, .y=0x66, .sp=0x8f, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xc4bd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc4bd, .value=0xc0, .type=IO_READ},
        {.addr=0xc4be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x40f1, .a=0x98, .x=0xbd, .y=0xee, .sp=0xca, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x40f1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x40f2, .a=0x98, .x=0xbd, .y=0xee, .sp=0xca, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x40f1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x40f1, .value=0xc0, .type=IO_READ},
        {.addr=0x40f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x7672, .a=0x0a, .x=0xf0, .y=0x70, .sp=0x19, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x7672, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7673, .a=0x0a, .x=0xf0, .y=0x70, .sp=0x19, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7672, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7672, .value=0xc0, .type=IO_READ},
        {.addr=0x7673, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x568a, .a=0x14, .x=0x7c, .y=0x2a, .sp=0x0d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x568a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x568b, .a=0x14, .x=0x7c, .y=0x2a, .sp=0x0d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x568a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x568a, .value=0xc0, .type=IO_READ},
        {.addr=0x568b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x1106, .a=0x76, .x=0x17, .y=0x8f, .sp=0x8d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1106, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1107, .a=0x76, .x=0x17, .y=0x8f, .sp=0x8d, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x1106, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1106, .value=0xc0, .type=IO_READ},
        {.addr=0x1107, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x88df, .a=0x4b, .x=0xcc, .y=0xec, .sp=0x4c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x88df, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x88e0, .a=0x4b, .x=0xcc, .y=0xec, .sp=0x4c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x88df, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x88df, .value=0xc0, .type=IO_READ},
        {.addr=0x88e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x81bd, .a=0xcc, .x=0x08, .y=0xe1, .sp=0xf1, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x81bd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x81be, .a=0xcc, .x=0x08, .y=0xe1, .sp=0xf1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x81bd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x81bd, .value=0xc0, .type=IO_READ},
        {.addr=0x81be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x4857, .a=0x7c, .x=0x29, .y=0x09, .sp=0x3d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4857, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4858, .a=0x7c, .x=0x29, .y=0x09, .sp=0x3d, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x4857, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4857, .value=0xc0, .type=IO_READ},
        {.addr=0x4858, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x082a, .a=0x38, .x=0x75, .y=0x79, .sp=0xe8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x082a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x082b, .a=0x38, .x=0x75, .y=0x79, .sp=0xe8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x082a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x082a, .value=0xc0, .type=IO_READ},
        {.addr=0x082b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x3eab, .a=0x20, .x=0xd9, .y=0x2a, .sp=0x82, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3eab, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3eac, .a=0x20, .x=0xd9, .y=0x2a, .sp=0x82, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3eab, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3eab, .value=0xc0, .type=IO_READ},
        {.addr=0x3eac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x5a2f, .a=0x94, .x=0xd0, .y=0xbd, .sp=0x91, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5a2f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5a30, .a=0x94, .x=0xd0, .y=0xbd, .sp=0x91, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x5a2f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5a2f, .value=0xc0, .type=IO_READ},
        {.addr=0x5a30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x74bd, .a=0xc4, .x=0x5d, .y=0x07, .sp=0x96, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x74bd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x74be, .a=0xc4, .x=0x5d, .y=0x07, .sp=0x96, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x74bd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x74bd, .value=0xc0, .type=IO_READ},
        {.addr=0x74be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x1861, .a=0x8b, .x=0x49, .y=0xbd, .sp=0x92, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1861, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1862, .a=0x8b, .x=0x49, .y=0xbd, .sp=0x92, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x1861, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1861, .value=0xc0, .type=IO_READ},
        {.addr=0x1862, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x1e2f, .a=0xf6, .x=0xc0, .y=0xd7, .sp=0x45, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1e2f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1e30, .a=0xf6, .x=0xc0, .y=0xd7, .sp=0x45, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1e2f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1e2f, .value=0xc0, .type=IO_READ},
        {.addr=0x1e30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x4e65, .a=0x23, .x=0x3b, .y=0x7b, .sp=0xf3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4e65, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4e66, .a=0x23, .x=0x3b, .y=0x7b, .sp=0xf3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4e65, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4e65, .value=0xc0, .type=IO_READ},
        {.addr=0x4e66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2a7e, .a=0x83, .x=0x63, .y=0x01, .sp=0x75, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2a7f, .a=0x83, .x=0x63, .y=0x01, .sp=0x75, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x2a7e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2a7e, .value=0xc0, .type=IO_READ},
        {.addr=0x2a7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9e77, .a=0x12, .x=0x82, .y=0x91, .sp=0xab, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9e77, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9e78, .a=0x12, .x=0x82, .y=0x91, .sp=0xab, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9e77, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9e77, .value=0xc0, .type=IO_READ},
        {.addr=0x9e78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x4c3c, .a=0xfc, .x=0x8c, .y=0x9a, .sp=0x8e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4c3c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4c3d, .a=0xfc, .x=0x8c, .y=0x9a, .sp=0x8e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4c3c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4c3c, .value=0xc0, .type=IO_READ},
        {.addr=0x4c3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa7db, .a=0x9f, .x=0xd4, .y=0xa6, .sp=0xb4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa7db, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa7dc, .a=0x9f, .x=0xd4, .y=0xa6, .sp=0xb4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa7db, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa7db, .value=0xc0, .type=IO_READ},
        {.addr=0xa7dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xe5d2, .a=0x8e, .x=0xa1, .y=0x9f, .sp=0x0b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe5d3, .a=0x8e, .x=0xa1, .y=0x9f, .sp=0x0b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe5d2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe5d2, .value=0xc0, .type=IO_READ},
        {.addr=0xe5d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x85e7, .a=0xa5, .x=0xf6, .y=0x9c, .sp=0x76, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x85e7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x85e8, .a=0xa5, .x=0xf6, .y=0x9c, .sp=0x76, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x85e7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x85e7, .value=0xc0, .type=IO_READ},
        {.addr=0x85e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x999d, .a=0xca, .x=0xd2, .y=0x36, .sp=0x18, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x999d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x999e, .a=0xca, .x=0xd2, .y=0x36, .sp=0x18, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x999d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x999d, .value=0xc0, .type=IO_READ},
        {.addr=0x999e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x26d1, .a=0x71, .x=0x2f, .y=0x41, .sp=0x38, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x26d1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x26d2, .a=0x71, .x=0x2f, .y=0x41, .sp=0x38, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x26d1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x26d1, .value=0xc0, .type=IO_READ},
        {.addr=0x26d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xcdec, .a=0x2e, .x=0xd9, .y=0xbe, .sp=0xe7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xcdec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcded, .a=0x2e, .x=0xd9, .y=0xbe, .sp=0xe7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xcdec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcdec, .value=0xc0, .type=IO_READ},
        {.addr=0xcded, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x1f84, .a=0x45, .x=0xa7, .y=0x79, .sp=0x41, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1f84, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1f85, .a=0x45, .x=0xa7, .y=0x79, .sp=0x41, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x1f84, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1f84, .value=0xc0, .type=IO_READ},
        {.addr=0x1f85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x6f00, .a=0x53, .x=0x82, .y=0xf1, .sp=0xb6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6f00, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6f01, .a=0x53, .x=0x82, .y=0xf1, .sp=0xb6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6f00, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6f00, .value=0xc0, .type=IO_READ},
        {.addr=0x6f01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xeb55, .a=0x36, .x=0x5e, .y=0x22, .sp=0x31, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xeb55, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xeb56, .a=0x36, .x=0x5e, .y=0x22, .sp=0x31, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xeb55, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xeb55, .value=0xc0, .type=IO_READ},
        {.addr=0xeb56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xfa78, .a=0xca, .x=0x75, .y=0x2f, .sp=0x11, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xfa78, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfa79, .a=0xca, .x=0x75, .y=0x2f, .sp=0x11, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfa78, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfa78, .value=0xc0, .type=IO_READ},
        {.addr=0xfa79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x8acc, .a=0xc9, .x=0x5d, .y=0x9f, .sp=0x92, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8acc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8acd, .a=0xc9, .x=0x5d, .y=0x9f, .sp=0x92, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8acc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8acc, .value=0xc0, .type=IO_READ},
        {.addr=0x8acd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x8e42, .a=0xff, .x=0xe9, .y=0xdc, .sp=0x6a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e42, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8e43, .a=0xff, .x=0xe9, .y=0xdc, .sp=0x6a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8e42, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8e42, .value=0xc0, .type=IO_READ},
        {.addr=0x8e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xb923, .a=0x8c, .x=0x74, .y=0x9f, .sp=0x1a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xb923, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb924, .a=0x8c, .x=0x74, .y=0x9f, .sp=0x1a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb923, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb923, .value=0xc0, .type=IO_READ},
        {.addr=0xb924, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x69b3, .a=0x03, .x=0xf9, .y=0x1d, .sp=0x9e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x69b3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x69b4, .a=0x03, .x=0xf9, .y=0x1d, .sp=0x9e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x69b3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x69b3, .value=0xc0, .type=IO_READ},
        {.addr=0x69b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xe1b2, .a=0xd0, .x=0xb2, .y=0xdc, .sp=0xc1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe1b3, .a=0xd0, .x=0xb2, .y=0xdc, .sp=0xc1, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xe1b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe1b2, .value=0xc0, .type=IO_READ},
        {.addr=0xe1b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x4605, .a=0x92, .x=0x03, .y=0x40, .sp=0xfa, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4605, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4606, .a=0x92, .x=0x03, .y=0x40, .sp=0xfa, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x4605, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4605, .value=0xc0, .type=IO_READ},
        {.addr=0x4606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x94a8, .a=0x36, .x=0x52, .y=0x09, .sp=0x10, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x94a8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x94a9, .a=0x36, .x=0x52, .y=0x09, .sp=0x10, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x94a8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x94a8, .value=0xc0, .type=IO_READ},
        {.addr=0x94a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8aba, .a=0x30, .x=0x7d, .y=0xc7, .sp=0xee, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8aba, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8abb, .a=0x30, .x=0x7d, .y=0xc7, .sp=0xee, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x8aba, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8aba, .value=0xc0, .type=IO_READ},
        {.addr=0x8abb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x680e, .a=0x3b, .x=0x51, .y=0x68, .sp=0x78, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x680e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x680f, .a=0x3b, .x=0x51, .y=0x68, .sp=0x78, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x680e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x680e, .value=0xc0, .type=IO_READ},
        {.addr=0x680f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0200) {
    const struct CPU_State initial_cpu = {.pc=0x8830, .a=0xeb, .x=0xf4, .y=0x41, .sp=0x8e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8830, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8831, .a=0xeb, .x=0xf4, .y=0x41, .sp=0x8e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8830, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8830, .value=0xc0, .type=IO_READ},
        {.addr=0x8831, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0201) {
    const struct CPU_State initial_cpu = {.pc=0x8fd7, .a=0x79, .x=0xc7, .y=0x59, .sp=0x56, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8fd8, .a=0x79, .x=0xc7, .y=0x59, .sp=0x56, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x8fd7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8fd7, .value=0xc0, .type=IO_READ},
        {.addr=0x8fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0202) {
    const struct CPU_State initial_cpu = {.pc=0x4555, .a=0x03, .x=0x7a, .y=0xb3, .sp=0x71, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4555, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4556, .a=0x03, .x=0x7a, .y=0xb3, .sp=0x71, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x4555, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4555, .value=0xc0, .type=IO_READ},
        {.addr=0x4556, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0203) {
    const struct CPU_State initial_cpu = {.pc=0x4a95, .a=0xfb, .x=0x70, .y=0x7b, .sp=0x9f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4a96, .a=0xfb, .x=0x70, .y=0x7b, .sp=0x9f, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x4a95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4a95, .value=0xc0, .type=IO_READ},
        {.addr=0x4a96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0204) {
    const struct CPU_State initial_cpu = {.pc=0x3354, .a=0xcc, .x=0x4b, .y=0xfc, .sp=0x1b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3354, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3355, .a=0xcc, .x=0x4b, .y=0xfc, .sp=0x1b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3354, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3354, .value=0xc0, .type=IO_READ},
        {.addr=0x3355, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0205) {
    const struct CPU_State initial_cpu = {.pc=0x1779, .a=0xbb, .x=0x6d, .y=0x96, .sp=0x31, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1779, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x177a, .a=0xbb, .x=0x6d, .y=0x96, .sp=0x31, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x1779, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1779, .value=0xc0, .type=IO_READ},
        {.addr=0x177a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0206) {
    const struct CPU_State initial_cpu = {.pc=0x8c42, .a=0x92, .x=0x73, .y=0xfe, .sp=0xba, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8c42, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8c43, .a=0x92, .x=0x73, .y=0xfe, .sp=0xba, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x8c42, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8c42, .value=0xc0, .type=IO_READ},
        {.addr=0x8c43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0207) {
    const struct CPU_State initial_cpu = {.pc=0x2a9c, .a=0xaa, .x=0x8c, .y=0x23, .sp=0x04, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2a9c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2a9d, .a=0xaa, .x=0x8c, .y=0x23, .sp=0x04, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x2a9c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2a9c, .value=0xc0, .type=IO_READ},
        {.addr=0x2a9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0db0, .a=0x70, .x=0xca, .y=0x59, .sp=0x7e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0db0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0db1, .a=0x70, .x=0xca, .y=0x59, .sp=0x7e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0db0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0db0, .value=0xc0, .type=IO_READ},
        {.addr=0x0db1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0209) {
    const struct CPU_State initial_cpu = {.pc=0x1ecc, .a=0xe5, .x=0x0c, .y=0x7b, .sp=0x9e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1ecc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1ecd, .a=0xe5, .x=0x0c, .y=0x7b, .sp=0x9e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1ecc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1ecc, .value=0xc0, .type=IO_READ},
        {.addr=0x1ecd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020A) {
    const struct CPU_State initial_cpu = {.pc=0x2924, .a=0x1e, .x=0x33, .y=0xa4, .sp=0xbb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2924, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2925, .a=0x1e, .x=0x33, .y=0xa4, .sp=0xbb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2924, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2924, .value=0xc0, .type=IO_READ},
        {.addr=0x2925, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020B) {
    const struct CPU_State initial_cpu = {.pc=0x99de, .a=0x4c, .x=0x08, .y=0xe3, .sp=0x35, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x99de, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x99df, .a=0x4c, .x=0x08, .y=0xe3, .sp=0x35, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x99de, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x99de, .value=0xc0, .type=IO_READ},
        {.addr=0x99df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020C) {
    const struct CPU_State initial_cpu = {.pc=0xa3fd, .a=0x20, .x=0x16, .y=0x43, .sp=0xa5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa3fe, .a=0x20, .x=0x16, .y=0x43, .sp=0xa5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa3fd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa3fd, .value=0xc0, .type=IO_READ},
        {.addr=0xa3fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020D) {
    const struct CPU_State initial_cpu = {.pc=0x31b2, .a=0x2e, .x=0xb8, .y=0xe0, .sp=0xf3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x31b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x31b3, .a=0x2e, .x=0xb8, .y=0xe0, .sp=0xf3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x31b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x31b2, .value=0xc0, .type=IO_READ},
        {.addr=0x31b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020E) {
    const struct CPU_State initial_cpu = {.pc=0xbb2b, .a=0x8d, .x=0x53, .y=0xbc, .sp=0xb1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb2b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbb2c, .a=0x8d, .x=0x53, .y=0xbc, .sp=0xb1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xbb2b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbb2b, .value=0xc0, .type=IO_READ},
        {.addr=0xbb2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb07b, .a=0x4c, .x=0xda, .y=0xba, .sp=0x00, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb07b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb07c, .a=0x4c, .x=0xda, .y=0xba, .sp=0x00, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xb07b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb07b, .value=0xc0, .type=IO_READ},
        {.addr=0xb07c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0210) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0xaf, .x=0x61, .y=0xd1, .sp=0xcb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x652b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x652c, .a=0xaf, .x=0x61, .y=0xd1, .sp=0xcb, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x652b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0xc0, .type=IO_READ},
        {.addr=0x652c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0211) {
    const struct CPU_State initial_cpu = {.pc=0x145a, .a=0xa4, .x=0x4e, .y=0x84, .sp=0x9d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x145a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x145b, .a=0xa4, .x=0x4e, .y=0x84, .sp=0x9d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x145a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x145a, .value=0xc0, .type=IO_READ},
        {.addr=0x145b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0212) {
    const struct CPU_State initial_cpu = {.pc=0x5d1c, .a=0xa8, .x=0x85, .y=0xdc, .sp=0x03, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5d1c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5d1d, .a=0xa8, .x=0x85, .y=0xdc, .sp=0x03, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5d1c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5d1c, .value=0xc0, .type=IO_READ},
        {.addr=0x5d1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0213) {
    const struct CPU_State initial_cpu = {.pc=0x15e5, .a=0xc3, .x=0x27, .y=0x02, .sp=0x9a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x15e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x15e6, .a=0xc3, .x=0x27, .y=0x02, .sp=0x9a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x15e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x15e5, .value=0xc0, .type=IO_READ},
        {.addr=0x15e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8742, .a=0x37, .x=0x49, .y=0xf4, .sp=0xf9, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8742, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8743, .a=0x37, .x=0x49, .y=0xf4, .sp=0xf9, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x8742, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8742, .value=0xc0, .type=IO_READ},
        {.addr=0x8743, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0215) {
    const struct CPU_State initial_cpu = {.pc=0x3cb8, .a=0xa5, .x=0x3b, .y=0x76, .sp=0x6d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3cb9, .a=0xa5, .x=0x3b, .y=0x76, .sp=0x6d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x3cb8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3cb8, .value=0xc0, .type=IO_READ},
        {.addr=0x3cb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0216) {
    const struct CPU_State initial_cpu = {.pc=0xe084, .a=0xcf, .x=0x1a, .y=0x2c, .sp=0x4a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe084, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe085, .a=0xcf, .x=0x1a, .y=0x2c, .sp=0x4a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe084, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe084, .value=0xc0, .type=IO_READ},
        {.addr=0xe085, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5b6f, .a=0xfc, .x=0x78, .y=0x18, .sp=0xc1, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5b6f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5b70, .a=0xfc, .x=0x78, .y=0x18, .sp=0xc1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5b6f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5b6f, .value=0xc0, .type=IO_READ},
        {.addr=0x5b70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0218) {
    const struct CPU_State initial_cpu = {.pc=0x7469, .a=0x19, .x=0x1f, .y=0x6f, .sp=0xff, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7469, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x746a, .a=0x19, .x=0x1f, .y=0x6f, .sp=0xff, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x7469, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7469, .value=0xc0, .type=IO_READ},
        {.addr=0x746a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0219) {
    const struct CPU_State initial_cpu = {.pc=0x59c1, .a=0x44, .x=0x8a, .y=0x41, .sp=0xec, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x59c1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59c2, .a=0x44, .x=0x8a, .y=0x41, .sp=0xec, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x59c1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59c1, .value=0xc0, .type=IO_READ},
        {.addr=0x59c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x5398, .a=0xaf, .x=0x33, .y=0x72, .sp=0xe4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5398, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5399, .a=0xaf, .x=0x33, .y=0x72, .sp=0xe4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x5398, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5398, .value=0xc0, .type=IO_READ},
        {.addr=0x5399, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021B) {
    const struct CPU_State initial_cpu = {.pc=0x17b0, .a=0x36, .x=0x18, .y=0xe1, .sp=0x68, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x17b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x17b1, .a=0x36, .x=0x18, .y=0xe1, .sp=0x68, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x17b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x17b0, .value=0xc0, .type=IO_READ},
        {.addr=0x17b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021C) {
    const struct CPU_State initial_cpu = {.pc=0x67f7, .a=0xbc, .x=0x9b, .y=0xec, .sp=0xe2, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x67f7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x67f8, .a=0xbc, .x=0x9b, .y=0xec, .sp=0xe2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x67f7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x67f7, .value=0xc0, .type=IO_READ},
        {.addr=0x67f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021D) {
    const struct CPU_State initial_cpu = {.pc=0xbeab, .a=0x52, .x=0x15, .y=0x23, .sp=0xe4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xbeab, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbeac, .a=0x52, .x=0x15, .y=0x23, .sp=0xe4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xbeab, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbeab, .value=0xc0, .type=IO_READ},
        {.addr=0xbeac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021E) {
    const struct CPU_State initial_cpu = {.pc=0x513c, .a=0x30, .x=0xba, .y=0xfe, .sp=0x0e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x513c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x513d, .a=0x30, .x=0xba, .y=0xfe, .sp=0x0e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x513c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x513c, .value=0xc0, .type=IO_READ},
        {.addr=0x513d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_021F) {
    const struct CPU_State initial_cpu = {.pc=0x9bc7, .a=0x4c, .x=0x44, .y=0x8f, .sp=0x71, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bc8, .a=0x4c, .x=0x44, .y=0x8f, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9bc7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bc7, .value=0xc0, .type=IO_READ},
        {.addr=0x9bc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0220) {
    const struct CPU_State initial_cpu = {.pc=0x5d8b, .a=0xd3, .x=0x11, .y=0xe5, .sp=0x87, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x5d8b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5d8c, .a=0xd3, .x=0x11, .y=0xe5, .sp=0x87, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5d8b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5d8b, .value=0xc0, .type=IO_READ},
        {.addr=0x5d8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0221) {
    const struct CPU_State initial_cpu = {.pc=0xcc6d, .a=0xea, .x=0xbf, .y=0x88, .sp=0x48, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcc6e, .a=0xea, .x=0xbf, .y=0x88, .sp=0x48, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xcc6d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcc6d, .value=0xc0, .type=IO_READ},
        {.addr=0xcc6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0222) {
    const struct CPU_State initial_cpu = {.pc=0x982f, .a=0x6a, .x=0xb0, .y=0x34, .sp=0x3d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x982f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9830, .a=0x6a, .x=0xb0, .y=0x34, .sp=0x3d, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x982f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x982f, .value=0xc0, .type=IO_READ},
        {.addr=0x9830, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0223) {
    const struct CPU_State initial_cpu = {.pc=0x8efb, .a=0x12, .x=0x1e, .y=0xe4, .sp=0xff, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8efb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8efc, .a=0x12, .x=0x1e, .y=0xe4, .sp=0xff, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x8efb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8efb, .value=0xc0, .type=IO_READ},
        {.addr=0x8efc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0224) {
    const struct CPU_State initial_cpu = {.pc=0x5679, .a=0x97, .x=0x87, .y=0x22, .sp=0xfe, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5679, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x567a, .a=0x97, .x=0x87, .y=0x22, .sp=0xfe, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5679, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5679, .value=0xc0, .type=IO_READ},
        {.addr=0x567a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0225) {
    const struct CPU_State initial_cpu = {.pc=0x5d96, .a=0xaa, .x=0xc8, .y=0xbf, .sp=0x6d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5d96, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5d97, .a=0xaa, .x=0xc8, .y=0xbf, .sp=0x6d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5d96, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5d96, .value=0xc0, .type=IO_READ},
        {.addr=0x5d97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0226) {
    const struct CPU_State initial_cpu = {.pc=0x5c73, .a=0xdd, .x=0x6b, .y=0x29, .sp=0x12, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5c73, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5c74, .a=0xdd, .x=0x6b, .y=0x29, .sp=0x12, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x5c73, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5c73, .value=0xc0, .type=IO_READ},
        {.addr=0x5c74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0227) {
    const struct CPU_State initial_cpu = {.pc=0x8585, .a=0x7a, .x=0x33, .y=0x2e, .sp=0x3f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8585, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8586, .a=0x7a, .x=0x33, .y=0x2e, .sp=0x3f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8585, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8585, .value=0xc0, .type=IO_READ},
        {.addr=0x8586, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0228) {
    const struct CPU_State initial_cpu = {.pc=0xabe0, .a=0x41, .x=0x89, .y=0x19, .sp=0xbc, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xabe0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xabe1, .a=0x41, .x=0x89, .y=0x19, .sp=0xbc, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xabe0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xabe0, .value=0xc0, .type=IO_READ},
        {.addr=0xabe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x7d79, .a=0xc8, .x=0x7a, .y=0xc4, .sp=0x4b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7d79, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d7a, .a=0xc8, .x=0x7a, .y=0xc4, .sp=0x4b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x7d79, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d79, .value=0xc0, .type=IO_READ},
        {.addr=0x7d7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022A) {
    const struct CPU_State initial_cpu = {.pc=0x1735, .a=0x98, .x=0xf2, .y=0xab, .sp=0xe8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x1735, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1736, .a=0x98, .x=0xf2, .y=0xab, .sp=0xe8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1735, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1735, .value=0xc0, .type=IO_READ},
        {.addr=0x1736, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xbe9a, .a=0xf7, .x=0x0a, .y=0x23, .sp=0x26, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xbe9a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbe9b, .a=0xf7, .x=0x0a, .y=0x23, .sp=0x26, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xbe9a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbe9a, .value=0xc0, .type=IO_READ},
        {.addr=0xbe9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022C) {
    const struct CPU_State initial_cpu = {.pc=0x3811, .a=0x6b, .x=0x4a, .y=0x41, .sp=0xda, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3811, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3812, .a=0x6b, .x=0x4a, .y=0x41, .sp=0xda, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3811, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3811, .value=0xc0, .type=IO_READ},
        {.addr=0x3812, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022D) {
    const struct CPU_State initial_cpu = {.pc=0xbdd8, .a=0xb7, .x=0xf2, .y=0xbb, .sp=0x80, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbdd9, .a=0xb7, .x=0xf2, .y=0xbb, .sp=0x80, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbdd8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbdd8, .value=0xc0, .type=IO_READ},
        {.addr=0xbdd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022E) {
    const struct CPU_State initial_cpu = {.pc=0x9ca0, .a=0x77, .x=0x42, .y=0xf2, .sp=0x1b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ca0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9ca1, .a=0x77, .x=0x42, .y=0xf2, .sp=0x1b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x9ca0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9ca0, .value=0xc0, .type=IO_READ},
        {.addr=0x9ca1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe207, .a=0xe4, .x=0xd8, .y=0x07, .sp=0x1f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe207, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe208, .a=0xe4, .x=0xd8, .y=0x07, .sp=0x1f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe207, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe207, .value=0xc0, .type=IO_READ},
        {.addr=0xe208, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0230) {
    const struct CPU_State initial_cpu = {.pc=0x6bd7, .a=0xba, .x=0xf0, .y=0x6e, .sp=0x76, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6bd8, .a=0xba, .x=0xf0, .y=0x6e, .sp=0x76, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x6bd7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6bd7, .value=0xc0, .type=IO_READ},
        {.addr=0x6bd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0231) {
    const struct CPU_State initial_cpu = {.pc=0x6af9, .a=0x45, .x=0x66, .y=0xb7, .sp=0xa4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6af9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6afa, .a=0x45, .x=0x66, .y=0xb7, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6af9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6af9, .value=0xc0, .type=IO_READ},
        {.addr=0x6afa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0232) {
    const struct CPU_State initial_cpu = {.pc=0xb741, .a=0x56, .x=0xc1, .y=0xa0, .sp=0xd2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb741, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb742, .a=0x56, .x=0xc1, .y=0xa0, .sp=0xd2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb741, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb741, .value=0xc0, .type=IO_READ},
        {.addr=0xb742, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0233) {
    const struct CPU_State initial_cpu = {.pc=0x4f6b, .a=0x36, .x=0xd3, .y=0x88, .sp=0x7c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4f6b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4f6c, .a=0x36, .x=0xd3, .y=0x88, .sp=0x7c, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x4f6b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4f6b, .value=0xc0, .type=IO_READ},
        {.addr=0x4f6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0234) {
    const struct CPU_State initial_cpu = {.pc=0xf9bb, .a=0xf2, .x=0xed, .y=0x2d, .sp=0xfa, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf9bb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf9bc, .a=0xf2, .x=0xed, .y=0x2d, .sp=0xfa, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf9bb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf9bb, .value=0xc0, .type=IO_READ},
        {.addr=0xf9bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x07cf, .a=0x31, .x=0x4d, .y=0x04, .sp=0xfb, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x07cf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x07d0, .a=0x31, .x=0x4d, .y=0x04, .sp=0xfb, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x07cf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x07cf, .value=0xc0, .type=IO_READ},
        {.addr=0x07d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0236) {
    const struct CPU_State initial_cpu = {.pc=0x2cd7, .a=0x62, .x=0xd9, .y=0x97, .sp=0xd8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2cd8, .a=0x62, .x=0xd9, .y=0x97, .sp=0xd8, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x2cd7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2cd7, .value=0xc0, .type=IO_READ},
        {.addr=0x2cd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0237) {
    const struct CPU_State initial_cpu = {.pc=0x44b1, .a=0x0d, .x=0xcd, .y=0xb0, .sp=0x2e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x44b1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x44b2, .a=0x0d, .x=0xcd, .y=0xb0, .sp=0x2e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x44b1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x44b1, .value=0xc0, .type=IO_READ},
        {.addr=0x44b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0238) {
    const struct CPU_State initial_cpu = {.pc=0x5fa8, .a=0x3c, .x=0x8c, .y=0x3b, .sp=0x7c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5fa9, .a=0x3c, .x=0x8c, .y=0x3b, .sp=0x7c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5fa8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5fa8, .value=0xc0, .type=IO_READ},
        {.addr=0x5fa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0239) {
    const struct CPU_State initial_cpu = {.pc=0x9ac9, .a=0xa4, .x=0xb2, .y=0x25, .sp=0x4c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9aca, .a=0xa4, .x=0xb2, .y=0x25, .sp=0x4c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9ac9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9ac9, .value=0xc0, .type=IO_READ},
        {.addr=0x9aca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023A) {
    const struct CPU_State initial_cpu = {.pc=0x7144, .a=0x7e, .x=0x30, .y=0x5a, .sp=0x20, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7144, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7145, .a=0x7e, .x=0x30, .y=0x5a, .sp=0x20, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7144, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7144, .value=0xc0, .type=IO_READ},
        {.addr=0x7145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023B) {
    const struct CPU_State initial_cpu = {.pc=0x2b1a, .a=0xdb, .x=0x1c, .y=0x4b, .sp=0x07, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2b1a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2b1b, .a=0xdb, .x=0x1c, .y=0x4b, .sp=0x07, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x2b1a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2b1a, .value=0xc0, .type=IO_READ},
        {.addr=0x2b1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3ecf, .a=0x08, .x=0xf5, .y=0x85, .sp=0x54, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3ecf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3ed0, .a=0x08, .x=0xf5, .y=0x85, .sp=0x54, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3ecf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3ecf, .value=0xc0, .type=IO_READ},
        {.addr=0x3ed0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x6ac6, .a=0x90, .x=0xd2, .y=0x53, .sp=0x24, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6ac7, .a=0x90, .x=0xd2, .y=0x53, .sp=0x24, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6ac6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6ac6, .value=0xc0, .type=IO_READ},
        {.addr=0x6ac7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023E) {
    const struct CPU_State initial_cpu = {.pc=0x302c, .a=0x29, .x=0xf4, .y=0x05, .sp=0x5c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x302c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x302d, .a=0x29, .x=0xf4, .y=0x05, .sp=0x5c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x302c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x302c, .value=0xc0, .type=IO_READ},
        {.addr=0x302d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_023F) {
    const struct CPU_State initial_cpu = {.pc=0xaa3c, .a=0xb5, .x=0xbe, .y=0x79, .sp=0xf0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa3c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaa3d, .a=0xb5, .x=0xbe, .y=0x79, .sp=0xf0, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xaa3c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaa3c, .value=0xc0, .type=IO_READ},
        {.addr=0xaa3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0240) {
    const struct CPU_State initial_cpu = {.pc=0x8382, .a=0xbd, .x=0xdf, .y=0xee, .sp=0x10, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8382, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8383, .a=0xbd, .x=0xdf, .y=0xee, .sp=0x10, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8382, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8382, .value=0xc0, .type=IO_READ},
        {.addr=0x8383, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0241) {
    const struct CPU_State initial_cpu = {.pc=0xe0fc, .a=0x32, .x=0x24, .y=0xd9, .sp=0x3d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe0fd, .a=0x32, .x=0x24, .y=0xd9, .sp=0x3d, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe0fc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe0fc, .value=0xc0, .type=IO_READ},
        {.addr=0xe0fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0242) {
    const struct CPU_State initial_cpu = {.pc=0xb3ff, .a=0x87, .x=0x06, .y=0x43, .sp=0x70, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb400, .a=0x87, .x=0x06, .y=0x43, .sp=0x70, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xb3ff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb3ff, .value=0xc0, .type=IO_READ},
        {.addr=0xb400, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0243) {
    const struct CPU_State initial_cpu = {.pc=0x6bcb, .a=0x95, .x=0x3c, .y=0xe5, .sp=0xc4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6bcc, .a=0x95, .x=0x3c, .y=0xe5, .sp=0xc4, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6bcb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6bcb, .value=0xc0, .type=IO_READ},
        {.addr=0x6bcc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0937, .a=0x6c, .x=0x56, .y=0x2f, .sp=0x77, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0937, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0938, .a=0x6c, .x=0x56, .y=0x2f, .sp=0x77, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0937, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0937, .value=0xc0, .type=IO_READ},
        {.addr=0x0938, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0245) {
    const struct CPU_State initial_cpu = {.pc=0x84ae, .a=0x38, .x=0x83, .y=0xa3, .sp=0x88, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x84ae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x84af, .a=0x38, .x=0x83, .y=0xa3, .sp=0x88, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x84ae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x84ae, .value=0xc0, .type=IO_READ},
        {.addr=0x84af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0246) {
    const struct CPU_State initial_cpu = {.pc=0x0ee8, .a=0x7f, .x=0x27, .y=0x04, .sp=0xc3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0ee9, .a=0x7f, .x=0x27, .y=0x04, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0ee8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0ee8, .value=0xc0, .type=IO_READ},
        {.addr=0x0ee9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0247) {
    const struct CPU_State initial_cpu = {.pc=0xa5b6, .a=0x1f, .x=0x54, .y=0xa5, .sp=0x84, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa5b7, .a=0x1f, .x=0x54, .y=0xa5, .sp=0x84, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa5b6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa5b6, .value=0xc0, .type=IO_READ},
        {.addr=0xa5b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0248) {
    const struct CPU_State initial_cpu = {.pc=0x22f2, .a=0x11, .x=0x89, .y=0x89, .sp=0xc3, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x22f2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x22f3, .a=0x11, .x=0x89, .y=0x89, .sp=0xc3, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x22f2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x22f2, .value=0xc0, .type=IO_READ},
        {.addr=0x22f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0249) {
    const struct CPU_State initial_cpu = {.pc=0xe75d, .a=0x18, .x=0xdd, .y=0x1b, .sp=0x50, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe75d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe75e, .a=0x18, .x=0xdd, .y=0x1b, .sp=0x50, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe75d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe75d, .value=0xc0, .type=IO_READ},
        {.addr=0xe75e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024A) {
    const struct CPU_State initial_cpu = {.pc=0x87ee, .a=0x42, .x=0x2a, .y=0x35, .sp=0x1b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x87ee, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x87ef, .a=0x42, .x=0x2a, .y=0x35, .sp=0x1b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x87ee, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x87ee, .value=0xc0, .type=IO_READ},
        {.addr=0x87ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024B) {
    const struct CPU_State initial_cpu = {.pc=0x45ea, .a=0xb7, .x=0x27, .y=0xef, .sp=0x86, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x45ea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x45eb, .a=0xb7, .x=0x27, .y=0xef, .sp=0x86, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x45ea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x45ea, .value=0xc0, .type=IO_READ},
        {.addr=0x45eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024C) {
    const struct CPU_State initial_cpu = {.pc=0xdda7, .a=0x64, .x=0xf0, .y=0x03, .sp=0xb2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xdda7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdda8, .a=0x64, .x=0xf0, .y=0x03, .sp=0xb2, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xdda7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdda7, .value=0xc0, .type=IO_READ},
        {.addr=0xdda8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024D) {
    const struct CPU_State initial_cpu = {.pc=0x532a, .a=0x3c, .x=0x5a, .y=0x70, .sp=0x6f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x532a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x532b, .a=0x3c, .x=0x5a, .y=0x70, .sp=0x6f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x532a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x532a, .value=0xc0, .type=IO_READ},
        {.addr=0x532b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024E) {
    const struct CPU_State initial_cpu = {.pc=0x84df, .a=0x68, .x=0x8c, .y=0xcc, .sp=0x5a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x84df, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x84e0, .a=0x68, .x=0x8c, .y=0xcc, .sp=0x5a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x84df, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x84df, .value=0xc0, .type=IO_READ},
        {.addr=0x84e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_024F) {
    const struct CPU_State initial_cpu = {.pc=0xc253, .a=0x7d, .x=0x10, .y=0x0f, .sp=0x73, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc253, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc254, .a=0x7d, .x=0x10, .y=0x0f, .sp=0x73, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc253, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc253, .value=0xc0, .type=IO_READ},
        {.addr=0xc254, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0250) {
    const struct CPU_State initial_cpu = {.pc=0xca59, .a=0x2d, .x=0x17, .y=0x37, .sp=0x43, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xca59, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xca5a, .a=0x2d, .x=0x17, .y=0x37, .sp=0x43, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xca59, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xca59, .value=0xc0, .type=IO_READ},
        {.addr=0xca5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0251) {
    const struct CPU_State initial_cpu = {.pc=0x1862, .a=0x68, .x=0x96, .y=0xdf, .sp=0x83, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1862, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1863, .a=0x68, .x=0x96, .y=0xdf, .sp=0x83, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1862, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1862, .value=0xc0, .type=IO_READ},
        {.addr=0x1863, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0252) {
    const struct CPU_State initial_cpu = {.pc=0x0d78, .a=0x9c, .x=0x4e, .y=0xf2, .sp=0xe4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d78, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0d79, .a=0x9c, .x=0x4e, .y=0xf2, .sp=0xe4, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0d78, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0d78, .value=0xc0, .type=IO_READ},
        {.addr=0x0d79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0253) {
    const struct CPU_State initial_cpu = {.pc=0x202f, .a=0x36, .x=0x23, .y=0x8e, .sp=0x06, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x202f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2030, .a=0x36, .x=0x23, .y=0x8e, .sp=0x06, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x202f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x202f, .value=0xc0, .type=IO_READ},
        {.addr=0x2030, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0254) {
    const struct CPU_State initial_cpu = {.pc=0x8b00, .a=0x53, .x=0x5f, .y=0xe2, .sp=0xe2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b00, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8b01, .a=0x53, .x=0x5f, .y=0xe2, .sp=0xe2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8b00, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8b00, .value=0xc0, .type=IO_READ},
        {.addr=0x8b01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0255) {
    const struct CPU_State initial_cpu = {.pc=0xeaf2, .a=0xa6, .x=0x48, .y=0xd9, .sp=0x0e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xeaf2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xeaf3, .a=0xa6, .x=0x48, .y=0xd9, .sp=0x0e, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xeaf2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xeaf2, .value=0xc0, .type=IO_READ},
        {.addr=0xeaf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0256) {
    const struct CPU_State initial_cpu = {.pc=0x3e6a, .a=0x67, .x=0x5b, .y=0x71, .sp=0x1b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3e6a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3e6b, .a=0x67, .x=0x5b, .y=0x71, .sp=0x1b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3e6a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3e6a, .value=0xc0, .type=IO_READ},
        {.addr=0x3e6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0257) {
    const struct CPU_State initial_cpu = {.pc=0xfceb, .a=0x20, .x=0x27, .y=0x52, .sp=0xab, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xfceb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfcec, .a=0x20, .x=0x27, .y=0x52, .sp=0xab, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfceb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfceb, .value=0xc0, .type=IO_READ},
        {.addr=0xfcec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0258) {
    const struct CPU_State initial_cpu = {.pc=0xeb4b, .a=0x07, .x=0xcb, .y=0x3d, .sp=0xb1, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xeb4b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xeb4c, .a=0x07, .x=0xcb, .y=0x3d, .sp=0xb1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xeb4b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xeb4b, .value=0xc0, .type=IO_READ},
        {.addr=0xeb4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0259) {
    const struct CPU_State initial_cpu = {.pc=0xfd2e, .a=0x26, .x=0x16, .y=0xc9, .sp=0xd2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfd2f, .a=0x26, .x=0x16, .y=0xc9, .sp=0xd2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xfd2e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfd2e, .value=0xc0, .type=IO_READ},
        {.addr=0xfd2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025A) {
    const struct CPU_State initial_cpu = {.pc=0xbe3b, .a=0xf1, .x=0xda, .y=0x97, .sp=0xd4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbe3c, .a=0xf1, .x=0xda, .y=0x97, .sp=0xd4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbe3b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbe3b, .value=0xc0, .type=IO_READ},
        {.addr=0xbe3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025B) {
    const struct CPU_State initial_cpu = {.pc=0xb67c, .a=0xe5, .x=0x1a, .y=0x74, .sp=0xb4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb67c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb67d, .a=0xe5, .x=0x1a, .y=0x74, .sp=0xb4, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xb67c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb67c, .value=0xc0, .type=IO_READ},
        {.addr=0xb67d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd449, .a=0xde, .x=0xf1, .y=0x8c, .sp=0x73, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd449, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd44a, .a=0xde, .x=0xf1, .y=0x8c, .sp=0x73, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd449, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd449, .value=0xc0, .type=IO_READ},
        {.addr=0xd44a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025D) {
    const struct CPU_State initial_cpu = {.pc=0xaea3, .a=0x8e, .x=0xa3, .y=0x72, .sp=0xf2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xaea3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaea4, .a=0x8e, .x=0xa3, .y=0x72, .sp=0xf2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xaea3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaea3, .value=0xc0, .type=IO_READ},
        {.addr=0xaea4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb401, .a=0x4d, .x=0x6a, .y=0x27, .sp=0x82, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xb401, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb402, .a=0x4d, .x=0x6a, .y=0x27, .sp=0x82, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xb401, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb401, .value=0xc0, .type=IO_READ},
        {.addr=0xb402, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_025F) {
    const struct CPU_State initial_cpu = {.pc=0x9faf, .a=0x49, .x=0x05, .y=0x30, .sp=0x29, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9faf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9fb0, .a=0x49, .x=0x05, .y=0x30, .sp=0x29, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x9faf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9faf, .value=0xc0, .type=IO_READ},
        {.addr=0x9fb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0260) {
    const struct CPU_State initial_cpu = {.pc=0xb626, .a=0x2d, .x=0x2c, .y=0x89, .sp=0x0b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb626, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb627, .a=0x2d, .x=0x2c, .y=0x89, .sp=0x0b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb626, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb626, .value=0xc0, .type=IO_READ},
        {.addr=0xb627, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0261) {
    const struct CPU_State initial_cpu = {.pc=0x565d, .a=0x6a, .x=0x00, .y=0x3d, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x565d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x565e, .a=0x6a, .x=0x00, .y=0x3d, .sp=0x51, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x565d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x565d, .value=0xc0, .type=IO_READ},
        {.addr=0x565e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0262) {
    const struct CPU_State initial_cpu = {.pc=0xe53b, .a=0xac, .x=0x8e, .y=0xc1, .sp=0xa4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe53b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe53c, .a=0xac, .x=0x8e, .y=0xc1, .sp=0xa4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe53b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe53b, .value=0xc0, .type=IO_READ},
        {.addr=0xe53c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0263) {
    const struct CPU_State initial_cpu = {.pc=0x25b3, .a=0x38, .x=0x81, .y=0x3b, .sp=0x0d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x25b3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x25b4, .a=0x38, .x=0x81, .y=0x3b, .sp=0x0d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x25b3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x25b3, .value=0xc0, .type=IO_READ},
        {.addr=0x25b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0264) {
    const struct CPU_State initial_cpu = {.pc=0x95be, .a=0x6e, .x=0x8a, .y=0x8c, .sp=0x3b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x95be, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x95bf, .a=0x6e, .x=0x8a, .y=0x8c, .sp=0x3b, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x95be, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x95be, .value=0xc0, .type=IO_READ},
        {.addr=0x95bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0265) {
    const struct CPU_State initial_cpu = {.pc=0xd400, .a=0xab, .x=0x00, .y=0x33, .sp=0x7a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd400, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd401, .a=0xab, .x=0x00, .y=0x33, .sp=0x7a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd400, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd400, .value=0xc0, .type=IO_READ},
        {.addr=0xd401, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0266) {
    const struct CPU_State initial_cpu = {.pc=0xc425, .a=0xb5, .x=0x8c, .y=0x88, .sp=0x92, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc425, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc426, .a=0xb5, .x=0x8c, .y=0x88, .sp=0x92, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xc425, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc425, .value=0xc0, .type=IO_READ},
        {.addr=0xc426, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0267) {
    const struct CPU_State initial_cpu = {.pc=0x90e4, .a=0xad, .x=0x3b, .y=0xc4, .sp=0xa8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x90e4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x90e5, .a=0xad, .x=0x3b, .y=0xc4, .sp=0xa8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x90e4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x90e4, .value=0xc0, .type=IO_READ},
        {.addr=0x90e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0268) {
    const struct CPU_State initial_cpu = {.pc=0x2bf4, .a=0xc9, .x=0xdc, .y=0x28, .sp=0xbb, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2bf4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2bf5, .a=0xc9, .x=0xdc, .y=0x28, .sp=0xbb, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x2bf4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2bf4, .value=0xc0, .type=IO_READ},
        {.addr=0x2bf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0269) {
    const struct CPU_State initial_cpu = {.pc=0x4f7c, .a=0x4b, .x=0xb7, .y=0x86, .sp=0xf9, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4f7d, .a=0x4b, .x=0xb7, .y=0x86, .sp=0xf9, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x4f7c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4f7c, .value=0xc0, .type=IO_READ},
        {.addr=0x4f7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026A) {
    const struct CPU_State initial_cpu = {.pc=0xac95, .a=0xec, .x=0x56, .y=0x92, .sp=0x40, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xac95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xac96, .a=0xec, .x=0x56, .y=0x92, .sp=0x40, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xac95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xac95, .value=0xc0, .type=IO_READ},
        {.addr=0xac96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026B) {
    const struct CPU_State initial_cpu = {.pc=0xee0e, .a=0x6f, .x=0x40, .y=0xdc, .sp=0xa2, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xee0e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xee0f, .a=0x6f, .x=0x40, .y=0xdc, .sp=0xa2, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xee0e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xee0e, .value=0xc0, .type=IO_READ},
        {.addr=0xee0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026C) {
    const struct CPU_State initial_cpu = {.pc=0x6d64, .a=0x0f, .x=0xa7, .y=0x64, .sp=0x62, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x6d64, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6d65, .a=0x0f, .x=0xa7, .y=0x64, .sp=0x62, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6d64, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6d64, .value=0xc0, .type=IO_READ},
        {.addr=0x6d65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026D) {
    const struct CPU_State initial_cpu = {.pc=0x7c7b, .a=0x9d, .x=0x77, .y=0x62, .sp=0x71, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7c7b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7c7c, .a=0x9d, .x=0x77, .y=0x62, .sp=0x71, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x7c7b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7c7b, .value=0xc0, .type=IO_READ},
        {.addr=0x7c7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026E) {
    const struct CPU_State initial_cpu = {.pc=0xd7d7, .a=0xc4, .x=0xad, .y=0x47, .sp=0x68, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd7d8, .a=0xc4, .x=0xad, .y=0x47, .sp=0x68, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xd7d7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd7d7, .value=0xc0, .type=IO_READ},
        {.addr=0xd7d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_026F) {
    const struct CPU_State initial_cpu = {.pc=0xbb6a, .a=0x9f, .x=0x53, .y=0x03, .sp=0x67, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xbb6a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbb6b, .a=0x9f, .x=0x53, .y=0x03, .sp=0x67, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbb6a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbb6a, .value=0xc0, .type=IO_READ},
        {.addr=0xbb6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0270) {
    const struct CPU_State initial_cpu = {.pc=0x8654, .a=0x30, .x=0xfc, .y=0x0a, .sp=0xab, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8654, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8655, .a=0x30, .x=0xfc, .y=0x0a, .sp=0xab, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8654, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8654, .value=0xc0, .type=IO_READ},
        {.addr=0x8655, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0271) {
    const struct CPU_State initial_cpu = {.pc=0x474f, .a=0xca, .x=0xe2, .y=0x6d, .sp=0xdf, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x474f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4750, .a=0xca, .x=0xe2, .y=0x6d, .sp=0xdf, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x474f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x474f, .value=0xc0, .type=IO_READ},
        {.addr=0x4750, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0272) {
    const struct CPU_State initial_cpu = {.pc=0xdfec, .a=0x7b, .x=0xe8, .y=0x15, .sp=0x76, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdfec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdfed, .a=0x7b, .x=0xe8, .y=0x15, .sp=0x76, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xdfec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdfec, .value=0xc0, .type=IO_READ},
        {.addr=0xdfed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0273) {
    const struct CPU_State initial_cpu = {.pc=0xecbb, .a=0x2a, .x=0x27, .y=0xf0, .sp=0xa2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xecbb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xecbc, .a=0x2a, .x=0x27, .y=0xf0, .sp=0xa2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xecbb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xecbb, .value=0xc0, .type=IO_READ},
        {.addr=0xecbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0274) {
    const struct CPU_State initial_cpu = {.pc=0x47e5, .a=0xa2, .x=0xf2, .y=0x16, .sp=0xd4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x47e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x47e6, .a=0xa2, .x=0xf2, .y=0x16, .sp=0xd4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x47e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x47e5, .value=0xc0, .type=IO_READ},
        {.addr=0x47e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0275) {
    const struct CPU_State initial_cpu = {.pc=0x0f50, .a=0xc6, .x=0x7a, .y=0x7e, .sp=0x76, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0f50, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0f51, .a=0xc6, .x=0x7a, .y=0x7e, .sp=0x76, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0f50, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0f50, .value=0xc0, .type=IO_READ},
        {.addr=0x0f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0276) {
    const struct CPU_State initial_cpu = {.pc=0x422a, .a=0xf4, .x=0xf4, .y=0x8a, .sp=0x91, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x422a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x422b, .a=0xf4, .x=0xf4, .y=0x8a, .sp=0x91, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x422a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x422a, .value=0xc0, .type=IO_READ},
        {.addr=0x422b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6e2c, .a=0xcf, .x=0x3d, .y=0x01, .sp=0x46, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6e2d, .a=0xcf, .x=0x3d, .y=0x01, .sp=0x46, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6e2c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6e2c, .value=0xc0, .type=IO_READ},
        {.addr=0x6e2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0278) {
    const struct CPU_State initial_cpu = {.pc=0x91c6, .a=0x27, .x=0xa1, .y=0x15, .sp=0x1b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x91c6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x91c7, .a=0x27, .x=0xa1, .y=0x15, .sp=0x1b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x91c6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x91c6, .value=0xc0, .type=IO_READ},
        {.addr=0x91c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x827b, .a=0xa3, .x=0x8b, .y=0x74, .sp=0x5d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x827b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x827c, .a=0xa3, .x=0x8b, .y=0x74, .sp=0x5d, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x827b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x827b, .value=0xc0, .type=IO_READ},
        {.addr=0x827c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027A) {
    const struct CPU_State initial_cpu = {.pc=0x0058, .a=0xea, .x=0x9f, .y=0x28, .sp=0xd3, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0059, .a=0xea, .x=0x9f, .y=0x28, .sp=0xd3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0058, .value=0xc0, .type=IO_READ},
        {.addr=0x0059, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027B) {
    const struct CPU_State initial_cpu = {.pc=0xda2d, .a=0xf4, .x=0xb5, .y=0xee, .sp=0xdf, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xda2d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xda2e, .a=0xf4, .x=0xb5, .y=0xee, .sp=0xdf, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xda2d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xda2d, .value=0xc0, .type=IO_READ},
        {.addr=0xda2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027C) {
    const struct CPU_State initial_cpu = {.pc=0x0fec, .a=0xe4, .x=0xb1, .y=0xf5, .sp=0xca, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0fec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0fed, .a=0xe4, .x=0xb1, .y=0xf5, .sp=0xca, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0fec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0fec, .value=0xc0, .type=IO_READ},
        {.addr=0x0fed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027D) {
    const struct CPU_State initial_cpu = {.pc=0x9e9e, .a=0x15, .x=0x0f, .y=0x1c, .sp=0xb0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9e9f, .a=0x15, .x=0x0f, .y=0x1c, .sp=0xb0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9e9e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9e9e, .value=0xc0, .type=IO_READ},
        {.addr=0x9e9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027E) {
    const struct CPU_State initial_cpu = {.pc=0xdea0, .a=0x65, .x=0x6f, .y=0x4a, .sp=0xff, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xdea0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdea1, .a=0x65, .x=0x6f, .y=0x4a, .sp=0xff, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xdea0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdea0, .value=0xc0, .type=IO_READ},
        {.addr=0xdea1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_027F) {
    const struct CPU_State initial_cpu = {.pc=0xd926, .a=0x9b, .x=0xbb, .y=0x20, .sp=0x47, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xd926, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd927, .a=0x9b, .x=0xbb, .y=0x20, .sp=0x47, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd926, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd926, .value=0xc0, .type=IO_READ},
        {.addr=0xd927, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0280) {
    const struct CPU_State initial_cpu = {.pc=0xc1e5, .a=0xf1, .x=0x2f, .y=0x4c, .sp=0xe0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc1e6, .a=0xf1, .x=0x2f, .y=0x4c, .sp=0xe0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc1e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc1e5, .value=0xc0, .type=IO_READ},
        {.addr=0xc1e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9dc7, .a=0xee, .x=0x47, .y=0xb1, .sp=0x82, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9dc8, .a=0xee, .x=0x47, .y=0xb1, .sp=0x82, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x9dc7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9dc7, .value=0xc0, .type=IO_READ},
        {.addr=0x9dc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0282) {
    const struct CPU_State initial_cpu = {.pc=0xb975, .a=0x99, .x=0xca, .y=0xe0, .sp=0x00, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb975, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb976, .a=0x99, .x=0xca, .y=0xe0, .sp=0x00, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xb975, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb975, .value=0xc0, .type=IO_READ},
        {.addr=0xb976, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0283) {
    const struct CPU_State initial_cpu = {.pc=0xc9eb, .a=0xaf, .x=0x19, .y=0x4f, .sp=0xf6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc9eb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc9ec, .a=0xaf, .x=0x19, .y=0x4f, .sp=0xf6, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xc9eb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc9eb, .value=0xc0, .type=IO_READ},
        {.addr=0xc9ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0284) {
    const struct CPU_State initial_cpu = {.pc=0xf1bc, .a=0x83, .x=0x9c, .y=0x2d, .sp=0xff, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf1bc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf1bd, .a=0x83, .x=0x9c, .y=0x2d, .sp=0xff, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf1bc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf1bc, .value=0xc0, .type=IO_READ},
        {.addr=0xf1bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0285) {
    const struct CPU_State initial_cpu = {.pc=0x33ed, .a=0xce, .x=0x57, .y=0x24, .sp=0x73, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x33ed, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x33ee, .a=0xce, .x=0x57, .y=0x24, .sp=0x73, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x33ed, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x33ed, .value=0xc0, .type=IO_READ},
        {.addr=0x33ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0286) {
    const struct CPU_State initial_cpu = {.pc=0x3a85, .a=0x63, .x=0x3a, .y=0xe8, .sp=0x41, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3a85, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a86, .a=0x63, .x=0x3a, .y=0xe8, .sp=0x41, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x3a85, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a85, .value=0xc0, .type=IO_READ},
        {.addr=0x3a86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0287) {
    const struct CPU_State initial_cpu = {.pc=0xf246, .a=0x35, .x=0x1e, .y=0xc3, .sp=0x16, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf246, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf247, .a=0x35, .x=0x1e, .y=0xc3, .sp=0x16, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xf246, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf246, .value=0xc0, .type=IO_READ},
        {.addr=0xf247, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0288) {
    const struct CPU_State initial_cpu = {.pc=0x4989, .a=0x11, .x=0x5f, .y=0xf8, .sp=0x1b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4989, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x498a, .a=0x11, .x=0x5f, .y=0xf8, .sp=0x1b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4989, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4989, .value=0xc0, .type=IO_READ},
        {.addr=0x498a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0289) {
    const struct CPU_State initial_cpu = {.pc=0xd1ba, .a=0x3b, .x=0x09, .y=0x6d, .sp=0x57, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ba, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd1bb, .a=0x3b, .x=0x09, .y=0x6d, .sp=0x57, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd1ba, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd1ba, .value=0xc0, .type=IO_READ},
        {.addr=0xd1bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0e3b, .a=0xab, .x=0x18, .y=0xfc, .sp=0xb5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0e3b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0e3c, .a=0xab, .x=0x18, .y=0xfc, .sp=0xb5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0e3b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0e3b, .value=0xc0, .type=IO_READ},
        {.addr=0x0e3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028B) {
    const struct CPU_State initial_cpu = {.pc=0x66f2, .a=0x3e, .x=0xb0, .y=0xa4, .sp=0xb5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x66f2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x66f3, .a=0x3e, .x=0xb0, .y=0xa4, .sp=0xb5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x66f2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x66f2, .value=0xc0, .type=IO_READ},
        {.addr=0x66f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028C) {
    const struct CPU_State initial_cpu = {.pc=0xe3f8, .a=0xbd, .x=0xec, .y=0xe9, .sp=0xc4, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe3f9, .a=0xbd, .x=0xec, .y=0xe9, .sp=0xc4, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xe3f8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe3f8, .value=0xc0, .type=IO_READ},
        {.addr=0xe3f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028D) {
    const struct CPU_State initial_cpu = {.pc=0xbe65, .a=0x37, .x=0xda, .y=0x71, .sp=0x64, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe65, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbe66, .a=0x37, .x=0xda, .y=0x71, .sp=0x64, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xbe65, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbe65, .value=0xc0, .type=IO_READ},
        {.addr=0xbe66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028E) {
    const struct CPU_State initial_cpu = {.pc=0x1a32, .a=0x17, .x=0xe9, .y=0xf8, .sp=0x42, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1a32, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1a33, .a=0x17, .x=0xe9, .y=0xf8, .sp=0x42, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x1a32, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1a32, .value=0xc0, .type=IO_READ},
        {.addr=0x1a33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_028F) {
    const struct CPU_State initial_cpu = {.pc=0x2994, .a=0xb8, .x=0x53, .y=0xdf, .sp=0x1d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2994, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2995, .a=0xb8, .x=0x53, .y=0xdf, .sp=0x1d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2994, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2994, .value=0xc0, .type=IO_READ},
        {.addr=0x2995, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0290) {
    const struct CPU_State initial_cpu = {.pc=0x7843, .a=0xff, .x=0x48, .y=0x1f, .sp=0xe8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7843, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7844, .a=0xff, .x=0x48, .y=0x1f, .sp=0xe8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7843, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7843, .value=0xc0, .type=IO_READ},
        {.addr=0x7844, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0291) {
    const struct CPU_State initial_cpu = {.pc=0x3f91, .a=0x41, .x=0x3a, .y=0xe6, .sp=0xb2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3f91, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3f92, .a=0x41, .x=0x3a, .y=0xe6, .sp=0xb2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3f91, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3f91, .value=0xc0, .type=IO_READ},
        {.addr=0x3f92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0292) {
    const struct CPU_State initial_cpu = {.pc=0x02e2, .a=0xb6, .x=0x00, .y=0x44, .sp=0x32, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x02e2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x02e3, .a=0xb6, .x=0x00, .y=0x44, .sp=0x32, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x02e2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x02e2, .value=0xc0, .type=IO_READ},
        {.addr=0x02e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0293) {
    const struct CPU_State initial_cpu = {.pc=0x3c5c, .a=0xc9, .x=0x81, .y=0x32, .sp=0xf6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3c5c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3c5d, .a=0xc9, .x=0x81, .y=0x32, .sp=0xf6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x3c5c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3c5c, .value=0xc0, .type=IO_READ},
        {.addr=0x3c5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0294) {
    const struct CPU_State initial_cpu = {.pc=0x15a9, .a=0xf4, .x=0xb5, .y=0x26, .sp=0x2a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x15a9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x15aa, .a=0xf4, .x=0xb5, .y=0x26, .sp=0x2a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x15a9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x15a9, .value=0xc0, .type=IO_READ},
        {.addr=0x15aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9377, .a=0x19, .x=0x8c, .y=0x62, .sp=0xc0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9377, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9378, .a=0x19, .x=0x8c, .y=0x62, .sp=0xc0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9377, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9377, .value=0xc0, .type=IO_READ},
        {.addr=0x9378, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0296) {
    const struct CPU_State initial_cpu = {.pc=0x067a, .a=0x71, .x=0x15, .y=0x18, .sp=0xa0, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x067a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x067b, .a=0x71, .x=0x15, .y=0x18, .sp=0xa0, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x067a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x067a, .value=0xc0, .type=IO_READ},
        {.addr=0x067b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0297) {
    const struct CPU_State initial_cpu = {.pc=0xcfdd, .a=0x82, .x=0x8a, .y=0x74, .sp=0x11, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xcfdd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcfde, .a=0x82, .x=0x8a, .y=0x74, .sp=0x11, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xcfdd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcfdd, .value=0xc0, .type=IO_READ},
        {.addr=0xcfde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0298) {
    const struct CPU_State initial_cpu = {.pc=0x61ae, .a=0x36, .x=0xa3, .y=0xb0, .sp=0x0f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x61ae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x61af, .a=0x36, .x=0xa3, .y=0xb0, .sp=0x0f, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x61ae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x61ae, .value=0xc0, .type=IO_READ},
        {.addr=0x61af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0299) {
    const struct CPU_State initial_cpu = {.pc=0x5db0, .a=0x2e, .x=0xf2, .y=0x66, .sp=0x99, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x5db0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5db1, .a=0x2e, .x=0xf2, .y=0x66, .sp=0x99, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5db0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5db0, .value=0xc0, .type=IO_READ},
        {.addr=0x5db1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029A) {
    const struct CPU_State initial_cpu = {.pc=0xc513, .a=0x2d, .x=0x2a, .y=0xf0, .sp=0xa8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc513, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc514, .a=0x2d, .x=0x2a, .y=0xf0, .sp=0xa8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc513, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc513, .value=0xc0, .type=IO_READ},
        {.addr=0xc514, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x7d99, .a=0x34, .x=0xed, .y=0xef, .sp=0xc2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7d99, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d9a, .a=0x34, .x=0xed, .y=0xef, .sp=0xc2, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7d99, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d99, .value=0xc0, .type=IO_READ},
        {.addr=0x7d9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029C) {
    const struct CPU_State initial_cpu = {.pc=0xa450, .a=0xc2, .x=0xc2, .y=0x92, .sp=0x99, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xa450, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa451, .a=0xc2, .x=0xc2, .y=0x92, .sp=0x99, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa450, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa450, .value=0xc0, .type=IO_READ},
        {.addr=0xa451, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029D) {
    const struct CPU_State initial_cpu = {.pc=0x4736, .a=0xce, .x=0x1a, .y=0x89, .sp=0x51, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4736, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4737, .a=0xce, .x=0x1a, .y=0x89, .sp=0x51, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x4736, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4736, .value=0xc0, .type=IO_READ},
        {.addr=0x4737, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa24e, .a=0xed, .x=0xad, .y=0x81, .sp=0x58, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa24e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa24f, .a=0xed, .x=0xad, .y=0x81, .sp=0x58, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa24e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa24e, .value=0xc0, .type=IO_READ},
        {.addr=0xa24f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_029F) {
    const struct CPU_State initial_cpu = {.pc=0xdd5f, .a=0xf9, .x=0xee, .y=0x48, .sp=0x81, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdd5f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdd60, .a=0xf9, .x=0xee, .y=0x48, .sp=0x81, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xdd5f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdd5f, .value=0xc0, .type=IO_READ},
        {.addr=0xdd60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5466, .a=0xc8, .x=0x1a, .y=0x55, .sp=0x42, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5466, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5467, .a=0xc8, .x=0x1a, .y=0x55, .sp=0x42, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5466, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5466, .value=0xc0, .type=IO_READ},
        {.addr=0x5467, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x8cfe, .a=0x70, .x=0xd0, .y=0x81, .sp=0x57, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8cfe, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8cff, .a=0x70, .x=0xd0, .y=0x81, .sp=0x57, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8cfe, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8cfe, .value=0xc0, .type=IO_READ},
        {.addr=0x8cff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xd8a9, .a=0xaf, .x=0x9d, .y=0xe1, .sp=0xb2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd8aa, .a=0xaf, .x=0x9d, .y=0xe1, .sp=0xb2, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xd8a9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd8a9, .value=0xc0, .type=IO_READ},
        {.addr=0xd8aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xaafb, .a=0x25, .x=0x9e, .y=0x15, .sp=0xc0, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xaafb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaafc, .a=0x25, .x=0x9e, .y=0x15, .sp=0xc0, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xaafb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaafb, .value=0xc0, .type=IO_READ},
        {.addr=0xaafc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0x88, .x=0x2d, .y=0xc1, .sp=0x4d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8248, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8249, .a=0x88, .x=0x2d, .y=0xc1, .sp=0x4d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x8248, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0xc0, .type=IO_READ},
        {.addr=0x8249, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xda1b, .a=0xb9, .x=0xed, .y=0x40, .sp=0x90, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xda1b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xda1c, .a=0xb9, .x=0xed, .y=0x40, .sp=0x90, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xda1b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xda1b, .value=0xc0, .type=IO_READ},
        {.addr=0xda1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x1cce, .a=0xf3, .x=0x5b, .y=0x6f, .sp=0x5e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1cce, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1ccf, .a=0xf3, .x=0x5b, .y=0x6f, .sp=0x5e, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x1cce, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1cce, .value=0xc0, .type=IO_READ},
        {.addr=0x1ccf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xdf08, .a=0x0f, .x=0x0e, .y=0x18, .sp=0x73, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf08, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdf09, .a=0x0f, .x=0x0e, .y=0x18, .sp=0x73, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xdf08, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdf08, .value=0xc0, .type=IO_READ},
        {.addr=0xdf09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x01e9, .a=0x83, .x=0x49, .y=0xf8, .sp=0x1d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x01ea, .a=0x83, .x=0x49, .y=0xf8, .sp=0x1d, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x01e9, .value=0xc0, .type=IO_READ},
        {.addr=0x01ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x8971, .a=0xe0, .x=0x73, .y=0x09, .sp=0x8d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8971, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8972, .a=0xe0, .x=0x73, .y=0x09, .sp=0x8d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8971, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8971, .value=0xc0, .type=IO_READ},
        {.addr=0x8972, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x9160, .a=0xba, .x=0x51, .y=0xc3, .sp=0xca, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9160, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9161, .a=0xba, .x=0x51, .y=0xc3, .sp=0xca, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9160, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9160, .value=0xc0, .type=IO_READ},
        {.addr=0x9161, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xcb1c, .a=0x19, .x=0x13, .y=0xcd, .sp=0x00, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcb1d, .a=0x19, .x=0x13, .y=0xcd, .sp=0x00, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcb1c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcb1c, .value=0xc0, .type=IO_READ},
        {.addr=0xcb1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x9be3, .a=0xd5, .x=0x4e, .y=0x78, .sp=0x45, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9be3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9be4, .a=0xd5, .x=0x4e, .y=0x78, .sp=0x45, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9be3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9be3, .value=0xc0, .type=IO_READ},
        {.addr=0x9be4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x84b6, .a=0xf3, .x=0x16, .y=0x6a, .sp=0x7a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x84b6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x84b7, .a=0xf3, .x=0x16, .y=0x6a, .sp=0x7a, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x84b6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x84b6, .value=0xc0, .type=IO_READ},
        {.addr=0x84b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3f7e, .a=0x0e, .x=0xe6, .y=0x46, .sp=0x09, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3f7e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3f7f, .a=0x0e, .x=0xe6, .y=0x46, .sp=0x09, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x3f7e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3f7e, .value=0xc0, .type=IO_READ},
        {.addr=0x3f7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xa4d4, .a=0x7c, .x=0x10, .y=0x29, .sp=0x08, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa4d5, .a=0x7c, .x=0x10, .y=0x29, .sp=0x08, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xa4d4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa4d4, .value=0xc0, .type=IO_READ},
        {.addr=0xa4d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1a5d, .a=0xaf, .x=0xd9, .y=0x95, .sp=0xdd, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1a5d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1a5e, .a=0xaf, .x=0xd9, .y=0x95, .sp=0xdd, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x1a5d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1a5d, .value=0xc0, .type=IO_READ},
        {.addr=0x1a5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x6c4c, .a=0x10, .x=0x10, .y=0x29, .sp=0xd4, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6c4d, .a=0x10, .x=0x10, .y=0x29, .sp=0xd4, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6c4c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6c4c, .value=0xc0, .type=IO_READ},
        {.addr=0x6c4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x4692, .a=0xa3, .x=0x5a, .y=0x06, .sp=0x62, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4692, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4693, .a=0xa3, .x=0x5a, .y=0x06, .sp=0x62, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x4692, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4692, .value=0xc0, .type=IO_READ},
        {.addr=0x4693, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xbf68, .a=0xe3, .x=0x35, .y=0xd0, .sp=0x5a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbf68, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbf69, .a=0xe3, .x=0x35, .y=0xd0, .sp=0x5a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbf68, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbf68, .value=0xc0, .type=IO_READ},
        {.addr=0xbf69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x0f92, .a=0x68, .x=0x36, .y=0xbf, .sp=0x8b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0f92, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0f93, .a=0x68, .x=0x36, .y=0xbf, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0f92, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0f92, .value=0xc0, .type=IO_READ},
        {.addr=0x0f93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x3a27, .a=0x0a, .x=0xa0, .y=0xb9, .sp=0xcf, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3a27, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3a28, .a=0x0a, .x=0xa0, .y=0xb9, .sp=0xcf, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x3a27, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3a27, .value=0xc0, .type=IO_READ},
        {.addr=0x3a28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xfb03, .a=0x69, .x=0xb7, .y=0xcc, .sp=0x7c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xfb03, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfb04, .a=0x69, .x=0xb7, .y=0xcc, .sp=0x7c, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xfb03, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfb03, .value=0xc0, .type=IO_READ},
        {.addr=0xfb04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x5c8c, .a=0x6e, .x=0x97, .y=0x8d, .sp=0xcb, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5c8c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5c8d, .a=0x6e, .x=0x97, .y=0x8d, .sp=0xcb, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x5c8c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5c8c, .value=0xc0, .type=IO_READ},
        {.addr=0x5c8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3247, .a=0x16, .x=0xf4, .y=0x42, .sp=0x1d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3247, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3248, .a=0x16, .x=0xf4, .y=0x42, .sp=0x1d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3247, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3247, .value=0xc0, .type=IO_READ},
        {.addr=0x3248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5fb8, .a=0xf9, .x=0xfa, .y=0x54, .sp=0x15, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5fb9, .a=0xf9, .x=0xfa, .y=0x54, .sp=0x15, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5fb8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5fb8, .value=0xc0, .type=IO_READ},
        {.addr=0x5fb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x2475, .a=0x9d, .x=0x55, .y=0x58, .sp=0xf5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2475, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2476, .a=0x9d, .x=0x55, .y=0x58, .sp=0xf5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2475, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2475, .value=0xc0, .type=IO_READ},
        {.addr=0x2476, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x9e95, .a=0xb6, .x=0x4b, .y=0xf5, .sp=0x42, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9e95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9e96, .a=0xb6, .x=0x4b, .y=0xf5, .sp=0x42, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9e95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9e95, .value=0xc0, .type=IO_READ},
        {.addr=0x9e96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x2fb0, .a=0x0d, .x=0x28, .y=0x12, .sp=0x02, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2fb1, .a=0x0d, .x=0x28, .y=0x12, .sp=0x02, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2fb0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2fb0, .value=0xc0, .type=IO_READ},
        {.addr=0x2fb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc443, .a=0x18, .x=0x91, .y=0x28, .sp=0x29, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc443, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc444, .a=0x18, .x=0x91, .y=0x28, .sp=0x29, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xc443, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc443, .value=0xc0, .type=IO_READ},
        {.addr=0xc444, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x9bc6, .a=0x69, .x=0x3d, .y=0x27, .sp=0x3f, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bc7, .a=0x69, .x=0x3d, .y=0x27, .sp=0x3f, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x9bc6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bc6, .value=0xc0, .type=IO_READ},
        {.addr=0x9bc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x29c4, .a=0x34, .x=0xa9, .y=0xbb, .sp=0x90, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x29c4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x29c5, .a=0x34, .x=0xa9, .y=0xbb, .sp=0x90, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x29c4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x29c4, .value=0xc0, .type=IO_READ},
        {.addr=0x29c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x77c5, .a=0x7a, .x=0x28, .y=0x8c, .sp=0x67, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x77c5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x77c6, .a=0x7a, .x=0x28, .y=0x8c, .sp=0x67, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x77c5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x77c5, .value=0xc0, .type=IO_READ},
        {.addr=0x77c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x81f8, .a=0xfe, .x=0x84, .y=0x05, .sp=0x26, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x81f8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x81f9, .a=0xfe, .x=0x84, .y=0x05, .sp=0x26, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x81f8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x81f8, .value=0xc0, .type=IO_READ},
        {.addr=0x81f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x3717, .a=0x95, .x=0xa0, .y=0x67, .sp=0x6c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3717, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3718, .a=0x95, .x=0xa0, .y=0x67, .sp=0x6c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3717, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3717, .value=0xc0, .type=IO_READ},
        {.addr=0x3718, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x2d89, .a=0x37, .x=0xf0, .y=0x8d, .sp=0xf1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2d89, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2d8a, .a=0x37, .x=0xf0, .y=0x8d, .sp=0xf1, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x2d89, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2d89, .value=0xc0, .type=IO_READ},
        {.addr=0x2d8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x4d80, .a=0xaa, .x=0x08, .y=0xb2, .sp=0x3f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d80, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4d81, .a=0xaa, .x=0x08, .y=0xb2, .sp=0x3f, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x4d80, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4d80, .value=0xc0, .type=IO_READ},
        {.addr=0x4d81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x6154, .a=0xcc, .x=0x89, .y=0x2b, .sp=0x6e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x6154, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6155, .a=0xcc, .x=0x89, .y=0x2b, .sp=0x6e, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x6154, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6154, .value=0xc0, .type=IO_READ},
        {.addr=0x6155, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x2954, .a=0xe1, .x=0x11, .y=0x9a, .sp=0x7c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2954, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2955, .a=0xe1, .x=0x11, .y=0x9a, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2954, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2954, .value=0xc0, .type=IO_READ},
        {.addr=0x2955, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x6b12, .a=0x5d, .x=0xa1, .y=0x8a, .sp=0x5c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6b12, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6b13, .a=0x5d, .x=0xa1, .y=0x8a, .sp=0x5c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x6b12, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6b12, .value=0xc0, .type=IO_READ},
        {.addr=0x6b13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x00c1, .a=0xf2, .x=0x7e, .y=0xcb, .sp=0xd6, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x00c2, .a=0xf2, .x=0x7e, .y=0xcb, .sp=0xd6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x00c1, .value=0xc0, .type=IO_READ},
        {.addr=0x00c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x5e0e, .a=0x5d, .x=0x11, .y=0xaf, .sp=0x2c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5e0e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e0f, .a=0x5d, .x=0x11, .y=0xaf, .sp=0x2c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5e0e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e0e, .value=0xc0, .type=IO_READ},
        {.addr=0x5e0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x4cd8, .a=0x8e, .x=0x3f, .y=0x12, .sp=0xb2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4cd9, .a=0x8e, .x=0x3f, .y=0x12, .sp=0xb2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4cd8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4cd8, .value=0xc0, .type=IO_READ},
        {.addr=0x4cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd0e9, .a=0xfb, .x=0x28, .y=0xb4, .sp=0xab, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0xfb, .x=0x28, .y=0xb4, .sp=0xab, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd0e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd0e9, .value=0xc0, .type=IO_READ},
        {.addr=0xd0ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x0fc9, .a=0x1c, .x=0xd3, .y=0xc2, .sp=0x0b, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0fca, .a=0x1c, .x=0xd3, .y=0xc2, .sp=0x0b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0fc9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0fc9, .value=0xc0, .type=IO_READ},
        {.addr=0x0fca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xe570, .a=0x20, .x=0xd4, .y=0x5e, .sp=0x5d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe570, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe571, .a=0x20, .x=0xd4, .y=0x5e, .sp=0x5d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xe570, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe570, .value=0xc0, .type=IO_READ},
        {.addr=0xe571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xe90a, .a=0x6c, .x=0xd9, .y=0xb3, .sp=0x16, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe90a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe90b, .a=0x6c, .x=0xd9, .y=0xb3, .sp=0x16, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe90a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe90a, .value=0xc0, .type=IO_READ},
        {.addr=0xe90b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xc448, .a=0xe5, .x=0x8f, .y=0x58, .sp=0xd1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc448, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc449, .a=0xe5, .x=0x8f, .y=0x58, .sp=0xd1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc448, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc448, .value=0xc0, .type=IO_READ},
        {.addr=0xc449, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x3f70, .a=0xea, .x=0x07, .y=0x17, .sp=0x07, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3f70, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3f71, .a=0xea, .x=0x07, .y=0x17, .sp=0x07, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3f70, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3f70, .value=0xc0, .type=IO_READ},
        {.addr=0x3f71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2ecb, .a=0xfd, .x=0x88, .y=0xe4, .sp=0x96, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2ecb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2ecc, .a=0xfd, .x=0x88, .y=0xe4, .sp=0x96, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x2ecb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2ecb, .value=0xc0, .type=IO_READ},
        {.addr=0x2ecc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x8450, .a=0xcf, .x=0x74, .y=0x1e, .sp=0x59, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8450, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8451, .a=0xcf, .x=0x74, .y=0x1e, .sp=0x59, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8450, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8450, .value=0xc0, .type=IO_READ},
        {.addr=0x8451, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x82ce, .a=0xcc, .x=0xa4, .y=0xa3, .sp=0x97, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x82ce, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x82cf, .a=0xcc, .x=0xa4, .y=0xa3, .sp=0x97, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x82ce, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x82ce, .value=0xc0, .type=IO_READ},
        {.addr=0x82cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xc58f, .a=0xd9, .x=0x15, .y=0xdb, .sp=0xb4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc58f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc590, .a=0xd9, .x=0x15, .y=0xdb, .sp=0xb4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc58f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc58f, .value=0xc0, .type=IO_READ},
        {.addr=0xc590, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xd580, .a=0x3e, .x=0x56, .y=0x17, .sp=0xe5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd580, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd581, .a=0x3e, .x=0x56, .y=0x17, .sp=0xe5, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xd580, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd580, .value=0xc0, .type=IO_READ},
        {.addr=0xd581, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9fb4, .a=0xce, .x=0xf2, .y=0x00, .sp=0xab, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9fb5, .a=0xce, .x=0xf2, .y=0x00, .sp=0xab, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9fb4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9fb4, .value=0xc0, .type=IO_READ},
        {.addr=0x9fb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x83ad, .a=0x4d, .x=0x89, .y=0x97, .sp=0xfe, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x83ad, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x83ae, .a=0x4d, .x=0x89, .y=0x97, .sp=0xfe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x83ad, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x83ad, .value=0xc0, .type=IO_READ},
        {.addr=0x83ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xffe7, .a=0x35, .x=0xc8, .y=0xc9, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xffe7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xffe8, .a=0x35, .x=0xc8, .y=0xc9, .sp=0x6d, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xffe7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xffe7, .value=0xc0, .type=IO_READ},
        {.addr=0xffe8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x40e5, .a=0x95, .x=0xc0, .y=0x1b, .sp=0xec, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x40e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x40e6, .a=0x95, .x=0xc0, .y=0x1b, .sp=0xec, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x40e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x40e5, .value=0xc0, .type=IO_READ},
        {.addr=0x40e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7501, .a=0xbd, .x=0xb9, .y=0xe3, .sp=0x8a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x7501, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7502, .a=0xbd, .x=0xb9, .y=0xe3, .sp=0x8a, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x7501, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7501, .value=0xc0, .type=IO_READ},
        {.addr=0x7502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x0d5a, .a=0x8d, .x=0xae, .y=0x34, .sp=0x97, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0d5b, .a=0x8d, .x=0xae, .y=0x34, .sp=0x97, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0d5a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0d5a, .value=0xc0, .type=IO_READ},
        {.addr=0x0d5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x30e2, .a=0x2e, .x=0xf3, .y=0x62, .sp=0x01, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x30e2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x30e3, .a=0x2e, .x=0xf3, .y=0x62, .sp=0x01, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x30e2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x30e2, .value=0xc0, .type=IO_READ},
        {.addr=0x30e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xa0de, .a=0x57, .x=0x67, .y=0x28, .sp=0xd6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa0de, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa0df, .a=0x57, .x=0x67, .y=0x28, .sp=0xd6, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xa0de, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa0de, .value=0xc0, .type=IO_READ},
        {.addr=0xa0df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xa4e9, .a=0x7c, .x=0x62, .y=0xf1, .sp=0x0b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa4ea, .a=0x7c, .x=0x62, .y=0xf1, .sp=0x0b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa4e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa4e9, .value=0xc0, .type=IO_READ},
        {.addr=0xa4ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x6195, .a=0xa1, .x=0x03, .y=0x2e, .sp=0x27, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x6195, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6196, .a=0xa1, .x=0x03, .y=0x2e, .sp=0x27, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6195, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6195, .value=0xc0, .type=IO_READ},
        {.addr=0x6196, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xcf3b, .a=0x04, .x=0x13, .y=0xa2, .sp=0xd9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xcf3b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcf3c, .a=0x04, .x=0x13, .y=0xa2, .sp=0xd9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xcf3b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcf3b, .value=0xc0, .type=IO_READ},
        {.addr=0xcf3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x5316, .a=0x03, .x=0xec, .y=0x36, .sp=0xf7, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5316, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5317, .a=0x03, .x=0xec, .y=0x36, .sp=0xf7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x5316, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5316, .value=0xc0, .type=IO_READ},
        {.addr=0x5317, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x0355, .a=0xe0, .x=0x70, .y=0x82, .sp=0xf9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0355, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0356, .a=0xe0, .x=0x70, .y=0x82, .sp=0xf9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0355, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0355, .value=0xc0, .type=IO_READ},
        {.addr=0x0356, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xa050, .a=0x72, .x=0x07, .y=0x25, .sp=0xa5, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa050, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa051, .a=0x72, .x=0x07, .y=0x25, .sp=0xa5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa050, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa050, .value=0xc0, .type=IO_READ},
        {.addr=0xa051, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xd7ad, .a=0xf3, .x=0x92, .y=0xa8, .sp=0x9b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ad, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd7ae, .a=0xf3, .x=0x92, .y=0xa8, .sp=0x9b, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xd7ad, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd7ad, .value=0xc0, .type=IO_READ},
        {.addr=0xd7ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x053b, .a=0xea, .x=0x91, .y=0x1d, .sp=0xae, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x053b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x053c, .a=0xea, .x=0x91, .y=0x1d, .sp=0xae, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x053b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x053b, .value=0xc0, .type=IO_READ},
        {.addr=0x053c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x2cb2, .a=0x6b, .x=0xb2, .y=0x9c, .sp=0x4c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2cb2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2cb3, .a=0x6b, .x=0xb2, .y=0x9c, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2cb2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2cb2, .value=0xc0, .type=IO_READ},
        {.addr=0x2cb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xbaa1, .a=0xba, .x=0x32, .y=0x3e, .sp=0x86, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbaa2, .a=0xba, .x=0x32, .y=0x3e, .sp=0x86, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbaa1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbaa1, .value=0xc0, .type=IO_READ},
        {.addr=0xbaa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb8e4, .a=0x26, .x=0x85, .y=0x49, .sp=0xbf, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb8e5, .a=0x26, .x=0x85, .y=0x49, .sp=0xbf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb8e4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb8e4, .value=0xc0, .type=IO_READ},
        {.addr=0xb8e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x96ce, .a=0x23, .x=0x7e, .y=0x05, .sp=0x2a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x96ce, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x96cf, .a=0x23, .x=0x7e, .y=0x05, .sp=0x2a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x96ce, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x96ce, .value=0xc0, .type=IO_READ},
        {.addr=0x96cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x15d2, .a=0x65, .x=0x60, .y=0x04, .sp=0x31, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x15d2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x15d3, .a=0x65, .x=0x60, .y=0x04, .sp=0x31, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x15d2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x15d2, .value=0xc0, .type=IO_READ},
        {.addr=0x15d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x0031, .a=0xb5, .x=0x66, .y=0xc0, .sp=0x81, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0032, .a=0xb5, .x=0x66, .y=0xc0, .sp=0x81, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0031, .value=0xc0, .type=IO_READ},
        {.addr=0x0032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfda4, .a=0x0f, .x=0x7b, .y=0xf1, .sp=0x8e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xfda4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfda5, .a=0x0f, .x=0x7b, .y=0xf1, .sp=0x8e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xfda4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfda4, .value=0xc0, .type=IO_READ},
        {.addr=0xfda5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x7ef2, .a=0x9f, .x=0x56, .y=0x34, .sp=0xcd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7ef3, .a=0x9f, .x=0x56, .y=0x34, .sp=0xcd, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7ef2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7ef2, .value=0xc0, .type=IO_READ},
        {.addr=0x7ef3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x76d9, .a=0xc0, .x=0x01, .y=0xbc, .sp=0xf7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x76d9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x76da, .a=0xc0, .x=0x01, .y=0xbc, .sp=0xf7, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x76d9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x76d9, .value=0xc0, .type=IO_READ},
        {.addr=0x76da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7611, .a=0x81, .x=0x27, .y=0x4c, .sp=0xaa, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x7611, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7612, .a=0x81, .x=0x27, .y=0x4c, .sp=0xaa, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x7611, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7611, .value=0xc0, .type=IO_READ},
        {.addr=0x7612, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x9960, .a=0xa5, .x=0xa3, .y=0xaa, .sp=0x66, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9960, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9961, .a=0xa5, .x=0xa3, .y=0xaa, .sp=0x66, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9960, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9960, .value=0xc0, .type=IO_READ},
        {.addr=0x9961, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x1d5f, .a=0xc4, .x=0x2a, .y=0x29, .sp=0x66, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d5f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1d60, .a=0xc4, .x=0x2a, .y=0x29, .sp=0x66, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1d5f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1d5f, .value=0xc0, .type=IO_READ},
        {.addr=0x1d60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xeac9, .a=0x1c, .x=0x93, .y=0x2a, .sp=0xac, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xeac9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xeaca, .a=0x1c, .x=0x93, .y=0x2a, .sp=0xac, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xeac9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xeac9, .value=0xc0, .type=IO_READ},
        {.addr=0xeaca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4030, .a=0x31, .x=0x2d, .y=0x7c, .sp=0x07, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x4030, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4031, .a=0x31, .x=0x2d, .y=0x7c, .sp=0x07, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x4030, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4030, .value=0xc0, .type=IO_READ},
        {.addr=0x4031, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x6673, .a=0x3a, .x=0xd8, .y=0x11, .sp=0x50, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x6673, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6674, .a=0x3a, .x=0xd8, .y=0x11, .sp=0x50, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x6673, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6673, .value=0xc0, .type=IO_READ},
        {.addr=0x6674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x361e, .a=0x1a, .x=0x65, .y=0xb1, .sp=0xb4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x361e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x361f, .a=0x1a, .x=0x65, .y=0xb1, .sp=0xb4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x361e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x361e, .value=0xc0, .type=IO_READ},
        {.addr=0x361f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x5938, .a=0x23, .x=0xe5, .y=0x18, .sp=0xe8, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x5938, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5939, .a=0x23, .x=0xe5, .y=0x18, .sp=0xe8, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x5938, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5938, .value=0xc0, .type=IO_READ},
        {.addr=0x5939, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x6511, .a=0xb6, .x=0xb2, .y=0x56, .sp=0xaa, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6511, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6512, .a=0xb6, .x=0xb2, .y=0x56, .sp=0xaa, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6511, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6511, .value=0xc0, .type=IO_READ},
        {.addr=0x6512, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x2b70, .a=0x08, .x=0x6b, .y=0xbd, .sp=0x5c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2b70, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2b71, .a=0x08, .x=0x6b, .y=0xbd, .sp=0x5c, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x2b70, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2b70, .value=0xc0, .type=IO_READ},
        {.addr=0x2b71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x5e7e, .a=0x38, .x=0x63, .y=0xc2, .sp=0x3f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5e7e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e7f, .a=0x38, .x=0x63, .y=0xc2, .sp=0x3f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x5e7e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e7e, .value=0xc0, .type=IO_READ},
        {.addr=0x5e7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x4cf6, .a=0x7d, .x=0x4a, .y=0xbc, .sp=0xd8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4cf7, .a=0x7d, .x=0x4a, .y=0xbc, .sp=0xd8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4cf6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4cf6, .value=0xc0, .type=IO_READ},
        {.addr=0x4cf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x66d1, .a=0xdf, .x=0x96, .y=0x62, .sp=0x93, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x66d1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x66d2, .a=0xdf, .x=0x96, .y=0x62, .sp=0x93, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x66d1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x66d1, .value=0xc0, .type=IO_READ},
        {.addr=0x66d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb114, .a=0x61, .x=0x65, .y=0x70, .sp=0xe2, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb114, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb115, .a=0x61, .x=0x65, .y=0x70, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb114, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb114, .value=0xc0, .type=IO_READ},
        {.addr=0xb115, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe478, .a=0x9e, .x=0xd8, .y=0x75, .sp=0x51, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe478, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe479, .a=0x9e, .x=0xd8, .y=0x75, .sp=0x51, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xe478, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe478, .value=0xc0, .type=IO_READ},
        {.addr=0xe479, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xc0f1, .a=0xe6, .x=0x9b, .y=0x17, .sp=0x1d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc0f2, .a=0xe6, .x=0x9b, .y=0x17, .sp=0x1d, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xc0f1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc0f1, .value=0xc0, .type=IO_READ},
        {.addr=0xc0f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xe33e, .a=0x79, .x=0x4e, .y=0x78, .sp=0x7e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe33e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe33f, .a=0x79, .x=0x4e, .y=0x78, .sp=0x7e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe33e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe33e, .value=0xc0, .type=IO_READ},
        {.addr=0xe33f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0300) {
    const struct CPU_State initial_cpu = {.pc=0x8a88, .a=0xc4, .x=0xaf, .y=0xaf, .sp=0xde, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x8a88, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8a89, .a=0xc4, .x=0xaf, .y=0xaf, .sp=0xde, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8a88, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8a88, .value=0xc0, .type=IO_READ},
        {.addr=0x8a89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0301) {
    const struct CPU_State initial_cpu = {.pc=0x3f5d, .a=0x0d, .x=0x8a, .y=0x08, .sp=0x2b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3f5e, .a=0x0d, .x=0x8a, .y=0x08, .sp=0x2b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3f5d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3f5d, .value=0xc0, .type=IO_READ},
        {.addr=0x3f5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0302) {
    const struct CPU_State initial_cpu = {.pc=0x7cb4, .a=0x96, .x=0xf6, .y=0xec, .sp=0x78, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7cb4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7cb5, .a=0x96, .x=0xf6, .y=0xec, .sp=0x78, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7cb4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7cb4, .value=0xc0, .type=IO_READ},
        {.addr=0x7cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0303) {
    const struct CPU_State initial_cpu = {.pc=0x4129, .a=0x73, .x=0x85, .y=0x83, .sp=0x1b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4129, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x412a, .a=0x73, .x=0x85, .y=0x83, .sp=0x1b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4129, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4129, .value=0xc0, .type=IO_READ},
        {.addr=0x412a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0304) {
    const struct CPU_State initial_cpu = {.pc=0xa056, .a=0xa9, .x=0x99, .y=0x89, .sp=0x30, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xa056, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa057, .a=0xa9, .x=0x99, .y=0x89, .sp=0x30, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa056, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa056, .value=0xc0, .type=IO_READ},
        {.addr=0xa057, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0305) {
    const struct CPU_State initial_cpu = {.pc=0x9e7c, .a=0xd3, .x=0x3a, .y=0x6b, .sp=0x8d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e7c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9e7d, .a=0xd3, .x=0x3a, .y=0x6b, .sp=0x8d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9e7c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9e7c, .value=0xc0, .type=IO_READ},
        {.addr=0x9e7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0306) {
    const struct CPU_State initial_cpu = {.pc=0xf3d3, .a=0xd0, .x=0xa8, .y=0xb1, .sp=0x0c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf3d4, .a=0xd0, .x=0xa8, .y=0xb1, .sp=0x0c, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xf3d3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf3d3, .value=0xc0, .type=IO_READ},
        {.addr=0xf3d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0307) {
    const struct CPU_State initial_cpu = {.pc=0x73b0, .a=0xb0, .x=0x56, .y=0x72, .sp=0xcd, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x73b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x73b1, .a=0xb0, .x=0x56, .y=0x72, .sp=0xcd, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x73b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x73b0, .value=0xc0, .type=IO_READ},
        {.addr=0x73b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0308) {
    const struct CPU_State initial_cpu = {.pc=0xc3d4, .a=0x25, .x=0xf9, .y=0x1b, .sp=0xc9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc3d5, .a=0x25, .x=0xf9, .y=0x1b, .sp=0xc9, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc3d4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc3d4, .value=0xc0, .type=IO_READ},
        {.addr=0xc3d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0309) {
    const struct CPU_State initial_cpu = {.pc=0x1acc, .a=0x03, .x=0x66, .y=0x3f, .sp=0x06, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1acc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1acd, .a=0x03, .x=0x66, .y=0x3f, .sp=0x06, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1acc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1acc, .value=0xc0, .type=IO_READ},
        {.addr=0x1acd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x7672, .a=0xd3, .x=0xfb, .y=0x60, .sp=0x18, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7672, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7673, .a=0xd3, .x=0xfb, .y=0x60, .sp=0x18, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x7672, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7672, .value=0xc0, .type=IO_READ},
        {.addr=0x7673, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe97f, .a=0x44, .x=0x4f, .y=0x89, .sp=0x03, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe97f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe980, .a=0x44, .x=0x4f, .y=0x89, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe97f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe97f, .value=0xc0, .type=IO_READ},
        {.addr=0xe980, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030C) {
    const struct CPU_State initial_cpu = {.pc=0x9cb2, .a=0x3e, .x=0x80, .y=0x2c, .sp=0x40, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9cb3, .a=0x3e, .x=0x80, .y=0x2c, .sp=0x40, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x9cb2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9cb2, .value=0xc0, .type=IO_READ},
        {.addr=0x9cb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5af1, .a=0xf9, .x=0x5c, .y=0xe6, .sp=0xc3, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5af1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5af2, .a=0xf9, .x=0x5c, .y=0xe6, .sp=0xc3, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5af1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5af1, .value=0xc0, .type=IO_READ},
        {.addr=0x5af2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030E) {
    const struct CPU_State initial_cpu = {.pc=0x47df, .a=0x5e, .x=0xb9, .y=0x9e, .sp=0x3b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x47df, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x47e0, .a=0x5e, .x=0xb9, .y=0x9e, .sp=0x3b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x47df, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x47df, .value=0xc0, .type=IO_READ},
        {.addr=0x47e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_030F) {
    const struct CPU_State initial_cpu = {.pc=0x6bcd, .a=0x08, .x=0xf1, .y=0x92, .sp=0xaf, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6bce, .a=0x08, .x=0xf1, .y=0x92, .sp=0xaf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6bcd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6bcd, .value=0xc0, .type=IO_READ},
        {.addr=0x6bce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0310) {
    const struct CPU_State initial_cpu = {.pc=0x2f25, .a=0x8f, .x=0x62, .y=0x71, .sp=0x4f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2f25, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2f26, .a=0x8f, .x=0x62, .y=0x71, .sp=0x4f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2f25, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2f25, .value=0xc0, .type=IO_READ},
        {.addr=0x2f26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0311) {
    const struct CPU_State initial_cpu = {.pc=0x27e4, .a=0x95, .x=0x63, .y=0x07, .sp=0xf4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x27e4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x27e5, .a=0x95, .x=0x63, .y=0x07, .sp=0xf4, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x27e4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x27e4, .value=0xc0, .type=IO_READ},
        {.addr=0x27e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0312) {
    const struct CPU_State initial_cpu = {.pc=0xb255, .a=0x51, .x=0x3d, .y=0xec, .sp=0xd6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb255, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb256, .a=0x51, .x=0x3d, .y=0xec, .sp=0xd6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb255, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb255, .value=0xc0, .type=IO_READ},
        {.addr=0xb256, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0313) {
    const struct CPU_State initial_cpu = {.pc=0x99ef, .a=0xa7, .x=0xac, .y=0x75, .sp=0xad, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x99ef, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x99f0, .a=0xa7, .x=0xac, .y=0x75, .sp=0xad, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x99ef, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x99ef, .value=0xc0, .type=IO_READ},
        {.addr=0x99f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0314) {
    const struct CPU_State initial_cpu = {.pc=0xd45a, .a=0xce, .x=0x91, .y=0x18, .sp=0xcb, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd45a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd45b, .a=0xce, .x=0x91, .y=0x18, .sp=0xcb, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xd45a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd45a, .value=0xc0, .type=IO_READ},
        {.addr=0xd45b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0315) {
    const struct CPU_State initial_cpu = {.pc=0x4dbf, .a=0x85, .x=0xb0, .y=0xf0, .sp=0x70, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4dc0, .a=0x85, .x=0xb0, .y=0xf0, .sp=0x70, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4dbf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4dbf, .value=0xc0, .type=IO_READ},
        {.addr=0x4dc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0316) {
    const struct CPU_State initial_cpu = {.pc=0x50a8, .a=0x79, .x=0x36, .y=0xee, .sp=0x69, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x50a8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x50a9, .a=0x79, .x=0x36, .y=0xee, .sp=0x69, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x50a8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x50a8, .value=0xc0, .type=IO_READ},
        {.addr=0x50a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0317) {
    const struct CPU_State initial_cpu = {.pc=0x16ce, .a=0x50, .x=0xd4, .y=0x96, .sp=0x2a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x16ce, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x16cf, .a=0x50, .x=0xd4, .y=0x96, .sp=0x2a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x16ce, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x16ce, .value=0xc0, .type=IO_READ},
        {.addr=0x16cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0318) {
    const struct CPU_State initial_cpu = {.pc=0x883c, .a=0x13, .x=0x19, .y=0x21, .sp=0xec, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x883c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x883d, .a=0x13, .x=0x19, .y=0x21, .sp=0xec, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x883c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x883c, .value=0xc0, .type=IO_READ},
        {.addr=0x883d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd252, .a=0xe3, .x=0x91, .y=0x71, .sp=0x0b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd252, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd253, .a=0xe3, .x=0x91, .y=0x71, .sp=0x0b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd252, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd252, .value=0xc0, .type=IO_READ},
        {.addr=0xd253, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2f47, .a=0x38, .x=0x15, .y=0x6d, .sp=0x15, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x2f47, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2f48, .a=0x38, .x=0x15, .y=0x6d, .sp=0x15, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x2f47, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2f47, .value=0xc0, .type=IO_READ},
        {.addr=0x2f48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031B) {
    const struct CPU_State initial_cpu = {.pc=0x1dcd, .a=0xff, .x=0x09, .y=0x0b, .sp=0xac, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1dcd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1dce, .a=0xff, .x=0x09, .y=0x0b, .sp=0xac, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1dcd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1dcd, .value=0xc0, .type=IO_READ},
        {.addr=0x1dce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031C) {
    const struct CPU_State initial_cpu = {.pc=0x12e5, .a=0xb0, .x=0xec, .y=0x9f, .sp=0xdd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x12e5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x12e6, .a=0xb0, .x=0xec, .y=0x9f, .sp=0xdd, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x12e5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x12e5, .value=0xc0, .type=IO_READ},
        {.addr=0x12e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa35a, .a=0x60, .x=0xd6, .y=0xd2, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa35a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa35b, .a=0x60, .x=0xd6, .y=0xd2, .sp=0xb6, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa35a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa35a, .value=0xc0, .type=IO_READ},
        {.addr=0xa35b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031E) {
    const struct CPU_State initial_cpu = {.pc=0xf2f3, .a=0xd3, .x=0xcc, .y=0x21, .sp=0x71, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf2f4, .a=0xd3, .x=0xcc, .y=0x21, .sp=0x71, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf2f3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf2f3, .value=0xc0, .type=IO_READ},
        {.addr=0xf2f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_031F) {
    const struct CPU_State initial_cpu = {.pc=0xc01d, .a=0x07, .x=0x80, .y=0x43, .sp=0x5b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc01d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc01e, .a=0x07, .x=0x80, .y=0x43, .sp=0x5b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc01d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc01d, .value=0xc0, .type=IO_READ},
        {.addr=0xc01e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0320) {
    const struct CPU_State initial_cpu = {.pc=0x9bd5, .a=0xbf, .x=0x2f, .y=0x92, .sp=0xcc, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bd6, .a=0xbf, .x=0x2f, .y=0x92, .sp=0xcc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9bd5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bd5, .value=0xc0, .type=IO_READ},
        {.addr=0x9bd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0321) {
    const struct CPU_State initial_cpu = {.pc=0xbf18, .a=0x34, .x=0x41, .y=0x87, .sp=0xcc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xbf18, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbf19, .a=0x34, .x=0x41, .y=0x87, .sp=0xcc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbf18, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbf18, .value=0xc0, .type=IO_READ},
        {.addr=0xbf19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0322) {
    const struct CPU_State initial_cpu = {.pc=0x0123, .a=0x0b, .x=0xaf, .y=0x24, .sp=0x34, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0124, .a=0x0b, .x=0xaf, .y=0x24, .sp=0x34, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0123, .value=0xc0, .type=IO_READ},
        {.addr=0x0124, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0323) {
    const struct CPU_State initial_cpu = {.pc=0xd1af, .a=0x71, .x=0x05, .y=0x82, .sp=0x62, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd1af, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd1b0, .a=0x71, .x=0x05, .y=0x82, .sp=0x62, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xd1af, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd1af, .value=0xc0, .type=IO_READ},
        {.addr=0xd1b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0324) {
    const struct CPU_State initial_cpu = {.pc=0x8630, .a=0x9d, .x=0x7a, .y=0x77, .sp=0x45, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x8630, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8631, .a=0x9d, .x=0x7a, .y=0x77, .sp=0x45, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x8630, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8630, .value=0xc0, .type=IO_READ},
        {.addr=0x8631, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0325) {
    const struct CPU_State initial_cpu = {.pc=0x3699, .a=0xee, .x=0xff, .y=0x77, .sp=0x6f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3699, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x369a, .a=0xee, .x=0xff, .y=0x77, .sp=0x6f, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x3699, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3699, .value=0xc0, .type=IO_READ},
        {.addr=0x369a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0326) {
    const struct CPU_State initial_cpu = {.pc=0x0a94, .a=0x58, .x=0xd5, .y=0x0b, .sp=0x9c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0a94, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0a95, .a=0x58, .x=0xd5, .y=0x0b, .sp=0x9c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0a94, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0a94, .value=0xc0, .type=IO_READ},
        {.addr=0x0a95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0327) {
    const struct CPU_State initial_cpu = {.pc=0x43fd, .a=0x94, .x=0x10, .y=0x02, .sp=0xcd, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x43fd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x43fe, .a=0x94, .x=0x10, .y=0x02, .sp=0xcd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x43fd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x43fd, .value=0xc0, .type=IO_READ},
        {.addr=0x43fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3cef, .a=0x1a, .x=0x8b, .y=0x3a, .sp=0x49, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x3cef, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3cf0, .a=0x1a, .x=0x8b, .y=0x3a, .sp=0x49, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x3cef, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3cef, .value=0xc0, .type=IO_READ},
        {.addr=0x3cf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0329) {
    const struct CPU_State initial_cpu = {.pc=0x1093, .a=0xa6, .x=0x27, .y=0x6b, .sp=0xf3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1093, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1094, .a=0xa6, .x=0x27, .y=0x6b, .sp=0xf3, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x1093, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1093, .value=0xc0, .type=IO_READ},
        {.addr=0x1094, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032A) {
    const struct CPU_State initial_cpu = {.pc=0x87f1, .a=0xae, .x=0x24, .y=0x3f, .sp=0x81, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x87f1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x87f2, .a=0xae, .x=0x24, .y=0x3f, .sp=0x81, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x87f1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x87f1, .value=0xc0, .type=IO_READ},
        {.addr=0x87f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032B) {
    const struct CPU_State initial_cpu = {.pc=0x6866, .a=0x5b, .x=0xe8, .y=0xdf, .sp=0x02, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6866, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6867, .a=0x5b, .x=0xe8, .y=0xdf, .sp=0x02, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x6866, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6866, .value=0xc0, .type=IO_READ},
        {.addr=0x6867, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032C) {
    const struct CPU_State initial_cpu = {.pc=0xbc04, .a=0xe1, .x=0xdd, .y=0x59, .sp=0x70, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xbc04, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbc05, .a=0xe1, .x=0xdd, .y=0x59, .sp=0x70, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbc04, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbc04, .value=0xc0, .type=IO_READ},
        {.addr=0xbc05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032D) {
    const struct CPU_State initial_cpu = {.pc=0x54dc, .a=0x1b, .x=0x75, .y=0xfe, .sp=0xdd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x54dc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x54dd, .a=0x1b, .x=0x75, .y=0xfe, .sp=0xdd, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x54dc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x54dc, .value=0xc0, .type=IO_READ},
        {.addr=0x54dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032E) {
    const struct CPU_State initial_cpu = {.pc=0x445f, .a=0x03, .x=0x01, .y=0x5e, .sp=0x72, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x445f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4460, .a=0x03, .x=0x01, .y=0x5e, .sp=0x72, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x445f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x445f, .value=0xc0, .type=IO_READ},
        {.addr=0x4460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa299, .a=0x4e, .x=0x65, .y=0x5b, .sp=0x1a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa299, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa29a, .a=0x4e, .x=0x65, .y=0x5b, .sp=0x1a, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xa299, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa299, .value=0xc0, .type=IO_READ},
        {.addr=0xa29a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0330) {
    const struct CPU_State initial_cpu = {.pc=0x8d9f, .a=0x4a, .x=0xb8, .y=0x3e, .sp=0x60, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8d9f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8da0, .a=0x4a, .x=0xb8, .y=0x3e, .sp=0x60, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x8d9f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8d9f, .value=0xc0, .type=IO_READ},
        {.addr=0x8da0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0331) {
    const struct CPU_State initial_cpu = {.pc=0xcab7, .a=0x95, .x=0x02, .y=0xc5, .sp=0x05, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xcab7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcab8, .a=0x95, .x=0x02, .y=0xc5, .sp=0x05, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xcab7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcab7, .value=0xc0, .type=IO_READ},
        {.addr=0xcab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0332) {
    const struct CPU_State initial_cpu = {.pc=0x1c80, .a=0x4e, .x=0x0e, .y=0xb2, .sp=0x89, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1c80, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1c81, .a=0x4e, .x=0x0e, .y=0xb2, .sp=0x89, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x1c80, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1c80, .value=0xc0, .type=IO_READ},
        {.addr=0x1c81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb8b8, .a=0xa9, .x=0xcc, .y=0x9f, .sp=0x03, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb8b9, .a=0xa9, .x=0xcc, .y=0x9f, .sp=0x03, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb8b8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb8b8, .value=0xc0, .type=IO_READ},
        {.addr=0xb8b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0334) {
    const struct CPU_State initial_cpu = {.pc=0x4e96, .a=0x2d, .x=0xbe, .y=0xdf, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e96, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x2d, .x=0xbe, .y=0xdf, .sp=0x68, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4e96, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4e96, .value=0xc0, .type=IO_READ},
        {.addr=0x4e97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0335) {
    const struct CPU_State initial_cpu = {.pc=0x9414, .a=0xfd, .x=0xc6, .y=0x5c, .sp=0x57, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9414, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9415, .a=0xfd, .x=0xc6, .y=0x5c, .sp=0x57, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x9414, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9414, .value=0xc0, .type=IO_READ},
        {.addr=0x9415, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0336) {
    const struct CPU_State initial_cpu = {.pc=0x7f37, .a=0xca, .x=0xa6, .y=0x2a, .sp=0xf7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7f37, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7f38, .a=0xca, .x=0xa6, .y=0x2a, .sp=0xf7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x7f37, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7f37, .value=0xc0, .type=IO_READ},
        {.addr=0x7f38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0337) {
    const struct CPU_State initial_cpu = {.pc=0xaeb0, .a=0x15, .x=0x44, .y=0x13, .sp=0x3b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaeb1, .a=0x15, .x=0x44, .y=0x13, .sp=0x3b, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xaeb0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaeb0, .value=0xc0, .type=IO_READ},
        {.addr=0xaeb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0338) {
    const struct CPU_State initial_cpu = {.pc=0x7153, .a=0x09, .x=0x09, .y=0xb3, .sp=0x27, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7153, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7154, .a=0x09, .x=0x09, .y=0xb3, .sp=0x27, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7153, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7153, .value=0xc0, .type=IO_READ},
        {.addr=0x7154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0339) {
    const struct CPU_State initial_cpu = {.pc=0x9c9a, .a=0x4a, .x=0x5f, .y=0xab, .sp=0x7a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9c9b, .a=0x4a, .x=0x5f, .y=0xab, .sp=0x7a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9c9a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9c9a, .value=0xc0, .type=IO_READ},
        {.addr=0x9c9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033A) {
    const struct CPU_State initial_cpu = {.pc=0x885d, .a=0xe0, .x=0x46, .y=0x5e, .sp=0x9f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x885d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x885e, .a=0xe0, .x=0x46, .y=0x5e, .sp=0x9f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x885d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x885d, .value=0xc0, .type=IO_READ},
        {.addr=0x885e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033B) {
    const struct CPU_State initial_cpu = {.pc=0x4799, .a=0x14, .x=0x7d, .y=0x29, .sp=0x05, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4799, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x479a, .a=0x14, .x=0x7d, .y=0x29, .sp=0x05, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x4799, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4799, .value=0xc0, .type=IO_READ},
        {.addr=0x479a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x04ec, .a=0xc2, .x=0xea, .y=0x32, .sp=0x0c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x04ec, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x04ed, .a=0xc2, .x=0xea, .y=0x32, .sp=0x0c, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x04ec, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x04ec, .value=0xc0, .type=IO_READ},
        {.addr=0x04ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9adc, .a=0x0d, .x=0x7e, .y=0x23, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9adc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9add, .a=0x0d, .x=0x7e, .y=0x23, .sp=0x92, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x9adc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9adc, .value=0xc0, .type=IO_READ},
        {.addr=0x9add, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033E) {
    const struct CPU_State initial_cpu = {.pc=0x4232, .a=0x3d, .x=0x3c, .y=0x16, .sp=0x9f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x4232, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4233, .a=0x3d, .x=0x3c, .y=0x16, .sp=0x9f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4232, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4232, .value=0xc0, .type=IO_READ},
        {.addr=0x4233, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_033F) {
    const struct CPU_State initial_cpu = {.pc=0x4011, .a=0x0d, .x=0xfe, .y=0x23, .sp=0xfd, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4011, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4012, .a=0x0d, .x=0xfe, .y=0x23, .sp=0xfd, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x4011, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4011, .value=0xc0, .type=IO_READ},
        {.addr=0x4012, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0340) {
    const struct CPU_State initial_cpu = {.pc=0x44c0, .a=0xc0, .x=0x64, .y=0x10, .sp=0x8b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x44c0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x44c1, .a=0xc0, .x=0x64, .y=0x10, .sp=0x8b, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x44c0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x44c0, .value=0xc0, .type=IO_READ},
        {.addr=0x44c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0341) {
    const struct CPU_State initial_cpu = {.pc=0x6782, .a=0x01, .x=0x32, .y=0xe3, .sp=0x07, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6782, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6783, .a=0x01, .x=0x32, .y=0xe3, .sp=0x07, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6782, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6782, .value=0xc0, .type=IO_READ},
        {.addr=0x6783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0342) {
    const struct CPU_State initial_cpu = {.pc=0xb205, .a=0xc8, .x=0x4b, .y=0x1f, .sp=0x20, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb205, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb206, .a=0xc8, .x=0x4b, .y=0x1f, .sp=0x20, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xb205, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb205, .value=0xc0, .type=IO_READ},
        {.addr=0xb206, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0343) {
    const struct CPU_State initial_cpu = {.pc=0xd9b0, .a=0x3c, .x=0x0c, .y=0x6a, .sp=0x96, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd9b1, .a=0x3c, .x=0x0c, .y=0x6a, .sp=0x96, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd9b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd9b0, .value=0xc0, .type=IO_READ},
        {.addr=0xd9b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0344) {
    const struct CPU_State initial_cpu = {.pc=0x22fb, .a=0x98, .x=0x42, .y=0xc6, .sp=0x64, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x22fb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x22fc, .a=0x98, .x=0x42, .y=0xc6, .sp=0x64, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x22fb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x22fb, .value=0xc0, .type=IO_READ},
        {.addr=0x22fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1454, .a=0x1d, .x=0x74, .y=0x72, .sp=0x9b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1454, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1455, .a=0x1d, .x=0x74, .y=0x72, .sp=0x9b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x1454, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1454, .value=0xc0, .type=IO_READ},
        {.addr=0x1455, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0346) {
    const struct CPU_State initial_cpu = {.pc=0xd68a, .a=0x37, .x=0x56, .y=0x59, .sp=0xe9, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xd68a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd68b, .a=0x37, .x=0x56, .y=0x59, .sp=0xe9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd68a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd68a, .value=0xc0, .type=IO_READ},
        {.addr=0xd68b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0347) {
    const struct CPU_State initial_cpu = {.pc=0xa8db, .a=0xa8, .x=0x23, .y=0xf1, .sp=0x5d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa8db, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa8dc, .a=0xa8, .x=0x23, .y=0xf1, .sp=0x5d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa8db, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa8db, .value=0xc0, .type=IO_READ},
        {.addr=0xa8dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0348) {
    const struct CPU_State initial_cpu = {.pc=0xd5c1, .a=0x2e, .x=0xe6, .y=0xfd, .sp=0x9e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd5c2, .a=0x2e, .x=0xe6, .y=0xfd, .sp=0x9e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xd5c1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd5c1, .value=0xc0, .type=IO_READ},
        {.addr=0xd5c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa709, .a=0x4a, .x=0x5c, .y=0xab, .sp=0x89, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa709, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa70a, .a=0x4a, .x=0x5c, .y=0xab, .sp=0x89, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa709, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa709, .value=0xc0, .type=IO_READ},
        {.addr=0xa70a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034A) {
    const struct CPU_State initial_cpu = {.pc=0x240f, .a=0xff, .x=0x81, .y=0x34, .sp=0x09, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x240f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2410, .a=0xff, .x=0x81, .y=0x34, .sp=0x09, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x240f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x240f, .value=0xc0, .type=IO_READ},
        {.addr=0x2410, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034B) {
    const struct CPU_State initial_cpu = {.pc=0xef5f, .a=0x50, .x=0xbf, .y=0xe9, .sp=0x1f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xef5f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xef60, .a=0x50, .x=0xbf, .y=0xe9, .sp=0x1f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xef5f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xef5f, .value=0xc0, .type=IO_READ},
        {.addr=0xef60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034C) {
    const struct CPU_State initial_cpu = {.pc=0xa8dc, .a=0x4e, .x=0x10, .y=0xc3, .sp=0xc0, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa8dc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa8dd, .a=0x4e, .x=0x10, .y=0xc3, .sp=0xc0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa8dc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa8dc, .value=0xc0, .type=IO_READ},
        {.addr=0xa8dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034D) {
    const struct CPU_State initial_cpu = {.pc=0xf24f, .a=0xfb, .x=0x60, .y=0xb7, .sp=0x4b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf24f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf250, .a=0xfb, .x=0x60, .y=0xb7, .sp=0x4b, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf24f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf24f, .value=0xc0, .type=IO_READ},
        {.addr=0xf250, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034E) {
    const struct CPU_State initial_cpu = {.pc=0x2aea, .a=0x1e, .x=0x91, .y=0x81, .sp=0x14, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x2aea, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2aeb, .a=0x1e, .x=0x91, .y=0x81, .sp=0x14, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2aea, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2aea, .value=0xc0, .type=IO_READ},
        {.addr=0x2aeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_034F) {
    const struct CPU_State initial_cpu = {.pc=0xc99f, .a=0x18, .x=0x2a, .y=0x59, .sp=0x82, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc99f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc9a0, .a=0x18, .x=0x2a, .y=0x59, .sp=0x82, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc99f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc99f, .value=0xc0, .type=IO_READ},
        {.addr=0xc9a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0350) {
    const struct CPU_State initial_cpu = {.pc=0x01e2, .a=0x7e, .x=0xd0, .y=0x2e, .sp=0x1b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x01e3, .a=0x7e, .x=0xd0, .y=0x2e, .sp=0x1b, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x01e2, .value=0xc0, .type=IO_READ},
        {.addr=0x01e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0351) {
    const struct CPU_State initial_cpu = {.pc=0xc83b, .a=0x10, .x=0xe6, .y=0x45, .sp=0x48, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xc83b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc83c, .a=0x10, .x=0xe6, .y=0x45, .sp=0x48, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc83b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc83b, .value=0xc0, .type=IO_READ},
        {.addr=0xc83c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0352) {
    const struct CPU_State initial_cpu = {.pc=0x5b64, .a=0xc6, .x=0xcf, .y=0xeb, .sp=0x63, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5b64, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5b65, .a=0xc6, .x=0xcf, .y=0xeb, .sp=0x63, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5b64, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5b64, .value=0xc0, .type=IO_READ},
        {.addr=0x5b65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0353) {
    const struct CPU_State initial_cpu = {.pc=0x686b, .a=0xa8, .x=0x96, .y=0xb2, .sp=0x4b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x686b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x686c, .a=0xa8, .x=0x96, .y=0xb2, .sp=0x4b, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x686b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x686b, .value=0xc0, .type=IO_READ},
        {.addr=0x686c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0354) {
    const struct CPU_State initial_cpu = {.pc=0xfc67, .a=0x23, .x=0xf1, .y=0xf9, .sp=0xf5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xfc67, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfc68, .a=0x23, .x=0xf1, .y=0xf9, .sp=0xf5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xfc67, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfc67, .value=0xc0, .type=IO_READ},
        {.addr=0xfc68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0355) {
    const struct CPU_State initial_cpu = {.pc=0xfb37, .a=0x15, .x=0x0e, .y=0x9a, .sp=0x48, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xfb37, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfb38, .a=0x15, .x=0x0e, .y=0x9a, .sp=0x48, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfb37, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfb37, .value=0xc0, .type=IO_READ},
        {.addr=0xfb38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0356) {
    const struct CPU_State initial_cpu = {.pc=0x03e6, .a=0x73, .x=0xd8, .y=0x80, .sp=0x02, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x03e6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x03e7, .a=0x73, .x=0xd8, .y=0x80, .sp=0x02, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x03e6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x03e6, .value=0xc0, .type=IO_READ},
        {.addr=0x03e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0357) {
    const struct CPU_State initial_cpu = {.pc=0xa11e, .a=0xd8, .x=0x0c, .y=0xff, .sp=0xee, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa11e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa11f, .a=0xd8, .x=0x0c, .y=0xff, .sp=0xee, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa11e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa11e, .value=0xc0, .type=IO_READ},
        {.addr=0xa11f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0358) {
    const struct CPU_State initial_cpu = {.pc=0x1749, .a=0x97, .x=0x87, .y=0xc0, .sp=0x55, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x1749, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x174a, .a=0x97, .x=0x87, .y=0xc0, .sp=0x55, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x1749, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1749, .value=0xc0, .type=IO_READ},
        {.addr=0x174a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0359) {
    const struct CPU_State initial_cpu = {.pc=0x50b4, .a=0x4d, .x=0xdf, .y=0x34, .sp=0x1e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x50b4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x50b5, .a=0x4d, .x=0xdf, .y=0x34, .sp=0x1e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x50b4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x50b4, .value=0xc0, .type=IO_READ},
        {.addr=0x50b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3b53, .a=0x93, .x=0x9c, .y=0x59, .sp=0x5e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3b53, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3b54, .a=0x93, .x=0x9c, .y=0x59, .sp=0x5e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x3b53, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3b53, .value=0xc0, .type=IO_READ},
        {.addr=0x3b54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035B) {
    const struct CPU_State initial_cpu = {.pc=0xd9e6, .a=0x3f, .x=0xfa, .y=0xc1, .sp=0xaa, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd9e7, .a=0x3f, .x=0xfa, .y=0xc1, .sp=0xaa, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xd9e6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd9e6, .value=0xc0, .type=IO_READ},
        {.addr=0xd9e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035C) {
    const struct CPU_State initial_cpu = {.pc=0xc8eb, .a=0x63, .x=0x1e, .y=0xd2, .sp=0x7a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc8eb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc8ec, .a=0x63, .x=0x1e, .y=0xd2, .sp=0x7a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xc8eb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc8eb, .value=0xc0, .type=IO_READ},
        {.addr=0xc8ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035D) {
    const struct CPU_State initial_cpu = {.pc=0x643b, .a=0x37, .x=0x5a, .y=0x01, .sp=0x5f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x643b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x643c, .a=0x37, .x=0x5a, .y=0x01, .sp=0x5f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x643b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x643b, .value=0xc0, .type=IO_READ},
        {.addr=0x643c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x59b5, .a=0x11, .x=0x36, .y=0xf3, .sp=0xf3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x59b5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59b6, .a=0x11, .x=0x36, .y=0xf3, .sp=0xf3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x59b5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59b5, .value=0xc0, .type=IO_READ},
        {.addr=0x59b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_035F) {
    const struct CPU_State initial_cpu = {.pc=0x135c, .a=0xb7, .x=0x87, .y=0x52, .sp=0xb8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x135c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x135d, .a=0xb7, .x=0x87, .y=0x52, .sp=0xb8, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x135c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x135c, .value=0xc0, .type=IO_READ},
        {.addr=0x135d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0360) {
    const struct CPU_State initial_cpu = {.pc=0x3d5b, .a=0xed, .x=0x97, .y=0x43, .sp=0xd5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3d5b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3d5c, .a=0xed, .x=0x97, .y=0x43, .sp=0xd5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3d5b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3d5b, .value=0xc0, .type=IO_READ},
        {.addr=0x3d5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x1da5, .a=0xc8, .x=0x04, .y=0x21, .sp=0x4f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1da5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1da6, .a=0xc8, .x=0x04, .y=0x21, .sp=0x4f, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x1da5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1da5, .value=0xc0, .type=IO_READ},
        {.addr=0x1da6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0362) {
    const struct CPU_State initial_cpu = {.pc=0x9623, .a=0x30, .x=0xa5, .y=0x3e, .sp=0xf1, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9623, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9624, .a=0x30, .x=0xa5, .y=0x3e, .sp=0xf1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9623, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9623, .value=0xc0, .type=IO_READ},
        {.addr=0x9624, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0a43, .a=0xb0, .x=0x91, .y=0x39, .sp=0x4b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0a43, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0a44, .a=0xb0, .x=0x91, .y=0x39, .sp=0x4b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0a43, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0a43, .value=0xc0, .type=IO_READ},
        {.addr=0x0a44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0364) {
    const struct CPU_State initial_cpu = {.pc=0x6195, .a=0x09, .x=0x99, .y=0xac, .sp=0xf6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6195, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6196, .a=0x09, .x=0x99, .y=0xac, .sp=0xf6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x6195, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6195, .value=0xc0, .type=IO_READ},
        {.addr=0x6196, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0365) {
    const struct CPU_State initial_cpu = {.pc=0x1137, .a=0x9b, .x=0x34, .y=0x90, .sp=0x2d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1137, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1138, .a=0x9b, .x=0x34, .y=0x90, .sp=0x2d, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x1137, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1137, .value=0xc0, .type=IO_READ},
        {.addr=0x1138, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0366) {
    const struct CPU_State initial_cpu = {.pc=0x00a0, .a=0x4c, .x=0xbb, .y=0x78, .sp=0x76, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x00a1, .a=0x4c, .x=0xbb, .y=0x78, .sp=0x76, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x00a0, .value=0xc0, .type=IO_READ},
        {.addr=0x00a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0367) {
    const struct CPU_State initial_cpu = {.pc=0xa330, .a=0x3c, .x=0x08, .y=0x74, .sp=0x51, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa330, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa331, .a=0x3c, .x=0x08, .y=0x74, .sp=0x51, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa330, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa330, .value=0xc0, .type=IO_READ},
        {.addr=0xa331, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0368) {
    const struct CPU_State initial_cpu = {.pc=0xbe8a, .a=0xba, .x=0x26, .y=0x2b, .sp=0x72, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbe8a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbe8b, .a=0xba, .x=0x26, .y=0x2b, .sp=0x72, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbe8a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbe8a, .value=0xc0, .type=IO_READ},
        {.addr=0xbe8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0369) {
    const struct CPU_State initial_cpu = {.pc=0x18c1, .a=0x04, .x=0xf6, .y=0x61, .sp=0x2a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x18c1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x18c2, .a=0x04, .x=0xf6, .y=0x61, .sp=0x2a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x18c1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x18c1, .value=0xc0, .type=IO_READ},
        {.addr=0x18c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036A) {
    const struct CPU_State initial_cpu = {.pc=0xb9e3, .a=0x96, .x=0x27, .y=0x4e, .sp=0xea, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb9e4, .a=0x96, .x=0x27, .y=0x4e, .sp=0xea, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb9e3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb9e3, .value=0xc0, .type=IO_READ},
        {.addr=0xb9e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x8aef, .a=0x6f, .x=0x53, .y=0x38, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x8aef, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8af0, .a=0x6f, .x=0x53, .y=0x38, .sp=0x13, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x8aef, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8aef, .value=0xc0, .type=IO_READ},
        {.addr=0x8af0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa93a, .a=0xaf, .x=0xc6, .y=0xaa, .sp=0x98, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa93a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa93b, .a=0xaf, .x=0xc6, .y=0xaa, .sp=0x98, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xa93a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa93a, .value=0xc0, .type=IO_READ},
        {.addr=0xa93b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036D) {
    const struct CPU_State initial_cpu = {.pc=0x1289, .a=0xc8, .x=0x3a, .y=0xc3, .sp=0xb2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1289, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x128a, .a=0xc8, .x=0x3a, .y=0xc3, .sp=0xb2, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x1289, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1289, .value=0xc0, .type=IO_READ},
        {.addr=0x128a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036E) {
    const struct CPU_State initial_cpu = {.pc=0xbafd, .a=0x4b, .x=0x38, .y=0xcf, .sp=0xe9, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xbafd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbafe, .a=0x4b, .x=0x38, .y=0xcf, .sp=0xe9, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xbafd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbafd, .value=0xc0, .type=IO_READ},
        {.addr=0xbafe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_036F) {
    const struct CPU_State initial_cpu = {.pc=0x7b02, .a=0xca, .x=0x21, .y=0x8e, .sp=0x1d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7b02, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7b03, .a=0xca, .x=0x21, .y=0x8e, .sp=0x1d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x7b02, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7b02, .value=0xc0, .type=IO_READ},
        {.addr=0x7b03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0370) {
    const struct CPU_State initial_cpu = {.pc=0x5dcc, .a=0xec, .x=0x07, .y=0x94, .sp=0x35, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5dcd, .a=0xec, .x=0x07, .y=0x94, .sp=0x35, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5dcc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5dcc, .value=0xc0, .type=IO_READ},
        {.addr=0x5dcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0371) {
    const struct CPU_State initial_cpu = {.pc=0xac37, .a=0x16, .x=0xcf, .y=0xcb, .sp=0x04, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xac37, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xac38, .a=0x16, .x=0xcf, .y=0xcb, .sp=0x04, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xac37, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xac37, .value=0xc0, .type=IO_READ},
        {.addr=0xac38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0372) {
    const struct CPU_State initial_cpu = {.pc=0xa1c3, .a=0xda, .x=0xc4, .y=0x4b, .sp=0x93, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa1c4, .a=0xda, .x=0xc4, .y=0x4b, .sp=0x93, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xa1c3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa1c3, .value=0xc0, .type=IO_READ},
        {.addr=0xa1c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4606, .a=0x9f, .x=0x51, .y=0x1c, .sp=0xba, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4606, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4607, .a=0x9f, .x=0x51, .y=0x1c, .sp=0xba, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x4606, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4606, .value=0xc0, .type=IO_READ},
        {.addr=0x4607, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6abe, .a=0xac, .x=0xc3, .y=0x68, .sp=0x97, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6abe, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6abf, .a=0xac, .x=0xc3, .y=0x68, .sp=0x97, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6abe, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6abe, .value=0xc0, .type=IO_READ},
        {.addr=0x6abf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0375) {
    const struct CPU_State initial_cpu = {.pc=0x6775, .a=0x15, .x=0xc8, .y=0xf5, .sp=0x61, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6775, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6776, .a=0x15, .x=0xc8, .y=0xf5, .sp=0x61, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x6775, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6775, .value=0xc0, .type=IO_READ},
        {.addr=0x6776, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x83d5, .a=0x97, .x=0x0d, .y=0x2b, .sp=0x40, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x83d5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x83d6, .a=0x97, .x=0x0d, .y=0x2b, .sp=0x40, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x83d5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x83d5, .value=0xc0, .type=IO_READ},
        {.addr=0x83d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0377) {
    const struct CPU_State initial_cpu = {.pc=0x2e5d, .a=0xeb, .x=0xeb, .y=0x70, .sp=0xc7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2e5d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2e5e, .a=0xeb, .x=0xeb, .y=0x70, .sp=0xc7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x2e5d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2e5d, .value=0xc0, .type=IO_READ},
        {.addr=0x2e5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0378) {
    const struct CPU_State initial_cpu = {.pc=0xbcdc, .a=0xd1, .x=0x03, .y=0xc9, .sp=0xb3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbcdc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbcdd, .a=0xd1, .x=0x03, .y=0xc9, .sp=0xb3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbcdc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbcdc, .value=0xc0, .type=IO_READ},
        {.addr=0xbcdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x4929, .a=0xf8, .x=0x06, .y=0x34, .sp=0xaf, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x4929, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x492a, .a=0xf8, .x=0x06, .y=0x34, .sp=0xaf, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x4929, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4929, .value=0xc0, .type=IO_READ},
        {.addr=0x492a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6bca, .a=0xc1, .x=0x1f, .y=0xbf, .sp=0xa1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x6bca, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6bcb, .a=0xc1, .x=0x1f, .y=0xbf, .sp=0xa1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6bca, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6bca, .value=0xc0, .type=IO_READ},
        {.addr=0x6bcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037B) {
    const struct CPU_State initial_cpu = {.pc=0xc272, .a=0x42, .x=0x2b, .y=0x60, .sp=0x77, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xc272, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc273, .a=0x42, .x=0x2b, .y=0x60, .sp=0x77, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xc272, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc272, .value=0xc0, .type=IO_READ},
        {.addr=0xc273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037C) {
    const struct CPU_State initial_cpu = {.pc=0x85f9, .a=0x77, .x=0xc2, .y=0x95, .sp=0xd6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x85f9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x85fa, .a=0x77, .x=0xc2, .y=0x95, .sp=0xd6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x85f9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x85f9, .value=0xc0, .type=IO_READ},
        {.addr=0x85fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037D) {
    const struct CPU_State initial_cpu = {.pc=0xef4b, .a=0x0e, .x=0x35, .y=0x3c, .sp=0x41, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xef4b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xef4c, .a=0x0e, .x=0x35, .y=0x3c, .sp=0x41, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xef4b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xef4b, .value=0xc0, .type=IO_READ},
        {.addr=0xef4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037E) {
    const struct CPU_State initial_cpu = {.pc=0x3b6e, .a=0x32, .x=0xff, .y=0x6b, .sp=0x8a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3b6e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3b6f, .a=0x32, .x=0xff, .y=0x6b, .sp=0x8a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x3b6e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3b6e, .value=0xc0, .type=IO_READ},
        {.addr=0x3b6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_037F) {
    const struct CPU_State initial_cpu = {.pc=0x8eae, .a=0x76, .x=0xa3, .y=0x02, .sp=0xc3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8eae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8eaf, .a=0x76, .x=0xa3, .y=0x02, .sp=0xc3, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x8eae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8eae, .value=0xc0, .type=IO_READ},
        {.addr=0x8eaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0380) {
    const struct CPU_State initial_cpu = {.pc=0xaa19, .a=0xb7, .x=0x75, .y=0xe9, .sp=0x04, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa19, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xaa1a, .a=0xb7, .x=0x75, .y=0xe9, .sp=0x04, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xaa19, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaa19, .value=0xc0, .type=IO_READ},
        {.addr=0xaa1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0381) {
    const struct CPU_State initial_cpu = {.pc=0x07f5, .a=0x5f, .x=0x97, .y=0x74, .sp=0xcb, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x07f5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x07f6, .a=0x5f, .x=0x97, .y=0x74, .sp=0xcb, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x07f5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x07f5, .value=0xc0, .type=IO_READ},
        {.addr=0x07f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0382) {
    const struct CPU_State initial_cpu = {.pc=0x2a71, .a=0xcf, .x=0x5f, .y=0xed, .sp=0x7e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a71, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2a72, .a=0xcf, .x=0x5f, .y=0xed, .sp=0x7e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2a71, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2a71, .value=0xc0, .type=IO_READ},
        {.addr=0x2a72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0383) {
    const struct CPU_State initial_cpu = {.pc=0xe298, .a=0x9a, .x=0x55, .y=0x85, .sp=0x62, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe298, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe299, .a=0x9a, .x=0x55, .y=0x85, .sp=0x62, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xe298, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe298, .value=0xc0, .type=IO_READ},
        {.addr=0xe299, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0384) {
    const struct CPU_State initial_cpu = {.pc=0x2dbf, .a=0xa6, .x=0x6a, .y=0x68, .sp=0x5e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2dc0, .a=0xa6, .x=0x6a, .y=0x68, .sp=0x5e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2dbf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2dbf, .value=0xc0, .type=IO_READ},
        {.addr=0x2dc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0385) {
    const struct CPU_State initial_cpu = {.pc=0x0531, .a=0xb3, .x=0x68, .y=0xba, .sp=0xef, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0531, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0532, .a=0xb3, .x=0x68, .y=0xba, .sp=0xef, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0531, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0531, .value=0xc0, .type=IO_READ},
        {.addr=0x0532, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0386) {
    const struct CPU_State initial_cpu = {.pc=0x1cd9, .a=0x86, .x=0xc1, .y=0xfa, .sp=0x39, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1cda, .a=0x86, .x=0xc1, .y=0xfa, .sp=0x39, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x1cd9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1cd9, .value=0xc0, .type=IO_READ},
        {.addr=0x1cda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0387) {
    const struct CPU_State initial_cpu = {.pc=0xc7b7, .a=0x87, .x=0x3c, .y=0x4d, .sp=0x6b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc7b8, .a=0x87, .x=0x3c, .y=0x4d, .sp=0x6b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc7b7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc7b7, .value=0xc0, .type=IO_READ},
        {.addr=0xc7b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0388) {
    const struct CPU_State initial_cpu = {.pc=0x9a54, .a=0x47, .x=0xdc, .y=0xe2, .sp=0x90, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9a54, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9a55, .a=0x47, .x=0xdc, .y=0xe2, .sp=0x90, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9a54, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9a54, .value=0xc0, .type=IO_READ},
        {.addr=0x9a55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0389) {
    const struct CPU_State initial_cpu = {.pc=0xcc36, .a=0xa4, .x=0x60, .y=0x01, .sp=0x96, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcc36, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcc37, .a=0xa4, .x=0x60, .y=0x01, .sp=0x96, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcc36, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcc36, .value=0xc0, .type=IO_READ},
        {.addr=0xcc37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038A) {
    const struct CPU_State initial_cpu = {.pc=0xc207, .a=0x1f, .x=0x72, .y=0xdd, .sp=0x8a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xc207, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc208, .a=0x1f, .x=0x72, .y=0xdd, .sp=0x8a, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xc207, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc207, .value=0xc0, .type=IO_READ},
        {.addr=0xc208, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038B) {
    const struct CPU_State initial_cpu = {.pc=0x083a, .a=0xc4, .x=0x1f, .y=0x46, .sp=0x87, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x083a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x083b, .a=0xc4, .x=0x1f, .y=0x46, .sp=0x87, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x083a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x083a, .value=0xc0, .type=IO_READ},
        {.addr=0x083b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038C) {
    const struct CPU_State initial_cpu = {.pc=0x59e3, .a=0xc1, .x=0x09, .y=0xb7, .sp=0xd2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x59e3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59e4, .a=0xc1, .x=0x09, .y=0xb7, .sp=0xd2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x59e3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59e3, .value=0xc0, .type=IO_READ},
        {.addr=0x59e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x87de, .a=0x25, .x=0xcb, .y=0x0a, .sp=0xc5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x87de, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x87df, .a=0x25, .x=0xcb, .y=0x0a, .sp=0xc5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x87de, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x87de, .value=0xc0, .type=IO_READ},
        {.addr=0x87df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038E) {
    const struct CPU_State initial_cpu = {.pc=0xbea8, .a=0xda, .x=0xb6, .y=0x53, .sp=0xc1, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbea8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbea9, .a=0xda, .x=0xb6, .y=0x53, .sp=0xc1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xbea8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbea8, .value=0xc0, .type=IO_READ},
        {.addr=0xbea9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_038F) {
    const struct CPU_State initial_cpu = {.pc=0x4aa7, .a=0x3a, .x=0x42, .y=0x0f, .sp=0x6e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4aa7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4aa8, .a=0x3a, .x=0x42, .y=0x0f, .sp=0x6e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4aa7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4aa7, .value=0xc0, .type=IO_READ},
        {.addr=0x4aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0390) {
    const struct CPU_State initial_cpu = {.pc=0xa528, .a=0x0d, .x=0x4f, .y=0x4d, .sp=0xda, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa528, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa529, .a=0x0d, .x=0x4f, .y=0x4d, .sp=0xda, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa528, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa528, .value=0xc0, .type=IO_READ},
        {.addr=0xa529, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0391) {
    const struct CPU_State initial_cpu = {.pc=0x66fb, .a=0xc1, .x=0x33, .y=0xee, .sp=0x2e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x66fb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x66fc, .a=0xc1, .x=0x33, .y=0xee, .sp=0x2e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x66fb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x66fb, .value=0xc0, .type=IO_READ},
        {.addr=0x66fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0392) {
    const struct CPU_State initial_cpu = {.pc=0x98b2, .a=0x32, .x=0x11, .y=0x48, .sp=0x0b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x98b2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x98b3, .a=0x32, .x=0x11, .y=0x48, .sp=0x0b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x98b2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x98b2, .value=0xc0, .type=IO_READ},
        {.addr=0x98b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0393) {
    const struct CPU_State initial_cpu = {.pc=0xdf0c, .a=0x56, .x=0x6d, .y=0x8f, .sp=0x2f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xdf0c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdf0d, .a=0x56, .x=0x6d, .y=0x8f, .sp=0x2f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xdf0c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdf0c, .value=0xc0, .type=IO_READ},
        {.addr=0xdf0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0394) {
    const struct CPU_State initial_cpu = {.pc=0xf033, .a=0x5a, .x=0xce, .y=0xf8, .sp=0x46, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xf033, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf034, .a=0x5a, .x=0xce, .y=0xf8, .sp=0x46, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xf033, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf033, .value=0xc0, .type=IO_READ},
        {.addr=0xf034, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0395) {
    const struct CPU_State initial_cpu = {.pc=0xa5a2, .a=0x59, .x=0x3b, .y=0x38, .sp=0xf1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa5a3, .a=0x59, .x=0x3b, .y=0x38, .sp=0xf1, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa5a2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa5a2, .value=0xc0, .type=IO_READ},
        {.addr=0xa5a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0396) {
    const struct CPU_State initial_cpu = {.pc=0x53ff, .a=0x52, .x=0xb1, .y=0x96, .sp=0x22, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x53ff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5400, .a=0x52, .x=0xb1, .y=0x96, .sp=0x22, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x53ff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x53ff, .value=0xc0, .type=IO_READ},
        {.addr=0x5400, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0397) {
    const struct CPU_State initial_cpu = {.pc=0x71c7, .a=0xf5, .x=0x18, .y=0xd7, .sp=0xcc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x71c7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x71c8, .a=0xf5, .x=0x18, .y=0xd7, .sp=0xcc, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x71c7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x71c7, .value=0xc0, .type=IO_READ},
        {.addr=0x71c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8797, .a=0x0f, .x=0x25, .y=0x0e, .sp=0x7c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8797, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8798, .a=0x0f, .x=0x25, .y=0x0e, .sp=0x7c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x8797, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8797, .value=0xc0, .type=IO_READ},
        {.addr=0x8798, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4d3a, .a=0x25, .x=0x00, .y=0x36, .sp=0x50, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4d3a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4d3b, .a=0x25, .x=0x00, .y=0x36, .sp=0x50, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x4d3a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4d3a, .value=0xc0, .type=IO_READ},
        {.addr=0x4d3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039A) {
    const struct CPU_State initial_cpu = {.pc=0x74fb, .a=0xab, .x=0x2e, .y=0x55, .sp=0x1d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x74fb, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x74fc, .a=0xab, .x=0x2e, .y=0x55, .sp=0x1d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x74fb, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x74fb, .value=0xc0, .type=IO_READ},
        {.addr=0x74fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039B) {
    const struct CPU_State initial_cpu = {.pc=0x8ae8, .a=0xf2, .x=0x89, .y=0x3a, .sp=0x7e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8ae9, .a=0xf2, .x=0x89, .y=0x3a, .sp=0x7e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8ae8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8ae8, .value=0xc0, .type=IO_READ},
        {.addr=0x8ae9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039C) {
    const struct CPU_State initial_cpu = {.pc=0x2c76, .a=0xbd, .x=0xc5, .y=0xd9, .sp=0xfc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c76, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2c77, .a=0xbd, .x=0xc5, .y=0xd9, .sp=0xfc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2c76, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2c76, .value=0xc0, .type=IO_READ},
        {.addr=0x2c77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039D) {
    const struct CPU_State initial_cpu = {.pc=0xd58a, .a=0x7b, .x=0xb8, .y=0xc3, .sp=0xc8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd58a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd58b, .a=0x7b, .x=0xb8, .y=0xc3, .sp=0xc8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd58a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd58a, .value=0xc0, .type=IO_READ},
        {.addr=0xd58b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4945, .a=0xab, .x=0x06, .y=0x8e, .sp=0xb7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4945, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4946, .a=0xab, .x=0x06, .y=0x8e, .sp=0xb7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4945, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4945, .value=0xc0, .type=IO_READ},
        {.addr=0x4946, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_039F) {
    const struct CPU_State initial_cpu = {.pc=0x68a9, .a=0xc7, .x=0xd5, .y=0x65, .sp=0x4c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x68a9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x68aa, .a=0xc7, .x=0xd5, .y=0x65, .sp=0x4c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x68a9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x68a9, .value=0xc0, .type=IO_READ},
        {.addr=0x68aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xdc44, .a=0xea, .x=0x0f, .y=0x3e, .sp=0x0f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xdc44, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdc45, .a=0xea, .x=0x0f, .y=0x3e, .sp=0x0f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdc44, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdc44, .value=0xc0, .type=IO_READ},
        {.addr=0xdc45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x169c, .a=0xae, .x=0xfb, .y=0xe4, .sp=0xcf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x169c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x169d, .a=0xae, .x=0xfb, .y=0xe4, .sp=0xcf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x169c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x169c, .value=0xc0, .type=IO_READ},
        {.addr=0x169d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x79fd, .a=0x02, .x=0xa9, .y=0x4e, .sp=0x3c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x79fd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x79fe, .a=0x02, .x=0xa9, .y=0x4e, .sp=0x3c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x79fd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x79fd, .value=0xc0, .type=IO_READ},
        {.addr=0x79fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x270d, .a=0xe5, .x=0x55, .y=0x86, .sp=0xec, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x270d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x270e, .a=0xe5, .x=0x55, .y=0x86, .sp=0xec, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x270d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x270d, .value=0xc0, .type=IO_READ},
        {.addr=0x270e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x5741, .a=0xd7, .x=0x88, .y=0x62, .sp=0x1c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5741, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5742, .a=0xd7, .x=0x88, .y=0x62, .sp=0x1c, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x5741, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5741, .value=0xc0, .type=IO_READ},
        {.addr=0x5742, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xb61f, .a=0x2c, .x=0xe3, .y=0x3e, .sp=0xf9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb61f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb620, .a=0x2c, .x=0xe3, .y=0x3e, .sp=0xf9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xb61f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb61f, .value=0xc0, .type=IO_READ},
        {.addr=0xb620, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x6166, .a=0xf5, .x=0xdf, .y=0x7c, .sp=0x16, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6166, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6167, .a=0xf5, .x=0xdf, .y=0x7c, .sp=0x16, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x6166, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6166, .value=0xc0, .type=IO_READ},
        {.addr=0x6167, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x673d, .a=0xa3, .x=0x6a, .y=0x5b, .sp=0x4f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x673d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x673e, .a=0xa3, .x=0x6a, .y=0x5b, .sp=0x4f, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x673d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x673d, .value=0xc0, .type=IO_READ},
        {.addr=0x673e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x9f66, .a=0x76, .x=0xb6, .y=0x65, .sp=0x5e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9f66, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9f67, .a=0x76, .x=0xb6, .y=0x65, .sp=0x5e, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x9f66, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9f66, .value=0xc0, .type=IO_READ},
        {.addr=0x9f67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xc7d0, .a=0x87, .x=0x4c, .y=0x67, .sp=0xaa, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc7d1, .a=0x87, .x=0x4c, .y=0x67, .sp=0xaa, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xc7d0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc7d0, .value=0xc0, .type=IO_READ},
        {.addr=0xc7d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x3415, .a=0x91, .x=0x19, .y=0x0d, .sp=0xa6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3415, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3416, .a=0x91, .x=0x19, .y=0x0d, .sp=0xa6, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x3415, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3415, .value=0xc0, .type=IO_READ},
        {.addr=0x3416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xf02c, .a=0x5c, .x=0x9f, .y=0x01, .sp=0x44, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xf02c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf02d, .a=0x5c, .x=0x9f, .y=0x01, .sp=0x44, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf02c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf02c, .value=0xc0, .type=IO_READ},
        {.addr=0xf02d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x62fc, .a=0xdd, .x=0xad, .y=0x3d, .sp=0x35, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x62fc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x62fd, .a=0xdd, .x=0xad, .y=0x3d, .sp=0x35, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x62fc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x62fc, .value=0xc0, .type=IO_READ},
        {.addr=0x62fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xed09, .a=0x46, .x=0x47, .y=0x9e, .sp=0xda, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xed09, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xed0a, .a=0x46, .x=0x47, .y=0x9e, .sp=0xda, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xed09, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xed09, .value=0xc0, .type=IO_READ},
        {.addr=0xed0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xd0ee, .a=0x6f, .x=0x44, .y=0xe3, .sp=0xf7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ee, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd0ef, .a=0x6f, .x=0x44, .y=0xe3, .sp=0xf7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd0ee, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd0ee, .value=0xc0, .type=IO_READ},
        {.addr=0xd0ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x2add, .a=0x10, .x=0x4d, .y=0x97, .sp=0xe4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2add, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2ade, .a=0x10, .x=0x4d, .y=0x97, .sp=0xe4, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2add, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2add, .value=0xc0, .type=IO_READ},
        {.addr=0x2ade, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xfa1b, .a=0x48, .x=0x6d, .y=0xe5, .sp=0xe6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfa1b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfa1c, .a=0x48, .x=0x6d, .y=0xe5, .sp=0xe6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfa1b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfa1b, .value=0xc0, .type=IO_READ},
        {.addr=0xfa1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x3c95, .a=0x5e, .x=0xe4, .y=0x03, .sp=0xa4, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3c95, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3c96, .a=0x5e, .x=0xe4, .y=0x03, .sp=0xa4, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x3c95, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3c95, .value=0xc0, .type=IO_READ},
        {.addr=0x3c96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x59ce, .a=0xad, .x=0xa8, .y=0x15, .sp=0xa6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x59ce, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x59cf, .a=0xad, .x=0xa8, .y=0x15, .sp=0xa6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x59ce, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x59ce, .value=0xc0, .type=IO_READ},
        {.addr=0x59cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xb3d9, .a=0xba, .x=0x38, .y=0x4d, .sp=0x46, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb3da, .a=0xba, .x=0x38, .y=0x4d, .sp=0x46, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xb3d9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb3d9, .value=0xc0, .type=IO_READ},
        {.addr=0xb3da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x04d4, .a=0xbc, .x=0xfb, .y=0x19, .sp=0x81, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x04d4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x04d5, .a=0xbc, .x=0xfb, .y=0x19, .sp=0x81, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x04d4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x04d4, .value=0xc0, .type=IO_READ},
        {.addr=0x04d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xa98e, .a=0x78, .x=0x90, .y=0x0f, .sp=0x6c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa98e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa98f, .a=0x78, .x=0x90, .y=0x0f, .sp=0x6c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa98e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa98e, .value=0xc0, .type=IO_READ},
        {.addr=0xa98f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x29cc, .a=0x20, .x=0xe4, .y=0xf1, .sp=0xc9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x29cc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x29cd, .a=0x20, .x=0xe4, .y=0xf1, .sp=0xc9, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x29cc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x29cc, .value=0xc0, .type=IO_READ},
        {.addr=0x29cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x6754, .a=0x8f, .x=0x4d, .y=0x14, .sp=0x93, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x6754, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6755, .a=0x8f, .x=0x4d, .y=0x14, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6754, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6754, .value=0xc0, .type=IO_READ},
        {.addr=0x6755, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xc2f8, .a=0xf5, .x=0x1c, .y=0x34, .sp=0x9d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc2f9, .a=0xf5, .x=0x1c, .y=0x34, .sp=0x9d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xc2f8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc2f8, .value=0xc0, .type=IO_READ},
        {.addr=0xc2f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x5451, .a=0xf0, .x=0x46, .y=0x0c, .sp=0x33, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x5451, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5452, .a=0xf0, .x=0x46, .y=0x0c, .sp=0x33, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x5451, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5451, .value=0xc0, .type=IO_READ},
        {.addr=0x5452, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x70d1, .a=0xf2, .x=0xaa, .y=0x8c, .sp=0x34, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x70d1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x70d2, .a=0xf2, .x=0xaa, .y=0x8c, .sp=0x34, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x70d1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x70d1, .value=0xc0, .type=IO_READ},
        {.addr=0x70d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x9b79, .a=0x92, .x=0x69, .y=0xf5, .sp=0x0a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9b79, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9b7a, .a=0x92, .x=0x69, .y=0xf5, .sp=0x0a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9b79, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9b79, .value=0xc0, .type=IO_READ},
        {.addr=0x9b7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x72a9, .a=0xa9, .x=0x39, .y=0x43, .sp=0x6b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x72a9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x72aa, .a=0xa9, .x=0x39, .y=0x43, .sp=0x6b, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x72a9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x72a9, .value=0xc0, .type=IO_READ},
        {.addr=0x72aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xf4cd, .a=0xca, .x=0x6d, .y=0xd9, .sp=0x80, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf4ce, .a=0xca, .x=0x6d, .y=0xd9, .sp=0x80, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf4cd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf4cd, .value=0xc0, .type=IO_READ},
        {.addr=0xf4ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x357e, .a=0x9b, .x=0xa9, .y=0x2d, .sp=0x82, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x357e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x357f, .a=0x9b, .x=0xa9, .y=0x2d, .sp=0x82, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x357e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x357e, .value=0xc0, .type=IO_READ},
        {.addr=0x357f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x0465, .a=0x2d, .x=0xa4, .y=0xe7, .sp=0x91, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0465, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0466, .a=0x2d, .x=0xa4, .y=0xe7, .sp=0x91, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0465, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0465, .value=0xc0, .type=IO_READ},
        {.addr=0x0466, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xec6f, .a=0xdb, .x=0xce, .y=0x1c, .sp=0x56, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xec6f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xec70, .a=0xdb, .x=0xce, .y=0x1c, .sp=0x56, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xec6f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xec6f, .value=0xc0, .type=IO_READ},
        {.addr=0xec70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x9972, .a=0x25, .x=0x67, .y=0xfe, .sp=0x2c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9972, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9973, .a=0x25, .x=0x67, .y=0xfe, .sp=0x2c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9972, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9972, .value=0xc0, .type=IO_READ},
        {.addr=0x9973, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xbea8, .a=0xff, .x=0x05, .y=0x02, .sp=0xc5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xbea8, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbea9, .a=0xff, .x=0x05, .y=0x02, .sp=0xc5, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xbea8, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbea8, .value=0xc0, .type=IO_READ},
        {.addr=0xbea9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xae66, .a=0x6a, .x=0xaa, .y=0x24, .sp=0x52, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xae66, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xae67, .a=0x6a, .x=0xaa, .y=0x24, .sp=0x52, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xae66, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xae66, .value=0xc0, .type=IO_READ},
        {.addr=0xae67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x7371, .a=0x76, .x=0xa2, .y=0xba, .sp=0x16, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7371, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7372, .a=0x76, .x=0xa2, .y=0xba, .sp=0x16, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7371, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7371, .value=0xc0, .type=IO_READ},
        {.addr=0x7372, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x6ea3, .a=0x45, .x=0xc0, .y=0xf1, .sp=0xab, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6ea4, .a=0x45, .x=0xc0, .y=0xf1, .sp=0xab, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x6ea3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6ea3, .value=0xc0, .type=IO_READ},
        {.addr=0x6ea4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x45e4, .a=0xb3, .x=0xc7, .y=0x27, .sp=0x46, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x45e4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x45e5, .a=0xb3, .x=0xc7, .y=0x27, .sp=0x46, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x45e4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x45e4, .value=0xc0, .type=IO_READ},
        {.addr=0x45e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x3ff1, .a=0xf3, .x=0xf3, .y=0x51, .sp=0x42, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3ff2, .a=0xf3, .x=0xf3, .y=0x51, .sp=0x42, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x3ff1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3ff1, .value=0xc0, .type=IO_READ},
        {.addr=0x3ff2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0119, .a=0x60, .x=0x16, .y=0xe6, .sp=0xa7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x011a, .a=0x60, .x=0x16, .y=0xe6, .sp=0xa7, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0119, .value=0xc0, .type=IO_READ},
        {.addr=0x011a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xf776, .a=0x43, .x=0x06, .y=0x9c, .sp=0x72, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf776, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf777, .a=0x43, .x=0x06, .y=0x9c, .sp=0x72, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xf776, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf776, .value=0xc0, .type=IO_READ},
        {.addr=0xf777, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7bcc, .a=0xab, .x=0x5c, .y=0x72, .sp=0x00, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7bcc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7bcd, .a=0xab, .x=0x5c, .y=0x72, .sp=0x00, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x7bcc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7bcc, .value=0xc0, .type=IO_READ},
        {.addr=0x7bcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xe62d, .a=0xa4, .x=0xa5, .y=0xef, .sp=0xbd, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xe62d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe62e, .a=0xa4, .x=0xa5, .y=0xef, .sp=0xbd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe62d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe62d, .value=0xc0, .type=IO_READ},
        {.addr=0xe62e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xe955, .a=0x68, .x=0xdb, .y=0x1d, .sp=0xaf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe955, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe956, .a=0x68, .x=0xdb, .y=0x1d, .sp=0xaf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe955, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe955, .value=0xc0, .type=IO_READ},
        {.addr=0xe956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xe4ff, .a=0x8e, .x=0xb4, .y=0x71, .sp=0x22, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe500, .a=0x8e, .x=0xb4, .y=0x71, .sp=0x22, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe4ff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe4ff, .value=0xc0, .type=IO_READ},
        {.addr=0xe500, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x2657, .a=0x45, .x=0xbb, .y=0x12, .sp=0xc4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2657, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2658, .a=0x45, .x=0xbb, .y=0x12, .sp=0xc4, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x2657, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2657, .value=0xc0, .type=IO_READ},
        {.addr=0x2658, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xb20f, .a=0xd6, .x=0x26, .y=0x98, .sp=0xfe, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xb20f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb210, .a=0xd6, .x=0x26, .y=0x98, .sp=0xfe, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb20f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb20f, .value=0xc0, .type=IO_READ},
        {.addr=0xb210, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xd077, .a=0x5b, .x=0x66, .y=0x7d, .sp=0x5c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xd077, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd078, .a=0x5b, .x=0x66, .y=0x7d, .sp=0x5c, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd077, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd077, .value=0xc0, .type=IO_READ},
        {.addr=0xd078, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf905, .a=0x01, .x=0x53, .y=0x42, .sp=0xb8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf905, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf906, .a=0x01, .x=0x53, .y=0x42, .sp=0xb8, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xf905, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf905, .value=0xc0, .type=IO_READ},
        {.addr=0xf906, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x93ba, .a=0x6e, .x=0x75, .y=0x3a, .sp=0x89, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x93ba, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x93bb, .a=0x6e, .x=0x75, .y=0x3a, .sp=0x89, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x93ba, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x93ba, .value=0xc0, .type=IO_READ},
        {.addr=0x93bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xe0e0, .a=0x3d, .x=0xf5, .y=0x52, .sp=0xa8, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe0e1, .a=0x3d, .x=0xf5, .y=0x52, .sp=0xa8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe0e0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe0e0, .value=0xc0, .type=IO_READ},
        {.addr=0xe0e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x541a, .a=0x73, .x=0xfc, .y=0x60, .sp=0x33, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x541a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x541b, .a=0x73, .x=0xfc, .y=0x60, .sp=0x33, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x541a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x541a, .value=0xc0, .type=IO_READ},
        {.addr=0x541b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xe691, .a=0x13, .x=0xaf, .y=0xc5, .sp=0xb0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe691, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe692, .a=0x13, .x=0xaf, .y=0xc5, .sp=0xb0, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xe691, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe691, .value=0xc0, .type=IO_READ},
        {.addr=0xe692, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xdc8b, .a=0xfa, .x=0x48, .y=0x95, .sp=0x5e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdc8b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdc8c, .a=0xfa, .x=0x48, .y=0x95, .sp=0x5e, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xdc8b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdc8b, .value=0xc0, .type=IO_READ},
        {.addr=0xdc8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xcb3b, .a=0x59, .x=0xf2, .y=0xb1, .sp=0x72, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xcb3c, .a=0x59, .x=0xf2, .y=0xb1, .sp=0x72, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xcb3b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcb3b, .value=0xc0, .type=IO_READ},
        {.addr=0xcb3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x8bff, .a=0x79, .x=0x68, .y=0x1b, .sp=0x9b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8bff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8c00, .a=0x79, .x=0x68, .y=0x1b, .sp=0x9b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x8bff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8bff, .value=0xc0, .type=IO_READ},
        {.addr=0x8c00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3c05, .a=0x04, .x=0x90, .y=0xd2, .sp=0x3f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3c05, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3c06, .a=0x04, .x=0x90, .y=0xd2, .sp=0x3f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x3c05, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3c05, .value=0xc0, .type=IO_READ},
        {.addr=0x3c06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xbec1, .a=0x6f, .x=0x87, .y=0x43, .sp=0x28, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xbec1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbec2, .a=0x6f, .x=0x87, .y=0x43, .sp=0x28, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbec1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbec1, .value=0xc0, .type=IO_READ},
        {.addr=0xbec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xa1e9, .a=0x2e, .x=0x86, .y=0x71, .sp=0x52, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa1ea, .a=0x2e, .x=0x86, .y=0x71, .sp=0x52, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xa1e9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa1e9, .value=0xc0, .type=IO_READ},
        {.addr=0xa1ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xb494, .a=0xec, .x=0x79, .y=0x8f, .sp=0xc2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb494, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb495, .a=0xec, .x=0x79, .y=0x8f, .sp=0xc2, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xb494, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb494, .value=0xc0, .type=IO_READ},
        {.addr=0xb495, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x0013, .a=0x53, .x=0xd6, .y=0x72, .sp=0x8c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0014, .a=0x53, .x=0xd6, .y=0x72, .sp=0x8c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0013, .value=0xc0, .type=IO_READ},
        {.addr=0x0014, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xe7d9, .a=0x94, .x=0x38, .y=0x6a, .sp=0x14, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe7da, .a=0x94, .x=0x38, .y=0x6a, .sp=0x14, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe7d9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe7d9, .value=0xc0, .type=IO_READ},
        {.addr=0xe7da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x61d0, .a=0xbf, .x=0x76, .y=0x0c, .sp=0xd4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x61d0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x61d1, .a=0xbf, .x=0x76, .y=0x0c, .sp=0xd4, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x61d0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x61d0, .value=0xc0, .type=IO_READ},
        {.addr=0x61d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x2a9f, .a=0x26, .x=0xb5, .y=0x08, .sp=0x98, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a9f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2aa0, .a=0x26, .x=0xb5, .y=0x08, .sp=0x98, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x2a9f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2a9f, .value=0xc0, .type=IO_READ},
        {.addr=0x2aa0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xdecf, .a=0x9e, .x=0x3e, .y=0xa6, .sp=0x00, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xdecf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xded0, .a=0x9e, .x=0x3e, .y=0xa6, .sp=0x00, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdecf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdecf, .value=0xc0, .type=IO_READ},
        {.addr=0xded0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x214d, .a=0xd2, .x=0x7d, .y=0x13, .sp=0xcd, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x214d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x214e, .a=0xd2, .x=0x7d, .y=0x13, .sp=0xcd, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x214d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x214d, .value=0xc0, .type=IO_READ},
        {.addr=0x214e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x4897, .a=0x25, .x=0x90, .y=0xac, .sp=0x49, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4897, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4898, .a=0x25, .x=0x90, .y=0xac, .sp=0x49, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4897, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4897, .value=0xc0, .type=IO_READ},
        {.addr=0x4898, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xba4b, .a=0x0d, .x=0xa0, .y=0xfe, .sp=0x9e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xba4b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xba4c, .a=0x0d, .x=0xa0, .y=0xfe, .sp=0x9e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xba4b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xba4b, .value=0xc0, .type=IO_READ},
        {.addr=0xba4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x9d0d, .a=0x46, .x=0xb1, .y=0x14, .sp=0xa4, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9d0d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9d0e, .a=0x46, .x=0xb1, .y=0x14, .sp=0xa4, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x9d0d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9d0d, .value=0xc0, .type=IO_READ},
        {.addr=0x9d0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x1351, .a=0x5c, .x=0x80, .y=0xe6, .sp=0xa8, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1351, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1352, .a=0x5c, .x=0x80, .y=0xe6, .sp=0xa8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1351, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1351, .value=0xc0, .type=IO_READ},
        {.addr=0x1352, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C0, _C0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd2d5, .a=0x92, .x=0x45, .y=0x0b, .sp=0xeb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd2d6, .a=0x92, .x=0x45, .y=0x0b, .sp=0xeb, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xd2d5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd2d5, .value=0xc0, .type=IO_READ},
        {.addr=0xd2d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
