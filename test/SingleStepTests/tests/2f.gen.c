#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_2F, _2F_0000) {
    const struct CPU_State initial_cpu = {.pc=0x71a8, .a=0x5c, .x=0xf7, .y=0x17, .sp=0x5b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x71a8, .value=0x2f}, {.addr=0x71a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7198, .a=0x5c, .x=0xf7, .y=0x17, .sp=0x5b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x71a8, .value=0x2f}, {.addr=0x71a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x71a8, .value=0x2f, .type=IO_READ},
        {.addr=0x71a9, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0001) {
    const struct CPU_State initial_cpu = {.pc=0x5cb0, .a=0x36, .x=0x7d, .y=0x0d, .sp=0x18, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb0, .value=0x2f}, {.addr=0x5cb1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5d2f, .a=0x36, .x=0x7d, .y=0x0d, .sp=0x18, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x5cb0, .value=0x2f}, {.addr=0x5cb1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5cb0, .value=0x2f, .type=IO_READ},
        {.addr=0x5cb1, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0002) {
    const struct CPU_State initial_cpu = {.pc=0x6ac9, .a=0x8a, .x=0x32, .y=0x3b, .sp=0x2d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac9, .value=0x2f}, {.addr=0x6aca, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x6ac5, .a=0x8a, .x=0x32, .y=0x3b, .sp=0x2d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6ac9, .value=0x2f}, {.addr=0x6aca, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x6ac9, .value=0x2f, .type=IO_READ},
        {.addr=0x6aca, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0003) {
    const struct CPU_State initial_cpu = {.pc=0x65de, .a=0xa0, .x=0xb2, .y=0xc5, .sp=0x38, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x65de, .value=0x2f}, {.addr=0x65df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6566, .a=0xa0, .x=0xb2, .y=0xc5, .sp=0x38, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x65de, .value=0x2f}, {.addr=0x65df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x65de, .value=0x2f, .type=IO_READ},
        {.addr=0x65df, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0004) {
    const struct CPU_State initial_cpu = {.pc=0xec33, .a=0x7e, .x=0x30, .y=0xe5, .sp=0x49, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xec33, .value=0x2f}, {.addr=0xec34, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xec7c, .a=0x7e, .x=0x30, .y=0xe5, .sp=0x49, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xec33, .value=0x2f}, {.addr=0xec34, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xec33, .value=0x2f, .type=IO_READ},
        {.addr=0xec34, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0005) {
    const struct CPU_State initial_cpu = {.pc=0x14b7, .a=0x9e, .x=0x2b, .y=0x5e, .sp=0xe2, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x14b7, .value=0x2f}, {.addr=0x14b8, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x14a8, .a=0x9e, .x=0x2b, .y=0x5e, .sp=0xe2, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x14b7, .value=0x2f}, {.addr=0x14b8, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x14b7, .value=0x2f, .type=IO_READ},
        {.addr=0x14b8, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1b86, .a=0xd8, .x=0x04, .y=0x77, .sp=0x6a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1b86, .value=0x2f}, {.addr=0x1b87, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x1b1b, .a=0xd8, .x=0x04, .y=0x77, .sp=0x6a, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x1b86, .value=0x2f}, {.addr=0x1b87, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x1b86, .value=0x2f, .type=IO_READ},
        {.addr=0x1b87, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0007) {
    const struct CPU_State initial_cpu = {.pc=0xffba, .a=0x27, .x=0x93, .y=0x87, .sp=0xe9, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xffba, .value=0x2f}, {.addr=0xffbb, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xfff1, .a=0x27, .x=0x93, .y=0x87, .sp=0xe9, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xffba, .value=0x2f}, {.addr=0xffbb, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xffba, .value=0x2f, .type=IO_READ},
        {.addr=0xffbb, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0008) {
    const struct CPU_State initial_cpu = {.pc=0x5e64, .a=0x28, .x=0x6e, .y=0xe9, .sp=0x5d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x5e64, .value=0x2f}, {.addr=0x5e65, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x5ed6, .a=0x28, .x=0x6e, .y=0xe9, .sp=0x5d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5e64, .value=0x2f}, {.addr=0x5e65, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x5e64, .value=0x2f, .type=IO_READ},
        {.addr=0x5e65, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0009) {
    const struct CPU_State initial_cpu = {.pc=0x4964, .a=0x2a, .x=0x62, .y=0x18, .sp=0x48, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x4964, .value=0x2f}, {.addr=0x4965, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x49d6, .a=0x2a, .x=0x62, .y=0x18, .sp=0x48, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4964, .value=0x2f}, {.addr=0x4965, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x4964, .value=0x2f, .type=IO_READ},
        {.addr=0x4965, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000A) {
    const struct CPU_State initial_cpu = {.pc=0x00cd, .a=0xd1, .x=0x7f, .y=0xcd, .sp=0xbd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x2f}, {.addr=0x00ce, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x00f6, .a=0xd1, .x=0x7f, .y=0xcd, .sp=0xbd, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x2f}, {.addr=0x00ce, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x00cd, .value=0x2f, .type=IO_READ},
        {.addr=0x00ce, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000B) {
    const struct CPU_State initial_cpu = {.pc=0xaad9, .a=0x29, .x=0x12, .y=0x28, .sp=0x02, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xaad9, .value=0x2f}, {.addr=0xaada, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xab3c, .a=0x29, .x=0x12, .y=0x28, .sp=0x02, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xaad9, .value=0x2f}, {.addr=0xaada, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xaad9, .value=0x2f, .type=IO_READ},
        {.addr=0xaada, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000C) {
    const struct CPU_State initial_cpu = {.pc=0x0fc2, .a=0x7b, .x=0x0b, .y=0xc9, .sp=0x21, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc2, .value=0x2f}, {.addr=0x0fc3, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x0fff, .a=0x7b, .x=0x0b, .y=0xc9, .sp=0x21, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0fc2, .value=0x2f}, {.addr=0x0fc3, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0fc2, .value=0x2f, .type=IO_READ},
        {.addr=0x0fc3, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3b49, .a=0x73, .x=0x1b, .y=0x8c, .sp=0xd7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3b49, .value=0x2f}, {.addr=0x3b4a, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x3b62, .a=0x73, .x=0x1b, .y=0x8c, .sp=0xd7, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x3b49, .value=0x2f}, {.addr=0x3b4a, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x3b49, .value=0x2f, .type=IO_READ},
        {.addr=0x3b4a, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000E) {
    const struct CPU_State initial_cpu = {.pc=0x3d0d, .a=0x2b, .x=0x7d, .y=0x55, .sp=0x2f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0d, .value=0x2f}, {.addr=0x3d0e, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x3d82, .a=0x2b, .x=0x7d, .y=0x55, .sp=0x2f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3d0d, .value=0x2f}, {.addr=0x3d0e, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x3d0d, .value=0x2f, .type=IO_READ},
        {.addr=0x3d0e, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_000F) {
    const struct CPU_State initial_cpu = {.pc=0x07ec, .a=0x7a, .x=0xce, .y=0x83, .sp=0xf1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x07ec, .value=0x2f}, {.addr=0x07ed, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x07b0, .a=0x7a, .x=0xce, .y=0x83, .sp=0xf1, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x07ec, .value=0x2f}, {.addr=0x07ed, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x07ec, .value=0x2f, .type=IO_READ},
        {.addr=0x07ed, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0010) {
    const struct CPU_State initial_cpu = {.pc=0xdaa8, .a=0x00, .x=0xca, .y=0x08, .sp=0x9a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa8, .value=0x2f}, {.addr=0xdaa9, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xdb21, .a=0x00, .x=0xca, .y=0x08, .sp=0x9a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdaa8, .value=0x2f}, {.addr=0xdaa9, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xdaa8, .value=0x2f, .type=IO_READ},
        {.addr=0xdaa9, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0011) {
    const struct CPU_State initial_cpu = {.pc=0xa82d, .a=0x2e, .x=0x94, .y=0x9c, .sp=0xec, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xa82d, .value=0x2f}, {.addr=0xa82e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa7de, .a=0x2e, .x=0x94, .y=0x9c, .sp=0xec, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa82d, .value=0x2f}, {.addr=0xa82e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa82d, .value=0x2f, .type=IO_READ},
        {.addr=0xa82e, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0012) {
    const struct CPU_State initial_cpu = {.pc=0x7e44, .a=0xb4, .x=0xbc, .y=0x2d, .sp=0xa6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7e44, .value=0x2f}, {.addr=0x7e45, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x7dfb, .a=0xb4, .x=0xbc, .y=0x2d, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7e44, .value=0x2f}, {.addr=0x7e45, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x7e44, .value=0x2f, .type=IO_READ},
        {.addr=0x7e45, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0013) {
    const struct CPU_State initial_cpu = {.pc=0xbb93, .a=0x9c, .x=0x44, .y=0x63, .sp=0x68, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xbb93, .value=0x2f}, {.addr=0xbb94, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xbb4b, .a=0x9c, .x=0x44, .y=0x63, .sp=0x68, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xbb93, .value=0x2f}, {.addr=0xbb94, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xbb93, .value=0x2f, .type=IO_READ},
        {.addr=0xbb94, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0014) {
    const struct CPU_State initial_cpu = {.pc=0x2ef6, .a=0xcf, .x=0xcb, .y=0x19, .sp=0x70, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef6, .value=0x2f}, {.addr=0x2ef7, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x2ebb, .a=0xcf, .x=0xcb, .y=0x19, .sp=0x70, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x2ef6, .value=0x2f}, {.addr=0x2ef7, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x2ef6, .value=0x2f, .type=IO_READ},
        {.addr=0x2ef7, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0015) {
    const struct CPU_State initial_cpu = {.pc=0x271c, .a=0xba, .x=0xb7, .y=0x57, .sp=0x93, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x271c, .value=0x2f}, {.addr=0x271d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x2779, .a=0xba, .x=0xb7, .y=0x57, .sp=0x93, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x271c, .value=0x2f}, {.addr=0x271d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x271c, .value=0x2f, .type=IO_READ},
        {.addr=0x271d, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0016) {
    const struct CPU_State initial_cpu = {.pc=0xa20b, .a=0x76, .x=0x99, .y=0x12, .sp=0x5b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa20b, .value=0x2f}, {.addr=0xa20c, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa288, .a=0x76, .x=0x99, .y=0x12, .sp=0x5b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa20b, .value=0x2f}, {.addr=0xa20c, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa20b, .value=0x2f, .type=IO_READ},
        {.addr=0xa20c, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0017) {
    const struct CPU_State initial_cpu = {.pc=0xf7c7, .a=0xce, .x=0xc2, .y=0xa5, .sp=0xfd, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c7, .value=0x2f}, {.addr=0xf7c8, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xf83e, .a=0xce, .x=0xc2, .y=0xa5, .sp=0xfd, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf7c7, .value=0x2f}, {.addr=0xf7c8, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xf7c7, .value=0x2f, .type=IO_READ},
        {.addr=0xf7c8, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0018) {
    const struct CPU_State initial_cpu = {.pc=0x1afb, .a=0x72, .x=0xfd, .y=0x00, .sp=0x32, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1afb, .value=0x2f}, {.addr=0x1afc, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1b35, .a=0x72, .x=0xfd, .y=0x00, .sp=0x32, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1afb, .value=0x2f}, {.addr=0x1afc, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1afb, .value=0x2f, .type=IO_READ},
        {.addr=0x1afc, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0019) {
    const struct CPU_State initial_cpu = {.pc=0x87b9, .a=0x4d, .x=0x28, .y=0x70, .sp=0x7e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x87b9, .value=0x2f}, {.addr=0x87ba, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x879b, .a=0x4d, .x=0x28, .y=0x70, .sp=0x7e, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x87b9, .value=0x2f}, {.addr=0x87ba, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x87b9, .value=0x2f, .type=IO_READ},
        {.addr=0x87ba, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001A) {
    const struct CPU_State initial_cpu = {.pc=0x6146, .a=0x48, .x=0xe0, .y=0xc7, .sp=0x56, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6146, .value=0x2f}, {.addr=0x6147, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6116, .a=0x48, .x=0xe0, .y=0xc7, .sp=0x56, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6146, .value=0x2f}, {.addr=0x6147, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6146, .value=0x2f, .type=IO_READ},
        {.addr=0x6147, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001B) {
    const struct CPU_State initial_cpu = {.pc=0x8288, .a=0xbe, .x=0x30, .y=0xb7, .sp=0x38, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8288, .value=0x2f}, {.addr=0x8289, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x82a6, .a=0xbe, .x=0x30, .y=0xb7, .sp=0x38, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8288, .value=0x2f}, {.addr=0x8289, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8288, .value=0x2f, .type=IO_READ},
        {.addr=0x8289, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001C) {
    const struct CPU_State initial_cpu = {.pc=0x9e37, .a=0x2e, .x=0xad, .y=0x0e, .sp=0x56, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e37, .value=0x2f}, {.addr=0x9e38, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x9e65, .a=0x2e, .x=0xad, .y=0x0e, .sp=0x56, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9e37, .value=0x2f}, {.addr=0x9e38, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x9e37, .value=0x2f, .type=IO_READ},
        {.addr=0x9e38, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001D) {
    const struct CPU_State initial_cpu = {.pc=0x95b4, .a=0x72, .x=0x5f, .y=0x53, .sp=0xaa, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x95b4, .value=0x2f}, {.addr=0x95b5, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x961b, .a=0x72, .x=0x5f, .y=0x53, .sp=0xaa, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x95b4, .value=0x2f}, {.addr=0x95b5, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x95b4, .value=0x2f, .type=IO_READ},
        {.addr=0x95b5, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001E) {
    const struct CPU_State initial_cpu = {.pc=0x3aea, .a=0x17, .x=0x6b, .y=0x0c, .sp=0x8f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3aea, .value=0x2f}, {.addr=0x3aeb, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x3a83, .a=0x17, .x=0x6b, .y=0x0c, .sp=0x8f, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x3aea, .value=0x2f}, {.addr=0x3aeb, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x3aea, .value=0x2f, .type=IO_READ},
        {.addr=0x3aeb, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_001F) {
    const struct CPU_State initial_cpu = {.pc=0x1e2e, .a=0x5f, .x=0x89, .y=0xc7, .sp=0x3e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1e2e, .value=0x2f}, {.addr=0x1e2f, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x1dfb, .a=0x5f, .x=0x89, .y=0xc7, .sp=0x3e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1e2e, .value=0x2f}, {.addr=0x1e2f, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x1e2e, .value=0x2f, .type=IO_READ},
        {.addr=0x1e2f, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0020) {
    const struct CPU_State initial_cpu = {.pc=0xd917, .a=0xbd, .x=0x01, .y=0xe0, .sp=0xae, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd917, .value=0x2f}, {.addr=0xd918, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xd92f, .a=0xbd, .x=0x01, .y=0xe0, .sp=0xae, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd917, .value=0x2f}, {.addr=0xd918, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xd917, .value=0x2f, .type=IO_READ},
        {.addr=0xd918, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5bc5, .a=0x37, .x=0x26, .y=0xed, .sp=0x1a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc5, .value=0x2f}, {.addr=0x5bc6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5c0d, .a=0x37, .x=0x26, .y=0xed, .sp=0x1a, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x5bc5, .value=0x2f}, {.addr=0x5bc6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5bc5, .value=0x2f, .type=IO_READ},
        {.addr=0x5bc6, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0022) {
    const struct CPU_State initial_cpu = {.pc=0xb7ee, .a=0x46, .x=0x71, .y=0x4d, .sp=0x15, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ee, .value=0x2f}, {.addr=0xb7ef, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb7cd, .a=0x46, .x=0x71, .y=0x4d, .sp=0x15, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb7ee, .value=0x2f}, {.addr=0xb7ef, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb7ee, .value=0x2f, .type=IO_READ},
        {.addr=0xb7ef, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0023) {
    const struct CPU_State initial_cpu = {.pc=0xd3ce, .a=0x93, .x=0x99, .y=0xb1, .sp=0x07, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ce, .value=0x2f}, {.addr=0xd3cf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd3cc, .a=0x93, .x=0x99, .y=0xb1, .sp=0x07, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd3ce, .value=0x2f}, {.addr=0xd3cf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd3ce, .value=0x2f, .type=IO_READ},
        {.addr=0xd3cf, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0024) {
    const struct CPU_State initial_cpu = {.pc=0xd6bc, .a=0xe0, .x=0xb5, .y=0x5f, .sp=0xb8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd6bc, .value=0x2f}, {.addr=0xd6bd, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xd730, .a=0xe0, .x=0xb5, .y=0x5f, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd6bc, .value=0x2f}, {.addr=0xd6bd, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xd6bc, .value=0x2f, .type=IO_READ},
        {.addr=0xd6bd, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0025) {
    const struct CPU_State initial_cpu = {.pc=0x5ba4, .a=0x17, .x=0xbf, .y=0x7a, .sp=0x92, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba4, .value=0x2f}, {.addr=0x5ba5, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5c0e, .a=0x17, .x=0xbf, .y=0x7a, .sp=0x92, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5ba4, .value=0x2f}, {.addr=0x5ba5, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5ba4, .value=0x2f, .type=IO_READ},
        {.addr=0x5ba5, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0026) {
    const struct CPU_State initial_cpu = {.pc=0x0564, .a=0xe3, .x=0xe5, .y=0xa2, .sp=0xe7, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0564, .value=0x2f}, {.addr=0x0565, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x0531, .a=0xe3, .x=0xe5, .y=0xa2, .sp=0xe7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0564, .value=0x2f}, {.addr=0x0565, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x0564, .value=0x2f, .type=IO_READ},
        {.addr=0x0565, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0027) {
    const struct CPU_State initial_cpu = {.pc=0x6d8c, .a=0x34, .x=0x63, .y=0xcf, .sp=0x3f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6d8c, .value=0x2f}, {.addr=0x6d8d, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x6db5, .a=0x34, .x=0x63, .y=0xcf, .sp=0x3f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6d8c, .value=0x2f}, {.addr=0x6d8d, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x6d8c, .value=0x2f, .type=IO_READ},
        {.addr=0x6d8d, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0028) {
    const struct CPU_State initial_cpu = {.pc=0xc7e2, .a=0xa4, .x=0xdc, .y=0x9d, .sp=0xf4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e2, .value=0x2f}, {.addr=0xc7e3, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xc825, .a=0xa4, .x=0xdc, .y=0x9d, .sp=0xf4, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xc7e2, .value=0x2f}, {.addr=0xc7e3, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xc7e2, .value=0x2f, .type=IO_READ},
        {.addr=0xc7e3, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0029) {
    const struct CPU_State initial_cpu = {.pc=0xb195, .a=0x8a, .x=0xde, .y=0x4e, .sp=0x2b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb195, .value=0x2f}, {.addr=0xb196, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb189, .a=0x8a, .x=0xde, .y=0x4e, .sp=0x2b, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xb195, .value=0x2f}, {.addr=0xb196, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb195, .value=0x2f, .type=IO_READ},
        {.addr=0xb196, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002A) {
    const struct CPU_State initial_cpu = {.pc=0xfdd8, .a=0xf1, .x=0x45, .y=0xe2, .sp=0xea, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd8, .value=0x2f}, {.addr=0xfdd9, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xfdf4, .a=0xf1, .x=0x45, .y=0xe2, .sp=0xea, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xfdd8, .value=0x2f}, {.addr=0xfdd9, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xfdd8, .value=0x2f, .type=IO_READ},
        {.addr=0xfdd9, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002B) {
    const struct CPU_State initial_cpu = {.pc=0x2292, .a=0xd9, .x=0x54, .y=0xfe, .sp=0xe5, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x2292, .value=0x2f}, {.addr=0x2293, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x227c, .a=0xd9, .x=0x54, .y=0xfe, .sp=0xe5, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x2292, .value=0x2f}, {.addr=0x2293, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x2292, .value=0x2f, .type=IO_READ},
        {.addr=0x2293, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002C) {
    const struct CPU_State initial_cpu = {.pc=0x509b, .a=0x89, .x=0x13, .y=0x89, .sp=0xda, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x509b, .value=0x2f}, {.addr=0x509c, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5036, .a=0x89, .x=0x13, .y=0x89, .sp=0xda, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x509b, .value=0x2f}, {.addr=0x509c, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x509b, .value=0x2f, .type=IO_READ},
        {.addr=0x509c, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3940, .a=0xa7, .x=0x58, .y=0xae, .sp=0xdc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3940, .value=0x2f}, {.addr=0x3941, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x399c, .a=0xa7, .x=0x58, .y=0xae, .sp=0xdc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3940, .value=0x2f}, {.addr=0x3941, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x3940, .value=0x2f, .type=IO_READ},
        {.addr=0x3941, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002E) {
    const struct CPU_State initial_cpu = {.pc=0xd057, .a=0xae, .x=0x49, .y=0xdf, .sp=0x7c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd057, .value=0x2f}, {.addr=0xd058, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd075, .a=0xae, .x=0x49, .y=0xdf, .sp=0x7c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd057, .value=0x2f}, {.addr=0xd058, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd057, .value=0x2f, .type=IO_READ},
        {.addr=0xd058, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_002F) {
    const struct CPU_State initial_cpu = {.pc=0x9ad3, .a=0xa7, .x=0xfa, .y=0xc0, .sp=0xb0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad3, .value=0x2f}, {.addr=0x9ad4, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x9af0, .a=0xa7, .x=0xfa, .y=0xc0, .sp=0xb0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9ad3, .value=0x2f}, {.addr=0x9ad4, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x9ad3, .value=0x2f, .type=IO_READ},
        {.addr=0x9ad4, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8127, .a=0x94, .x=0x31, .y=0x9f, .sp=0x62, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8127, .value=0x2f}, {.addr=0x8128, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8185, .a=0x94, .x=0x31, .y=0x9f, .sp=0x62, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8127, .value=0x2f}, {.addr=0x8128, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8127, .value=0x2f, .type=IO_READ},
        {.addr=0x8128, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0031) {
    const struct CPU_State initial_cpu = {.pc=0x15c6, .a=0x9f, .x=0x2a, .y=0x07, .sp=0x51, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x15c6, .value=0x2f}, {.addr=0x15c7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x15f8, .a=0x9f, .x=0x2a, .y=0x07, .sp=0x51, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x15c6, .value=0x2f}, {.addr=0x15c7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x15c6, .value=0x2f, .type=IO_READ},
        {.addr=0x15c7, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0032) {
    const struct CPU_State initial_cpu = {.pc=0x5011, .a=0xac, .x=0xf5, .y=0xff, .sp=0xc9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5011, .value=0x2f}, {.addr=0x5012, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x4fe6, .a=0xac, .x=0xf5, .y=0xff, .sp=0xc9, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x5011, .value=0x2f}, {.addr=0x5012, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5011, .value=0x2f, .type=IO_READ},
        {.addr=0x5012, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0033) {
    const struct CPU_State initial_cpu = {.pc=0x6585, .a=0x04, .x=0xb6, .y=0xf1, .sp=0xd7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6585, .value=0x2f}, {.addr=0x6586, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x65fb, .a=0x04, .x=0xb6, .y=0xf1, .sp=0xd7, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x6585, .value=0x2f}, {.addr=0x6586, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x6585, .value=0x2f, .type=IO_READ},
        {.addr=0x6586, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0034) {
    const struct CPU_State initial_cpu = {.pc=0x5dbf, .a=0x16, .x=0xdf, .y=0x6e, .sp=0x1d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5dbf, .value=0x2f}, {.addr=0x5dc0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5d47, .a=0x16, .x=0xdf, .y=0x6e, .sp=0x1d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x5dbf, .value=0x2f}, {.addr=0x5dc0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5dbf, .value=0x2f, .type=IO_READ},
        {.addr=0x5dc0, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0035) {
    const struct CPU_State initial_cpu = {.pc=0x663c, .a=0x92, .x=0xef, .y=0xa8, .sp=0xfc, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x663c, .value=0x2f}, {.addr=0x663d, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x6630, .a=0x92, .x=0xef, .y=0xa8, .sp=0xfc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x663c, .value=0x2f}, {.addr=0x663d, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x663c, .value=0x2f, .type=IO_READ},
        {.addr=0x663d, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4ede, .a=0x51, .x=0x37, .y=0xa6, .sp=0xd2, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4ede, .value=0x2f}, {.addr=0x4edf, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x51, .x=0x37, .y=0xa6, .sp=0xd2, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4ede, .value=0x2f}, {.addr=0x4edf, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x4ede, .value=0x2f, .type=IO_READ},
        {.addr=0x4edf, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0037) {
    const struct CPU_State initial_cpu = {.pc=0x5451, .a=0xa4, .x=0x74, .y=0xfc, .sp=0xd7, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5451, .value=0x2f}, {.addr=0x5452, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x549c, .a=0xa4, .x=0x74, .y=0xfc, .sp=0xd7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5451, .value=0x2f}, {.addr=0x5452, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x5451, .value=0x2f, .type=IO_READ},
        {.addr=0x5452, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0038) {
    const struct CPU_State initial_cpu = {.pc=0x26cd, .a=0x4b, .x=0x21, .y=0x0e, .sp=0xbc, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x26cd, .value=0x2f}, {.addr=0x26ce, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x2653, .a=0x4b, .x=0x21, .y=0x0e, .sp=0xbc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x26cd, .value=0x2f}, {.addr=0x26ce, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x26cd, .value=0x2f, .type=IO_READ},
        {.addr=0x26ce, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0039) {
    const struct CPU_State initial_cpu = {.pc=0x0116, .a=0x73, .x=0x3e, .y=0x6a, .sp=0xf3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x2f}, {.addr=0x0117, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0098, .a=0x73, .x=0x3e, .y=0x6a, .sp=0xf3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x2f}, {.addr=0x0117, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0116, .value=0x2f, .type=IO_READ},
        {.addr=0x0117, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003A) {
    const struct CPU_State initial_cpu = {.pc=0x3b7f, .a=0xd8, .x=0x5b, .y=0x66, .sp=0xb6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x3b7f, .value=0x2f}, {.addr=0x3b80, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x3bf0, .a=0xd8, .x=0x5b, .y=0x66, .sp=0xb6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x3b7f, .value=0x2f}, {.addr=0x3b80, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x3b7f, .value=0x2f, .type=IO_READ},
        {.addr=0x3b80, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003B) {
    const struct CPU_State initial_cpu = {.pc=0x35d8, .a=0xf8, .x=0x37, .y=0x4b, .sp=0x85, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x35d8, .value=0x2f}, {.addr=0x35d9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3656, .a=0xf8, .x=0x37, .y=0x4b, .sp=0x85, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x35d8, .value=0x2f}, {.addr=0x35d9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x35d8, .value=0x2f, .type=IO_READ},
        {.addr=0x35d9, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003C) {
    const struct CPU_State initial_cpu = {.pc=0x49c1, .a=0xa8, .x=0x22, .y=0xbf, .sp=0xfa, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x49c1, .value=0x2f}, {.addr=0x49c2, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x4976, .a=0xa8, .x=0x22, .y=0xbf, .sp=0xfa, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x49c1, .value=0x2f}, {.addr=0x49c2, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x49c1, .value=0x2f, .type=IO_READ},
        {.addr=0x49c2, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0cdb, .a=0x93, .x=0x3e, .y=0xb0, .sp=0xb4, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0cdb, .value=0x2f}, {.addr=0x0cdc, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0x93, .x=0x3e, .y=0xb0, .sp=0xb4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0cdb, .value=0x2f}, {.addr=0x0cdc, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x0cdb, .value=0x2f, .type=IO_READ},
        {.addr=0x0cdc, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003E) {
    const struct CPU_State initial_cpu = {.pc=0xb912, .a=0x5a, .x=0x48, .y=0x9f, .sp=0x9b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb912, .value=0x2f}, {.addr=0xb913, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb97f, .a=0x5a, .x=0x48, .y=0x9f, .sp=0x9b, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xb912, .value=0x2f}, {.addr=0xb913, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb912, .value=0x2f, .type=IO_READ},
        {.addr=0xb913, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_003F) {
    const struct CPU_State initial_cpu = {.pc=0x719b, .a=0x99, .x=0x8a, .y=0x5f, .sp=0xb1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x719b, .value=0x2f}, {.addr=0x719c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x719f, .a=0x99, .x=0x8a, .y=0x5f, .sp=0xb1, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x719b, .value=0x2f}, {.addr=0x719c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x719b, .value=0x2f, .type=IO_READ},
        {.addr=0x719c, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7e24, .a=0xc2, .x=0xd1, .y=0xe0, .sp=0x19, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7e24, .value=0x2f}, {.addr=0x7e25, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x7de7, .a=0xc2, .x=0xd1, .y=0xe0, .sp=0x19, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7e24, .value=0x2f}, {.addr=0x7e25, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x7e24, .value=0x2f, .type=IO_READ},
        {.addr=0x7e25, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0041) {
    const struct CPU_State initial_cpu = {.pc=0x5626, .a=0x2f, .x=0xff, .y=0xd1, .sp=0x8f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5626, .value=0x2f}, {.addr=0x5627, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x55b9, .a=0x2f, .x=0xff, .y=0xd1, .sp=0x8f, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x5626, .value=0x2f}, {.addr=0x5627, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x5626, .value=0x2f, .type=IO_READ},
        {.addr=0x5627, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0042) {
    const struct CPU_State initial_cpu = {.pc=0xab0e, .a=0x0c, .x=0xa2, .y=0x50, .sp=0x39, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xab0e, .value=0x2f}, {.addr=0xab0f, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xaaf1, .a=0x0c, .x=0xa2, .y=0x50, .sp=0x39, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xab0e, .value=0x2f}, {.addr=0xab0f, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xab0e, .value=0x2f, .type=IO_READ},
        {.addr=0xab0f, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0043) {
    const struct CPU_State initial_cpu = {.pc=0xa68f, .a=0x00, .x=0xb0, .y=0xec, .sp=0xa0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xa68f, .value=0x2f}, {.addr=0xa690, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xa66f, .a=0x00, .x=0xb0, .y=0xec, .sp=0xa0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa68f, .value=0x2f}, {.addr=0xa690, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xa68f, .value=0x2f, .type=IO_READ},
        {.addr=0xa690, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0044) {
    const struct CPU_State initial_cpu = {.pc=0x2d69, .a=0xcf, .x=0xd2, .y=0x9f, .sp=0x41, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x2d69, .value=0x2f}, {.addr=0x2d6a, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x2dd7, .a=0xcf, .x=0xd2, .y=0x9f, .sp=0x41, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2d69, .value=0x2f}, {.addr=0x2d6a, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x2d69, .value=0x2f, .type=IO_READ},
        {.addr=0x2d6a, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0045) {
    const struct CPU_State initial_cpu = {.pc=0x9d22, .a=0x15, .x=0xc9, .y=0x3f, .sp=0x7b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x9d22, .value=0x2f}, {.addr=0x9d23, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x9d87, .a=0x15, .x=0xc9, .y=0x3f, .sp=0x7b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9d22, .value=0x2f}, {.addr=0x9d23, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x9d22, .value=0x2f, .type=IO_READ},
        {.addr=0x9d23, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0046) {
    const struct CPU_State initial_cpu = {.pc=0x64bf, .a=0x25, .x=0x0a, .y=0xd7, .sp=0x33, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x64bf, .value=0x2f}, {.addr=0x64c0, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x64b8, .a=0x25, .x=0x0a, .y=0xd7, .sp=0x33, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x64bf, .value=0x2f}, {.addr=0x64c0, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x64bf, .value=0x2f, .type=IO_READ},
        {.addr=0x64c0, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0047) {
    const struct CPU_State initial_cpu = {.pc=0x8088, .a=0x68, .x=0x2e, .y=0xe7, .sp=0xa2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8088, .value=0x2f}, {.addr=0x8089, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x80b5, .a=0x68, .x=0x2e, .y=0xe7, .sp=0xa2, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x8088, .value=0x2f}, {.addr=0x8089, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x8088, .value=0x2f, .type=IO_READ},
        {.addr=0x8089, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0048) {
    const struct CPU_State initial_cpu = {.pc=0xe8b9, .a=0x05, .x=0xc9, .y=0xea, .sp=0x3c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b9, .value=0x2f}, {.addr=0xe8ba, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe849, .a=0x05, .x=0xc9, .y=0xea, .sp=0x3c, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe8b9, .value=0x2f}, {.addr=0xe8ba, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8b9, .value=0x2f, .type=IO_READ},
        {.addr=0xe8ba, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0049) {
    const struct CPU_State initial_cpu = {.pc=0x7461, .a=0xf1, .x=0x45, .y=0x35, .sp=0xdf, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7461, .value=0x2f}, {.addr=0x7462, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x74a0, .a=0xf1, .x=0x45, .y=0x35, .sp=0xdf, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7461, .value=0x2f}, {.addr=0x7462, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7461, .value=0x2f, .type=IO_READ},
        {.addr=0x7462, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004A) {
    const struct CPU_State initial_cpu = {.pc=0x832d, .a=0x53, .x=0xbb, .y=0x2e, .sp=0x85, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x832d, .value=0x2f}, {.addr=0x832e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x8306, .a=0x53, .x=0xbb, .y=0x2e, .sp=0x85, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x832d, .value=0x2f}, {.addr=0x832e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x832d, .value=0x2f, .type=IO_READ},
        {.addr=0x832e, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004B) {
    const struct CPU_State initial_cpu = {.pc=0x8079, .a=0x10, .x=0x89, .y=0x68, .sp=0x7b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8079, .value=0x2f}, {.addr=0x807a, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x80d1, .a=0x10, .x=0x89, .y=0x68, .sp=0x7b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8079, .value=0x2f}, {.addr=0x807a, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x8079, .value=0x2f, .type=IO_READ},
        {.addr=0x807a, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004C) {
    const struct CPU_State initial_cpu = {.pc=0x84c6, .a=0xb3, .x=0x0e, .y=0xa9, .sp=0x27, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x84c6, .value=0x2f}, {.addr=0x84c7, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8503, .a=0xb3, .x=0x0e, .y=0xa9, .sp=0x27, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x84c6, .value=0x2f}, {.addr=0x84c7, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x84c6, .value=0x2f, .type=IO_READ},
        {.addr=0x84c7, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9eb2, .a=0xe7, .x=0x26, .y=0x0a, .sp=0xf2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb2, .value=0x2f}, {.addr=0x9eb3, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x9e6a, .a=0xe7, .x=0x26, .y=0x0a, .sp=0xf2, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9eb2, .value=0x2f}, {.addr=0x9eb3, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x9eb2, .value=0x2f, .type=IO_READ},
        {.addr=0x9eb3, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004E) {
    const struct CPU_State initial_cpu = {.pc=0xab16, .a=0x0d, .x=0x91, .y=0x42, .sp=0x99, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xab16, .value=0x2f}, {.addr=0xab17, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xab85, .a=0x0d, .x=0x91, .y=0x42, .sp=0x99, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xab16, .value=0x2f}, {.addr=0xab17, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xab16, .value=0x2f, .type=IO_READ},
        {.addr=0xab17, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_004F) {
    const struct CPU_State initial_cpu = {.pc=0x0889, .a=0x8c, .x=0x32, .y=0x57, .sp=0xc8, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0889, .value=0x2f}, {.addr=0x088a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0871, .a=0x8c, .x=0x32, .y=0x57, .sp=0xc8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0889, .value=0x2f}, {.addr=0x088a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0889, .value=0x2f, .type=IO_READ},
        {.addr=0x088a, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0050) {
    const struct CPU_State initial_cpu = {.pc=0x9c5d, .a=0x58, .x=0x3e, .y=0x1e, .sp=0x8a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9c5d, .value=0x2f}, {.addr=0x9c5e, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x9c6b, .a=0x58, .x=0x3e, .y=0x1e, .sp=0x8a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9c5d, .value=0x2f}, {.addr=0x9c5e, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x9c5d, .value=0x2f, .type=IO_READ},
        {.addr=0x9c5e, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0051) {
    const struct CPU_State initial_cpu = {.pc=0x2701, .a=0x99, .x=0x4a, .y=0xe4, .sp=0x9b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2701, .value=0x2f}, {.addr=0x2702, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2778, .a=0x99, .x=0x4a, .y=0xe4, .sp=0x9b, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x2701, .value=0x2f}, {.addr=0x2702, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2701, .value=0x2f, .type=IO_READ},
        {.addr=0x2702, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0052) {
    const struct CPU_State initial_cpu = {.pc=0xddef, .a=0x86, .x=0x58, .y=0x6d, .sp=0x4a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xddef, .value=0x2f}, {.addr=0xddf0, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xde44, .a=0x86, .x=0x58, .y=0x6d, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xddef, .value=0x2f}, {.addr=0xddf0, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xddef, .value=0x2f, .type=IO_READ},
        {.addr=0xddf0, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0053) {
    const struct CPU_State initial_cpu = {.pc=0x81e9, .a=0x67, .x=0x86, .y=0xeb, .sp=0xf9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x81e9, .value=0x2f}, {.addr=0x81ea, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x8204, .a=0x67, .x=0x86, .y=0xeb, .sp=0xf9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x81e9, .value=0x2f}, {.addr=0x81ea, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x81e9, .value=0x2f, .type=IO_READ},
        {.addr=0x81ea, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0054) {
    const struct CPU_State initial_cpu = {.pc=0xc663, .a=0x21, .x=0x33, .y=0x76, .sp=0x11, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc663, .value=0x2f}, {.addr=0xc664, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc661, .a=0x21, .x=0x33, .y=0x76, .sp=0x11, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc663, .value=0x2f}, {.addr=0xc664, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc663, .value=0x2f, .type=IO_READ},
        {.addr=0xc664, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0055) {
    const struct CPU_State initial_cpu = {.pc=0x1b14, .a=0xf6, .x=0x1e, .y=0x90, .sp=0xe1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b14, .value=0x2f}, {.addr=0x1b15, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x1aad, .a=0xf6, .x=0x1e, .y=0x90, .sp=0xe1, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1b14, .value=0x2f}, {.addr=0x1b15, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x1b14, .value=0x2f, .type=IO_READ},
        {.addr=0x1b15, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0056) {
    const struct CPU_State initial_cpu = {.pc=0xc74e, .a=0x6b, .x=0x94, .y=0x1b, .sp=0x5e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc74e, .value=0x2f}, {.addr=0xc74f, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xc6d3, .a=0x6b, .x=0x94, .y=0x1b, .sp=0x5e, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xc74e, .value=0x2f}, {.addr=0xc74f, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xc74e, .value=0x2f, .type=IO_READ},
        {.addr=0xc74f, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0057) {
    const struct CPU_State initial_cpu = {.pc=0x2c7e, .a=0xf7, .x=0x28, .y=0x90, .sp=0x30, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c7e, .value=0x2f}, {.addr=0x2c7f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2c5c, .a=0xf7, .x=0x28, .y=0x90, .sp=0x30, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2c7e, .value=0x2f}, {.addr=0x2c7f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2c7e, .value=0x2f, .type=IO_READ},
        {.addr=0x2c7f, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0058) {
    const struct CPU_State initial_cpu = {.pc=0xa27e, .a=0x19, .x=0xea, .y=0x82, .sp=0xda, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa27e, .value=0x2f}, {.addr=0xa27f, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa2c2, .a=0x19, .x=0xea, .y=0x82, .sp=0xda, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xa27e, .value=0x2f}, {.addr=0xa27f, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa27e, .value=0x2f, .type=IO_READ},
        {.addr=0xa27f, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0059) {
    const struct CPU_State initial_cpu = {.pc=0x30fe, .a=0xd1, .x=0x59, .y=0x96, .sp=0x45, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x30fe, .value=0x2f}, {.addr=0x30ff, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x30aa, .a=0xd1, .x=0x59, .y=0x96, .sp=0x45, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x30fe, .value=0x2f}, {.addr=0x30ff, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x30fe, .value=0x2f, .type=IO_READ},
        {.addr=0x30ff, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005A) {
    const struct CPU_State initial_cpu = {.pc=0xa084, .a=0x2f, .x=0x8f, .y=0x79, .sp=0xdf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa084, .value=0x2f}, {.addr=0xa085, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xa0f7, .a=0x2f, .x=0x8f, .y=0x79, .sp=0xdf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa084, .value=0x2f}, {.addr=0xa085, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xa084, .value=0x2f, .type=IO_READ},
        {.addr=0xa085, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005B) {
    const struct CPU_State initial_cpu = {.pc=0x5f48, .a=0xa2, .x=0xef, .y=0x15, .sp=0x1c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5f48, .value=0x2f}, {.addr=0x5f49, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x5fc9, .a=0xa2, .x=0xef, .y=0x15, .sp=0x1c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5f48, .value=0x2f}, {.addr=0x5f49, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x5f48, .value=0x2f, .type=IO_READ},
        {.addr=0x5f49, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005C) {
    const struct CPU_State initial_cpu = {.pc=0x9bb8, .a=0x24, .x=0xd3, .y=0x0c, .sp=0xcc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb8, .value=0x2f}, {.addr=0x9bb9, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9ba9, .a=0x24, .x=0xd3, .y=0x0c, .sp=0xcc, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x9bb8, .value=0x2f}, {.addr=0x9bb9, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9bb8, .value=0x2f, .type=IO_READ},
        {.addr=0x9bb9, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1f4e, .a=0x99, .x=0x78, .y=0xb5, .sp=0xa8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1f4e, .value=0x2f}, {.addr=0x1f4f, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x1efd, .a=0x99, .x=0x78, .y=0xb5, .sp=0xa8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1f4e, .value=0x2f}, {.addr=0x1f4f, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x1f4e, .value=0x2f, .type=IO_READ},
        {.addr=0x1f4f, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005E) {
    const struct CPU_State initial_cpu = {.pc=0x7311, .a=0x08, .x=0x56, .y=0x62, .sp=0xfc, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x7311, .value=0x2f}, {.addr=0x7312, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x7362, .a=0x08, .x=0x56, .y=0x62, .sp=0xfc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7311, .value=0x2f}, {.addr=0x7312, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x7311, .value=0x2f, .type=IO_READ},
        {.addr=0x7312, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_005F) {
    const struct CPU_State initial_cpu = {.pc=0x2fb7, .a=0x8e, .x=0x65, .y=0xbb, .sp=0x36, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb7, .value=0x2f}, {.addr=0x2fb8, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x2f5c, .a=0x8e, .x=0x65, .y=0xbb, .sp=0x36, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2fb7, .value=0x2f}, {.addr=0x2fb8, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x2fb7, .value=0x2f, .type=IO_READ},
        {.addr=0x2fb8, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0060) {
    const struct CPU_State initial_cpu = {.pc=0x4c24, .a=0x93, .x=0x7e, .y=0x8f, .sp=0x80, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4c24, .value=0x2f}, {.addr=0x4c25, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x4c61, .a=0x93, .x=0x7e, .y=0x8f, .sp=0x80, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4c24, .value=0x2f}, {.addr=0x4c25, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x4c24, .value=0x2f, .type=IO_READ},
        {.addr=0x4c25, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0061) {
    const struct CPU_State initial_cpu = {.pc=0xc26f, .a=0x65, .x=0xc7, .y=0x40, .sp=0x46, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc26f, .value=0x2f}, {.addr=0xc270, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xc28c, .a=0x65, .x=0xc7, .y=0x40, .sp=0x46, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xc26f, .value=0x2f}, {.addr=0xc270, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xc26f, .value=0x2f, .type=IO_READ},
        {.addr=0xc270, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4cab, .a=0xb3, .x=0xd9, .y=0x27, .sp=0xa7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4cab, .value=0x2f}, {.addr=0x4cac, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x4cc8, .a=0xb3, .x=0xd9, .y=0x27, .sp=0xa7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4cab, .value=0x2f}, {.addr=0x4cac, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x4cab, .value=0x2f, .type=IO_READ},
        {.addr=0x4cac, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0063) {
    const struct CPU_State initial_cpu = {.pc=0x8b56, .a=0x15, .x=0x86, .y=0xea, .sp=0x7f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b56, .value=0x2f}, {.addr=0x8b57, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x8b1d, .a=0x15, .x=0x86, .y=0xea, .sp=0x7f, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x8b56, .value=0x2f}, {.addr=0x8b57, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x8b56, .value=0x2f, .type=IO_READ},
        {.addr=0x8b57, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0064) {
    const struct CPU_State initial_cpu = {.pc=0xddc5, .a=0x51, .x=0x29, .y=0xfa, .sp=0xd5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xddc5, .value=0x2f}, {.addr=0xddc6, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xddff, .a=0x51, .x=0x29, .y=0xfa, .sp=0xd5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xddc5, .value=0x2f}, {.addr=0xddc6, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xddc5, .value=0x2f, .type=IO_READ},
        {.addr=0xddc6, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0065) {
    const struct CPU_State initial_cpu = {.pc=0x361f, .a=0x29, .x=0x69, .y=0x67, .sp=0x41, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x361f, .value=0x2f}, {.addr=0x3620, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x361d, .a=0x29, .x=0x69, .y=0x67, .sp=0x41, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x361f, .value=0x2f}, {.addr=0x3620, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x361f, .value=0x2f, .type=IO_READ},
        {.addr=0x3620, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0066) {
    const struct CPU_State initial_cpu = {.pc=0x7eed, .a=0x12, .x=0x34, .y=0x5d, .sp=0x75, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7eed, .value=0x2f}, {.addr=0x7eee, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x7eb2, .a=0x12, .x=0x34, .y=0x5d, .sp=0x75, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x7eed, .value=0x2f}, {.addr=0x7eee, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x7eed, .value=0x2f, .type=IO_READ},
        {.addr=0x7eee, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0067) {
    const struct CPU_State initial_cpu = {.pc=0xfcf9, .a=0xa6, .x=0xaa, .y=0x61, .sp=0x9a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf9, .value=0x2f}, {.addr=0xfcfa, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xfcb2, .a=0xa6, .x=0xaa, .y=0x61, .sp=0x9a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xfcf9, .value=0x2f}, {.addr=0xfcfa, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xfcf9, .value=0x2f, .type=IO_READ},
        {.addr=0xfcfa, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0068) {
    const struct CPU_State initial_cpu = {.pc=0xc63f, .a=0x1b, .x=0x87, .y=0xd0, .sp=0x78, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc63f, .value=0x2f}, {.addr=0xc640, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xc672, .a=0x1b, .x=0x87, .y=0xd0, .sp=0x78, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc63f, .value=0x2f}, {.addr=0xc640, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xc63f, .value=0x2f, .type=IO_READ},
        {.addr=0xc640, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0069) {
    const struct CPU_State initial_cpu = {.pc=0xa302, .a=0x2b, .x=0xdd, .y=0x8e, .sp=0x99, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa302, .value=0x2f}, {.addr=0xa303, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xa2a9, .a=0x2b, .x=0xdd, .y=0x8e, .sp=0x99, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa302, .value=0x2f}, {.addr=0xa303, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xa302, .value=0x2f, .type=IO_READ},
        {.addr=0xa303, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006A) {
    const struct CPU_State initial_cpu = {.pc=0xffe7, .a=0xe1, .x=0x41, .y=0xc1, .sp=0x87, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xffe7, .value=0x2f}, {.addr=0xffe8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xffc5, .a=0xe1, .x=0x41, .y=0xc1, .sp=0x87, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xffe7, .value=0x2f}, {.addr=0xffe8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xffe7, .value=0x2f, .type=IO_READ},
        {.addr=0xffe8, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006B) {
    const struct CPU_State initial_cpu = {.pc=0x71b8, .a=0xf9, .x=0x17, .y=0x3a, .sp=0x53, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x71b8, .value=0x2f}, {.addr=0x71b9, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x716a, .a=0xf9, .x=0x17, .y=0x3a, .sp=0x53, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x71b8, .value=0x2f}, {.addr=0x71b9, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x71b8, .value=0x2f, .type=IO_READ},
        {.addr=0x71b9, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006C) {
    const struct CPU_State initial_cpu = {.pc=0xbb17, .a=0x2d, .x=0x3a, .y=0xd4, .sp=0x33, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbb17, .value=0x2f}, {.addr=0xbb18, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xbb1c, .a=0x2d, .x=0x3a, .y=0xd4, .sp=0x33, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbb17, .value=0x2f}, {.addr=0xbb18, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xbb17, .value=0x2f, .type=IO_READ},
        {.addr=0xbb18, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0054, .a=0x6f, .x=0xfd, .y=0x17, .sp=0xc3, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x2f}, {.addr=0x0055, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x00a2, .a=0x6f, .x=0xfd, .y=0x17, .sp=0xc3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x2f}, {.addr=0x0055, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0054, .value=0x2f, .type=IO_READ},
        {.addr=0x0055, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006E) {
    const struct CPU_State initial_cpu = {.pc=0x1b8f, .a=0x16, .x=0x64, .y=0xc1, .sp=0xaf, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1b8f, .value=0x2f}, {.addr=0x1b90, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x1b99, .a=0x16, .x=0x64, .y=0xc1, .sp=0xaf, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1b8f, .value=0x2f}, {.addr=0x1b90, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x1b8f, .value=0x2f, .type=IO_READ},
        {.addr=0x1b90, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_006F) {
    const struct CPU_State initial_cpu = {.pc=0x6687, .a=0x9c, .x=0x0b, .y=0x8c, .sp=0x46, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6687, .value=0x2f}, {.addr=0x6688, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x6639, .a=0x9c, .x=0x0b, .y=0x8c, .sp=0x46, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6687, .value=0x2f}, {.addr=0x6688, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x6687, .value=0x2f, .type=IO_READ},
        {.addr=0x6688, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0070) {
    const struct CPU_State initial_cpu = {.pc=0x67cf, .a=0x22, .x=0x8b, .y=0xe4, .sp=0xdb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x67cf, .value=0x2f}, {.addr=0x67d0, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x6768, .a=0x22, .x=0x8b, .y=0xe4, .sp=0xdb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x67cf, .value=0x2f}, {.addr=0x67d0, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x67cf, .value=0x2f, .type=IO_READ},
        {.addr=0x67d0, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0071) {
    const struct CPU_State initial_cpu = {.pc=0x8344, .a=0x5e, .x=0x1a, .y=0xc0, .sp=0xa3, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8344, .value=0x2f}, {.addr=0x8345, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x8364, .a=0x5e, .x=0x1a, .y=0xc0, .sp=0xa3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8344, .value=0x2f}, {.addr=0x8345, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x8344, .value=0x2f, .type=IO_READ},
        {.addr=0x8345, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0072) {
    const struct CPU_State initial_cpu = {.pc=0xdf6c, .a=0x9c, .x=0x42, .y=0x9b, .sp=0x78, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6c, .value=0x2f}, {.addr=0xdf6d, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xdfd5, .a=0x9c, .x=0x42, .y=0x9b, .sp=0x78, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xdf6c, .value=0x2f}, {.addr=0xdf6d, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xdf6c, .value=0x2f, .type=IO_READ},
        {.addr=0xdf6d, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6903, .a=0x2d, .x=0x41, .y=0x70, .sp=0x3b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6903, .value=0x2f}, {.addr=0x6904, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x68e9, .a=0x2d, .x=0x41, .y=0x70, .sp=0x3b, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x6903, .value=0x2f}, {.addr=0x6904, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x6903, .value=0x2f, .type=IO_READ},
        {.addr=0x6904, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0074) {
    const struct CPU_State initial_cpu = {.pc=0xb8f5, .a=0x0c, .x=0x92, .y=0xda, .sp=0xfe, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f5, .value=0x2f}, {.addr=0xb8f6, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb8a0, .a=0x0c, .x=0x92, .y=0xda, .sp=0xfe, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xb8f5, .value=0x2f}, {.addr=0xb8f6, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb8f5, .value=0x2f, .type=IO_READ},
        {.addr=0xb8f6, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0075) {
    const struct CPU_State initial_cpu = {.pc=0x4f7e, .a=0xfc, .x=0x9f, .y=0x16, .sp=0x31, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7e, .value=0x2f}, {.addr=0x4f7f, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x4fd3, .a=0xfc, .x=0x9f, .y=0x16, .sp=0x31, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x4f7e, .value=0x2f}, {.addr=0x4f7f, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x4f7e, .value=0x2f, .type=IO_READ},
        {.addr=0x4f7f, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0076) {
    const struct CPU_State initial_cpu = {.pc=0x9b57, .a=0x68, .x=0x48, .y=0xc2, .sp=0x10, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x9b57, .value=0x2f}, {.addr=0x9b58, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9b9d, .a=0x68, .x=0x48, .y=0xc2, .sp=0x10, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9b57, .value=0x2f}, {.addr=0x9b58, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x9b57, .value=0x2f, .type=IO_READ},
        {.addr=0x9b58, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0077) {
    const struct CPU_State initial_cpu = {.pc=0x1b4f, .a=0xda, .x=0x10, .y=0x7c, .sp=0x4d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1b4f, .value=0x2f}, {.addr=0x1b50, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x1b48, .a=0xda, .x=0x10, .y=0x7c, .sp=0x4d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x1b4f, .value=0x2f}, {.addr=0x1b50, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x1b4f, .value=0x2f, .type=IO_READ},
        {.addr=0x1b50, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0078) {
    const struct CPU_State initial_cpu = {.pc=0x793b, .a=0x36, .x=0x40, .y=0x02, .sp=0xa4, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x793b, .value=0x2f}, {.addr=0x793c, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x797c, .a=0x36, .x=0x40, .y=0x02, .sp=0xa4, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x793b, .value=0x2f}, {.addr=0x793c, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x793b, .value=0x2f, .type=IO_READ},
        {.addr=0x793c, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0079) {
    const struct CPU_State initial_cpu = {.pc=0xbe1e, .a=0x51, .x=0x74, .y=0x08, .sp=0xfc, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xbe1e, .value=0x2f}, {.addr=0xbe1f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe9d, .a=0x51, .x=0x74, .y=0x08, .sp=0xfc, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xbe1e, .value=0x2f}, {.addr=0xbe1f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbe1e, .value=0x2f, .type=IO_READ},
        {.addr=0xbe1f, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007A) {
    const struct CPU_State initial_cpu = {.pc=0xbb1f, .a=0x32, .x=0x81, .y=0x81, .sp=0x3f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1f, .value=0x2f}, {.addr=0xbb20, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xbb4d, .a=0x32, .x=0x81, .y=0x81, .sp=0x3f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xbb1f, .value=0x2f}, {.addr=0xbb20, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xbb1f, .value=0x2f, .type=IO_READ},
        {.addr=0xbb20, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007B) {
    const struct CPU_State initial_cpu = {.pc=0xf53c, .a=0x46, .x=0x3b, .y=0x51, .sp=0xf7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf53c, .value=0x2f}, {.addr=0xf53d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf50c, .a=0x46, .x=0x3b, .y=0x51, .sp=0xf7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf53c, .value=0x2f}, {.addr=0xf53d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf53c, .value=0x2f, .type=IO_READ},
        {.addr=0xf53d, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007C) {
    const struct CPU_State initial_cpu = {.pc=0x168f, .a=0xd1, .x=0x12, .y=0x28, .sp=0x4c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x168f, .value=0x2f}, {.addr=0x1690, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1651, .a=0xd1, .x=0x12, .y=0x28, .sp=0x4c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x168f, .value=0x2f}, {.addr=0x1690, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x168f, .value=0x2f, .type=IO_READ},
        {.addr=0x1690, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007D) {
    const struct CPU_State initial_cpu = {.pc=0x5068, .a=0xa1, .x=0x40, .y=0x8e, .sp=0xab, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5068, .value=0x2f}, {.addr=0x5069, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ff0, .a=0xa1, .x=0x40, .y=0x8e, .sp=0xab, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x5068, .value=0x2f}, {.addr=0x5069, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5068, .value=0x2f, .type=IO_READ},
        {.addr=0x5069, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007E) {
    const struct CPU_State initial_cpu = {.pc=0x508a, .a=0x26, .x=0xbf, .y=0x5f, .sp=0x5d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x508a, .value=0x2f}, {.addr=0x508b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x50d9, .a=0x26, .x=0xbf, .y=0x5f, .sp=0x5d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x508a, .value=0x2f}, {.addr=0x508b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x508a, .value=0x2f, .type=IO_READ},
        {.addr=0x508b, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_007F) {
    const struct CPU_State initial_cpu = {.pc=0x9ebf, .a=0xb0, .x=0x7d, .y=0x78, .sp=0xf2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9ebf, .value=0x2f}, {.addr=0x9ec0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9e70, .a=0xb0, .x=0x7d, .y=0x78, .sp=0xf2, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x9ebf, .value=0x2f}, {.addr=0x9ec0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9ebf, .value=0x2f, .type=IO_READ},
        {.addr=0x9ec0, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0080) {
    const struct CPU_State initial_cpu = {.pc=0x748d, .a=0xa9, .x=0xba, .y=0xd1, .sp=0x16, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x748d, .value=0x2f}, {.addr=0x748e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x748f, .a=0xa9, .x=0xba, .y=0xd1, .sp=0x16, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x748d, .value=0x2f}, {.addr=0x748e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x748d, .value=0x2f, .type=IO_READ},
        {.addr=0x748e, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0081) {
    const struct CPU_State initial_cpu = {.pc=0x88cb, .a=0xed, .x=0xe2, .y=0x15, .sp=0xad, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x88cb, .value=0x2f}, {.addr=0x88cc, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x88ff, .a=0xed, .x=0xe2, .y=0x15, .sp=0xad, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x88cb, .value=0x2f}, {.addr=0x88cc, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x88cb, .value=0x2f, .type=IO_READ},
        {.addr=0x88cc, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0082) {
    const struct CPU_State initial_cpu = {.pc=0xb508, .a=0x12, .x=0xc8, .y=0x1e, .sp=0xff, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb508, .value=0x2f}, {.addr=0xb509, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xb4f3, .a=0x12, .x=0xc8, .y=0x1e, .sp=0xff, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb508, .value=0x2f}, {.addr=0xb509, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xb508, .value=0x2f, .type=IO_READ},
        {.addr=0xb509, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0083) {
    const struct CPU_State initial_cpu = {.pc=0xb735, .a=0x14, .x=0xd0, .y=0x84, .sp=0xca, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb735, .value=0x2f}, {.addr=0xb736, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xb75b, .a=0x14, .x=0xd0, .y=0x84, .sp=0xca, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xb735, .value=0x2f}, {.addr=0xb736, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xb735, .value=0x2f, .type=IO_READ},
        {.addr=0xb736, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0084) {
    const struct CPU_State initial_cpu = {.pc=0x6ed9, .a=0xe5, .x=0x76, .y=0x6b, .sp=0x3d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed9, .value=0x2f}, {.addr=0x6eda, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x6ecd, .a=0xe5, .x=0x76, .y=0x6b, .sp=0x3d, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x6ed9, .value=0x2f}, {.addr=0x6eda, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x6ed9, .value=0x2f, .type=IO_READ},
        {.addr=0x6eda, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0085) {
    const struct CPU_State initial_cpu = {.pc=0x4995, .a=0xbd, .x=0x3c, .y=0x4d, .sp=0xf4, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x4995, .value=0x2f}, {.addr=0x4996, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x494a, .a=0xbd, .x=0x3c, .y=0x4d, .sp=0xf4, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x4995, .value=0x2f}, {.addr=0x4996, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x4995, .value=0x2f, .type=IO_READ},
        {.addr=0x4996, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0086) {
    const struct CPU_State initial_cpu = {.pc=0xce6b, .a=0x73, .x=0xaa, .y=0x02, .sp=0x2c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xce6b, .value=0x2f}, {.addr=0xce6c, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xce61, .a=0x73, .x=0xaa, .y=0x02, .sp=0x2c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xce6b, .value=0x2f}, {.addr=0xce6c, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xce6b, .value=0x2f, .type=IO_READ},
        {.addr=0xce6c, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0087) {
    const struct CPU_State initial_cpu = {.pc=0x75a0, .a=0x38, .x=0x4c, .y=0x25, .sp=0x87, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x75a0, .value=0x2f}, {.addr=0x75a1, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x75f7, .a=0x38, .x=0x4c, .y=0x25, .sp=0x87, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x75a0, .value=0x2f}, {.addr=0x75a1, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x75a0, .value=0x2f, .type=IO_READ},
        {.addr=0x75a1, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0088) {
    const struct CPU_State initial_cpu = {.pc=0x8616, .a=0x52, .x=0xec, .y=0xa5, .sp=0x9b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8616, .value=0x2f}, {.addr=0x8617, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x8688, .a=0x52, .x=0xec, .y=0xa5, .sp=0x9b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x8616, .value=0x2f}, {.addr=0x8617, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x8616, .value=0x2f, .type=IO_READ},
        {.addr=0x8617, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0089) {
    const struct CPU_State initial_cpu = {.pc=0x995e, .a=0xdb, .x=0xb1, .y=0xab, .sp=0xd7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x995e, .value=0x2f}, {.addr=0x995f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9926, .a=0xdb, .x=0xb1, .y=0xab, .sp=0xd7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x995e, .value=0x2f}, {.addr=0x995f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x995e, .value=0x2f, .type=IO_READ},
        {.addr=0x995f, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008A) {
    const struct CPU_State initial_cpu = {.pc=0xe53d, .a=0xd9, .x=0x16, .y=0x7f, .sp=0x85, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe53d, .value=0x2f}, {.addr=0xe53e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe573, .a=0xd9, .x=0x16, .y=0x7f, .sp=0x85, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xe53d, .value=0x2f}, {.addr=0xe53e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe53d, .value=0x2f, .type=IO_READ},
        {.addr=0xe53e, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008B) {
    const struct CPU_State initial_cpu = {.pc=0x9989, .a=0x08, .x=0xc0, .y=0x5d, .sp=0x33, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9989, .value=0x2f}, {.addr=0x998a, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x9915, .a=0x08, .x=0xc0, .y=0x5d, .sp=0x33, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x9989, .value=0x2f}, {.addr=0x998a, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x9989, .value=0x2f, .type=IO_READ},
        {.addr=0x998a, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008C) {
    const struct CPU_State initial_cpu = {.pc=0x57b4, .a=0x7d, .x=0x63, .y=0xed, .sp=0xd1, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x57b4, .value=0x2f}, {.addr=0x57b5, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x57bd, .a=0x7d, .x=0x63, .y=0xed, .sp=0xd1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x57b4, .value=0x2f}, {.addr=0x57b5, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x57b4, .value=0x2f, .type=IO_READ},
        {.addr=0x57b5, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8bbd, .a=0x2a, .x=0xcf, .y=0x92, .sp=0x9a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8bbd, .value=0x2f}, {.addr=0x8bbe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8bff, .a=0x2a, .x=0xcf, .y=0x92, .sp=0x9a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8bbd, .value=0x2f}, {.addr=0x8bbe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8bbd, .value=0x2f, .type=IO_READ},
        {.addr=0x8bbe, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008E) {
    const struct CPU_State initial_cpu = {.pc=0xcb1a, .a=0xc4, .x=0x1d, .y=0x78, .sp=0x69, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1a, .value=0x2f}, {.addr=0xcb1b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xcaf4, .a=0xc4, .x=0x1d, .y=0x78, .sp=0x69, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcb1a, .value=0x2f}, {.addr=0xcb1b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xcb1a, .value=0x2f, .type=IO_READ},
        {.addr=0xcb1b, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_008F) {
    const struct CPU_State initial_cpu = {.pc=0x1b0f, .a=0xe6, .x=0x93, .y=0x7d, .sp=0x05, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b0f, .value=0x2f}, {.addr=0x1b10, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x1b6c, .a=0xe6, .x=0x93, .y=0x7d, .sp=0x05, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1b0f, .value=0x2f}, {.addr=0x1b10, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x1b0f, .value=0x2f, .type=IO_READ},
        {.addr=0x1b10, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0090) {
    const struct CPU_State initial_cpu = {.pc=0xc595, .a=0x46, .x=0x0f, .y=0x10, .sp=0xec, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc595, .value=0x2f}, {.addr=0xc596, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xc602, .a=0x46, .x=0x0f, .y=0x10, .sp=0xec, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xc595, .value=0x2f}, {.addr=0xc596, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xc595, .value=0x2f, .type=IO_READ},
        {.addr=0xc596, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0091) {
    const struct CPU_State initial_cpu = {.pc=0xc339, .a=0xe2, .x=0xaa, .y=0x26, .sp=0xdb, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc339, .value=0x2f}, {.addr=0xc33a, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xc36d, .a=0xe2, .x=0xaa, .y=0x26, .sp=0xdb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xc339, .value=0x2f}, {.addr=0xc33a, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xc339, .value=0x2f, .type=IO_READ},
        {.addr=0xc33a, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0092) {
    const struct CPU_State initial_cpu = {.pc=0xff30, .a=0x19, .x=0xd5, .y=0x73, .sp=0x91, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xff30, .value=0x2f}, {.addr=0xff31, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xff94, .a=0x19, .x=0xd5, .y=0x73, .sp=0x91, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xff30, .value=0x2f}, {.addr=0xff31, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xff30, .value=0x2f, .type=IO_READ},
        {.addr=0xff31, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0093) {
    const struct CPU_State initial_cpu = {.pc=0x87c2, .a=0xc2, .x=0x9f, .y=0x6c, .sp=0x17, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x87c2, .value=0x2f}, {.addr=0x87c3, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x8842, .a=0xc2, .x=0x9f, .y=0x6c, .sp=0x17, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x87c2, .value=0x2f}, {.addr=0x87c3, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x87c2, .value=0x2f, .type=IO_READ},
        {.addr=0x87c3, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0094) {
    const struct CPU_State initial_cpu = {.pc=0x7c8b, .a=0xd5, .x=0x18, .y=0xd6, .sp=0x28, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8b, .value=0x2f}, {.addr=0x7c8c, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x7c31, .a=0xd5, .x=0x18, .y=0xd6, .sp=0x28, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7c8b, .value=0x2f}, {.addr=0x7c8c, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x7c8b, .value=0x2f, .type=IO_READ},
        {.addr=0x7c8c, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0095) {
    const struct CPU_State initial_cpu = {.pc=0x0f66, .a=0xaf, .x=0xde, .y=0x6b, .sp=0xd6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0f66, .value=0x2f}, {.addr=0x0f67, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x0fb4, .a=0xaf, .x=0xde, .y=0x6b, .sp=0xd6, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0f66, .value=0x2f}, {.addr=0x0f67, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0f66, .value=0x2f, .type=IO_READ},
        {.addr=0x0f67, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0096) {
    const struct CPU_State initial_cpu = {.pc=0xf4c8, .a=0xe8, .x=0x86, .y=0xfb, .sp=0xea, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c8, .value=0x2f}, {.addr=0xf4c9, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xf49e, .a=0xe8, .x=0x86, .y=0xfb, .sp=0xea, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf4c8, .value=0x2f}, {.addr=0xf4c9, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xf4c8, .value=0x2f, .type=IO_READ},
        {.addr=0xf4c9, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0097) {
    const struct CPU_State initial_cpu = {.pc=0xee21, .a=0xc3, .x=0xd1, .y=0xc6, .sp=0x15, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xee21, .value=0x2f}, {.addr=0xee22, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xee5c, .a=0xc3, .x=0xd1, .y=0xc6, .sp=0x15, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xee21, .value=0x2f}, {.addr=0xee22, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xee21, .value=0x2f, .type=IO_READ},
        {.addr=0xee22, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0098) {
    const struct CPU_State initial_cpu = {.pc=0xede1, .a=0x21, .x=0x55, .y=0xc6, .sp=0x6d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xede1, .value=0x2f}, {.addr=0xede2, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xed72, .a=0x21, .x=0x55, .y=0xc6, .sp=0x6d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xede1, .value=0x2f}, {.addr=0xede2, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xede1, .value=0x2f, .type=IO_READ},
        {.addr=0xede2, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0099) {
    const struct CPU_State initial_cpu = {.pc=0x882c, .a=0x5a, .x=0x3a, .y=0xca, .sp=0xa7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x882c, .value=0x2f}, {.addr=0x882d, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x8865, .a=0x5a, .x=0x3a, .y=0xca, .sp=0xa7, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x882c, .value=0x2f}, {.addr=0x882d, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x882c, .value=0x2f, .type=IO_READ},
        {.addr=0x882d, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009A) {
    const struct CPU_State initial_cpu = {.pc=0x98d9, .a=0x6a, .x=0x3d, .y=0x95, .sp=0x6e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x98d9, .value=0x2f}, {.addr=0x98da, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x989b, .a=0x6a, .x=0x3d, .y=0x95, .sp=0x6e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x98d9, .value=0x2f}, {.addr=0x98da, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x98d9, .value=0x2f, .type=IO_READ},
        {.addr=0x98da, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009B) {
    const struct CPU_State initial_cpu = {.pc=0xdf6c, .a=0xc6, .x=0x15, .y=0x99, .sp=0xfa, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6c, .value=0x2f}, {.addr=0xdf6d, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xdfaf, .a=0xc6, .x=0x15, .y=0x99, .sp=0xfa, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdf6c, .value=0x2f}, {.addr=0xdf6d, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xdf6c, .value=0x2f, .type=IO_READ},
        {.addr=0xdf6d, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009C) {
    const struct CPU_State initial_cpu = {.pc=0xf881, .a=0x23, .x=0x8c, .y=0x55, .sp=0x52, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf881, .value=0x2f}, {.addr=0xf882, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf869, .a=0x23, .x=0x8c, .y=0x55, .sp=0x52, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xf881, .value=0x2f}, {.addr=0xf882, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf881, .value=0x2f, .type=IO_READ},
        {.addr=0xf882, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009D) {
    const struct CPU_State initial_cpu = {.pc=0x32a1, .a=0x9e, .x=0x20, .y=0xaf, .sp=0x12, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x32a1, .value=0x2f}, {.addr=0x32a2, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x3275, .a=0x9e, .x=0x20, .y=0xaf, .sp=0x12, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x32a1, .value=0x2f}, {.addr=0x32a2, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x32a1, .value=0x2f, .type=IO_READ},
        {.addr=0x32a2, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009E) {
    const struct CPU_State initial_cpu = {.pc=0xe512, .a=0xaa, .x=0xc5, .y=0x3b, .sp=0xde, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe512, .value=0x2f}, {.addr=0xe513, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xe4c6, .a=0xaa, .x=0xc5, .y=0x3b, .sp=0xde, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xe512, .value=0x2f}, {.addr=0xe513, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xe512, .value=0x2f, .type=IO_READ},
        {.addr=0xe513, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_009F) {
    const struct CPU_State initial_cpu = {.pc=0x2124, .a=0xb7, .x=0xdc, .y=0x00, .sp=0xcd, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2124, .value=0x2f}, {.addr=0x2125, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x20a8, .a=0xb7, .x=0xdc, .y=0x00, .sp=0xcd, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2124, .value=0x2f}, {.addr=0x2125, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2124, .value=0x2f, .type=IO_READ},
        {.addr=0x2125, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xf5d8, .a=0x71, .x=0xfc, .y=0x54, .sp=0xb0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d8, .value=0x2f}, {.addr=0xf5d9, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xf565, .a=0x71, .x=0xfc, .y=0x54, .sp=0xb0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xf5d8, .value=0x2f}, {.addr=0xf5d9, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xf5d8, .value=0x2f, .type=IO_READ},
        {.addr=0xf5d9, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x9d44, .a=0x42, .x=0xa2, .y=0xd2, .sp=0xae, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9d44, .value=0x2f}, {.addr=0x9d45, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9d42, .a=0x42, .x=0xa2, .y=0xd2, .sp=0xae, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9d44, .value=0x2f}, {.addr=0x9d45, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9d44, .value=0x2f, .type=IO_READ},
        {.addr=0x9d45, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xee10, .a=0x9c, .x=0x10, .y=0x2b, .sp=0x18, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xee10, .value=0x2f}, {.addr=0xee11, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xedf3, .a=0x9c, .x=0x10, .y=0x2b, .sp=0x18, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xee10, .value=0x2f}, {.addr=0xee11, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xee10, .value=0x2f, .type=IO_READ},
        {.addr=0xee11, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x6124, .a=0x63, .x=0x79, .y=0x4a, .sp=0xca, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x6124, .value=0x2f}, {.addr=0x6125, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x6194, .a=0x63, .x=0x79, .y=0x4a, .sp=0xca, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6124, .value=0x2f}, {.addr=0x6125, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x6124, .value=0x2f, .type=IO_READ},
        {.addr=0x6125, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x1d11, .a=0xc8, .x=0x51, .y=0x3c, .sp=0xc0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1d11, .value=0x2f}, {.addr=0x1d12, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x1ce7, .a=0xc8, .x=0x51, .y=0x3c, .sp=0xc0, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x1d11, .value=0x2f}, {.addr=0x1d12, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x1d11, .value=0x2f, .type=IO_READ},
        {.addr=0x1d12, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x8060, .a=0x44, .x=0x21, .y=0x8d, .sp=0x40, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8060, .value=0x2f}, {.addr=0x8061, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x803d, .a=0x44, .x=0x21, .y=0x8d, .sp=0x40, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8060, .value=0x2f}, {.addr=0x8061, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x8060, .value=0x2f, .type=IO_READ},
        {.addr=0x8061, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x7474, .a=0x55, .x=0x1c, .y=0x8c, .sp=0x12, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7474, .value=0x2f}, {.addr=0x7475, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x74eb, .a=0x55, .x=0x1c, .y=0x8c, .sp=0x12, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x7474, .value=0x2f}, {.addr=0x7475, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7474, .value=0x2f, .type=IO_READ},
        {.addr=0x7475, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x7717, .a=0xab, .x=0xe1, .y=0x61, .sp=0xa1, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7717, .value=0x2f}, {.addr=0x7718, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x76c2, .a=0xab, .x=0xe1, .y=0x61, .sp=0xa1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7717, .value=0x2f}, {.addr=0x7718, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x7717, .value=0x2f, .type=IO_READ},
        {.addr=0x7718, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x0dd5, .a=0x7d, .x=0x5d, .y=0x1f, .sp=0xa4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd5, .value=0x2f}, {.addr=0x0dd6, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0d89, .a=0x7d, .x=0x5d, .y=0x1f, .sp=0xa4, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0dd5, .value=0x2f}, {.addr=0x0dd6, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0dd5, .value=0x2f, .type=IO_READ},
        {.addr=0x0dd6, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x965a, .a=0x4d, .x=0x1a, .y=0x34, .sp=0x7c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x965a, .value=0x2f}, {.addr=0x965b, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x9625, .a=0x4d, .x=0x1a, .y=0x34, .sp=0x7c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x965a, .value=0x2f}, {.addr=0x965b, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x965a, .value=0x2f, .type=IO_READ},
        {.addr=0x965b, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x403a, .a=0xeb, .x=0xbe, .y=0xff, .sp=0x56, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x403a, .value=0x2f}, {.addr=0x403b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x402e, .a=0xeb, .x=0xbe, .y=0xff, .sp=0x56, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x403a, .value=0x2f}, {.addr=0x403b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x403a, .value=0x2f, .type=IO_READ},
        {.addr=0x403b, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x2812, .a=0xb2, .x=0x23, .y=0x4d, .sp=0xc8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2812, .value=0x2f}, {.addr=0x2813, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x285d, .a=0xb2, .x=0x23, .y=0x4d, .sp=0xc8, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x2812, .value=0x2f}, {.addr=0x2813, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x2812, .value=0x2f, .type=IO_READ},
        {.addr=0x2813, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x3ec5, .a=0x2c, .x=0xd1, .y=0x15, .sp=0x0a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec5, .value=0x2f}, {.addr=0x3ec6, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x3e59, .a=0x2c, .x=0xd1, .y=0x15, .sp=0x0a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x3ec5, .value=0x2f}, {.addr=0x3ec6, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x3ec5, .value=0x2f, .type=IO_READ},
        {.addr=0x3ec6, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x2977, .a=0xca, .x=0xbf, .y=0x24, .sp=0x16, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2977, .value=0x2f}, {.addr=0x2978, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x290f, .a=0xca, .x=0xbf, .y=0x24, .sp=0x16, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2977, .value=0x2f}, {.addr=0x2978, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2977, .value=0x2f, .type=IO_READ},
        {.addr=0x2978, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xea3d, .a=0x0b, .x=0x46, .y=0x8c, .sp=0xca, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xea3d, .value=0x2f}, {.addr=0xea3e, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xea20, .a=0x0b, .x=0x46, .y=0x8c, .sp=0xca, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xea3d, .value=0x2f}, {.addr=0xea3e, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xea3d, .value=0x2f, .type=IO_READ},
        {.addr=0xea3e, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd5f8, .a=0xec, .x=0x60, .y=0x2e, .sp=0x3b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f8, .value=0x2f}, {.addr=0xd5f9, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xd59f, .a=0xec, .x=0x60, .y=0x2e, .sp=0x3b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd5f8, .value=0x2f}, {.addr=0xd5f9, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xd5f8, .value=0x2f, .type=IO_READ},
        {.addr=0xd5f9, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x50ed, .a=0x00, .x=0x49, .y=0x75, .sp=0xcf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x50ed, .value=0x2f}, {.addr=0x50ee, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x509f, .a=0x00, .x=0x49, .y=0x75, .sp=0xcf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x50ed, .value=0x2f}, {.addr=0x50ee, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x50ed, .value=0x2f, .type=IO_READ},
        {.addr=0x50ee, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x70a8, .a=0x7a, .x=0x86, .y=0xea, .sp=0x29, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x70a8, .value=0x2f}, {.addr=0x70a9, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7060, .a=0x7a, .x=0x86, .y=0xea, .sp=0x29, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x70a8, .value=0x2f}, {.addr=0x70a9, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x70a8, .value=0x2f, .type=IO_READ},
        {.addr=0x70a9, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x2f46, .a=0xcd, .x=0x03, .y=0xba, .sp=0x32, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2f46, .value=0x2f}, {.addr=0x2f47, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f4e, .a=0xcd, .x=0x03, .y=0xba, .sp=0x32, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2f46, .value=0x2f}, {.addr=0x2f47, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f46, .value=0x2f, .type=IO_READ},
        {.addr=0x2f47, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x5c82, .a=0x22, .x=0x9f, .y=0xed, .sp=0xdf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5c82, .value=0x2f}, {.addr=0x5c83, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x5cc2, .a=0x22, .x=0x9f, .y=0xed, .sp=0xdf, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x5c82, .value=0x2f}, {.addr=0x5c83, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x5c82, .value=0x2f, .type=IO_READ},
        {.addr=0x5c83, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x3b75, .a=0x44, .x=0xe3, .y=0x12, .sp=0x8e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3b75, .value=0x2f}, {.addr=0x3b76, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x3bc7, .a=0x44, .x=0xe3, .y=0x12, .sp=0x8e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3b75, .value=0x2f}, {.addr=0x3b76, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x3b75, .value=0x2f, .type=IO_READ},
        {.addr=0x3b76, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x65ab, .a=0x32, .x=0xfb, .y=0xfa, .sp=0x0f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x65ab, .value=0x2f}, {.addr=0x65ac, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x659f, .a=0x32, .x=0xfb, .y=0xfa, .sp=0x0f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x65ab, .value=0x2f}, {.addr=0x65ac, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x65ab, .value=0x2f, .type=IO_READ},
        {.addr=0x65ac, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x58cc, .a=0xde, .x=0xba, .y=0x9f, .sp=0x09, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x58cc, .value=0x2f}, {.addr=0x58cd, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x58e6, .a=0xde, .x=0xba, .y=0x9f, .sp=0x09, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x58cc, .value=0x2f}, {.addr=0x58cd, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x58cc, .value=0x2f, .type=IO_READ},
        {.addr=0x58cd, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x3837, .a=0xcc, .x=0xbd, .y=0xd1, .sp=0x0b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3837, .value=0x2f}, {.addr=0x3838, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x385e, .a=0xcc, .x=0xbd, .y=0xd1, .sp=0x0b, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x3837, .value=0x2f}, {.addr=0x3838, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x3837, .value=0x2f, .type=IO_READ},
        {.addr=0x3838, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x84f8, .a=0x37, .x=0xac, .y=0x6d, .sp=0xfa, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x84f8, .value=0x2f}, {.addr=0x84f9, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x855e, .a=0x37, .x=0xac, .y=0x6d, .sp=0xfa, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x84f8, .value=0x2f}, {.addr=0x84f9, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x84f8, .value=0x2f, .type=IO_READ},
        {.addr=0x84f9, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x433e, .a=0x7c, .x=0x42, .y=0xa6, .sp=0x82, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x433e, .value=0x2f}, {.addr=0x433f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x4367, .a=0x7c, .x=0x42, .y=0xa6, .sp=0x82, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x433e, .value=0x2f}, {.addr=0x433f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x433e, .value=0x2f, .type=IO_READ},
        {.addr=0x433f, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xb075, .a=0x9e, .x=0x0f, .y=0x65, .sp=0x64, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb075, .value=0x2f}, {.addr=0xb076, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb0ae, .a=0x9e, .x=0x0f, .y=0x65, .sp=0x64, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb075, .value=0x2f}, {.addr=0xb076, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb075, .value=0x2f, .type=IO_READ},
        {.addr=0xb076, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xa8c8, .a=0x3a, .x=0xdb, .y=0x5b, .sp=0x8c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c8, .value=0x2f}, {.addr=0xa8c9, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xa84e, .a=0x3a, .x=0xdb, .y=0x5b, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa8c8, .value=0x2f}, {.addr=0xa8c9, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xa8c8, .value=0x2f, .type=IO_READ},
        {.addr=0xa8c9, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x41de, .a=0x35, .x=0x02, .y=0xc5, .sp=0x12, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x41de, .value=0x2f}, {.addr=0x41df, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x4242, .a=0x35, .x=0x02, .y=0xc5, .sp=0x12, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x41de, .value=0x2f}, {.addr=0x41df, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x41de, .value=0x2f, .type=IO_READ},
        {.addr=0x41df, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x7689, .a=0x13, .x=0x55, .y=0x4e, .sp=0x34, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7689, .value=0x2f}, {.addr=0x768a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x76e7, .a=0x13, .x=0x55, .y=0x4e, .sp=0x34, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x7689, .value=0x2f}, {.addr=0x768a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7689, .value=0x2f, .type=IO_READ},
        {.addr=0x768a, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x3dda, .a=0x8b, .x=0xe9, .y=0xf5, .sp=0x62, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3dda, .value=0x2f}, {.addr=0x3ddb, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3e54, .a=0x8b, .x=0xe9, .y=0xf5, .sp=0x62, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3dda, .value=0x2f}, {.addr=0x3ddb, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3dda, .value=0x2f, .type=IO_READ},
        {.addr=0x3ddb, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x4a2c, .a=0x21, .x=0x08, .y=0x45, .sp=0xe3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2c, .value=0x2f}, {.addr=0x4a2d, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x49d5, .a=0x21, .x=0x08, .y=0x45, .sp=0xe3, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x4a2c, .value=0x2f}, {.addr=0x4a2d, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4a2c, .value=0x2f, .type=IO_READ},
        {.addr=0x4a2d, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xc291, .a=0x35, .x=0x12, .y=0x72, .sp=0x9b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc291, .value=0x2f}, {.addr=0xc292, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xc26a, .a=0x35, .x=0x12, .y=0x72, .sp=0x9b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xc291, .value=0x2f}, {.addr=0xc292, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xc291, .value=0x2f, .type=IO_READ},
        {.addr=0xc292, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xf0a5, .a=0xa3, .x=0x9c, .y=0x54, .sp=0x5f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a5, .value=0x2f}, {.addr=0xf0a6, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xf0f7, .a=0xa3, .x=0x9c, .y=0x54, .sp=0x5f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf0a5, .value=0x2f}, {.addr=0xf0a6, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xf0a5, .value=0x2f, .type=IO_READ},
        {.addr=0xf0a6, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x9fa9, .a=0xad, .x=0x0d, .y=0xb4, .sp=0x39, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa9, .value=0x2f}, {.addr=0x9faa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa008, .a=0xad, .x=0x0d, .y=0xb4, .sp=0x39, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9fa9, .value=0x2f}, {.addr=0x9faa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa9, .value=0x2f, .type=IO_READ},
        {.addr=0x9faa, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x71c1, .a=0xf4, .x=0x21, .y=0xb4, .sp=0x24, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x71c1, .value=0x2f}, {.addr=0x71c2, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x714e, .a=0xf4, .x=0x21, .y=0xb4, .sp=0x24, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x71c1, .value=0x2f}, {.addr=0x71c2, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x71c1, .value=0x2f, .type=IO_READ},
        {.addr=0x71c2, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xd773, .a=0xe7, .x=0xec, .y=0x47, .sp=0x6d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd773, .value=0x2f}, {.addr=0xd774, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xd79c, .a=0xe7, .x=0xec, .y=0x47, .sp=0x6d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd773, .value=0x2f}, {.addr=0xd774, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xd773, .value=0x2f, .type=IO_READ},
        {.addr=0xd774, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x1f0b, .a=0xa7, .x=0x67, .y=0xd9, .sp=0x41, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1f0b, .value=0x2f}, {.addr=0x1f0c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x1f12, .a=0xa7, .x=0x67, .y=0xd9, .sp=0x41, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1f0b, .value=0x2f}, {.addr=0x1f0c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x1f0b, .value=0x2f, .type=IO_READ},
        {.addr=0x1f0c, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x8450, .a=0x8d, .x=0xe1, .y=0x6d, .sp=0x29, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8450, .value=0x2f}, {.addr=0x8451, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x84a2, .a=0x8d, .x=0xe1, .y=0x6d, .sp=0x29, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x8450, .value=0x2f}, {.addr=0x8451, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x8450, .value=0x2f, .type=IO_READ},
        {.addr=0x8451, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xfacd, .a=0x5a, .x=0xe1, .y=0xcd, .sp=0xc3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xfacd, .value=0x2f}, {.addr=0xface, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xfa93, .a=0x5a, .x=0xe1, .y=0xcd, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfacd, .value=0x2f}, {.addr=0xface, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xfacd, .value=0x2f, .type=IO_READ},
        {.addr=0xface, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x8bd2, .a=0x6a, .x=0xe9, .y=0xf4, .sp=0x17, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd2, .value=0x2f}, {.addr=0x8bd3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8b92, .a=0x6a, .x=0xe9, .y=0xf4, .sp=0x17, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x8bd2, .value=0x2f}, {.addr=0x8bd3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8bd2, .value=0x2f, .type=IO_READ},
        {.addr=0x8bd3, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x0eeb, .a=0xc0, .x=0xe4, .y=0x26, .sp=0xde, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0eeb, .value=0x2f}, {.addr=0x0eec, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0ed3, .a=0xc0, .x=0xe4, .y=0x26, .sp=0xde, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0eeb, .value=0x2f}, {.addr=0x0eec, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0eeb, .value=0x2f, .type=IO_READ},
        {.addr=0x0eec, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x3c03, .a=0xf0, .x=0x92, .y=0xfe, .sp=0xeb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3c03, .value=0x2f}, {.addr=0x3c04, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x3ba0, .a=0xf0, .x=0x92, .y=0xfe, .sp=0xeb, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3c03, .value=0x2f}, {.addr=0x3c04, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x3c03, .value=0x2f, .type=IO_READ},
        {.addr=0x3c04, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2d9c, .a=0xf3, .x=0xd4, .y=0x34, .sp=0x06, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9c, .value=0x2f}, {.addr=0x2d9d, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x2d59, .a=0xf3, .x=0xd4, .y=0x34, .sp=0x06, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2d9c, .value=0x2f}, {.addr=0x2d9d, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x2d9c, .value=0x2f, .type=IO_READ},
        {.addr=0x2d9d, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x755b, .a=0x43, .x=0xe4, .y=0x51, .sp=0x14, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x755b, .value=0x2f}, {.addr=0x755c, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x75be, .a=0x43, .x=0xe4, .y=0x51, .sp=0x14, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x755b, .value=0x2f}, {.addr=0x755c, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x755b, .value=0x2f, .type=IO_READ},
        {.addr=0x755c, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x6e24, .a=0x03, .x=0x2a, .y=0xed, .sp=0x3b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6e24, .value=0x2f}, {.addr=0x6e25, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x6e40, .a=0x03, .x=0x2a, .y=0xed, .sp=0x3b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6e24, .value=0x2f}, {.addr=0x6e25, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x6e24, .value=0x2f, .type=IO_READ},
        {.addr=0x6e25, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x41a7, .a=0xe6, .x=0x40, .y=0xd9, .sp=0xbf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x41a7, .value=0x2f}, {.addr=0x41a8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4189, .a=0xe6, .x=0x40, .y=0xd9, .sp=0xbf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x41a7, .value=0x2f}, {.addr=0x41a8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x41a7, .value=0x2f, .type=IO_READ},
        {.addr=0x41a8, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x035c, .a=0x61, .x=0x71, .y=0xc9, .sp=0xa2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x035c, .value=0x2f}, {.addr=0x035d, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x03a9, .a=0x61, .x=0x71, .y=0xc9, .sp=0xa2, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x035c, .value=0x2f}, {.addr=0x035d, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x035c, .value=0x2f, .type=IO_READ},
        {.addr=0x035d, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x51ce, .a=0x22, .x=0x52, .y=0x68, .sp=0x05, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x51ce, .value=0x2f}, {.addr=0x51cf, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x523a, .a=0x22, .x=0x52, .y=0x68, .sp=0x05, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x51ce, .value=0x2f}, {.addr=0x51cf, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x51ce, .value=0x2f, .type=IO_READ},
        {.addr=0x51cf, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x51d0, .a=0xa5, .x=0x47, .y=0xd0, .sp=0x1f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x51d0, .value=0x2f}, {.addr=0x51d1, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x51a4, .a=0xa5, .x=0x47, .y=0xd0, .sp=0x1f, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x51d0, .value=0x2f}, {.addr=0x51d1, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x51d0, .value=0x2f, .type=IO_READ},
        {.addr=0x51d1, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x58ce, .a=0xed, .x=0x39, .y=0xa6, .sp=0xea, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x58ce, .value=0x2f}, {.addr=0x58cf, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x5941, .a=0xed, .x=0x39, .y=0xa6, .sp=0xea, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x58ce, .value=0x2f}, {.addr=0x58cf, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x58ce, .value=0x2f, .type=IO_READ},
        {.addr=0x58cf, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc3b4, .a=0xe0, .x=0xff, .y=0x7f, .sp=0xb8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b4, .value=0x2f}, {.addr=0xc3b5, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0xe0, .x=0xff, .y=0x7f, .sp=0xb8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc3b4, .value=0x2f}, {.addr=0xc3b5, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc3b4, .value=0x2f, .type=IO_READ},
        {.addr=0xc3b5, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x64a2, .a=0x9a, .x=0xc5, .y=0x9d, .sp=0xf0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x64a2, .value=0x2f}, {.addr=0x64a3, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x6456, .a=0x9a, .x=0xc5, .y=0x9d, .sp=0xf0, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x64a2, .value=0x2f}, {.addr=0x64a3, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x64a2, .value=0x2f, .type=IO_READ},
        {.addr=0x64a3, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xf36e, .a=0xe4, .x=0xa4, .y=0xea, .sp=0xfa, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf36e, .value=0x2f}, {.addr=0xf36f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xf3de, .a=0xe4, .x=0xa4, .y=0xea, .sp=0xfa, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xf36e, .value=0x2f}, {.addr=0xf36f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xf36e, .value=0x2f, .type=IO_READ},
        {.addr=0xf36f, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xd714, .a=0xd5, .x=0x2a, .y=0xcb, .sp=0x24, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd714, .value=0x2f}, {.addr=0xd715, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xd719, .a=0xd5, .x=0x2a, .y=0xcb, .sp=0x24, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd714, .value=0x2f}, {.addr=0xd715, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xd714, .value=0x2f, .type=IO_READ},
        {.addr=0xd715, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x8303, .a=0xd4, .x=0x9a, .y=0x14, .sp=0x7e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x8303, .value=0x2f}, {.addr=0x8304, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x8299, .a=0xd4, .x=0x9a, .y=0x14, .sp=0x7e, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x8303, .value=0x2f}, {.addr=0x8304, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x8303, .value=0x2f, .type=IO_READ},
        {.addr=0x8304, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xc98e, .a=0x09, .x=0xf9, .y=0x26, .sp=0x9f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc98e, .value=0x2f}, {.addr=0xc98f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xc9be, .a=0x09, .x=0xf9, .y=0x26, .sp=0x9f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc98e, .value=0x2f}, {.addr=0xc98f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xc98e, .value=0x2f, .type=IO_READ},
        {.addr=0xc98f, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x7e15, .a=0xd8, .x=0x46, .y=0x49, .sp=0x0a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7e15, .value=0x2f}, {.addr=0x7e16, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7e47, .a=0xd8, .x=0x46, .y=0x49, .sp=0x0a, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x7e15, .value=0x2f}, {.addr=0x7e16, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x7e15, .value=0x2f, .type=IO_READ},
        {.addr=0x7e16, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x8eba, .a=0x11, .x=0xb2, .y=0x97, .sp=0x41, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8eba, .value=0x2f}, {.addr=0x8ebb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8edc, .a=0x11, .x=0xb2, .y=0x97, .sp=0x41, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8eba, .value=0x2f}, {.addr=0x8ebb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8eba, .value=0x2f, .type=IO_READ},
        {.addr=0x8ebb, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x650d, .a=0xde, .x=0xcb, .y=0xa4, .sp=0xb9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x650d, .value=0x2f}, {.addr=0x650e, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x6492, .a=0xde, .x=0xcb, .y=0xa4, .sp=0xb9, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x650d, .value=0x2f}, {.addr=0x650e, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x650d, .value=0x2f, .type=IO_READ},
        {.addr=0x650e, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x63ee, .a=0xd5, .x=0x5d, .y=0xff, .sp=0x00, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x63ee, .value=0x2f}, {.addr=0x63ef, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x639f, .a=0xd5, .x=0x5d, .y=0xff, .sp=0x00, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x63ee, .value=0x2f}, {.addr=0x63ef, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x63ee, .value=0x2f, .type=IO_READ},
        {.addr=0x63ef, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x56b5, .a=0x6c, .x=0x1c, .y=0x3b, .sp=0x7c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x56b5, .value=0x2f}, {.addr=0x56b6, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x5669, .a=0x6c, .x=0x1c, .y=0x3b, .sp=0x7c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x56b5, .value=0x2f}, {.addr=0x56b6, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x56b5, .value=0x2f, .type=IO_READ},
        {.addr=0x56b6, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x2a12, .a=0xf1, .x=0x87, .y=0x68, .sp=0x01, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2a12, .value=0x2f}, {.addr=0x2a13, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2a2e, .a=0xf1, .x=0x87, .y=0x68, .sp=0x01, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2a12, .value=0x2f}, {.addr=0x2a13, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2a12, .value=0x2f, .type=IO_READ},
        {.addr=0x2a13, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x9053, .a=0x6a, .x=0x5a, .y=0xc4, .sp=0x27, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9053, .value=0x2f}, {.addr=0x9054, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x9021, .a=0x6a, .x=0x5a, .y=0xc4, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9053, .value=0x2f}, {.addr=0x9054, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9053, .value=0x2f, .type=IO_READ},
        {.addr=0x9054, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa4ca, .a=0x56, .x=0x93, .y=0x18, .sp=0x37, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ca, .value=0x2f}, {.addr=0xa4cb, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xa4e0, .a=0x56, .x=0x93, .y=0x18, .sp=0x37, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xa4ca, .value=0x2f}, {.addr=0xa4cb, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xa4ca, .value=0x2f, .type=IO_READ},
        {.addr=0xa4cb, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xe0ae, .a=0xe5, .x=0x0f, .y=0x97, .sp=0x8b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ae, .value=0x2f}, {.addr=0xe0af, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe10c, .a=0xe5, .x=0x0f, .y=0x97, .sp=0x8b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe0ae, .value=0x2f}, {.addr=0xe0af, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe0ae, .value=0x2f, .type=IO_READ},
        {.addr=0xe0af, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7e8a, .a=0xda, .x=0x8d, .y=0xaf, .sp=0xad, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7e8a, .value=0x2f}, {.addr=0x7e8b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x7ed6, .a=0xda, .x=0x8d, .y=0xaf, .sp=0xad, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x7e8a, .value=0x2f}, {.addr=0x7e8b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x7e8a, .value=0x2f, .type=IO_READ},
        {.addr=0x7e8b, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x6256, .a=0x88, .x=0x41, .y=0xbd, .sp=0x0f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6256, .value=0x2f}, {.addr=0x6257, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x61e1, .a=0x88, .x=0x41, .y=0xbd, .sp=0x0f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6256, .value=0x2f}, {.addr=0x6257, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6256, .value=0x2f, .type=IO_READ},
        {.addr=0x6257, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x72d4, .a=0xb8, .x=0x31, .y=0x13, .sp=0x9a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x72d4, .value=0x2f}, {.addr=0x72d5, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x72c9, .a=0xb8, .x=0x31, .y=0x13, .sp=0x9a, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x72d4, .value=0x2f}, {.addr=0x72d5, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x72d4, .value=0x2f, .type=IO_READ},
        {.addr=0x72d5, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x04aa, .a=0xd8, .x=0x75, .y=0x96, .sp=0x7f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x04aa, .value=0x2f}, {.addr=0x04ab, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x043f, .a=0xd8, .x=0x75, .y=0x96, .sp=0x7f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x04aa, .value=0x2f}, {.addr=0x04ab, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x04aa, .value=0x2f, .type=IO_READ},
        {.addr=0x04ab, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xb861, .a=0xb1, .x=0x09, .y=0x30, .sp=0xf5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb861, .value=0x2f}, {.addr=0xb862, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xb899, .a=0xb1, .x=0x09, .y=0x30, .sp=0xf5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb861, .value=0x2f}, {.addr=0xb862, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xb861, .value=0x2f, .type=IO_READ},
        {.addr=0xb862, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x6762, .a=0x7f, .x=0xca, .y=0x10, .sp=0xfd, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6762, .value=0x2f}, {.addr=0x6763, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x66fc, .a=0x7f, .x=0xca, .y=0x10, .sp=0xfd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6762, .value=0x2f}, {.addr=0x6763, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x6762, .value=0x2f, .type=IO_READ},
        {.addr=0x6763, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xfc9f, .a=0xcf, .x=0x64, .y=0x54, .sp=0x92, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xfc9f, .value=0x2f}, {.addr=0xfca0, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xfc37, .a=0xcf, .x=0x64, .y=0x54, .sp=0x92, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xfc9f, .value=0x2f}, {.addr=0xfca0, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xfc9f, .value=0x2f, .type=IO_READ},
        {.addr=0xfca0, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xe37a, .a=0xf5, .x=0x18, .y=0x06, .sp=0x09, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe37a, .value=0x2f}, {.addr=0xe37b, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe327, .a=0xf5, .x=0x18, .y=0x06, .sp=0x09, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe37a, .value=0x2f}, {.addr=0xe37b, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe37a, .value=0x2f, .type=IO_READ},
        {.addr=0xe37b, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x5ed0, .a=0x34, .x=0x24, .y=0x77, .sp=0x17, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed0, .value=0x2f}, {.addr=0x5ed1, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x5ea9, .a=0x34, .x=0x24, .y=0x77, .sp=0x17, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x5ed0, .value=0x2f}, {.addr=0x5ed1, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x5ed0, .value=0x2f, .type=IO_READ},
        {.addr=0x5ed1, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xa147, .a=0xb6, .x=0xca, .y=0xc2, .sp=0x97, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa147, .value=0x2f}, {.addr=0xa148, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xa0fa, .a=0xb6, .x=0xca, .y=0xc2, .sp=0x97, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa147, .value=0x2f}, {.addr=0xa148, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xa147, .value=0x2f, .type=IO_READ},
        {.addr=0xa148, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x46f5, .a=0x82, .x=0xb1, .y=0x58, .sp=0x7d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x46f5, .value=0x2f}, {.addr=0x46f6, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4679, .a=0x82, .x=0xb1, .y=0x58, .sp=0x7d, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x46f5, .value=0x2f}, {.addr=0x46f6, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x46f5, .value=0x2f, .type=IO_READ},
        {.addr=0x46f6, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xf96b, .a=0xc2, .x=0x06, .y=0xab, .sp=0xed, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf96b, .value=0x2f}, {.addr=0xf96c, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xf970, .a=0xc2, .x=0x06, .y=0xab, .sp=0xed, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf96b, .value=0x2f}, {.addr=0xf96c, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xf96b, .value=0x2f, .type=IO_READ},
        {.addr=0xf96c, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xaf59, .a=0xae, .x=0x5f, .y=0x8f, .sp=0x10, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xaf59, .value=0x2f}, {.addr=0xaf5a, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xaf74, .a=0xae, .x=0x5f, .y=0x8f, .sp=0x10, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xaf59, .value=0x2f}, {.addr=0xaf5a, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xaf59, .value=0x2f, .type=IO_READ},
        {.addr=0xaf5a, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x9a26, .a=0x2c, .x=0xa6, .y=0x3f, .sp=0x5a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9a26, .value=0x2f}, {.addr=0x9a27, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9a6f, .a=0x2c, .x=0xa6, .y=0x3f, .sp=0x5a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9a26, .value=0x2f}, {.addr=0x9a27, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9a26, .value=0x2f, .type=IO_READ},
        {.addr=0x9a27, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x4247, .a=0x82, .x=0x01, .y=0x0a, .sp=0xe5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4247, .value=0x2f}, {.addr=0x4248, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x4281, .a=0x82, .x=0x01, .y=0x0a, .sp=0xe5, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x4247, .value=0x2f}, {.addr=0x4248, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x4247, .value=0x2f, .type=IO_READ},
        {.addr=0x4248, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x4b7f, .a=0xee, .x=0x2a, .y=0x98, .sp=0xb8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7f, .value=0x2f}, {.addr=0x4b80, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x4baa, .a=0xee, .x=0x2a, .y=0x98, .sp=0xb8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4b7f, .value=0x2f}, {.addr=0x4b80, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x4b7f, .value=0x2f, .type=IO_READ},
        {.addr=0x4b80, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x6bb8, .a=0x14, .x=0x7d, .y=0x2f, .sp=0xa6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb8, .value=0x2f}, {.addr=0x6bb9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6b60, .a=0x14, .x=0x7d, .y=0x2f, .sp=0xa6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6bb8, .value=0x2f}, {.addr=0x6bb9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6bb8, .value=0x2f, .type=IO_READ},
        {.addr=0x6bb9, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x2258, .a=0x3f, .x=0xa4, .y=0x67, .sp=0x67, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2258, .value=0x2f}, {.addr=0x2259, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x22a2, .a=0x3f, .x=0xa4, .y=0x67, .sp=0x67, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x2258, .value=0x2f}, {.addr=0x2259, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2258, .value=0x2f, .type=IO_READ},
        {.addr=0x2259, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x201e, .a=0x9f, .x=0x32, .y=0xa7, .sp=0xb7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x201e, .value=0x2f}, {.addr=0x201f, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x2015, .a=0x9f, .x=0x32, .y=0xa7, .sp=0xb7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x201e, .value=0x2f}, {.addr=0x201f, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x201e, .value=0x2f, .type=IO_READ},
        {.addr=0x201f, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb699, .a=0x4b, .x=0xde, .y=0x92, .sp=0x61, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb699, .value=0x2f}, {.addr=0xb69a, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb6be, .a=0x4b, .x=0xde, .y=0x92, .sp=0x61, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xb699, .value=0x2f}, {.addr=0xb69a, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb699, .value=0x2f, .type=IO_READ},
        {.addr=0xb69a, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xd750, .a=0x69, .x=0xac, .y=0x5e, .sp=0x90, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd750, .value=0x2f}, {.addr=0xd751, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xd760, .a=0x69, .x=0xac, .y=0x5e, .sp=0x90, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd750, .value=0x2f}, {.addr=0xd751, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xd750, .value=0x2f, .type=IO_READ},
        {.addr=0xd751, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x10c1, .a=0x49, .x=0x44, .y=0x73, .sp=0x21, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x10c1, .value=0x2f}, {.addr=0x10c2, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x113a, .a=0x49, .x=0x44, .y=0x73, .sp=0x21, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x10c1, .value=0x2f}, {.addr=0x10c2, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x10c1, .value=0x2f, .type=IO_READ},
        {.addr=0x10c2, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x31ca, .a=0xbf, .x=0x4f, .y=0xe7, .sp=0xc9, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x31ca, .value=0x2f}, {.addr=0x31cb, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x31b3, .a=0xbf, .x=0x4f, .y=0xe7, .sp=0xc9, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x31ca, .value=0x2f}, {.addr=0x31cb, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x31ca, .value=0x2f, .type=IO_READ},
        {.addr=0x31cb, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xfb2c, .a=0x2f, .x=0x0d, .y=0x5f, .sp=0xcb, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xfb2c, .value=0x2f}, {.addr=0xfb2d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfad4, .a=0x2f, .x=0x0d, .y=0x5f, .sp=0xcb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfb2c, .value=0x2f}, {.addr=0xfb2d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfb2c, .value=0x2f, .type=IO_READ},
        {.addr=0xfb2d, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xe6f5, .a=0xd2, .x=0x3b, .y=0x06, .sp=0x55, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f5, .value=0x2f}, {.addr=0xe6f6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe6b6, .a=0xd2, .x=0x3b, .y=0x06, .sp=0x55, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe6f5, .value=0x2f}, {.addr=0xe6f6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe6f5, .value=0x2f, .type=IO_READ},
        {.addr=0xe6f6, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x12ae, .a=0x32, .x=0xae, .y=0x73, .sp=0xd7, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x12ae, .value=0x2f}, {.addr=0x12af, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x1254, .a=0x32, .x=0xae, .y=0x73, .sp=0xd7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x12ae, .value=0x2f}, {.addr=0x12af, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x12ae, .value=0x2f, .type=IO_READ},
        {.addr=0x12af, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x9995, .a=0x6a, .x=0x44, .y=0x62, .sp=0x79, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9995, .value=0x2f}, {.addr=0x9996, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x99de, .a=0x6a, .x=0x44, .y=0x62, .sp=0x79, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x9995, .value=0x2f}, {.addr=0x9996, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9995, .value=0x2f, .type=IO_READ},
        {.addr=0x9996, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x8492, .a=0xfa, .x=0x9c, .y=0xdb, .sp=0x4f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8492, .value=0x2f}, {.addr=0x8493, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x84c6, .a=0xfa, .x=0x9c, .y=0xdb, .sp=0x4f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8492, .value=0x2f}, {.addr=0x8493, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x8492, .value=0x2f, .type=IO_READ},
        {.addr=0x8493, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x4e9d, .a=0x1d, .x=0x66, .y=0xaa, .sp=0xad, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9d, .value=0x2f}, {.addr=0x4e9e, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x4eb1, .a=0x1d, .x=0x66, .y=0xaa, .sp=0xad, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x4e9d, .value=0x2f}, {.addr=0x4e9e, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x4e9d, .value=0x2f, .type=IO_READ},
        {.addr=0x4e9e, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3df9, .a=0xd0, .x=0x91, .y=0xf7, .sp=0x22, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3df9, .value=0x2f}, {.addr=0x3dfa, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3d88, .a=0xd0, .x=0x91, .y=0xf7, .sp=0x22, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3df9, .value=0x2f}, {.addr=0x3dfa, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3df9, .value=0x2f, .type=IO_READ},
        {.addr=0x3dfa, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0100) {
    const struct CPU_State initial_cpu = {.pc=0x0c69, .a=0xe2, .x=0x5f, .y=0x89, .sp=0xf2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0c69, .value=0x2f}, {.addr=0x0c6a, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x0c5c, .a=0xe2, .x=0x5f, .y=0x89, .sp=0xf2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0c69, .value=0x2f}, {.addr=0x0c6a, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x0c69, .value=0x2f, .type=IO_READ},
        {.addr=0x0c6a, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0101) {
    const struct CPU_State initial_cpu = {.pc=0x91ec, .a=0xf0, .x=0xed, .y=0xc4, .sp=0x41, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x91ec, .value=0x2f}, {.addr=0x91ed, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x923c, .a=0xf0, .x=0xed, .y=0xc4, .sp=0x41, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x91ec, .value=0x2f}, {.addr=0x91ed, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x91ec, .value=0x2f, .type=IO_READ},
        {.addr=0x91ed, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0102) {
    const struct CPU_State initial_cpu = {.pc=0xb30b, .a=0xd2, .x=0xae, .y=0xd4, .sp=0x3f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb30b, .value=0x2f}, {.addr=0xb30c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb349, .a=0xd2, .x=0xae, .y=0xd4, .sp=0x3f, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xb30b, .value=0x2f}, {.addr=0xb30c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb30b, .value=0x2f, .type=IO_READ},
        {.addr=0xb30c, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0103) {
    const struct CPU_State initial_cpu = {.pc=0xa7a8, .a=0xa7, .x=0x3e, .y=0x22, .sp=0xc7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a8, .value=0x2f}, {.addr=0xa7a9, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xa7d8, .a=0xa7, .x=0x3e, .y=0x22, .sp=0xc7, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xa7a8, .value=0x2f}, {.addr=0xa7a9, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xa7a8, .value=0x2f, .type=IO_READ},
        {.addr=0xa7a9, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0104) {
    const struct CPU_State initial_cpu = {.pc=0x4541, .a=0x3d, .x=0xee, .y=0x8d, .sp=0x26, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4541, .value=0x2f}, {.addr=0x4542, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x44e5, .a=0x3d, .x=0xee, .y=0x8d, .sp=0x26, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x4541, .value=0x2f}, {.addr=0x4542, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x4541, .value=0x2f, .type=IO_READ},
        {.addr=0x4542, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0105) {
    const struct CPU_State initial_cpu = {.pc=0x4532, .a=0x6f, .x=0xa6, .y=0xf1, .sp=0x90, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4532, .value=0x2f}, {.addr=0x4533, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x451f, .a=0x6f, .x=0xa6, .y=0xf1, .sp=0x90, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x4532, .value=0x2f}, {.addr=0x4533, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4532, .value=0x2f, .type=IO_READ},
        {.addr=0x4533, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0106) {
    const struct CPU_State initial_cpu = {.pc=0x7139, .a=0x37, .x=0xbe, .y=0x77, .sp=0x20, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7139, .value=0x2f}, {.addr=0x713a, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x7115, .a=0x37, .x=0xbe, .y=0x77, .sp=0x20, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x7139, .value=0x2f}, {.addr=0x713a, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x7139, .value=0x2f, .type=IO_READ},
        {.addr=0x713a, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0107) {
    const struct CPU_State initial_cpu = {.pc=0x0ba6, .a=0xdc, .x=0x18, .y=0x4f, .sp=0x1b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba6, .value=0x2f}, {.addr=0x0ba7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0c04, .a=0xdc, .x=0x18, .y=0x4f, .sp=0x1b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0ba6, .value=0x2f}, {.addr=0x0ba7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ba6, .value=0x2f, .type=IO_READ},
        {.addr=0x0ba7, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0108) {
    const struct CPU_State initial_cpu = {.pc=0x18df, .a=0x43, .x=0xfe, .y=0x69, .sp=0xc9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x18df, .value=0x2f}, {.addr=0x18e0, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x18cd, .a=0x43, .x=0xfe, .y=0x69, .sp=0xc9, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x18df, .value=0x2f}, {.addr=0x18e0, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x18df, .value=0x2f, .type=IO_READ},
        {.addr=0x18e0, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0109) {
    const struct CPU_State initial_cpu = {.pc=0x766e, .a=0xbe, .x=0xf5, .y=0xde, .sp=0xd6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x766e, .value=0x2f}, {.addr=0x766f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x76ec, .a=0xbe, .x=0xf5, .y=0xde, .sp=0xd6, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x766e, .value=0x2f}, {.addr=0x766f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x766e, .value=0x2f, .type=IO_READ},
        {.addr=0x766f, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010A) {
    const struct CPU_State initial_cpu = {.pc=0x99dc, .a=0xee, .x=0x93, .y=0x00, .sp=0x8c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x99dc, .value=0x2f}, {.addr=0x99dd, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9a22, .a=0xee, .x=0x93, .y=0x00, .sp=0x8c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x99dc, .value=0x2f}, {.addr=0x99dd, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x99dc, .value=0x2f, .type=IO_READ},
        {.addr=0x99dd, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010B) {
    const struct CPU_State initial_cpu = {.pc=0x7b94, .a=0x38, .x=0xe8, .y=0xf8, .sp=0x12, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7b94, .value=0x2f}, {.addr=0x7b95, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x7b4f, .a=0x38, .x=0xe8, .y=0xf8, .sp=0x12, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x7b94, .value=0x2f}, {.addr=0x7b95, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x7b94, .value=0x2f, .type=IO_READ},
        {.addr=0x7b95, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010C) {
    const struct CPU_State initial_cpu = {.pc=0xd892, .a=0x03, .x=0x6b, .y=0x48, .sp=0x8e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd892, .value=0x2f}, {.addr=0xd893, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xd906, .a=0x03, .x=0x6b, .y=0x48, .sp=0x8e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd892, .value=0x2f}, {.addr=0xd893, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xd892, .value=0x2f, .type=IO_READ},
        {.addr=0xd893, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010D) {
    const struct CPU_State initial_cpu = {.pc=0x9d22, .a=0xca, .x=0x07, .y=0xe2, .sp=0x80, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x9d22, .value=0x2f}, {.addr=0x9d23, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x9cc8, .a=0xca, .x=0x07, .y=0xe2, .sp=0x80, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9d22, .value=0x2f}, {.addr=0x9d23, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x9d22, .value=0x2f, .type=IO_READ},
        {.addr=0x9d23, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010E) {
    const struct CPU_State initial_cpu = {.pc=0x2f41, .a=0x2f, .x=0x39, .y=0x05, .sp=0x5b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2f41, .value=0x2f}, {.addr=0x2f42, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x2f0b, .a=0x2f, .x=0x39, .y=0x05, .sp=0x5b, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2f41, .value=0x2f}, {.addr=0x2f42, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x2f41, .value=0x2f, .type=IO_READ},
        {.addr=0x2f42, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_010F) {
    const struct CPU_State initial_cpu = {.pc=0x40a8, .a=0x96, .x=0x5d, .y=0xac, .sp=0x2a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x40a8, .value=0x2f}, {.addr=0x40a9, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x402f, .a=0x96, .x=0x5d, .y=0xac, .sp=0x2a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x40a8, .value=0x2f}, {.addr=0x40a9, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x40a8, .value=0x2f, .type=IO_READ},
        {.addr=0x40a9, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa83c, .a=0x6c, .x=0xd6, .y=0xc2, .sp=0xbc, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa83c, .value=0x2f}, {.addr=0xa83d, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xa868, .a=0x6c, .x=0xd6, .y=0xc2, .sp=0xbc, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xa83c, .value=0x2f}, {.addr=0xa83d, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xa83c, .value=0x2f, .type=IO_READ},
        {.addr=0xa83d, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0111) {
    const struct CPU_State initial_cpu = {.pc=0x25b3, .a=0xed, .x=0x57, .y=0x62, .sp=0x6a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x25b3, .value=0x2f}, {.addr=0x25b4, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x25b4, .a=0xed, .x=0x57, .y=0x62, .sp=0x6a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x25b3, .value=0x2f}, {.addr=0x25b4, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x25b3, .value=0x2f, .type=IO_READ},
        {.addr=0x25b4, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0112) {
    const struct CPU_State initial_cpu = {.pc=0x14ef, .a=0x85, .x=0xbf, .y=0x4d, .sp=0x7e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x14ef, .value=0x2f}, {.addr=0x14f0, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x14c5, .a=0x85, .x=0xbf, .y=0x4d, .sp=0x7e, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x14ef, .value=0x2f}, {.addr=0x14f0, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x14ef, .value=0x2f, .type=IO_READ},
        {.addr=0x14f0, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0113) {
    const struct CPU_State initial_cpu = {.pc=0x6891, .a=0xdb, .x=0xc2, .y=0x5b, .sp=0xd0, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6891, .value=0x2f}, {.addr=0x6892, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x68ed, .a=0xdb, .x=0xc2, .y=0x5b, .sp=0xd0, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x6891, .value=0x2f}, {.addr=0x6892, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x6891, .value=0x2f, .type=IO_READ},
        {.addr=0x6892, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0114) {
    const struct CPU_State initial_cpu = {.pc=0x30cf, .a=0x02, .x=0x85, .y=0x78, .sp=0xfa, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x30cf, .value=0x2f}, {.addr=0x30d0, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x30e3, .a=0x02, .x=0x85, .y=0x78, .sp=0xfa, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x30cf, .value=0x2f}, {.addr=0x30d0, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x30cf, .value=0x2f, .type=IO_READ},
        {.addr=0x30d0, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0115) {
    const struct CPU_State initial_cpu = {.pc=0x0c28, .a=0x10, .x=0x12, .y=0xc0, .sp=0x91, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0c28, .value=0x2f}, {.addr=0x0c29, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0be2, .a=0x10, .x=0x12, .y=0xc0, .sp=0x91, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0c28, .value=0x2f}, {.addr=0x0c29, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0c28, .value=0x2f, .type=IO_READ},
        {.addr=0x0c29, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0116) {
    const struct CPU_State initial_cpu = {.pc=0x97cf, .a=0xe2, .x=0xe2, .y=0xa0, .sp=0x80, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x97cf, .value=0x2f}, {.addr=0x97d0, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x9788, .a=0xe2, .x=0xe2, .y=0xa0, .sp=0x80, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x97cf, .value=0x2f}, {.addr=0x97d0, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x97cf, .value=0x2f, .type=IO_READ},
        {.addr=0x97d0, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0117) {
    const struct CPU_State initial_cpu = {.pc=0xac1b, .a=0xf7, .x=0x19, .y=0x53, .sp=0x8e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xac1b, .value=0x2f}, {.addr=0xac1c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xac01, .a=0xf7, .x=0x19, .y=0x53, .sp=0x8e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xac1b, .value=0x2f}, {.addr=0xac1c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xac1b, .value=0x2f, .type=IO_READ},
        {.addr=0xac1c, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0118) {
    const struct CPU_State initial_cpu = {.pc=0xfbbc, .a=0x03, .x=0xc3, .y=0xd3, .sp=0x62, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xfbbc, .value=0x2f}, {.addr=0xfbbd, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xfc22, .a=0x03, .x=0xc3, .y=0xd3, .sp=0x62, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xfbbc, .value=0x2f}, {.addr=0xfbbd, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xfbbc, .value=0x2f, .type=IO_READ},
        {.addr=0xfbbd, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0119) {
    const struct CPU_State initial_cpu = {.pc=0xf364, .a=0xf6, .x=0x22, .y=0xfe, .sp=0x44, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf364, .value=0x2f}, {.addr=0xf365, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xf352, .a=0xf6, .x=0x22, .y=0xfe, .sp=0x44, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf364, .value=0x2f}, {.addr=0xf365, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xf364, .value=0x2f, .type=IO_READ},
        {.addr=0xf365, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011A) {
    const struct CPU_State initial_cpu = {.pc=0xfd8d, .a=0x17, .x=0xa0, .y=0x75, .sp=0x61, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xfd8d, .value=0x2f}, {.addr=0xfd8e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd2e, .a=0x17, .x=0xa0, .y=0x75, .sp=0x61, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfd8d, .value=0x2f}, {.addr=0xfd8e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfd8d, .value=0x2f, .type=IO_READ},
        {.addr=0xfd8e, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011B) {
    const struct CPU_State initial_cpu = {.pc=0x4c72, .a=0xa3, .x=0x78, .y=0xfd, .sp=0x15, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4c72, .value=0x2f}, {.addr=0x4c73, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4cf1, .a=0xa3, .x=0x78, .y=0xfd, .sp=0x15, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x4c72, .value=0x2f}, {.addr=0x4c73, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4c72, .value=0x2f, .type=IO_READ},
        {.addr=0x4c73, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011C) {
    const struct CPU_State initial_cpu = {.pc=0x4b32, .a=0x13, .x=0x6b, .y=0x01, .sp=0x1f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4b32, .value=0x2f}, {.addr=0x4b33, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x4b83, .a=0x13, .x=0x6b, .y=0x01, .sp=0x1f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4b32, .value=0x2f}, {.addr=0x4b33, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x4b32, .value=0x2f, .type=IO_READ},
        {.addr=0x4b33, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011D) {
    const struct CPU_State initial_cpu = {.pc=0x919d, .a=0x8f, .x=0xc4, .y=0x06, .sp=0x81, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x919d, .value=0x2f}, {.addr=0x919e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x920c, .a=0x8f, .x=0xc4, .y=0x06, .sp=0x81, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x919d, .value=0x2f}, {.addr=0x919e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x919d, .value=0x2f, .type=IO_READ},
        {.addr=0x919e, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4b58, .a=0xc2, .x=0x02, .y=0xad, .sp=0x0c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b58, .value=0x2f}, {.addr=0x4b59, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x4b7d, .a=0xc2, .x=0x02, .y=0xad, .sp=0x0c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4b58, .value=0x2f}, {.addr=0x4b59, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x4b58, .value=0x2f, .type=IO_READ},
        {.addr=0x4b59, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7fc3, .a=0x4a, .x=0x79, .y=0x83, .sp=0xd9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7fc3, .value=0x2f}, {.addr=0x7fc4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f45, .a=0x4a, .x=0x79, .y=0x83, .sp=0xd9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x7fc3, .value=0x2f}, {.addr=0x7fc4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7fc3, .value=0x2f, .type=IO_READ},
        {.addr=0x7fc4, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0120) {
    const struct CPU_State initial_cpu = {.pc=0x128a, .a=0x1c, .x=0x7d, .y=0xae, .sp=0x59, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x128a, .value=0x2f}, {.addr=0x128b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x1264, .a=0x1c, .x=0x7d, .y=0xae, .sp=0x59, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x128a, .value=0x2f}, {.addr=0x128b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x128a, .value=0x2f, .type=IO_READ},
        {.addr=0x128b, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0121) {
    const struct CPU_State initial_cpu = {.pc=0x50d0, .a=0xea, .x=0x12, .y=0xee, .sp=0xd0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x50d0, .value=0x2f}, {.addr=0x50d1, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0xea, .x=0x12, .y=0xee, .sp=0xd0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x50d0, .value=0x2f}, {.addr=0x50d1, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x50d0, .value=0x2f, .type=IO_READ},
        {.addr=0x50d1, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0122) {
    const struct CPU_State initial_cpu = {.pc=0xa5ed, .a=0x44, .x=0x88, .y=0x76, .sp=0x57, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ed, .value=0x2f}, {.addr=0xa5ee, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xa573, .a=0x44, .x=0x88, .y=0x76, .sp=0x57, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xa5ed, .value=0x2f}, {.addr=0xa5ee, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xa5ed, .value=0x2f, .type=IO_READ},
        {.addr=0xa5ee, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0123) {
    const struct CPU_State initial_cpu = {.pc=0x77cf, .a=0xb0, .x=0x4f, .y=0x13, .sp=0x4c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x77cf, .value=0x2f}, {.addr=0x77d0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x778a, .a=0xb0, .x=0x4f, .y=0x13, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x77cf, .value=0x2f}, {.addr=0x77d0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x77cf, .value=0x2f, .type=IO_READ},
        {.addr=0x77d0, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0124) {
    const struct CPU_State initial_cpu = {.pc=0x95ee, .a=0x70, .x=0x59, .y=0x52, .sp=0x93, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x95ee, .value=0x2f}, {.addr=0x95ef, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x95d1, .a=0x70, .x=0x59, .y=0x52, .sp=0x93, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x95ee, .value=0x2f}, {.addr=0x95ef, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x95ee, .value=0x2f, .type=IO_READ},
        {.addr=0x95ef, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0125) {
    const struct CPU_State initial_cpu = {.pc=0xfbf9, .a=0x04, .x=0xae, .y=0x03, .sp=0x0f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf9, .value=0x2f}, {.addr=0xfbfa, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xfb9c, .a=0x04, .x=0xae, .y=0x03, .sp=0x0f, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xfbf9, .value=0x2f}, {.addr=0xfbfa, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xfbf9, .value=0x2f, .type=IO_READ},
        {.addr=0xfbfa, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0126) {
    const struct CPU_State initial_cpu = {.pc=0xbd90, .a=0x53, .x=0x1d, .y=0x8c, .sp=0x4a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xbd90, .value=0x2f}, {.addr=0xbd91, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xbd6a, .a=0x53, .x=0x1d, .y=0x8c, .sp=0x4a, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xbd90, .value=0x2f}, {.addr=0xbd91, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xbd90, .value=0x2f, .type=IO_READ},
        {.addr=0xbd91, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0127) {
    const struct CPU_State initial_cpu = {.pc=0x612e, .a=0x5b, .x=0x95, .y=0xb1, .sp=0xa8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x612e, .value=0x2f}, {.addr=0x612f, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x60ba, .a=0x5b, .x=0x95, .y=0xb1, .sp=0xa8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x612e, .value=0x2f}, {.addr=0x612f, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x612e, .value=0x2f, .type=IO_READ},
        {.addr=0x612f, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0128) {
    const struct CPU_State initial_cpu = {.pc=0x4493, .a=0x07, .x=0x98, .y=0xf0, .sp=0x8c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4493, .value=0x2f}, {.addr=0x4494, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4435, .a=0x07, .x=0x98, .y=0xf0, .sp=0x8c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4493, .value=0x2f}, {.addr=0x4494, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4493, .value=0x2f, .type=IO_READ},
        {.addr=0x4494, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0129) {
    const struct CPU_State initial_cpu = {.pc=0xa831, .a=0x47, .x=0x46, .y=0xc7, .sp=0x4a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa831, .value=0x2f}, {.addr=0xa832, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xa7eb, .a=0x47, .x=0x46, .y=0xc7, .sp=0x4a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xa831, .value=0x2f}, {.addr=0xa832, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xa831, .value=0x2f, .type=IO_READ},
        {.addr=0xa832, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012A) {
    const struct CPU_State initial_cpu = {.pc=0xa9fe, .a=0xba, .x=0x1b, .y=0x89, .sp=0x83, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa9fe, .value=0x2f}, {.addr=0xa9ff, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xa9f4, .a=0xba, .x=0x1b, .y=0x89, .sp=0x83, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa9fe, .value=0x2f}, {.addr=0xa9ff, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xa9fe, .value=0x2f, .type=IO_READ},
        {.addr=0xa9ff, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012B) {
    const struct CPU_State initial_cpu = {.pc=0xb73e, .a=0xc6, .x=0x37, .y=0x68, .sp=0x66, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb73e, .value=0x2f}, {.addr=0xb73f, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xb7af, .a=0xc6, .x=0x37, .y=0x68, .sp=0x66, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xb73e, .value=0x2f}, {.addr=0xb73f, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xb73e, .value=0x2f, .type=IO_READ},
        {.addr=0xb73f, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012C) {
    const struct CPU_State initial_cpu = {.pc=0x8eb2, .a=0xd8, .x=0x78, .y=0xfe, .sp=0x83, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb2, .value=0x2f}, {.addr=0x8eb3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8e42, .a=0xd8, .x=0x78, .y=0xfe, .sp=0x83, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8eb2, .value=0x2f}, {.addr=0x8eb3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8eb2, .value=0x2f, .type=IO_READ},
        {.addr=0x8eb3, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012D) {
    const struct CPU_State initial_cpu = {.pc=0x063a, .a=0x1c, .x=0x31, .y=0xfb, .sp=0x8d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x063a, .value=0x2f}, {.addr=0x063b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x05fc, .a=0x1c, .x=0x31, .y=0xfb, .sp=0x8d, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x063a, .value=0x2f}, {.addr=0x063b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x063a, .value=0x2f, .type=IO_READ},
        {.addr=0x063b, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012E) {
    const struct CPU_State initial_cpu = {.pc=0xa751, .a=0xfb, .x=0x30, .y=0x7e, .sp=0xb6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa751, .value=0x2f}, {.addr=0xa752, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xa769, .a=0xfb, .x=0x30, .y=0x7e, .sp=0xb6, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xa751, .value=0x2f}, {.addr=0xa752, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xa751, .value=0x2f, .type=IO_READ},
        {.addr=0xa752, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2f4d, .a=0x12, .x=0x04, .y=0xdc, .sp=0x0f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4d, .value=0x2f}, {.addr=0x2f4e, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x2fae, .a=0x12, .x=0x04, .y=0xdc, .sp=0x0f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x2f4d, .value=0x2f}, {.addr=0x2f4e, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x2f4d, .value=0x2f, .type=IO_READ},
        {.addr=0x2f4e, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0130) {
    const struct CPU_State initial_cpu = {.pc=0x579d, .a=0x17, .x=0x73, .y=0x44, .sp=0x7d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x579d, .value=0x2f}, {.addr=0x579e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x57ac, .a=0x17, .x=0x73, .y=0x44, .sp=0x7d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x579d, .value=0x2f}, {.addr=0x579e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x579d, .value=0x2f, .type=IO_READ},
        {.addr=0x579e, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0131) {
    const struct CPU_State initial_cpu = {.pc=0x44b1, .a=0x1f, .x=0x9d, .y=0xad, .sp=0xa4, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x44b1, .value=0x2f}, {.addr=0x44b2, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x4438, .a=0x1f, .x=0x9d, .y=0xad, .sp=0xa4, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x44b1, .value=0x2f}, {.addr=0x44b2, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x44b1, .value=0x2f, .type=IO_READ},
        {.addr=0x44b2, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0132) {
    const struct CPU_State initial_cpu = {.pc=0xfbda, .a=0x8e, .x=0x9d, .y=0x2c, .sp=0xf9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfbda, .value=0x2f}, {.addr=0xfbdb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfb6a, .a=0x8e, .x=0x9d, .y=0x2c, .sp=0xf9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfbda, .value=0x2f}, {.addr=0xfbdb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfbda, .value=0x2f, .type=IO_READ},
        {.addr=0xfbdb, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0133) {
    const struct CPU_State initial_cpu = {.pc=0x46d2, .a=0x23, .x=0x36, .y=0xed, .sp=0x1c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x46d2, .value=0x2f}, {.addr=0x46d3, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x472b, .a=0x23, .x=0x36, .y=0xed, .sp=0x1c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x46d2, .value=0x2f}, {.addr=0x46d3, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x46d2, .value=0x2f, .type=IO_READ},
        {.addr=0x46d3, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0134) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x37, .x=0x78, .y=0xe4, .sp=0x8d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x46cd, .value=0x2f}, {.addr=0x46ce, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x465e, .a=0x37, .x=0x78, .y=0xe4, .sp=0x8d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x46cd, .value=0x2f}, {.addr=0x46ce, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0x2f, .type=IO_READ},
        {.addr=0x46ce, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0135) {
    const struct CPU_State initial_cpu = {.pc=0xdb98, .a=0x4a, .x=0x0e, .y=0x11, .sp=0x66, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdb98, .value=0x2f}, {.addr=0xdb99, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdb36, .a=0x4a, .x=0x0e, .y=0x11, .sp=0x66, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdb98, .value=0x2f}, {.addr=0xdb99, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdb98, .value=0x2f, .type=IO_READ},
        {.addr=0xdb99, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0136) {
    const struct CPU_State initial_cpu = {.pc=0xef3f, .a=0x9d, .x=0xa1, .y=0x9c, .sp=0xb4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xef3f, .value=0x2f}, {.addr=0xef40, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xeeeb, .a=0x9d, .x=0xa1, .y=0x9c, .sp=0xb4, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xef3f, .value=0x2f}, {.addr=0xef40, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xef3f, .value=0x2f, .type=IO_READ},
        {.addr=0xef40, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0137) {
    const struct CPU_State initial_cpu = {.pc=0x64a2, .a=0x76, .x=0x45, .y=0x96, .sp=0x94, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x64a2, .value=0x2f}, {.addr=0x64a3, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x647c, .a=0x76, .x=0x45, .y=0x96, .sp=0x94, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x64a2, .value=0x2f}, {.addr=0x64a3, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x64a2, .value=0x2f, .type=IO_READ},
        {.addr=0x64a3, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0138) {
    const struct CPU_State initial_cpu = {.pc=0xc0d5, .a=0x08, .x=0xe7, .y=0x80, .sp=0x6e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d5, .value=0x2f}, {.addr=0xc0d6, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xc103, .a=0x08, .x=0xe7, .y=0x80, .sp=0x6e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc0d5, .value=0x2f}, {.addr=0xc0d6, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xc0d5, .value=0x2f, .type=IO_READ},
        {.addr=0xc0d6, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0139) {
    const struct CPU_State initial_cpu = {.pc=0x2459, .a=0xf2, .x=0xd6, .y=0x63, .sp=0xa9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2459, .value=0x2f}, {.addr=0x245a, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x2465, .a=0xf2, .x=0xd6, .y=0x63, .sp=0xa9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2459, .value=0x2f}, {.addr=0x245a, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x2459, .value=0x2f, .type=IO_READ},
        {.addr=0x245a, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013A) {
    const struct CPU_State initial_cpu = {.pc=0x1cef, .a=0x78, .x=0x9f, .y=0xf0, .sp=0x4a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x1cef, .value=0x2f}, {.addr=0x1cf0, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x1c98, .a=0x78, .x=0x9f, .y=0xf0, .sp=0x4a, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x1cef, .value=0x2f}, {.addr=0x1cf0, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x1cef, .value=0x2f, .type=IO_READ},
        {.addr=0x1cf0, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013B) {
    const struct CPU_State initial_cpu = {.pc=0xadf2, .a=0x18, .x=0x20, .y=0x0d, .sp=0xa5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xadf2, .value=0x2f}, {.addr=0xadf3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xad74, .a=0x18, .x=0x20, .y=0x0d, .sp=0xa5, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xadf2, .value=0x2f}, {.addr=0xadf3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xadf2, .value=0x2f, .type=IO_READ},
        {.addr=0xadf3, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013C) {
    const struct CPU_State initial_cpu = {.pc=0x7cac, .a=0x91, .x=0xf2, .y=0xb2, .sp=0x0e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7cac, .value=0x2f}, {.addr=0x7cad, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x7d28, .a=0x91, .x=0xf2, .y=0xb2, .sp=0x0e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7cac, .value=0x2f}, {.addr=0x7cad, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x7cac, .value=0x2f, .type=IO_READ},
        {.addr=0x7cad, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013D) {
    const struct CPU_State initial_cpu = {.pc=0x7ee1, .a=0xc6, .x=0x7f, .y=0xcd, .sp=0x4b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee1, .value=0x2f}, {.addr=0x7ee2, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7ef3, .a=0xc6, .x=0x7f, .y=0xcd, .sp=0x4b, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x7ee1, .value=0x2f}, {.addr=0x7ee2, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x7ee1, .value=0x2f, .type=IO_READ},
        {.addr=0x7ee2, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa6f7, .a=0x25, .x=0x97, .y=0x4c, .sp=0x16, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f7, .value=0x2f}, {.addr=0xa6f8, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa6bc, .a=0x25, .x=0x97, .y=0x4c, .sp=0x16, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa6f7, .value=0x2f}, {.addr=0xa6f8, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa6f7, .value=0x2f, .type=IO_READ},
        {.addr=0xa6f8, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_013F) {
    const struct CPU_State initial_cpu = {.pc=0x5484, .a=0xad, .x=0x51, .y=0xe0, .sp=0x63, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5484, .value=0x2f}, {.addr=0x5485, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x5477, .a=0xad, .x=0x51, .y=0xe0, .sp=0x63, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5484, .value=0x2f}, {.addr=0x5485, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x5484, .value=0x2f, .type=IO_READ},
        {.addr=0x5485, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0d9c, .a=0x5a, .x=0x89, .y=0x47, .sp=0x29, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0d9c, .value=0x2f}, {.addr=0x0d9d, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x0d43, .a=0x5a, .x=0x89, .y=0x47, .sp=0x29, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0d9c, .value=0x2f}, {.addr=0x0d9d, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x0d9c, .value=0x2f, .type=IO_READ},
        {.addr=0x0d9d, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0141) {
    const struct CPU_State initial_cpu = {.pc=0x0981, .a=0x49, .x=0x18, .y=0x9d, .sp=0x83, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0981, .value=0x2f}, {.addr=0x0982, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0940, .a=0x49, .x=0x18, .y=0x9d, .sp=0x83, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0981, .value=0x2f}, {.addr=0x0982, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0981, .value=0x2f, .type=IO_READ},
        {.addr=0x0982, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3d3a, .a=0xcd, .x=0x46, .y=0x0c, .sp=0x89, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3a, .value=0x2f}, {.addr=0x3d3b, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x3d26, .a=0xcd, .x=0x46, .y=0x0c, .sp=0x89, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3d3a, .value=0x2f}, {.addr=0x3d3b, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x3d3a, .value=0x2f, .type=IO_READ},
        {.addr=0x3d3b, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0143) {
    const struct CPU_State initial_cpu = {.pc=0x2167, .a=0x7e, .x=0x0d, .y=0x41, .sp=0xb5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2167, .value=0x2f}, {.addr=0x2168, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x2198, .a=0x7e, .x=0x0d, .y=0x41, .sp=0xb5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2167, .value=0x2f}, {.addr=0x2168, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x2167, .value=0x2f, .type=IO_READ},
        {.addr=0x2168, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0144) {
    const struct CPU_State initial_cpu = {.pc=0x13da, .a=0xf9, .x=0xa7, .y=0x14, .sp=0xba, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x13da, .value=0x2f}, {.addr=0x13db, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x135d, .a=0xf9, .x=0xa7, .y=0x14, .sp=0xba, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x13da, .value=0x2f}, {.addr=0x13db, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x13da, .value=0x2f, .type=IO_READ},
        {.addr=0x13db, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe5b2, .a=0x20, .x=0x1c, .y=0xb9, .sp=0xe1, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b2, .value=0x2f}, {.addr=0xe5b3, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xe609, .a=0x20, .x=0x1c, .y=0xb9, .sp=0xe1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe5b2, .value=0x2f}, {.addr=0xe5b3, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xe5b2, .value=0x2f, .type=IO_READ},
        {.addr=0xe5b3, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8c22, .a=0x89, .x=0x89, .y=0x61, .sp=0x5b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8c22, .value=0x2f}, {.addr=0x8c23, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x8c73, .a=0x89, .x=0x89, .y=0x61, .sp=0x5b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8c22, .value=0x2f}, {.addr=0x8c23, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x8c22, .value=0x2f, .type=IO_READ},
        {.addr=0x8c23, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0147) {
    const struct CPU_State initial_cpu = {.pc=0x0c07, .a=0xb2, .x=0xd6, .y=0x20, .sp=0xee, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0c07, .value=0x2f}, {.addr=0x0c08, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x0c73, .a=0xb2, .x=0xd6, .y=0x20, .sp=0xee, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0c07, .value=0x2f}, {.addr=0x0c08, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x0c07, .value=0x2f, .type=IO_READ},
        {.addr=0x0c08, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0148) {
    const struct CPU_State initial_cpu = {.pc=0x4fd9, .a=0x68, .x=0xab, .y=0xd3, .sp=0xf4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd9, .value=0x2f}, {.addr=0x4fda, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x4f93, .a=0x68, .x=0xab, .y=0xd3, .sp=0xf4, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x4fd9, .value=0x2f}, {.addr=0x4fda, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x4fd9, .value=0x2f, .type=IO_READ},
        {.addr=0x4fda, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0149) {
    const struct CPU_State initial_cpu = {.pc=0xac36, .a=0x2a, .x=0x8c, .y=0xc8, .sp=0x00, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xac36, .value=0x2f}, {.addr=0xac37, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xabc6, .a=0x2a, .x=0x8c, .y=0xc8, .sp=0x00, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xac36, .value=0x2f}, {.addr=0xac37, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xac36, .value=0x2f, .type=IO_READ},
        {.addr=0xac37, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd375, .a=0xb9, .x=0xd6, .y=0x90, .sp=0x68, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd375, .value=0x2f}, {.addr=0xd376, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xd33f, .a=0xb9, .x=0xd6, .y=0x90, .sp=0x68, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd375, .value=0x2f}, {.addr=0xd376, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xd375, .value=0x2f, .type=IO_READ},
        {.addr=0xd376, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014B) {
    const struct CPU_State initial_cpu = {.pc=0xfd19, .a=0x8f, .x=0x62, .y=0xb2, .sp=0xed, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd19, .value=0x2f}, {.addr=0xfd1a, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xfd4b, .a=0x8f, .x=0x62, .y=0xb2, .sp=0xed, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xfd19, .value=0x2f}, {.addr=0xfd1a, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xfd19, .value=0x2f, .type=IO_READ},
        {.addr=0xfd1a, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014C) {
    const struct CPU_State initial_cpu = {.pc=0xdd06, .a=0xe2, .x=0x77, .y=0xba, .sp=0x48, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xdd06, .value=0x2f}, {.addr=0xdd07, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xdcbf, .a=0xe2, .x=0x77, .y=0xba, .sp=0x48, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xdd06, .value=0x2f}, {.addr=0xdd07, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xdd06, .value=0x2f, .type=IO_READ},
        {.addr=0xdd07, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd1e9, .a=0xb9, .x=0xe7, .y=0x36, .sp=0xf0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e9, .value=0x2f}, {.addr=0xd1ea, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd208, .a=0xb9, .x=0xe7, .y=0x36, .sp=0xf0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd1e9, .value=0x2f}, {.addr=0xd1ea, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd1e9, .value=0x2f, .type=IO_READ},
        {.addr=0xd1ea, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014E) {
    const struct CPU_State initial_cpu = {.pc=0x8598, .a=0xcc, .x=0x42, .y=0xc7, .sp=0xcd, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8598, .value=0x2f}, {.addr=0x8599, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x85b6, .a=0xcc, .x=0x42, .y=0xc7, .sp=0xcd, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x8598, .value=0x2f}, {.addr=0x8599, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8598, .value=0x2f, .type=IO_READ},
        {.addr=0x8599, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_014F) {
    const struct CPU_State initial_cpu = {.pc=0xf5fa, .a=0xf7, .x=0x9f, .y=0x82, .sp=0xc0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fa, .value=0x2f}, {.addr=0xf5fb, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xf5d5, .a=0xf7, .x=0x9f, .y=0x82, .sp=0xc0, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xf5fa, .value=0x2f}, {.addr=0xf5fb, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xf5fa, .value=0x2f, .type=IO_READ},
        {.addr=0xf5fb, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0150) {
    const struct CPU_State initial_cpu = {.pc=0x7d94, .a=0xdd, .x=0x6f, .y=0xf4, .sp=0xef, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7d94, .value=0x2f}, {.addr=0x7d95, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x7d5b, .a=0xdd, .x=0x6f, .y=0xf4, .sp=0xef, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x7d94, .value=0x2f}, {.addr=0x7d95, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x7d94, .value=0x2f, .type=IO_READ},
        {.addr=0x7d95, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0151) {
    const struct CPU_State initial_cpu = {.pc=0x3aa5, .a=0x4d, .x=0xa1, .y=0xa9, .sp=0xa6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa5, .value=0x2f}, {.addr=0x3aa6, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x3a58, .a=0x4d, .x=0xa1, .y=0xa9, .sp=0xa6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3aa5, .value=0x2f}, {.addr=0x3aa6, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x3aa5, .value=0x2f, .type=IO_READ},
        {.addr=0x3aa6, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0152) {
    const struct CPU_State initial_cpu = {.pc=0xc743, .a=0x33, .x=0x7c, .y=0x7f, .sp=0xa7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xc743, .value=0x2f}, {.addr=0xc744, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc750, .a=0x33, .x=0x7c, .y=0x7f, .sp=0xa7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xc743, .value=0x2f}, {.addr=0xc744, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc743, .value=0x2f, .type=IO_READ},
        {.addr=0xc744, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0153) {
    const struct CPU_State initial_cpu = {.pc=0xaa00, .a=0x06, .x=0x54, .y=0x3f, .sp=0x82, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xaa00, .value=0x2f}, {.addr=0xaa01, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xaa39, .a=0x06, .x=0x54, .y=0x3f, .sp=0x82, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xaa00, .value=0x2f}, {.addr=0xaa01, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xaa00, .value=0x2f, .type=IO_READ},
        {.addr=0xaa01, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0154) {
    const struct CPU_State initial_cpu = {.pc=0xe215, .a=0xb3, .x=0x1f, .y=0x77, .sp=0x13, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe215, .value=0x2f}, {.addr=0xe216, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xe23e, .a=0xb3, .x=0x1f, .y=0x77, .sp=0x13, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xe215, .value=0x2f}, {.addr=0xe216, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xe215, .value=0x2f, .type=IO_READ},
        {.addr=0xe216, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0155) {
    const struct CPU_State initial_cpu = {.pc=0xee7f, .a=0x69, .x=0x0e, .y=0x24, .sp=0x2a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xee7f, .value=0x2f}, {.addr=0xee80, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeea1, .a=0x69, .x=0x0e, .y=0x24, .sp=0x2a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xee7f, .value=0x2f}, {.addr=0xee80, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee7f, .value=0x2f, .type=IO_READ},
        {.addr=0xee80, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0156) {
    const struct CPU_State initial_cpu = {.pc=0x58ad, .a=0x74, .x=0x47, .y=0x48, .sp=0xce, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x58ad, .value=0x2f}, {.addr=0x58ae, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x58d5, .a=0x74, .x=0x47, .y=0x48, .sp=0xce, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x58ad, .value=0x2f}, {.addr=0x58ae, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x58ad, .value=0x2f, .type=IO_READ},
        {.addr=0x58ae, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0157) {
    const struct CPU_State initial_cpu = {.pc=0x8285, .a=0x64, .x=0x79, .y=0x95, .sp=0xb3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x8285, .value=0x2f}, {.addr=0x8286, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x82c4, .a=0x64, .x=0x79, .y=0x95, .sp=0xb3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8285, .value=0x2f}, {.addr=0x8286, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8285, .value=0x2f, .type=IO_READ},
        {.addr=0x8286, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0158) {
    const struct CPU_State initial_cpu = {.pc=0xa2c0, .a=0x54, .x=0x1f, .y=0xf9, .sp=0x3a, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c0, .value=0x2f}, {.addr=0xa2c1, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa2ba, .a=0x54, .x=0x1f, .y=0xf9, .sp=0x3a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa2c0, .value=0x2f}, {.addr=0xa2c1, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa2c0, .value=0x2f, .type=IO_READ},
        {.addr=0xa2c1, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0159) {
    const struct CPU_State initial_cpu = {.pc=0x4225, .a=0xff, .x=0x0c, .y=0x26, .sp=0x27, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4225, .value=0x2f}, {.addr=0x4226, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x426c, .a=0xff, .x=0x0c, .y=0x26, .sp=0x27, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4225, .value=0x2f}, {.addr=0x4226, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4225, .value=0x2f, .type=IO_READ},
        {.addr=0x4226, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015A) {
    const struct CPU_State initial_cpu = {.pc=0x4fbd, .a=0x3b, .x=0xe4, .y=0x6b, .sp=0x04, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x4fbd, .value=0x2f}, {.addr=0x4fbe, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x4f98, .a=0x3b, .x=0xe4, .y=0x6b, .sp=0x04, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4fbd, .value=0x2f}, {.addr=0x4fbe, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x4fbd, .value=0x2f, .type=IO_READ},
        {.addr=0x4fbe, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015B) {
    const struct CPU_State initial_cpu = {.pc=0x871e, .a=0x82, .x=0x10, .y=0xec, .sp=0xb6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x871e, .value=0x2f}, {.addr=0x871f, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x8745, .a=0x82, .x=0x10, .y=0xec, .sp=0xb6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x871e, .value=0x2f}, {.addr=0x871f, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x871e, .value=0x2f, .type=IO_READ},
        {.addr=0x871f, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015C) {
    const struct CPU_State initial_cpu = {.pc=0x512f, .a=0xc7, .x=0x27, .y=0xf5, .sp=0x35, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x512f, .value=0x2f}, {.addr=0x5130, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x50f3, .a=0xc7, .x=0x27, .y=0xf5, .sp=0x35, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x512f, .value=0x2f}, {.addr=0x5130, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x512f, .value=0x2f, .type=IO_READ},
        {.addr=0x5130, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015D) {
    const struct CPU_State initial_cpu = {.pc=0x2789, .a=0xee, .x=0xbd, .y=0x47, .sp=0x1d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2789, .value=0x2f}, {.addr=0x278a, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x279b, .a=0xee, .x=0xbd, .y=0x47, .sp=0x1d, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2789, .value=0x2f}, {.addr=0x278a, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x2789, .value=0x2f, .type=IO_READ},
        {.addr=0x278a, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa3e2, .a=0x92, .x=0x0e, .y=0x27, .sp=0x34, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e2, .value=0x2f}, {.addr=0xa3e3, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xa374, .a=0x92, .x=0x0e, .y=0x27, .sp=0x34, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xa3e2, .value=0x2f}, {.addr=0xa3e3, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xa3e2, .value=0x2f, .type=IO_READ},
        {.addr=0xa3e3, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_015F) {
    const struct CPU_State initial_cpu = {.pc=0x97de, .a=0x68, .x=0xe3, .y=0x10, .sp=0xc5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x97de, .value=0x2f}, {.addr=0x97df, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x978c, .a=0x68, .x=0xe3, .y=0x10, .sp=0xc5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x97de, .value=0x2f}, {.addr=0x97df, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x97de, .value=0x2f, .type=IO_READ},
        {.addr=0x97df, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0160) {
    const struct CPU_State initial_cpu = {.pc=0xc633, .a=0x82, .x=0x28, .y=0xc2, .sp=0x03, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc633, .value=0x2f}, {.addr=0xc634, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xc620, .a=0x82, .x=0x28, .y=0xc2, .sp=0x03, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc633, .value=0x2f}, {.addr=0xc634, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xc633, .value=0x2f, .type=IO_READ},
        {.addr=0xc634, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0161) {
    const struct CPU_State initial_cpu = {.pc=0x7d82, .a=0x8d, .x=0xd4, .y=0xc8, .sp=0x49, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x7d82, .value=0x2f}, {.addr=0x7d83, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7d83, .a=0x8d, .x=0xd4, .y=0xc8, .sp=0x49, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x7d82, .value=0x2f}, {.addr=0x7d83, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7d82, .value=0x2f, .type=IO_READ},
        {.addr=0x7d83, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0162) {
    const struct CPU_State initial_cpu = {.pc=0xfd48, .a=0x37, .x=0xbf, .y=0x7f, .sp=0x6b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd48, .value=0x2f}, {.addr=0xfd49, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xfd21, .a=0x37, .x=0xbf, .y=0x7f, .sp=0x6b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfd48, .value=0x2f}, {.addr=0xfd49, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xfd48, .value=0x2f, .type=IO_READ},
        {.addr=0xfd49, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0163) {
    const struct CPU_State initial_cpu = {.pc=0x5dff, .a=0x87, .x=0x8b, .y=0xb0, .sp=0x41, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5dff, .value=0x2f}, {.addr=0x5e00, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x5e73, .a=0x87, .x=0x8b, .y=0xb0, .sp=0x41, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5dff, .value=0x2f}, {.addr=0x5e00, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x5dff, .value=0x2f, .type=IO_READ},
        {.addr=0x5e00, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe38e, .a=0xe9, .x=0x86, .y=0x25, .sp=0x88, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe38e, .value=0x2f}, {.addr=0xe38f, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xe3c9, .a=0xe9, .x=0x86, .y=0x25, .sp=0x88, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe38e, .value=0x2f}, {.addr=0xe38f, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xe38e, .value=0x2f, .type=IO_READ},
        {.addr=0xe38f, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0165) {
    const struct CPU_State initial_cpu = {.pc=0x0d33, .a=0x89, .x=0xd9, .y=0x37, .sp=0xd2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d33, .value=0x2f}, {.addr=0x0d34, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0ccf, .a=0x89, .x=0xd9, .y=0x37, .sp=0xd2, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0d33, .value=0x2f}, {.addr=0x0d34, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x0d33, .value=0x2f, .type=IO_READ},
        {.addr=0x0d34, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0166) {
    const struct CPU_State initial_cpu = {.pc=0x4c3e, .a=0x41, .x=0x89, .y=0xe6, .sp=0xe5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4c3e, .value=0x2f}, {.addr=0x4c3f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4bdd, .a=0x41, .x=0x89, .y=0xe6, .sp=0xe5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4c3e, .value=0x2f}, {.addr=0x4c3f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4c3e, .value=0x2f, .type=IO_READ},
        {.addr=0x4c3f, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0167) {
    const struct CPU_State initial_cpu = {.pc=0x0dfb, .a=0xed, .x=0x4c, .y=0xd9, .sp=0x68, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfb, .value=0x2f}, {.addr=0x0dfc, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x0dc8, .a=0xed, .x=0x4c, .y=0xd9, .sp=0x68, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0dfb, .value=0x2f}, {.addr=0x0dfc, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x0dfb, .value=0x2f, .type=IO_READ},
        {.addr=0x0dfc, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0168) {
    const struct CPU_State initial_cpu = {.pc=0xd3c9, .a=0x72, .x=0xc5, .y=0xde, .sp=0x22, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c9, .value=0x2f}, {.addr=0xd3ca, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xd3f5, .a=0x72, .x=0xc5, .y=0xde, .sp=0x22, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd3c9, .value=0x2f}, {.addr=0xd3ca, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xd3c9, .value=0x2f, .type=IO_READ},
        {.addr=0xd3ca, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0169) {
    const struct CPU_State initial_cpu = {.pc=0x0315, .a=0x84, .x=0x0d, .y=0xb7, .sp=0x3a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0315, .value=0x2f}, {.addr=0x0316, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x0349, .a=0x84, .x=0x0d, .y=0xb7, .sp=0x3a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0315, .value=0x2f}, {.addr=0x0316, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x0315, .value=0x2f, .type=IO_READ},
        {.addr=0x0316, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6006, .a=0x20, .x=0x09, .y=0x1b, .sp=0x71, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6006, .value=0x2f}, {.addr=0x6007, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5fa1, .a=0x20, .x=0x09, .y=0x1b, .sp=0x71, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x6006, .value=0x2f}, {.addr=0x6007, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x6006, .value=0x2f, .type=IO_READ},
        {.addr=0x6007, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016B) {
    const struct CPU_State initial_cpu = {.pc=0xc910, .a=0x7c, .x=0xf0, .y=0xdb, .sp=0xe6, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc910, .value=0x2f}, {.addr=0xc911, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc95e, .a=0x7c, .x=0xf0, .y=0xdb, .sp=0xe6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc910, .value=0x2f}, {.addr=0xc911, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc910, .value=0x2f, .type=IO_READ},
        {.addr=0xc911, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd63d, .a=0x78, .x=0x65, .y=0xea, .sp=0x09, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd63d, .value=0x2f}, {.addr=0xd63e, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xd60b, .a=0x78, .x=0x65, .y=0xea, .sp=0x09, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd63d, .value=0x2f}, {.addr=0xd63e, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xd63d, .value=0x2f, .type=IO_READ},
        {.addr=0xd63e, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016D) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0xf2, .x=0xe0, .y=0x18, .sp=0xb6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0x2f}, {.addr=0x0747, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x06e5, .a=0xf2, .x=0xe0, .y=0x18, .sp=0xb6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0x2f}, {.addr=0x0747, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x2f, .type=IO_READ},
        {.addr=0x0747, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016E) {
    const struct CPU_State initial_cpu = {.pc=0x6b53, .a=0x8f, .x=0xc1, .y=0x13, .sp=0xb3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6b53, .value=0x2f}, {.addr=0x6b54, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x6ae4, .a=0x8f, .x=0xc1, .y=0x13, .sp=0xb3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6b53, .value=0x2f}, {.addr=0x6b54, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x6b53, .value=0x2f, .type=IO_READ},
        {.addr=0x6b54, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_016F) {
    const struct CPU_State initial_cpu = {.pc=0x5311, .a=0x0d, .x=0xe3, .y=0xf4, .sp=0xbd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x5311, .value=0x2f}, {.addr=0x5312, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5336, .a=0x0d, .x=0xe3, .y=0xf4, .sp=0xbd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5311, .value=0x2f}, {.addr=0x5312, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5311, .value=0x2f, .type=IO_READ},
        {.addr=0x5312, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0170) {
    const struct CPU_State initial_cpu = {.pc=0x75d0, .a=0x82, .x=0x53, .y=0x7e, .sp=0x20, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x75d0, .value=0x2f}, {.addr=0x75d1, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x761c, .a=0x82, .x=0x53, .y=0x7e, .sp=0x20, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x75d0, .value=0x2f}, {.addr=0x75d1, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x75d0, .value=0x2f, .type=IO_READ},
        {.addr=0x75d1, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0171) {
    const struct CPU_State initial_cpu = {.pc=0xa43e, .a=0xd2, .x=0x0f, .y=0x13, .sp=0xd2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa43e, .value=0x2f}, {.addr=0xa43f, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa3e1, .a=0xd2, .x=0x0f, .y=0x13, .sp=0xd2, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xa43e, .value=0x2f}, {.addr=0xa43f, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa43e, .value=0x2f, .type=IO_READ},
        {.addr=0xa43f, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0172) {
    const struct CPU_State initial_cpu = {.pc=0x7172, .a=0x8a, .x=0xc8, .y=0xc6, .sp=0x61, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x7172, .value=0x2f}, {.addr=0x7173, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7133, .a=0x8a, .x=0xc8, .y=0xc6, .sp=0x61, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x7172, .value=0x2f}, {.addr=0x7173, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7172, .value=0x2f, .type=IO_READ},
        {.addr=0x7173, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0173) {
    const struct CPU_State initial_cpu = {.pc=0x14c1, .a=0x27, .x=0xb8, .y=0xb9, .sp=0x7c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x14c1, .value=0x2f}, {.addr=0x14c2, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x1486, .a=0x27, .x=0xb8, .y=0xb9, .sp=0x7c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x14c1, .value=0x2f}, {.addr=0x14c2, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x14c1, .value=0x2f, .type=IO_READ},
        {.addr=0x14c2, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0174) {
    const struct CPU_State initial_cpu = {.pc=0x56ce, .a=0x81, .x=0x15, .y=0xd6, .sp=0x00, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x56ce, .value=0x2f}, {.addr=0x56cf, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x5689, .a=0x81, .x=0x15, .y=0xd6, .sp=0x00, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x56ce, .value=0x2f}, {.addr=0x56cf, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x56ce, .value=0x2f, .type=IO_READ},
        {.addr=0x56cf, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0175) {
    const struct CPU_State initial_cpu = {.pc=0x2d40, .a=0xcc, .x=0x61, .y=0xe5, .sp=0xd0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2d40, .value=0x2f}, {.addr=0x2d41, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x2d49, .a=0xcc, .x=0x61, .y=0xe5, .sp=0xd0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2d40, .value=0x2f}, {.addr=0x2d41, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x2d40, .value=0x2f, .type=IO_READ},
        {.addr=0x2d41, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd45b, .a=0x37, .x=0x24, .y=0xb8, .sp=0xcb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd45b, .value=0x2f}, {.addr=0xd45c, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xd46e, .a=0x37, .x=0x24, .y=0xb8, .sp=0xcb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd45b, .value=0x2f}, {.addr=0xd45c, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xd45b, .value=0x2f, .type=IO_READ},
        {.addr=0xd45c, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0177) {
    const struct CPU_State initial_cpu = {.pc=0xd925, .a=0x9b, .x=0xda, .y=0x42, .sp=0x36, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd925, .value=0x2f}, {.addr=0xd926, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xd959, .a=0x9b, .x=0xda, .y=0x42, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd925, .value=0x2f}, {.addr=0xd926, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xd925, .value=0x2f, .type=IO_READ},
        {.addr=0xd926, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9f7b, .a=0x09, .x=0x6d, .y=0x38, .sp=0x55, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9f7b, .value=0x2f}, {.addr=0x9f7c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x9f28, .a=0x09, .x=0x6d, .y=0x38, .sp=0x55, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9f7b, .value=0x2f}, {.addr=0x9f7c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x9f7b, .value=0x2f, .type=IO_READ},
        {.addr=0x9f7c, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0179) {
    const struct CPU_State initial_cpu = {.pc=0x8176, .a=0x34, .x=0x8e, .y=0x9a, .sp=0x8b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8176, .value=0x2f}, {.addr=0x8177, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x81e8, .a=0x34, .x=0x8e, .y=0x9a, .sp=0x8b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8176, .value=0x2f}, {.addr=0x8177, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x8176, .value=0x2f, .type=IO_READ},
        {.addr=0x8177, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017A) {
    const struct CPU_State initial_cpu = {.pc=0x4d29, .a=0x42, .x=0x02, .y=0x42, .sp=0xdb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4d29, .value=0x2f}, {.addr=0x4d2a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4d43, .a=0x42, .x=0x02, .y=0x42, .sp=0xdb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4d29, .value=0x2f}, {.addr=0x4d2a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4d29, .value=0x2f, .type=IO_READ},
        {.addr=0x4d2a, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017B) {
    const struct CPU_State initial_cpu = {.pc=0xc353, .a=0x35, .x=0xb1, .y=0x63, .sp=0xd5, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc353, .value=0x2f}, {.addr=0xc354, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xc3b4, .a=0x35, .x=0xb1, .y=0x63, .sp=0xd5, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xc353, .value=0x2f}, {.addr=0xc354, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xc353, .value=0x2f, .type=IO_READ},
        {.addr=0xc354, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe18c, .a=0xa1, .x=0xcd, .y=0x3d, .sp=0x6b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe18c, .value=0x2f}, {.addr=0xe18d, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xe156, .a=0xa1, .x=0xcd, .y=0x3d, .sp=0x6b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xe18c, .value=0x2f}, {.addr=0xe18d, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xe18c, .value=0x2f, .type=IO_READ},
        {.addr=0xe18d, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017D) {
    const struct CPU_State initial_cpu = {.pc=0x0dc7, .a=0x54, .x=0xd8, .y=0x9f, .sp=0x7c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc7, .value=0x2f}, {.addr=0x0dc8, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x0e32, .a=0x54, .x=0xd8, .y=0x9f, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0dc7, .value=0x2f}, {.addr=0x0dc8, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x0dc7, .value=0x2f, .type=IO_READ},
        {.addr=0x0dc8, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017E) {
    const struct CPU_State initial_cpu = {.pc=0xa67c, .a=0x1a, .x=0xd9, .y=0xc1, .sp=0x6c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa67c, .value=0x2f}, {.addr=0xa67d, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xa600, .a=0x1a, .x=0xd9, .y=0xc1, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa67c, .value=0x2f}, {.addr=0xa67d, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xa67c, .value=0x2f, .type=IO_READ},
        {.addr=0xa67d, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_017F) {
    const struct CPU_State initial_cpu = {.pc=0x5d4e, .a=0xc0, .x=0x90, .y=0x0e, .sp=0x9c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4e, .value=0x2f}, {.addr=0x5d4f, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5cf7, .a=0xc0, .x=0x90, .y=0x0e, .sp=0x9c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x5d4e, .value=0x2f}, {.addr=0x5d4f, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5d4e, .value=0x2f, .type=IO_READ},
        {.addr=0x5d4f, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0180) {
    const struct CPU_State initial_cpu = {.pc=0x00e6, .a=0xdf, .x=0x8c, .y=0xd3, .sp=0x8d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x2f}, {.addr=0x00e7, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x00d0, .a=0xdf, .x=0x8c, .y=0xd3, .sp=0x8d, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x2f}, {.addr=0x00e7, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x00e6, .value=0x2f, .type=IO_READ},
        {.addr=0x00e7, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0181) {
    const struct CPU_State initial_cpu = {.pc=0x7832, .a=0x93, .x=0x21, .y=0xb0, .sp=0xce, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7832, .value=0x2f}, {.addr=0x7833, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x78b1, .a=0x93, .x=0x21, .y=0xb0, .sp=0xce, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x7832, .value=0x2f}, {.addr=0x7833, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7832, .value=0x2f, .type=IO_READ},
        {.addr=0x7833, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0182) {
    const struct CPU_State initial_cpu = {.pc=0xdaf0, .a=0x87, .x=0x53, .y=0x13, .sp=0x09, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf0, .value=0x2f}, {.addr=0xdaf1, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xdb37, .a=0x87, .x=0x53, .y=0x13, .sp=0x09, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdaf0, .value=0x2f}, {.addr=0xdaf1, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xdaf0, .value=0x2f, .type=IO_READ},
        {.addr=0xdaf1, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0183) {
    const struct CPU_State initial_cpu = {.pc=0xb631, .a=0xf9, .x=0x36, .y=0x18, .sp=0xcb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb631, .value=0x2f}, {.addr=0xb632, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb654, .a=0xf9, .x=0x36, .y=0x18, .sp=0xcb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb631, .value=0x2f}, {.addr=0xb632, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb631, .value=0x2f, .type=IO_READ},
        {.addr=0xb632, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0184) {
    const struct CPU_State initial_cpu = {.pc=0xbc25, .a=0x11, .x=0xd1, .y=0x82, .sp=0x73, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbc25, .value=0x2f}, {.addr=0xbc26, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbc14, .a=0x11, .x=0xd1, .y=0x82, .sp=0x73, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbc25, .value=0x2f}, {.addr=0xbc26, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbc25, .value=0x2f, .type=IO_READ},
        {.addr=0xbc26, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0185) {
    const struct CPU_State initial_cpu = {.pc=0x761a, .a=0xd9, .x=0x69, .y=0x19, .sp=0x84, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x761a, .value=0x2f}, {.addr=0x761b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x762f, .a=0xd9, .x=0x69, .y=0x19, .sp=0x84, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x761a, .value=0x2f}, {.addr=0x761b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x761a, .value=0x2f, .type=IO_READ},
        {.addr=0x761b, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0186) {
    const struct CPU_State initial_cpu = {.pc=0xec3d, .a=0xd7, .x=0x08, .y=0x05, .sp=0x7a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xec3d, .value=0x2f}, {.addr=0xec3e, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xec68, .a=0xd7, .x=0x08, .y=0x05, .sp=0x7a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xec3d, .value=0x2f}, {.addr=0xec3e, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xec3d, .value=0x2f, .type=IO_READ},
        {.addr=0xec3e, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0187) {
    const struct CPU_State initial_cpu = {.pc=0xe489, .a=0xd4, .x=0x95, .y=0x13, .sp=0xcb, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xe489, .value=0x2f}, {.addr=0xe48a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe411, .a=0xd4, .x=0x95, .y=0x13, .sp=0xcb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xe489, .value=0x2f}, {.addr=0xe48a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe489, .value=0x2f, .type=IO_READ},
        {.addr=0xe48a, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9019, .a=0x14, .x=0x30, .y=0xcb, .sp=0xde, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9019, .value=0x2f}, {.addr=0x901a, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x8fe0, .a=0x14, .x=0x30, .y=0xcb, .sp=0xde, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9019, .value=0x2f}, {.addr=0x901a, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x9019, .value=0x2f, .type=IO_READ},
        {.addr=0x901a, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0189) {
    const struct CPU_State initial_cpu = {.pc=0xbf47, .a=0xd3, .x=0x31, .y=0x5c, .sp=0x0d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xbf47, .value=0x2f}, {.addr=0xbf48, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xbfae, .a=0xd3, .x=0x31, .y=0x5c, .sp=0x0d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xbf47, .value=0x2f}, {.addr=0xbf48, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xbf47, .value=0x2f, .type=IO_READ},
        {.addr=0xbf48, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018A) {
    const struct CPU_State initial_cpu = {.pc=0x2f12, .a=0xc1, .x=0xb6, .y=0x9c, .sp=0x95, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2f12, .value=0x2f}, {.addr=0x2f13, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x2f5f, .a=0xc1, .x=0xb6, .y=0x9c, .sp=0x95, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2f12, .value=0x2f}, {.addr=0x2f13, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2f12, .value=0x2f, .type=IO_READ},
        {.addr=0x2f13, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018B) {
    const struct CPU_State initial_cpu = {.pc=0x8103, .a=0xbd, .x=0x63, .y=0x5b, .sp=0xff, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8103, .value=0x2f}, {.addr=0x8104, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x8117, .a=0xbd, .x=0x63, .y=0x5b, .sp=0xff, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8103, .value=0x2f}, {.addr=0x8104, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x8103, .value=0x2f, .type=IO_READ},
        {.addr=0x8104, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf14a, .a=0x91, .x=0xdf, .y=0xc4, .sp=0x49, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf14a, .value=0x2f}, {.addr=0xf14b, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xf1c0, .a=0x91, .x=0xdf, .y=0xc4, .sp=0x49, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf14a, .value=0x2f}, {.addr=0xf14b, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xf14a, .value=0x2f, .type=IO_READ},
        {.addr=0xf14b, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018D) {
    const struct CPU_State initial_cpu = {.pc=0x02da, .a=0x08, .x=0x45, .y=0xe7, .sp=0x4e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x02da, .value=0x2f}, {.addr=0x02db, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x02e8, .a=0x08, .x=0x45, .y=0xe7, .sp=0x4e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x02da, .value=0x2f}, {.addr=0x02db, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x02da, .value=0x2f, .type=IO_READ},
        {.addr=0x02db, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018E) {
    const struct CPU_State initial_cpu = {.pc=0xbf4b, .a=0xad, .x=0x93, .y=0xe4, .sp=0x81, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4b, .value=0x2f}, {.addr=0xbf4c, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xbfa2, .a=0xad, .x=0x93, .y=0xe4, .sp=0x81, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xbf4b, .value=0x2f}, {.addr=0xbf4c, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xbf4b, .value=0x2f, .type=IO_READ},
        {.addr=0xbf4c, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe6dc, .a=0x26, .x=0x7e, .y=0xfa, .sp=0xdb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xe6dc, .value=0x2f}, {.addr=0xe6dd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe6a4, .a=0x26, .x=0x7e, .y=0xfa, .sp=0xdb, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xe6dc, .value=0x2f}, {.addr=0xe6dd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe6dc, .value=0x2f, .type=IO_READ},
        {.addr=0xe6dd, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0190) {
    const struct CPU_State initial_cpu = {.pc=0xd9d0, .a=0xc2, .x=0x69, .y=0x10, .sp=0x34, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d0, .value=0x2f}, {.addr=0xd9d1, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xd977, .a=0xc2, .x=0x69, .y=0x10, .sp=0x34, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd9d0, .value=0x2f}, {.addr=0xd9d1, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xd9d0, .value=0x2f, .type=IO_READ},
        {.addr=0xd9d1, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0191) {
    const struct CPU_State initial_cpu = {.pc=0x3b6e, .a=0x68, .x=0x95, .y=0x2d, .sp=0xe2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b6e, .value=0x2f}, {.addr=0x3b6f, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x3bcb, .a=0x68, .x=0x95, .y=0x2d, .sp=0xe2, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x3b6e, .value=0x2f}, {.addr=0x3b6f, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x3b6e, .value=0x2f, .type=IO_READ},
        {.addr=0x3b6f, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0192) {
    const struct CPU_State initial_cpu = {.pc=0x604e, .a=0x0a, .x=0x89, .y=0x94, .sp=0x1a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x604e, .value=0x2f}, {.addr=0x604f, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x6082, .a=0x0a, .x=0x89, .y=0x94, .sp=0x1a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x604e, .value=0x2f}, {.addr=0x604f, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x604e, .value=0x2f, .type=IO_READ},
        {.addr=0x604f, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0193) {
    const struct CPU_State initial_cpu = {.pc=0x01d5, .a=0x16, .x=0x92, .y=0x5f, .sp=0x75, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x2f}, {.addr=0x01d6, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x01e8, .a=0x16, .x=0x92, .y=0x5f, .sp=0x75, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x2f}, {.addr=0x01d6, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x01d5, .value=0x2f, .type=IO_READ},
        {.addr=0x01d6, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0194) {
    const struct CPU_State initial_cpu = {.pc=0xc91d, .a=0x3b, .x=0xc6, .y=0xb2, .sp=0x3a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc91d, .value=0x2f}, {.addr=0xc91e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc8bc, .a=0x3b, .x=0xc6, .y=0xb2, .sp=0x3a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc91d, .value=0x2f}, {.addr=0xc91e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc91d, .value=0x2f, .type=IO_READ},
        {.addr=0xc91e, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0195) {
    const struct CPU_State initial_cpu = {.pc=0x3402, .a=0xcd, .x=0xee, .y=0x31, .sp=0xa3, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3402, .value=0x2f}, {.addr=0x3403, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x33cc, .a=0xcd, .x=0xee, .y=0x31, .sp=0xa3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3402, .value=0x2f}, {.addr=0x3403, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3402, .value=0x2f, .type=IO_READ},
        {.addr=0x3403, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0196) {
    const struct CPU_State initial_cpu = {.pc=0x764c, .a=0x23, .x=0x71, .y=0x2c, .sp=0x7b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x764c, .value=0x2f}, {.addr=0x764d, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x75ec, .a=0x23, .x=0x71, .y=0x2c, .sp=0x7b, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x764c, .value=0x2f}, {.addr=0x764d, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x764c, .value=0x2f, .type=IO_READ},
        {.addr=0x764d, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0197) {
    const struct CPU_State initial_cpu = {.pc=0xf9ad, .a=0xad, .x=0xd8, .y=0xbc, .sp=0xed, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ad, .value=0x2f}, {.addr=0xf9ae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf9f5, .a=0xad, .x=0xd8, .y=0xbc, .sp=0xed, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf9ad, .value=0x2f}, {.addr=0xf9ae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf9ad, .value=0x2f, .type=IO_READ},
        {.addr=0xf9ae, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0198) {
    const struct CPU_State initial_cpu = {.pc=0x68c7, .a=0xb0, .x=0x78, .y=0x02, .sp=0x9a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x68c7, .value=0x2f}, {.addr=0x68c8, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x689c, .a=0xb0, .x=0x78, .y=0x02, .sp=0x9a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x68c7, .value=0x2f}, {.addr=0x68c8, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x68c7, .value=0x2f, .type=IO_READ},
        {.addr=0x68c8, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0199) {
    const struct CPU_State initial_cpu = {.pc=0x0a10, .a=0xc7, .x=0xe3, .y=0x40, .sp=0x4e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0a10, .value=0x2f}, {.addr=0x0a11, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x0996, .a=0xc7, .x=0xe3, .y=0x40, .sp=0x4e, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0a10, .value=0x2f}, {.addr=0x0a11, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x0a10, .value=0x2f, .type=IO_READ},
        {.addr=0x0a11, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019A) {
    const struct CPU_State initial_cpu = {.pc=0xf1e0, .a=0x6e, .x=0x48, .y=0xee, .sp=0xe9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf1e0, .value=0x2f}, {.addr=0xf1e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xf1c8, .a=0x6e, .x=0x48, .y=0xee, .sp=0xe9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf1e0, .value=0x2f}, {.addr=0xf1e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xf1e0, .value=0x2f, .type=IO_READ},
        {.addr=0xf1e1, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019B) {
    const struct CPU_State initial_cpu = {.pc=0x8e25, .a=0x23, .x=0xef, .y=0x36, .sp=0x63, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x8e25, .value=0x2f}, {.addr=0x8e26, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x8e01, .a=0x23, .x=0xef, .y=0x36, .sp=0x63, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x8e25, .value=0x2f}, {.addr=0x8e26, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x8e25, .value=0x2f, .type=IO_READ},
        {.addr=0x8e26, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1b2e, .a=0x85, .x=0x9c, .y=0x0c, .sp=0xe6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1b2e, .value=0x2f}, {.addr=0x1b2f, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1b83, .a=0x85, .x=0x9c, .y=0x0c, .sp=0xe6, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1b2e, .value=0x2f}, {.addr=0x1b2f, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1b2e, .value=0x2f, .type=IO_READ},
        {.addr=0x1b2f, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019D) {
    const struct CPU_State initial_cpu = {.pc=0x6cad, .a=0xa6, .x=0xfe, .y=0x2c, .sp=0x86, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6cad, .value=0x2f}, {.addr=0x6cae, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x6cee, .a=0xa6, .x=0xfe, .y=0x2c, .sp=0x86, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6cad, .value=0x2f}, {.addr=0x6cae, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x6cad, .value=0x2f, .type=IO_READ},
        {.addr=0x6cae, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019E) {
    const struct CPU_State initial_cpu = {.pc=0xa89a, .a=0xc7, .x=0x7c, .y=0x6b, .sp=0x8d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa89a, .value=0x2f}, {.addr=0xa89b, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xa8ec, .a=0xc7, .x=0x7c, .y=0x6b, .sp=0x8d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa89a, .value=0x2f}, {.addr=0xa89b, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xa89a, .value=0x2f, .type=IO_READ},
        {.addr=0xa89b, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_019F) {
    const struct CPU_State initial_cpu = {.pc=0x73bb, .a=0x63, .x=0x1d, .y=0x14, .sp=0x83, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x73bb, .value=0x2f}, {.addr=0x73bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x73ba, .a=0x63, .x=0x1d, .y=0x14, .sp=0x83, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x73bb, .value=0x2f}, {.addr=0x73bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x73bb, .value=0x2f, .type=IO_READ},
        {.addr=0x73bc, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x2083, .a=0x2a, .x=0x7b, .y=0x8b, .sp=0x08, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x2083, .value=0x2f}, {.addr=0x2084, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x20b6, .a=0x2a, .x=0x7b, .y=0x8b, .sp=0x08, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2083, .value=0x2f}, {.addr=0x2084, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x2083, .value=0x2f, .type=IO_READ},
        {.addr=0x2084, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x867b, .a=0x76, .x=0x85, .y=0x09, .sp=0xc7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x867b, .value=0x2f}, {.addr=0x867c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x865a, .a=0x76, .x=0x85, .y=0x09, .sp=0xc7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x867b, .value=0x2f}, {.addr=0x867c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x867b, .value=0x2f, .type=IO_READ},
        {.addr=0x867c, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd624, .a=0x32, .x=0x62, .y=0x76, .sp=0x75, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd624, .value=0x2f}, {.addr=0xd625, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xd5ca, .a=0x32, .x=0x62, .y=0x76, .sp=0x75, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd624, .value=0x2f}, {.addr=0xd625, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xd624, .value=0x2f, .type=IO_READ},
        {.addr=0xd625, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x30c4, .a=0xe3, .x=0x05, .y=0x2c, .sp=0x91, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x30c4, .value=0x2f}, {.addr=0x30c5, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x30ad, .a=0xe3, .x=0x05, .y=0x2c, .sp=0x91, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x30c4, .value=0x2f}, {.addr=0x30c5, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x30c4, .value=0x2f, .type=IO_READ},
        {.addr=0x30c5, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x9ad4, .a=0x74, .x=0x5f, .y=0xe0, .sp=0x37, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad4, .value=0x2f}, {.addr=0x9ad5, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x9b18, .a=0x74, .x=0x5f, .y=0xe0, .sp=0x37, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x9ad4, .value=0x2f}, {.addr=0x9ad5, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x9ad4, .value=0x2f, .type=IO_READ},
        {.addr=0x9ad5, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xbc5b, .a=0x67, .x=0x3a, .y=0x3a, .sp=0x6b, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xbc5b, .value=0x2f}, {.addr=0xbc5c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbca9, .a=0x67, .x=0x3a, .y=0x3a, .sp=0x6b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbc5b, .value=0x2f}, {.addr=0xbc5c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbc5b, .value=0x2f, .type=IO_READ},
        {.addr=0xbc5c, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xa483, .a=0xeb, .x=0xfb, .y=0xfe, .sp=0x73, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa483, .value=0x2f}, {.addr=0xa484, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa494, .a=0xeb, .x=0xfb, .y=0xfe, .sp=0x73, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xa483, .value=0x2f}, {.addr=0xa484, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa483, .value=0x2f, .type=IO_READ},
        {.addr=0xa484, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0522, .a=0xfb, .x=0x0d, .y=0x4a, .sp=0xa0, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0522, .value=0x2f}, {.addr=0x0523, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x0592, .a=0xfb, .x=0x0d, .y=0x4a, .sp=0xa0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0522, .value=0x2f}, {.addr=0x0523, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x0522, .value=0x2f, .type=IO_READ},
        {.addr=0x0523, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x400d, .a=0x8c, .x=0x8c, .y=0x58, .sp=0xd1, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x400d, .value=0x2f}, {.addr=0x400e, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x3fe0, .a=0x8c, .x=0x8c, .y=0x58, .sp=0xd1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x400d, .value=0x2f}, {.addr=0x400e, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x400d, .value=0x2f, .type=IO_READ},
        {.addr=0x400e, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x7976, .a=0xf7, .x=0xb7, .y=0xca, .sp=0x32, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7976, .value=0x2f}, {.addr=0x7977, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7985, .a=0xf7, .x=0xb7, .y=0xca, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7976, .value=0x2f}, {.addr=0x7977, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7976, .value=0x2f, .type=IO_READ},
        {.addr=0x7977, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xb848, .a=0x28, .x=0x62, .y=0xc4, .sp=0x2e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb848, .value=0x2f}, {.addr=0xb849, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb83c, .a=0x28, .x=0x62, .y=0xc4, .sp=0x2e, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xb848, .value=0x2f}, {.addr=0xb849, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb848, .value=0x2f, .type=IO_READ},
        {.addr=0xb849, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x785d, .a=0x09, .x=0xe7, .y=0xc8, .sp=0x5d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x785d, .value=0x2f}, {.addr=0x785e, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x787a, .a=0x09, .x=0xe7, .y=0xc8, .sp=0x5d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x785d, .value=0x2f}, {.addr=0x785e, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x785d, .value=0x2f, .type=IO_READ},
        {.addr=0x785e, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x4a36, .a=0xa4, .x=0x15, .y=0x7c, .sp=0xf9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4a36, .value=0x2f}, {.addr=0x4a37, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x49e9, .a=0xa4, .x=0x15, .y=0x7c, .sp=0xf9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4a36, .value=0x2f}, {.addr=0x4a37, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x4a36, .value=0x2f, .type=IO_READ},
        {.addr=0x4a37, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x1e0b, .a=0x1d, .x=0x78, .y=0xc9, .sp=0x35, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0b, .value=0x2f}, {.addr=0x1e0c, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x1d92, .a=0x1d, .x=0x78, .y=0xc9, .sp=0x35, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1e0b, .value=0x2f}, {.addr=0x1e0c, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1e0b, .value=0x2f, .type=IO_READ},
        {.addr=0x1e0c, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xe80b, .a=0xdb, .x=0xff, .y=0x5c, .sp=0x20, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe80b, .value=0x2f}, {.addr=0xe80c, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe860, .a=0xdb, .x=0xff, .y=0x5c, .sp=0x20, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe80b, .value=0x2f}, {.addr=0xe80c, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe80b, .value=0x2f, .type=IO_READ},
        {.addr=0xe80c, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x8da8, .a=0x91, .x=0x58, .y=0x54, .sp=0xa2, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8da8, .value=0x2f}, {.addr=0x8da9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8d58, .a=0x91, .x=0x58, .y=0x54, .sp=0xa2, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x8da8, .value=0x2f}, {.addr=0x8da9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8da8, .value=0x2f, .type=IO_READ},
        {.addr=0x8da9, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x7dbf, .a=0x4a, .x=0x6b, .y=0x64, .sp=0x54, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7dbf, .value=0x2f}, {.addr=0x7dc0, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x7e3c, .a=0x4a, .x=0x6b, .y=0x64, .sp=0x54, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7dbf, .value=0x2f}, {.addr=0x7dc0, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x7dbf, .value=0x2f, .type=IO_READ},
        {.addr=0x7dc0, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xe94b, .a=0x5c, .x=0xd4, .y=0x27, .sp=0x67, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe94b, .value=0x2f}, {.addr=0xe94c, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xe912, .a=0x5c, .x=0xd4, .y=0x27, .sp=0x67, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe94b, .value=0x2f}, {.addr=0xe94c, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xe94b, .value=0x2f, .type=IO_READ},
        {.addr=0xe94c, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x18c0, .a=0x05, .x=0xdb, .y=0xb0, .sp=0x4e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x18c0, .value=0x2f}, {.addr=0x18c1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1908, .a=0x05, .x=0xdb, .y=0xb0, .sp=0x4e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x18c0, .value=0x2f}, {.addr=0x18c1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x18c0, .value=0x2f, .type=IO_READ},
        {.addr=0x18c1, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x731a, .a=0xcc, .x=0x84, .y=0xf5, .sp=0x77, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x731a, .value=0x2f}, {.addr=0x731b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x735f, .a=0xcc, .x=0x84, .y=0xf5, .sp=0x77, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x731a, .value=0x2f}, {.addr=0x731b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x731a, .value=0x2f, .type=IO_READ},
        {.addr=0x731b, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xadd5, .a=0x56, .x=0xca, .y=0xf7, .sp=0xdd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xadd5, .value=0x2f}, {.addr=0xadd6, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xae11, .a=0x56, .x=0xca, .y=0xf7, .sp=0xdd, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xadd5, .value=0x2f}, {.addr=0xadd6, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xadd5, .value=0x2f, .type=IO_READ},
        {.addr=0xadd6, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x874a, .a=0xd1, .x=0x8d, .y=0xdf, .sp=0xfa, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x874a, .value=0x2f}, {.addr=0x874b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x86fa, .a=0xd1, .x=0x8d, .y=0xdf, .sp=0xfa, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x874a, .value=0x2f}, {.addr=0x874b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x874a, .value=0x2f, .type=IO_READ},
        {.addr=0x874b, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x7fc4, .a=0x92, .x=0x4c, .y=0xda, .sp=0xf6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7fc4, .value=0x2f}, {.addr=0x7fc5, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x8028, .a=0x92, .x=0x4c, .y=0xda, .sp=0xf6, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x7fc4, .value=0x2f}, {.addr=0x7fc5, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7fc4, .value=0x2f, .type=IO_READ},
        {.addr=0x7fc5, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x9eb4, .a=0x93, .x=0xc9, .y=0x2c, .sp=0x07, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb4, .value=0x2f}, {.addr=0x9eb5, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x9f21, .a=0x93, .x=0xc9, .y=0x2c, .sp=0x07, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x9eb4, .value=0x2f}, {.addr=0x9eb5, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9eb4, .value=0x2f, .type=IO_READ},
        {.addr=0x9eb5, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x7c26, .a=0xff, .x=0xae, .y=0xde, .sp=0x99, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7c26, .value=0x2f}, {.addr=0x7c27, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x7c0d, .a=0xff, .x=0xae, .y=0xde, .sp=0x99, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x7c26, .value=0x2f}, {.addr=0x7c27, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x7c26, .value=0x2f, .type=IO_READ},
        {.addr=0x7c27, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x0ad0, .a=0x07, .x=0xdb, .y=0x6f, .sp=0x06, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad0, .value=0x2f}, {.addr=0x0ad1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0b12, .a=0x07, .x=0xdb, .y=0x6f, .sp=0x06, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0ad0, .value=0x2f}, {.addr=0x0ad1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0ad0, .value=0x2f, .type=IO_READ},
        {.addr=0x0ad1, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x7405, .a=0xf7, .x=0x41, .y=0x39, .sp=0x3d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7405, .value=0x2f}, {.addr=0x7406, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x739b, .a=0xf7, .x=0x41, .y=0x39, .sp=0x3d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7405, .value=0x2f}, {.addr=0x7406, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x7405, .value=0x2f, .type=IO_READ},
        {.addr=0x7406, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xcab7, .a=0x20, .x=0xbe, .y=0x02, .sp=0x0a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xcab7, .value=0x2f}, {.addr=0xcab8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcae6, .a=0x20, .x=0xbe, .y=0x02, .sp=0x0a, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xcab7, .value=0x2f}, {.addr=0xcab8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcab7, .value=0x2f, .type=IO_READ},
        {.addr=0xcab8, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x4e6f, .a=0x71, .x=0x44, .y=0x42, .sp=0x7c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4e6f, .value=0x2f}, {.addr=0x4e70, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x4e1e, .a=0x71, .x=0x44, .y=0x42, .sp=0x7c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x4e6f, .value=0x2f}, {.addr=0x4e70, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x4e6f, .value=0x2f, .type=IO_READ},
        {.addr=0x4e70, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x465a, .a=0x03, .x=0x9c, .y=0x8d, .sp=0x55, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x465a, .value=0x2f}, {.addr=0x465b, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x45e6, .a=0x03, .x=0x9c, .y=0x8d, .sp=0x55, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x465a, .value=0x2f}, {.addr=0x465b, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x465a, .value=0x2f, .type=IO_READ},
        {.addr=0x465b, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x120e, .a=0x60, .x=0x75, .y=0x6b, .sp=0xeb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x120e, .value=0x2f}, {.addr=0x120f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1256, .a=0x60, .x=0x75, .y=0x6b, .sp=0xeb, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x120e, .value=0x2f}, {.addr=0x120f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x120e, .value=0x2f, .type=IO_READ},
        {.addr=0x120f, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x101f, .a=0x37, .x=0xbf, .y=0x85, .sp=0x8f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x101f, .value=0x2f}, {.addr=0x1020, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x1011, .a=0x37, .x=0xbf, .y=0x85, .sp=0x8f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x101f, .value=0x2f}, {.addr=0x1020, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x101f, .value=0x2f, .type=IO_READ},
        {.addr=0x1020, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x716a, .a=0x72, .x=0x30, .y=0x6e, .sp=0x60, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x716a, .value=0x2f}, {.addr=0x716b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7169, .a=0x72, .x=0x30, .y=0x6e, .sp=0x60, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x716a, .value=0x2f}, {.addr=0x716b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x716a, .value=0x2f, .type=IO_READ},
        {.addr=0x716b, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x4176, .a=0xbf, .x=0x16, .y=0x64, .sp=0x22, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4176, .value=0x2f}, {.addr=0x4177, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x419d, .a=0xbf, .x=0x16, .y=0x64, .sp=0x22, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x4176, .value=0x2f}, {.addr=0x4177, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4176, .value=0x2f, .type=IO_READ},
        {.addr=0x4177, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4222, .a=0xc7, .x=0x90, .y=0x21, .sp=0x1f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4222, .value=0x2f}, {.addr=0x4223, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x429a, .a=0xc7, .x=0x90, .y=0x21, .sp=0x1f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4222, .value=0x2f}, {.addr=0x4223, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x4222, .value=0x2f, .type=IO_READ},
        {.addr=0x4223, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x7c07, .a=0x73, .x=0x10, .y=0x8e, .sp=0xbf, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x7c07, .value=0x2f}, {.addr=0x7c08, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7bfe, .a=0x73, .x=0x10, .y=0x8e, .sp=0xbf, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x7c07, .value=0x2f}, {.addr=0x7c08, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7c07, .value=0x2f, .type=IO_READ},
        {.addr=0x7c08, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x181e, .a=0x0b, .x=0x36, .y=0x8c, .sp=0xc6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x181e, .value=0x2f}, {.addr=0x181f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1800, .a=0x0b, .x=0x36, .y=0x8c, .sp=0xc6, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x181e, .value=0x2f}, {.addr=0x181f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x181e, .value=0x2f, .type=IO_READ},
        {.addr=0x181f, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x383d, .a=0x2c, .x=0x1d, .y=0x95, .sp=0xd7, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x383d, .value=0x2f}, {.addr=0x383e, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x37c8, .a=0x2c, .x=0x1d, .y=0x95, .sp=0xd7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x383d, .value=0x2f}, {.addr=0x383e, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x383d, .value=0x2f, .type=IO_READ},
        {.addr=0x383e, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x9069, .a=0xb5, .x=0x4d, .y=0x43, .sp=0x24, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9069, .value=0x2f}, {.addr=0x906a, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x9084, .a=0xb5, .x=0x4d, .y=0x43, .sp=0x24, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x9069, .value=0x2f}, {.addr=0x906a, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x9069, .value=0x2f, .type=IO_READ},
        {.addr=0x906a, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x0b8a, .a=0x4c, .x=0xc0, .y=0xe5, .sp=0x23, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8a, .value=0x2f}, {.addr=0x0b8b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0bf9, .a=0x4c, .x=0xc0, .y=0xe5, .sp=0x23, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0b8a, .value=0x2f}, {.addr=0x0b8b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0b8a, .value=0x2f, .type=IO_READ},
        {.addr=0x0b8b, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x56b5, .a=0x2f, .x=0x75, .y=0x9e, .sp=0x29, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x56b5, .value=0x2f}, {.addr=0x56b6, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x568a, .a=0x2f, .x=0x75, .y=0x9e, .sp=0x29, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x56b5, .value=0x2f}, {.addr=0x56b6, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x56b5, .value=0x2f, .type=IO_READ},
        {.addr=0x56b6, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x23b0, .a=0xf1, .x=0xdf, .y=0xae, .sp=0x75, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x23b0, .value=0x2f}, {.addr=0x23b1, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x233a, .a=0xf1, .x=0xdf, .y=0xae, .sp=0x75, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x23b0, .value=0x2f}, {.addr=0x23b1, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x23b0, .value=0x2f, .type=IO_READ},
        {.addr=0x23b1, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x0506, .a=0xe2, .x=0x40, .y=0x90, .sp=0x82, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0506, .value=0x2f}, {.addr=0x0507, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0539, .a=0xe2, .x=0x40, .y=0x90, .sp=0x82, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0506, .value=0x2f}, {.addr=0x0507, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0506, .value=0x2f, .type=IO_READ},
        {.addr=0x0507, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x1804, .a=0x6c, .x=0xf4, .y=0x6c, .sp=0xd8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1804, .value=0x2f}, {.addr=0x1805, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x17ac, .a=0x6c, .x=0xf4, .y=0x6c, .sp=0xd8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1804, .value=0x2f}, {.addr=0x1805, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1804, .value=0x2f, .type=IO_READ},
        {.addr=0x1805, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x0cd2, .a=0xf6, .x=0xef, .y=0xe5, .sp=0x2b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd2, .value=0x2f}, {.addr=0x0cd3, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x0cd3, .a=0xf6, .x=0xef, .y=0xe5, .sp=0x2b, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0cd2, .value=0x2f}, {.addr=0x0cd3, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x0cd2, .value=0x2f, .type=IO_READ},
        {.addr=0x0cd3, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x7d6a, .a=0xf3, .x=0xe0, .y=0x57, .sp=0xec, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7d6a, .value=0x2f}, {.addr=0x7d6b, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x7d80, .a=0xf3, .x=0xe0, .y=0x57, .sp=0xec, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7d6a, .value=0x2f}, {.addr=0x7d6b, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x7d6a, .value=0x2f, .type=IO_READ},
        {.addr=0x7d6b, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xfaa7, .a=0x55, .x=0x02, .y=0x6d, .sp=0x29, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa7, .value=0x2f}, {.addr=0xfaa8, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xfa4a, .a=0x55, .x=0x02, .y=0x6d, .sp=0x29, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xfaa7, .value=0x2f}, {.addr=0xfaa8, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xfaa7, .value=0x2f, .type=IO_READ},
        {.addr=0xfaa8, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xee27, .a=0xf3, .x=0xdb, .y=0xd5, .sp=0x78, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xee27, .value=0x2f}, {.addr=0xee28, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xee43, .a=0xf3, .x=0xdb, .y=0xd5, .sp=0x78, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xee27, .value=0x2f}, {.addr=0xee28, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xee27, .value=0x2f, .type=IO_READ},
        {.addr=0xee28, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x9d7f, .a=0xed, .x=0x4f, .y=0x20, .sp=0x3a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9d7f, .value=0x2f}, {.addr=0x9d80, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x9d62, .a=0xed, .x=0x4f, .y=0x20, .sp=0x3a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9d7f, .value=0x2f}, {.addr=0x9d80, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x9d7f, .value=0x2f, .type=IO_READ},
        {.addr=0x9d80, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x79a4, .a=0x6d, .x=0xd7, .y=0xe1, .sp=0x11, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x79a4, .value=0x2f}, {.addr=0x79a5, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x79b9, .a=0x6d, .x=0xd7, .y=0xe1, .sp=0x11, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x79a4, .value=0x2f}, {.addr=0x79a5, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x79a4, .value=0x2f, .type=IO_READ},
        {.addr=0x79a5, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x934a, .a=0x77, .x=0x8b, .y=0xd8, .sp=0x78, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x934a, .value=0x2f}, {.addr=0x934b, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x92e4, .a=0x77, .x=0x8b, .y=0xd8, .sp=0x78, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x934a, .value=0x2f}, {.addr=0x934b, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x934a, .value=0x2f, .type=IO_READ},
        {.addr=0x934b, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x3ee6, .a=0xa9, .x=0xdd, .y=0xd9, .sp=0x37, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3ee6, .value=0x2f}, {.addr=0x3ee7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ee8, .a=0xa9, .x=0xdd, .y=0xd9, .sp=0x37, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x3ee6, .value=0x2f}, {.addr=0x3ee7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ee6, .value=0x2f, .type=IO_READ},
        {.addr=0x3ee7, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x38c5, .a=0xe0, .x=0xd9, .y=0x9b, .sp=0xbe, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x38c5, .value=0x2f}, {.addr=0x38c6, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x38b6, .a=0xe0, .x=0xd9, .y=0x9b, .sp=0xbe, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x38c5, .value=0x2f}, {.addr=0x38c6, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x38c5, .value=0x2f, .type=IO_READ},
        {.addr=0x38c6, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xba0d, .a=0xe5, .x=0x2f, .y=0x4c, .sp=0xef, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xba0d, .value=0x2f}, {.addr=0xba0e, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xb9e1, .a=0xe5, .x=0x2f, .y=0x4c, .sp=0xef, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xba0d, .value=0x2f}, {.addr=0xba0e, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xba0d, .value=0x2f, .type=IO_READ},
        {.addr=0xba0e, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x909f, .a=0xc1, .x=0xf0, .y=0xd7, .sp=0x11, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x909f, .value=0x2f}, {.addr=0x90a0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9040, .a=0xc1, .x=0xf0, .y=0xd7, .sp=0x11, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x909f, .value=0x2f}, {.addr=0x90a0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x909f, .value=0x2f, .type=IO_READ},
        {.addr=0x90a0, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xb42e, .a=0x2e, .x=0x84, .y=0x41, .sp=0x0d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb42e, .value=0x2f}, {.addr=0xb42f, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xb411, .a=0x2e, .x=0x84, .y=0x41, .sp=0x0d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb42e, .value=0x2f}, {.addr=0xb42f, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xb42e, .value=0x2f, .type=IO_READ},
        {.addr=0xb42f, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xee93, .a=0xe9, .x=0xa6, .y=0xa3, .sp=0x38, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xee93, .value=0x2f}, {.addr=0xee94, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xee6b, .a=0xe9, .x=0xa6, .y=0xa3, .sp=0x38, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xee93, .value=0x2f}, {.addr=0xee94, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xee93, .value=0x2f, .type=IO_READ},
        {.addr=0xee94, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x7303, .a=0xf3, .x=0x29, .y=0xce, .sp=0xe4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7303, .value=0x2f}, {.addr=0x7304, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x72c8, .a=0xf3, .x=0x29, .y=0xce, .sp=0xe4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7303, .value=0x2f}, {.addr=0x7304, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x7303, .value=0x2f, .type=IO_READ},
        {.addr=0x7304, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x3ef3, .a=0x0b, .x=0x3a, .y=0x8c, .sp=0xfc, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef3, .value=0x2f}, {.addr=0x3ef4, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x3eec, .a=0x0b, .x=0x3a, .y=0x8c, .sp=0xfc, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x3ef3, .value=0x2f}, {.addr=0x3ef4, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x3ef3, .value=0x2f, .type=IO_READ},
        {.addr=0x3ef4, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x2b33, .a=0xe0, .x=0xcd, .y=0x4b, .sp=0x2b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2b33, .value=0x2f}, {.addr=0x2b34, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x2b99, .a=0xe0, .x=0xcd, .y=0x4b, .sp=0x2b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b33, .value=0x2f}, {.addr=0x2b34, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x2b33, .value=0x2f, .type=IO_READ},
        {.addr=0x2b34, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x5df7, .a=0x2a, .x=0x14, .y=0x89, .sp=0x33, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5df7, .value=0x2f}, {.addr=0x5df8, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x5e30, .a=0x2a, .x=0x14, .y=0x89, .sp=0x33, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5df7, .value=0x2f}, {.addr=0x5df8, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x5df7, .value=0x2f, .type=IO_READ},
        {.addr=0x5df8, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x8e96, .a=0x33, .x=0x10, .y=0x93, .sp=0x68, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8e96, .value=0x2f}, {.addr=0x8e97, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x8e99, .a=0x33, .x=0x10, .y=0x93, .sp=0x68, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8e96, .value=0x2f}, {.addr=0x8e97, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x8e96, .value=0x2f, .type=IO_READ},
        {.addr=0x8e97, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x4b9c, .a=0xc8, .x=0x50, .y=0xed, .sp=0xaf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4b9c, .value=0x2f}, {.addr=0x4b9d, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x4b46, .a=0xc8, .x=0x50, .y=0xed, .sp=0xaf, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x4b9c, .value=0x2f}, {.addr=0x4b9d, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x4b9c, .value=0x2f, .type=IO_READ},
        {.addr=0x4b9d, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x454e, .a=0x4e, .x=0x2a, .y=0x4a, .sp=0x42, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x454e, .value=0x2f}, {.addr=0x454f, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x4580, .a=0x4e, .x=0x2a, .y=0x4a, .sp=0x42, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x454e, .value=0x2f}, {.addr=0x454f, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x454e, .value=0x2f, .type=IO_READ},
        {.addr=0x454f, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x6ce5, .a=0x16, .x=0x31, .y=0x5b, .sp=0xea, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ce5, .value=0x2f}, {.addr=0x6ce6, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x6cdc, .a=0x16, .x=0x31, .y=0x5b, .sp=0xea, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x6ce5, .value=0x2f}, {.addr=0x6ce6, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x6ce5, .value=0x2f, .type=IO_READ},
        {.addr=0x6ce6, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x9220, .a=0xda, .x=0xd5, .y=0xe3, .sp=0x45, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9220, .value=0x2f}, {.addr=0x9221, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x929e, .a=0xda, .x=0xd5, .y=0xe3, .sp=0x45, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x9220, .value=0x2f}, {.addr=0x9221, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9220, .value=0x2f, .type=IO_READ},
        {.addr=0x9221, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x3090, .a=0xe9, .x=0x38, .y=0xab, .sp=0xe8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3090, .value=0x2f}, {.addr=0x3091, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x30c3, .a=0xe9, .x=0x38, .y=0xab, .sp=0xe8, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x3090, .value=0x2f}, {.addr=0x3091, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x3090, .value=0x2f, .type=IO_READ},
        {.addr=0x3091, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x8c76, .a=0x07, .x=0x27, .y=0x04, .sp=0x20, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8c76, .value=0x2f}, {.addr=0x8c77, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x8c45, .a=0x07, .x=0x27, .y=0x04, .sp=0x20, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8c76, .value=0x2f}, {.addr=0x8c77, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x8c76, .value=0x2f, .type=IO_READ},
        {.addr=0x8c77, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x8f7a, .a=0x2b, .x=0x3a, .y=0xa2, .sp=0xe4, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7a, .value=0x2f}, {.addr=0x8f7b, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x8fb6, .a=0x2b, .x=0x3a, .y=0xa2, .sp=0xe4, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x8f7a, .value=0x2f}, {.addr=0x8f7b, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x8f7a, .value=0x2f, .type=IO_READ},
        {.addr=0x8f7b, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x13b9, .a=0x6d, .x=0x6c, .y=0x4c, .sp=0x2c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x13b9, .value=0x2f}, {.addr=0x13ba, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x1360, .a=0x6d, .x=0x6c, .y=0x4c, .sp=0x2c, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x13b9, .value=0x2f}, {.addr=0x13ba, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x13b9, .value=0x2f, .type=IO_READ},
        {.addr=0x13ba, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xbe7d, .a=0xa1, .x=0x2a, .y=0xf3, .sp=0x75, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe7d, .value=0x2f}, {.addr=0xbe7e, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xbeda, .a=0xa1, .x=0x2a, .y=0xf3, .sp=0x75, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xbe7d, .value=0x2f}, {.addr=0xbe7e, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xbe7d, .value=0x2f, .type=IO_READ},
        {.addr=0xbe7e, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x1ee4, .a=0x55, .x=0x5e, .y=0x95, .sp=0x14, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee4, .value=0x2f}, {.addr=0x1ee5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1f22, .a=0x55, .x=0x5e, .y=0x95, .sp=0x14, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x1ee4, .value=0x2f}, {.addr=0x1ee5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1ee4, .value=0x2f, .type=IO_READ},
        {.addr=0x1ee5, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xa167, .a=0x8a, .x=0x4e, .y=0x9d, .sp=0x9a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa167, .value=0x2f}, {.addr=0xa168, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xa116, .a=0x8a, .x=0x4e, .y=0x9d, .sp=0x9a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa167, .value=0x2f}, {.addr=0xa168, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xa167, .value=0x2f, .type=IO_READ},
        {.addr=0xa168, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xd48e, .a=0x9f, .x=0x6e, .y=0x2f, .sp=0x5a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd48e, .value=0x2f}, {.addr=0xd48f, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xd46b, .a=0x9f, .x=0x6e, .y=0x2f, .sp=0x5a, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xd48e, .value=0x2f}, {.addr=0xd48f, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xd48e, .value=0x2f, .type=IO_READ},
        {.addr=0xd48f, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x0bb1, .a=0xb0, .x=0x0a, .y=0xf2, .sp=0xd8, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb1, .value=0x2f}, {.addr=0x0bb2, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x0c22, .a=0xb0, .x=0x0a, .y=0xf2, .sp=0xd8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0bb1, .value=0x2f}, {.addr=0x0bb2, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x0bb1, .value=0x2f, .type=IO_READ},
        {.addr=0x0bb2, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xfe61, .a=0xe6, .x=0xbe, .y=0xd7, .sp=0xc5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfe61, .value=0x2f}, {.addr=0xfe62, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xfdfa, .a=0xe6, .x=0xbe, .y=0xd7, .sp=0xc5, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xfe61, .value=0x2f}, {.addr=0xfe62, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xfe61, .value=0x2f, .type=IO_READ},
        {.addr=0xfe62, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd90f, .a=0x47, .x=0x9f, .y=0x67, .sp=0x95, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd90f, .value=0x2f}, {.addr=0xd910, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xd8e7, .a=0x47, .x=0x9f, .y=0x67, .sp=0x95, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xd90f, .value=0x2f}, {.addr=0xd910, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xd90f, .value=0x2f, .type=IO_READ},
        {.addr=0xd910, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x145f, .a=0x46, .x=0x3d, .y=0xec, .sp=0x8f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x145f, .value=0x2f}, {.addr=0x1460, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x142a, .a=0x46, .x=0x3d, .y=0xec, .sp=0x8f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x145f, .value=0x2f}, {.addr=0x1460, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x145f, .value=0x2f, .type=IO_READ},
        {.addr=0x1460, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x31a8, .a=0x1d, .x=0x7b, .y=0xf4, .sp=0xab, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x31a8, .value=0x2f}, {.addr=0x31a9, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x31ef, .a=0x1d, .x=0x7b, .y=0xf4, .sp=0xab, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x31a8, .value=0x2f}, {.addr=0x31a9, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x31a8, .value=0x2f, .type=IO_READ},
        {.addr=0x31a9, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x4742, .a=0xbe, .x=0x3b, .y=0xde, .sp=0x95, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x4742, .value=0x2f}, {.addr=0x4743, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x46e5, .a=0xbe, .x=0x3b, .y=0xde, .sp=0x95, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x4742, .value=0x2f}, {.addr=0x4743, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4742, .value=0x2f, .type=IO_READ},
        {.addr=0x4743, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xee34, .a=0x52, .x=0x3c, .y=0xfd, .sp=0xca, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xee34, .value=0x2f}, {.addr=0xee35, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xedfb, .a=0x52, .x=0x3c, .y=0xfd, .sp=0xca, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xee34, .value=0x2f}, {.addr=0xee35, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xee34, .value=0x2f, .type=IO_READ},
        {.addr=0xee35, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0xcb, .x=0xb1, .y=0x14, .sp=0x87, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cd, .value=0x2f}, {.addr=0xe4ce, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xe4a9, .a=0xcb, .x=0xb1, .y=0x14, .sp=0x87, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xe4cd, .value=0x2f}, {.addr=0xe4ce, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0x2f, .type=IO_READ},
        {.addr=0xe4ce, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa706, .a=0x19, .x=0x38, .y=0xb6, .sp=0x61, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa706, .value=0x2f}, {.addr=0xa707, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa700, .a=0x19, .x=0x38, .y=0xb6, .sp=0x61, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa706, .value=0x2f}, {.addr=0xa707, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa706, .value=0x2f, .type=IO_READ},
        {.addr=0xa707, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x554b, .a=0x93, .x=0xf7, .y=0x2f, .sp=0xa5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x554b, .value=0x2f}, {.addr=0x554c, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x5518, .a=0x93, .x=0xf7, .y=0x2f, .sp=0xa5, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x554b, .value=0x2f}, {.addr=0x554c, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x554b, .value=0x2f, .type=IO_READ},
        {.addr=0x554c, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xa06b, .a=0x2a, .x=0xc1, .y=0x28, .sp=0xcc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa06b, .value=0x2f}, {.addr=0xa06c, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xa05f, .a=0x2a, .x=0xc1, .y=0x28, .sp=0xcc, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xa06b, .value=0x2f}, {.addr=0xa06c, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xa06b, .value=0x2f, .type=IO_READ},
        {.addr=0xa06c, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0669, .a=0x55, .x=0x4a, .y=0xab, .sp=0xae, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0669, .value=0x2f}, {.addr=0x066a, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x06e6, .a=0x55, .x=0x4a, .y=0xab, .sp=0xae, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0669, .value=0x2f}, {.addr=0x066a, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x0669, .value=0x2f, .type=IO_READ},
        {.addr=0x066a, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xe17c, .a=0x65, .x=0xe4, .y=0x45, .sp=0x16, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe17c, .value=0x2f}, {.addr=0xe17d, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xe1ad, .a=0x65, .x=0xe4, .y=0x45, .sp=0x16, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe17c, .value=0x2f}, {.addr=0xe17d, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xe17c, .value=0x2f, .type=IO_READ},
        {.addr=0xe17d, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xddeb, .a=0x34, .x=0x21, .y=0x12, .sp=0x5b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xddeb, .value=0x2f}, {.addr=0xddec, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xde06, .a=0x34, .x=0x21, .y=0x12, .sp=0x5b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xddeb, .value=0x2f}, {.addr=0xddec, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xddeb, .value=0x2f, .type=IO_READ},
        {.addr=0xddec, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xe0d3, .a=0x36, .x=0xcd, .y=0x00, .sp=0x20, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d3, .value=0x2f}, {.addr=0xe0d4, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe0ec, .a=0x36, .x=0xcd, .y=0x00, .sp=0x20, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xe0d3, .value=0x2f}, {.addr=0xe0d4, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe0d3, .value=0x2f, .type=IO_READ},
        {.addr=0xe0d4, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x52d3, .a=0xa9, .x=0x6f, .y=0x05, .sp=0xff, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x52d3, .value=0x2f}, {.addr=0x52d4, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x529e, .a=0xa9, .x=0x6f, .y=0x05, .sp=0xff, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x52d3, .value=0x2f}, {.addr=0x52d4, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x52d3, .value=0x2f, .type=IO_READ},
        {.addr=0x52d4, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x3f9d, .a=0x5f, .x=0xe9, .y=0x30, .sp=0xfc, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x3f9d, .value=0x2f}, {.addr=0x3f9e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3f3b, .a=0x5f, .x=0xe9, .y=0x30, .sp=0xfc, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x3f9d, .value=0x2f}, {.addr=0x3f9e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3f9d, .value=0x2f, .type=IO_READ},
        {.addr=0x3f9e, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xc761, .a=0x51, .x=0x1c, .y=0x3e, .sp=0x19, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc761, .value=0x2f}, {.addr=0xc762, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc751, .a=0x51, .x=0x1c, .y=0x3e, .sp=0x19, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc761, .value=0x2f}, {.addr=0xc762, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc761, .value=0x2f, .type=IO_READ},
        {.addr=0xc762, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x7b70, .a=0x0a, .x=0x42, .y=0x81, .sp=0x2a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x7b70, .value=0x2f}, {.addr=0x7b71, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x7bdb, .a=0x0a, .x=0x42, .y=0x81, .sp=0x2a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7b70, .value=0x2f}, {.addr=0x7b71, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x7b70, .value=0x2f, .type=IO_READ},
        {.addr=0x7b71, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x0d29, .a=0xc5, .x=0x3c, .y=0x30, .sp=0x1a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0d29, .value=0x2f}, {.addr=0x0d2a, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x0d96, .a=0xc5, .x=0x3c, .y=0x30, .sp=0x1a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0d29, .value=0x2f}, {.addr=0x0d2a, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x0d29, .value=0x2f, .type=IO_READ},
        {.addr=0x0d2a, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xdba8, .a=0xbc, .x=0xd8, .y=0x3c, .sp=0x66, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xdba8, .value=0x2f}, {.addr=0xdba9, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xdb7d, .a=0xbc, .x=0xd8, .y=0x3c, .sp=0x66, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xdba8, .value=0x2f}, {.addr=0xdba9, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xdba8, .value=0x2f, .type=IO_READ},
        {.addr=0xdba9, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x8f7f, .a=0xf4, .x=0x2d, .y=0xff, .sp=0xf7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7f, .value=0x2f}, {.addr=0x8f80, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x8f10, .a=0xf4, .x=0x2d, .y=0xff, .sp=0xf7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8f7f, .value=0x2f}, {.addr=0x8f80, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x8f7f, .value=0x2f, .type=IO_READ},
        {.addr=0x8f80, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0200) {
    const struct CPU_State initial_cpu = {.pc=0x6af3, .a=0x5f, .x=0x60, .y=0x1d, .sp=0xf0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6af3, .value=0x2f}, {.addr=0x6af4, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x6b49, .a=0x5f, .x=0x60, .y=0x1d, .sp=0xf0, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x6af3, .value=0x2f}, {.addr=0x6af4, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x6af3, .value=0x2f, .type=IO_READ},
        {.addr=0x6af4, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0201) {
    const struct CPU_State initial_cpu = {.pc=0x06bb, .a=0xb9, .x=0x29, .y=0x5a, .sp=0x88, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x06bb, .value=0x2f}, {.addr=0x06bc, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x071b, .a=0xb9, .x=0x29, .y=0x5a, .sp=0x88, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x06bb, .value=0x2f}, {.addr=0x06bc, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x06bb, .value=0x2f, .type=IO_READ},
        {.addr=0x06bc, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0202) {
    const struct CPU_State initial_cpu = {.pc=0xde28, .a=0xbf, .x=0x17, .y=0x2e, .sp=0x27, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xde28, .value=0x2f}, {.addr=0xde29, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xde45, .a=0xbf, .x=0x17, .y=0x2e, .sp=0x27, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xde28, .value=0x2f}, {.addr=0xde29, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xde28, .value=0x2f, .type=IO_READ},
        {.addr=0xde29, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0203) {
    const struct CPU_State initial_cpu = {.pc=0x9aaa, .a=0x8b, .x=0x6a, .y=0xff, .sp=0xec, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9aaa, .value=0x2f}, {.addr=0x9aab, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9af6, .a=0x8b, .x=0x6a, .y=0xff, .sp=0xec, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x9aaa, .value=0x2f}, {.addr=0x9aab, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9aaa, .value=0x2f, .type=IO_READ},
        {.addr=0x9aab, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0204) {
    const struct CPU_State initial_cpu = {.pc=0x6512, .a=0x56, .x=0xd6, .y=0x05, .sp=0xe9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x6512, .value=0x2f}, {.addr=0x6513, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x64d9, .a=0x56, .x=0xd6, .y=0x05, .sp=0xe9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6512, .value=0x2f}, {.addr=0x6513, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6512, .value=0x2f, .type=IO_READ},
        {.addr=0x6513, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0205) {
    const struct CPU_State initial_cpu = {.pc=0x9924, .a=0x05, .x=0xa2, .y=0x4d, .sp=0x21, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9924, .value=0x2f}, {.addr=0x9925, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x98bd, .a=0x05, .x=0xa2, .y=0x4d, .sp=0x21, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x9924, .value=0x2f}, {.addr=0x9925, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x9924, .value=0x2f, .type=IO_READ},
        {.addr=0x9925, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0206) {
    const struct CPU_State initial_cpu = {.pc=0xeab6, .a=0xa7, .x=0x37, .y=0x2a, .sp=0xf3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xeab6, .value=0x2f}, {.addr=0xeab7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xea38, .a=0xa7, .x=0x37, .y=0x2a, .sp=0xf3, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xeab6, .value=0x2f}, {.addr=0xeab7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xeab6, .value=0x2f, .type=IO_READ},
        {.addr=0xeab7, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0207) {
    const struct CPU_State initial_cpu = {.pc=0x977a, .a=0x26, .x=0x91, .y=0x5e, .sp=0x48, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x977a, .value=0x2f}, {.addr=0x977b, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x97af, .a=0x26, .x=0x91, .y=0x5e, .sp=0x48, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x977a, .value=0x2f}, {.addr=0x977b, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x977a, .value=0x2f, .type=IO_READ},
        {.addr=0x977b, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0208) {
    const struct CPU_State initial_cpu = {.pc=0xda84, .a=0x27, .x=0x45, .y=0x07, .sp=0x87, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xda84, .value=0x2f}, {.addr=0xda85, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xda20, .a=0x27, .x=0x45, .y=0x07, .sp=0x87, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xda84, .value=0x2f}, {.addr=0xda85, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xda84, .value=0x2f, .type=IO_READ},
        {.addr=0xda85, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0209) {
    const struct CPU_State initial_cpu = {.pc=0x0687, .a=0x4c, .x=0x94, .y=0xb0, .sp=0x92, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0687, .value=0x2f}, {.addr=0x0688, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x060c, .a=0x4c, .x=0x94, .y=0xb0, .sp=0x92, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0687, .value=0x2f}, {.addr=0x0688, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0687, .value=0x2f, .type=IO_READ},
        {.addr=0x0688, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020A) {
    const struct CPU_State initial_cpu = {.pc=0x9b3d, .a=0x21, .x=0x6b, .y=0x96, .sp=0x05, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x9b3d, .value=0x2f}, {.addr=0x9b3e, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x9ba7, .a=0x21, .x=0x6b, .y=0x96, .sp=0x05, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9b3d, .value=0x2f}, {.addr=0x9b3e, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x9b3d, .value=0x2f, .type=IO_READ},
        {.addr=0x9b3e, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020B) {
    const struct CPU_State initial_cpu = {.pc=0x9b36, .a=0xcd, .x=0xe5, .y=0xd6, .sp=0x78, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9b36, .value=0x2f}, {.addr=0x9b37, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x9bb6, .a=0xcd, .x=0xe5, .y=0xd6, .sp=0x78, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9b36, .value=0x2f}, {.addr=0x9b37, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x9b36, .value=0x2f, .type=IO_READ},
        {.addr=0x9b37, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020C) {
    const struct CPU_State initial_cpu = {.pc=0x98ba, .a=0xa9, .x=0x05, .y=0x05, .sp=0xd7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x98ba, .value=0x2f}, {.addr=0x98bb, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x990a, .a=0xa9, .x=0x05, .y=0x05, .sp=0xd7, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x98ba, .value=0x2f}, {.addr=0x98bb, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x98ba, .value=0x2f, .type=IO_READ},
        {.addr=0x98bb, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020D) {
    const struct CPU_State initial_cpu = {.pc=0x9353, .a=0xdc, .x=0xf6, .y=0xcd, .sp=0x68, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9353, .value=0x2f}, {.addr=0x9354, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x936a, .a=0xdc, .x=0xf6, .y=0xcd, .sp=0x68, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x9353, .value=0x2f}, {.addr=0x9354, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x9353, .value=0x2f, .type=IO_READ},
        {.addr=0x9354, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020E) {
    const struct CPU_State initial_cpu = {.pc=0x69da, .a=0x2c, .x=0x31, .y=0x01, .sp=0xb2, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x69da, .value=0x2f}, {.addr=0x69db, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x69c8, .a=0x2c, .x=0x31, .y=0x01, .sp=0xb2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x69da, .value=0x2f}, {.addr=0x69db, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x69da, .value=0x2f, .type=IO_READ},
        {.addr=0x69db, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_020F) {
    const struct CPU_State initial_cpu = {.pc=0xe4bb, .a=0xe5, .x=0x82, .y=0xba, .sp=0x1a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe4bb, .value=0x2f}, {.addr=0xe4bc, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe478, .a=0xe5, .x=0x82, .y=0xba, .sp=0x1a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe4bb, .value=0x2f}, {.addr=0xe4bc, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe4bb, .value=0x2f, .type=IO_READ},
        {.addr=0xe4bc, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0210) {
    const struct CPU_State initial_cpu = {.pc=0x7214, .a=0xba, .x=0xe2, .y=0xe4, .sp=0xef, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7214, .value=0x2f}, {.addr=0x7215, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x721b, .a=0xba, .x=0xe2, .y=0xe4, .sp=0xef, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7214, .value=0x2f}, {.addr=0x7215, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x7214, .value=0x2f, .type=IO_READ},
        {.addr=0x7215, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0211) {
    const struct CPU_State initial_cpu = {.pc=0x11ef, .a=0x28, .x=0x5d, .y=0x4f, .sp=0x0d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x11ef, .value=0x2f}, {.addr=0x11f0, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x1256, .a=0x28, .x=0x5d, .y=0x4f, .sp=0x0d, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x11ef, .value=0x2f}, {.addr=0x11f0, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x11ef, .value=0x2f, .type=IO_READ},
        {.addr=0x11f0, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0212) {
    const struct CPU_State initial_cpu = {.pc=0x728c, .a=0xa0, .x=0x41, .y=0x98, .sp=0x48, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x728c, .value=0x2f}, {.addr=0x728d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x72eb, .a=0xa0, .x=0x41, .y=0x98, .sp=0x48, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x728c, .value=0x2f}, {.addr=0x728d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x728c, .value=0x2f, .type=IO_READ},
        {.addr=0x728d, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1336, .a=0xdd, .x=0x48, .y=0x35, .sp=0xea, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1336, .value=0x2f}, {.addr=0x1337, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x1364, .a=0xdd, .x=0x48, .y=0x35, .sp=0xea, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1336, .value=0x2f}, {.addr=0x1337, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x1336, .value=0x2f, .type=IO_READ},
        {.addr=0x1337, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0214) {
    const struct CPU_State initial_cpu = {.pc=0xfdbb, .a=0xd4, .x=0x75, .y=0x77, .sp=0xab, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbb, .value=0x2f}, {.addr=0xfdbc, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xfe36, .a=0xd4, .x=0x75, .y=0x77, .sp=0xab, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfdbb, .value=0x2f}, {.addr=0xfdbc, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xfdbb, .value=0x2f, .type=IO_READ},
        {.addr=0xfdbc, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0215) {
    const struct CPU_State initial_cpu = {.pc=0x197d, .a=0x91, .x=0xfa, .y=0x12, .sp=0x45, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x197d, .value=0x2f}, {.addr=0x197e, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x1910, .a=0x91, .x=0xfa, .y=0x12, .sp=0x45, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x197d, .value=0x2f}, {.addr=0x197e, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x197d, .value=0x2f, .type=IO_READ},
        {.addr=0x197e, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0216) {
    const struct CPU_State initial_cpu = {.pc=0x2bd8, .a=0x9b, .x=0x21, .y=0xc4, .sp=0x27, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd8, .value=0x2f}, {.addr=0x2bd9, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x2c1c, .a=0x9b, .x=0x21, .y=0xc4, .sp=0x27, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x2bd8, .value=0x2f}, {.addr=0x2bd9, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x2bd8, .value=0x2f, .type=IO_READ},
        {.addr=0x2bd9, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0217) {
    const struct CPU_State initial_cpu = {.pc=0xe534, .a=0x29, .x=0x3f, .y=0xcb, .sp=0x14, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xe534, .value=0x2f}, {.addr=0xe535, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xe54b, .a=0x29, .x=0x3f, .y=0xcb, .sp=0x14, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe534, .value=0x2f}, {.addr=0xe535, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xe534, .value=0x2f, .type=IO_READ},
        {.addr=0xe535, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0218) {
    const struct CPU_State initial_cpu = {.pc=0x1c2f, .a=0x39, .x=0x59, .y=0x98, .sp=0x6a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2f, .value=0x2f}, {.addr=0x1c30, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x1bb5, .a=0x39, .x=0x59, .y=0x98, .sp=0x6a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x1c2f, .value=0x2f}, {.addr=0x1c30, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x1c2f, .value=0x2f, .type=IO_READ},
        {.addr=0x1c30, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0219) {
    const struct CPU_State initial_cpu = {.pc=0xe115, .a=0xa7, .x=0x85, .y=0x2b, .sp=0xc5, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe115, .value=0x2f}, {.addr=0xe116, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xe138, .a=0xa7, .x=0x85, .y=0x2b, .sp=0xc5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe115, .value=0x2f}, {.addr=0xe116, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xe115, .value=0x2f, .type=IO_READ},
        {.addr=0xe116, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021A) {
    const struct CPU_State initial_cpu = {.pc=0x97c8, .a=0x69, .x=0x4a, .y=0xcc, .sp=0xaf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x97c8, .value=0x2f}, {.addr=0x97c9, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x97ff, .a=0x69, .x=0x4a, .y=0xcc, .sp=0xaf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x97c8, .value=0x2f}, {.addr=0x97c9, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x97c8, .value=0x2f, .type=IO_READ},
        {.addr=0x97c9, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021B) {
    const struct CPU_State initial_cpu = {.pc=0xea18, .a=0xc4, .x=0x29, .y=0x86, .sp=0xd7, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xea18, .value=0x2f}, {.addr=0xea19, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xe9e4, .a=0xc4, .x=0x29, .y=0x86, .sp=0xd7, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xea18, .value=0x2f}, {.addr=0xea19, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xea18, .value=0x2f, .type=IO_READ},
        {.addr=0xea19, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021C) {
    const struct CPU_State initial_cpu = {.pc=0x78b1, .a=0x5e, .x=0xc5, .y=0x23, .sp=0x34, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x78b1, .value=0x2f}, {.addr=0x78b2, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x78a7, .a=0x5e, .x=0xc5, .y=0x23, .sp=0x34, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x78b1, .value=0x2f}, {.addr=0x78b2, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x78b1, .value=0x2f, .type=IO_READ},
        {.addr=0x78b2, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021D) {
    const struct CPU_State initial_cpu = {.pc=0x7b38, .a=0xd9, .x=0xc8, .y=0x2d, .sp=0x2f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7b38, .value=0x2f}, {.addr=0x7b39, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x7ae7, .a=0xd9, .x=0xc8, .y=0x2d, .sp=0x2f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7b38, .value=0x2f}, {.addr=0x7b39, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x7b38, .value=0x2f, .type=IO_READ},
        {.addr=0x7b39, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021E) {
    const struct CPU_State initial_cpu = {.pc=0x9fe8, .a=0xe2, .x=0xda, .y=0xa2, .sp=0x00, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe8, .value=0x2f}, {.addr=0x9fe9, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x9faf, .a=0xe2, .x=0xda, .y=0xa2, .sp=0x00, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9fe8, .value=0x2f}, {.addr=0x9fe9, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x9fe8, .value=0x2f, .type=IO_READ},
        {.addr=0x9fe9, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_021F) {
    const struct CPU_State initial_cpu = {.pc=0xc462, .a=0x61, .x=0x6d, .y=0x64, .sp=0x7b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc462, .value=0x2f}, {.addr=0xc463, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc447, .a=0x61, .x=0x6d, .y=0x64, .sp=0x7b, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xc462, .value=0x2f}, {.addr=0xc463, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc462, .value=0x2f, .type=IO_READ},
        {.addr=0xc463, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0220) {
    const struct CPU_State initial_cpu = {.pc=0xfada, .a=0x91, .x=0x57, .y=0xa5, .sp=0x69, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xfada, .value=0x2f}, {.addr=0xfadb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfaa2, .a=0x91, .x=0x57, .y=0xa5, .sp=0x69, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xfada, .value=0x2f}, {.addr=0xfadb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfada, .value=0x2f, .type=IO_READ},
        {.addr=0xfadb, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0221) {
    const struct CPU_State initial_cpu = {.pc=0x72ed, .a=0xe8, .x=0x0a, .y=0xfb, .sp=0x07, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x72ed, .value=0x2f}, {.addr=0x72ee, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x732f, .a=0xe8, .x=0x0a, .y=0xfb, .sp=0x07, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x72ed, .value=0x2f}, {.addr=0x72ee, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x72ed, .value=0x2f, .type=IO_READ},
        {.addr=0x72ee, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0222) {
    const struct CPU_State initial_cpu = {.pc=0xae4f, .a=0x9f, .x=0x2f, .y=0x7f, .sp=0xa8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xae4f, .value=0x2f}, {.addr=0xae50, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xaddc, .a=0x9f, .x=0x2f, .y=0x7f, .sp=0xa8, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xae4f, .value=0x2f}, {.addr=0xae50, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xae4f, .value=0x2f, .type=IO_READ},
        {.addr=0xae50, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0223) {
    const struct CPU_State initial_cpu = {.pc=0xc926, .a=0x1e, .x=0x72, .y=0x3d, .sp=0x3e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc926, .value=0x2f}, {.addr=0xc927, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc8c4, .a=0x1e, .x=0x72, .y=0x3d, .sp=0x3e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc926, .value=0x2f}, {.addr=0xc927, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc926, .value=0x2f, .type=IO_READ},
        {.addr=0xc927, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0224) {
    const struct CPU_State initial_cpu = {.pc=0x7f5d, .a=0x41, .x=0xac, .y=0x8b, .sp=0x9d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5d, .value=0x2f}, {.addr=0x7f5e, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x7f11, .a=0x41, .x=0xac, .y=0x8b, .sp=0x9d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7f5d, .value=0x2f}, {.addr=0x7f5e, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x7f5d, .value=0x2f, .type=IO_READ},
        {.addr=0x7f5e, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0225) {
    const struct CPU_State initial_cpu = {.pc=0x2424, .a=0x4b, .x=0xd2, .y=0x21, .sp=0x3e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2424, .value=0x2f}, {.addr=0x2425, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x2445, .a=0x4b, .x=0xd2, .y=0x21, .sp=0x3e, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2424, .value=0x2f}, {.addr=0x2425, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x2424, .value=0x2f, .type=IO_READ},
        {.addr=0x2425, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0226) {
    const struct CPU_State initial_cpu = {.pc=0x3aa8, .a=0xfe, .x=0x89, .y=0xcd, .sp=0x90, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa8, .value=0x2f}, {.addr=0x3aa9, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x3a51, .a=0xfe, .x=0x89, .y=0xcd, .sp=0x90, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3aa8, .value=0x2f}, {.addr=0x3aa9, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x3aa8, .value=0x2f, .type=IO_READ},
        {.addr=0x3aa9, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0227) {
    const struct CPU_State initial_cpu = {.pc=0xdc4c, .a=0xd6, .x=0x30, .y=0x99, .sp=0x07, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4c, .value=0x2f}, {.addr=0xdc4d, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xdbd1, .a=0xd6, .x=0x30, .y=0x99, .sp=0x07, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xdc4c, .value=0x2f}, {.addr=0xdc4d, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xdc4c, .value=0x2f, .type=IO_READ},
        {.addr=0xdc4d, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0228) {
    const struct CPU_State initial_cpu = {.pc=0xdc49, .a=0xc9, .x=0x93, .y=0x5b, .sp=0x49, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xdc49, .value=0x2f}, {.addr=0xdc4a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xdbf0, .a=0xc9, .x=0x93, .y=0x5b, .sp=0x49, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xdc49, .value=0x2f}, {.addr=0xdc4a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xdc49, .value=0x2f, .type=IO_READ},
        {.addr=0xdc4a, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0229) {
    const struct CPU_State initial_cpu = {.pc=0xd8a5, .a=0x5e, .x=0x44, .y=0x33, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a5, .value=0x2f}, {.addr=0xd8a6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd895, .a=0x5e, .x=0x44, .y=0x33, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd8a5, .value=0x2f}, {.addr=0xd8a6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd8a5, .value=0x2f, .type=IO_READ},
        {.addr=0xd8a6, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022A) {
    const struct CPU_State initial_cpu = {.pc=0x4dd6, .a=0xce, .x=0x4e, .y=0xdb, .sp=0x67, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd6, .value=0x2f}, {.addr=0x4dd7, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x4dfa, .a=0xce, .x=0x4e, .y=0xdb, .sp=0x67, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4dd6, .value=0x2f}, {.addr=0x4dd7, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4dd6, .value=0x2f, .type=IO_READ},
        {.addr=0x4dd7, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022B) {
    const struct CPU_State initial_cpu = {.pc=0x80e2, .a=0x08, .x=0x33, .y=0xc1, .sp=0x5a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x80e2, .value=0x2f}, {.addr=0x80e3, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x80b5, .a=0x08, .x=0x33, .y=0xc1, .sp=0x5a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x80e2, .value=0x2f}, {.addr=0x80e3, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x80e2, .value=0x2f, .type=IO_READ},
        {.addr=0x80e3, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7c71, .a=0xb1, .x=0x27, .y=0x32, .sp=0xd8, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7c71, .value=0x2f}, {.addr=0x7c72, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x7cb7, .a=0xb1, .x=0x27, .y=0x32, .sp=0xd8, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7c71, .value=0x2f}, {.addr=0x7c72, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x7c71, .value=0x2f, .type=IO_READ},
        {.addr=0x7c72, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022D) {
    const struct CPU_State initial_cpu = {.pc=0x676c, .a=0x76, .x=0x10, .y=0xb4, .sp=0x0d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x676c, .value=0x2f}, {.addr=0x676d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x67ab, .a=0x76, .x=0x10, .y=0xb4, .sp=0x0d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x676c, .value=0x2f}, {.addr=0x676d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x676c, .value=0x2f, .type=IO_READ},
        {.addr=0x676d, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022E) {
    const struct CPU_State initial_cpu = {.pc=0x8544, .a=0x40, .x=0x80, .y=0xa0, .sp=0x98, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8544, .value=0x2f}, {.addr=0x8545, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x84e9, .a=0x40, .x=0x80, .y=0xa0, .sp=0x98, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8544, .value=0x2f}, {.addr=0x8545, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x8544, .value=0x2f, .type=IO_READ},
        {.addr=0x8545, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_022F) {
    const struct CPU_State initial_cpu = {.pc=0x37f8, .a=0x19, .x=0xff, .y=0xf2, .sp=0xb5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x37f8, .value=0x2f}, {.addr=0x37f9, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x381f, .a=0x19, .x=0xff, .y=0xf2, .sp=0xb5, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x37f8, .value=0x2f}, {.addr=0x37f9, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x37f8, .value=0x2f, .type=IO_READ},
        {.addr=0x37f9, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0230) {
    const struct CPU_State initial_cpu = {.pc=0x040a, .a=0x39, .x=0xf6, .y=0xc7, .sp=0x89, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x040a, .value=0x2f}, {.addr=0x040b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x03ac, .a=0x39, .x=0xf6, .y=0xc7, .sp=0x89, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x040a, .value=0x2f}, {.addr=0x040b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x040a, .value=0x2f, .type=IO_READ},
        {.addr=0x040b, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0231) {
    const struct CPU_State initial_cpu = {.pc=0xe6c4, .a=0x9e, .x=0xb9, .y=0x55, .sp=0xd5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c4, .value=0x2f}, {.addr=0xe6c5, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xe71c, .a=0x9e, .x=0xb9, .y=0x55, .sp=0xd5, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xe6c4, .value=0x2f}, {.addr=0xe6c5, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xe6c4, .value=0x2f, .type=IO_READ},
        {.addr=0xe6c5, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0232) {
    const struct CPU_State initial_cpu = {.pc=0xe289, .a=0x8d, .x=0xd7, .y=0x15, .sp=0x6a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe289, .value=0x2f}, {.addr=0xe28a, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xe2c6, .a=0x8d, .x=0xd7, .y=0x15, .sp=0x6a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xe289, .value=0x2f}, {.addr=0xe28a, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xe289, .value=0x2f, .type=IO_READ},
        {.addr=0xe28a, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0233) {
    const struct CPU_State initial_cpu = {.pc=0x6302, .a=0xe0, .x=0x55, .y=0xcf, .sp=0x2b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6302, .value=0x2f}, {.addr=0x6303, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x6306, .a=0xe0, .x=0x55, .y=0xcf, .sp=0x2b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x6302, .value=0x2f}, {.addr=0x6303, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x6302, .value=0x2f, .type=IO_READ},
        {.addr=0x6303, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0234) {
    const struct CPU_State initial_cpu = {.pc=0xbb54, .a=0xc8, .x=0x8d, .y=0x9f, .sp=0xe4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbb54, .value=0x2f}, {.addr=0xbb55, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xbaf6, .a=0xc8, .x=0x8d, .y=0x9f, .sp=0xe4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xbb54, .value=0x2f}, {.addr=0xbb55, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xbb54, .value=0x2f, .type=IO_READ},
        {.addr=0xbb55, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0235) {
    const struct CPU_State initial_cpu = {.pc=0x3048, .a=0xf0, .x=0x90, .y=0x8b, .sp=0x7a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3048, .value=0x2f}, {.addr=0x3049, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x3098, .a=0xf0, .x=0x90, .y=0x8b, .sp=0x7a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3048, .value=0x2f}, {.addr=0x3049, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x3048, .value=0x2f, .type=IO_READ},
        {.addr=0x3049, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0236) {
    const struct CPU_State initial_cpu = {.pc=0x8ebe, .a=0xe3, .x=0x82, .y=0x8d, .sp=0xc9, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x8ebe, .value=0x2f}, {.addr=0x8ebf, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x8ebb, .a=0xe3, .x=0x82, .y=0x8d, .sp=0xc9, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x8ebe, .value=0x2f}, {.addr=0x8ebf, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x8ebe, .value=0x2f, .type=IO_READ},
        {.addr=0x8ebf, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0237) {
    const struct CPU_State initial_cpu = {.pc=0xee41, .a=0xd6, .x=0x34, .y=0x09, .sp=0xa4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xee41, .value=0x2f}, {.addr=0xee42, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xee5e, .a=0xd6, .x=0x34, .y=0x09, .sp=0xa4, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xee41, .value=0x2f}, {.addr=0xee42, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xee41, .value=0x2f, .type=IO_READ},
        {.addr=0xee42, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0238) {
    const struct CPU_State initial_cpu = {.pc=0x46e8, .a=0x2a, .x=0x5c, .y=0x5a, .sp=0x3c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x46e8, .value=0x2f}, {.addr=0x46e9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x474a, .a=0x2a, .x=0x5c, .y=0x5a, .sp=0x3c, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x46e8, .value=0x2f}, {.addr=0x46e9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x46e8, .value=0x2f, .type=IO_READ},
        {.addr=0x46e9, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0239) {
    const struct CPU_State initial_cpu = {.pc=0x8d79, .a=0x2b, .x=0xbd, .y=0x2d, .sp=0xee, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8d79, .value=0x2f}, {.addr=0x8d7a, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x8dab, .a=0x2b, .x=0xbd, .y=0x2d, .sp=0xee, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8d79, .value=0x2f}, {.addr=0x8d7a, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x8d79, .value=0x2f, .type=IO_READ},
        {.addr=0x8d7a, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023A) {
    const struct CPU_State initial_cpu = {.pc=0xa01e, .a=0x0a, .x=0x56, .y=0xa9, .sp=0x76, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa01e, .value=0x2f}, {.addr=0xa01f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xa06a, .a=0x0a, .x=0x56, .y=0xa9, .sp=0x76, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xa01e, .value=0x2f}, {.addr=0xa01f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xa01e, .value=0x2f, .type=IO_READ},
        {.addr=0xa01f, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023B) {
    const struct CPU_State initial_cpu = {.pc=0x6065, .a=0x44, .x=0x7b, .y=0x61, .sp=0xf1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6065, .value=0x2f}, {.addr=0x6066, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x6089, .a=0x44, .x=0x7b, .y=0x61, .sp=0xf1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x6065, .value=0x2f}, {.addr=0x6066, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x6065, .value=0x2f, .type=IO_READ},
        {.addr=0x6066, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023C) {
    const struct CPU_State initial_cpu = {.pc=0x9761, .a=0x10, .x=0xcb, .y=0x24, .sp=0xe4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9761, .value=0x2f}, {.addr=0x9762, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x96f5, .a=0x10, .x=0xcb, .y=0x24, .sp=0xe4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x9761, .value=0x2f}, {.addr=0x9762, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x9761, .value=0x2f, .type=IO_READ},
        {.addr=0x9762, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023D) {
    const struct CPU_State initial_cpu = {.pc=0x91e7, .a=0x4d, .x=0xb6, .y=0x08, .sp=0xb6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x91e7, .value=0x2f}, {.addr=0x91e8, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x9255, .a=0x4d, .x=0xb6, .y=0x08, .sp=0xb6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x91e7, .value=0x2f}, {.addr=0x91e8, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x91e7, .value=0x2f, .type=IO_READ},
        {.addr=0x91e8, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023E) {
    const struct CPU_State initial_cpu = {.pc=0x80bd, .a=0xc6, .x=0x8d, .y=0x4f, .sp=0x7d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x80bd, .value=0x2f}, {.addr=0x80be, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x80ac, .a=0xc6, .x=0x8d, .y=0x4f, .sp=0x7d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x80bd, .value=0x2f}, {.addr=0x80be, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x80bd, .value=0x2f, .type=IO_READ},
        {.addr=0x80be, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_023F) {
    const struct CPU_State initial_cpu = {.pc=0xcc76, .a=0xda, .x=0xfb, .y=0x09, .sp=0x8f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcc76, .value=0x2f}, {.addr=0xcc77, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xccab, .a=0xda, .x=0xfb, .y=0x09, .sp=0x8f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xcc76, .value=0x2f}, {.addr=0xcc77, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xcc76, .value=0x2f, .type=IO_READ},
        {.addr=0xcc77, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0240) {
    const struct CPU_State initial_cpu = {.pc=0x93bc, .a=0x80, .x=0x10, .y=0x9a, .sp=0xc1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x93bc, .value=0x2f}, {.addr=0x93bd, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9405, .a=0x80, .x=0x10, .y=0x9a, .sp=0xc1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x93bc, .value=0x2f}, {.addr=0x93bd, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x93bc, .value=0x2f, .type=IO_READ},
        {.addr=0x93bd, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0241) {
    const struct CPU_State initial_cpu = {.pc=0x0545, .a=0x30, .x=0x19, .y=0xfd, .sp=0xea, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0545, .value=0x2f}, {.addr=0x0546, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x05bb, .a=0x30, .x=0x19, .y=0xfd, .sp=0xea, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0545, .value=0x2f}, {.addr=0x0546, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x0545, .value=0x2f, .type=IO_READ},
        {.addr=0x0546, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0242) {
    const struct CPU_State initial_cpu = {.pc=0x8460, .a=0x5c, .x=0x7d, .y=0x20, .sp=0xae, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x8460, .value=0x2f}, {.addr=0x8461, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x84c2, .a=0x5c, .x=0x7d, .y=0x20, .sp=0xae, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x8460, .value=0x2f}, {.addr=0x8461, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8460, .value=0x2f, .type=IO_READ},
        {.addr=0x8461, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0243) {
    const struct CPU_State initial_cpu = {.pc=0x2346, .a=0x0f, .x=0xdf, .y=0x53, .sp=0x11, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2346, .value=0x2f}, {.addr=0x2347, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2362, .a=0x0f, .x=0xdf, .y=0x53, .sp=0x11, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x2346, .value=0x2f}, {.addr=0x2347, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2346, .value=0x2f, .type=IO_READ},
        {.addr=0x2347, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0244) {
    const struct CPU_State initial_cpu = {.pc=0x7bd0, .a=0x6e, .x=0xc3, .y=0x08, .sp=0xb3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd0, .value=0x2f}, {.addr=0x7bd1, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x7ba4, .a=0x6e, .x=0xc3, .y=0x08, .sp=0xb3, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7bd0, .value=0x2f}, {.addr=0x7bd1, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x7bd0, .value=0x2f, .type=IO_READ},
        {.addr=0x7bd1, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0245) {
    const struct CPU_State initial_cpu = {.pc=0xc5c5, .a=0xc5, .x=0x36, .y=0x55, .sp=0x44, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c5, .value=0x2f}, {.addr=0xc5c6, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xc601, .a=0xc5, .x=0x36, .y=0x55, .sp=0x44, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc5c5, .value=0x2f}, {.addr=0xc5c6, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xc5c5, .value=0x2f, .type=IO_READ},
        {.addr=0xc5c6, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0246) {
    const struct CPU_State initial_cpu = {.pc=0x500a, .a=0x5b, .x=0x5c, .y=0x36, .sp=0x1a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x500a, .value=0x2f}, {.addr=0x500b, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x500f, .a=0x5b, .x=0x5c, .y=0x36, .sp=0x1a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x500a, .value=0x2f}, {.addr=0x500b, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x500a, .value=0x2f, .type=IO_READ},
        {.addr=0x500b, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0247) {
    const struct CPU_State initial_cpu = {.pc=0xd609, .a=0x85, .x=0x0f, .y=0x18, .sp=0x01, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd609, .value=0x2f}, {.addr=0xd60a, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xd590, .a=0x85, .x=0x0f, .y=0x18, .sp=0x01, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd609, .value=0x2f}, {.addr=0xd60a, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xd609, .value=0x2f, .type=IO_READ},
        {.addr=0xd60a, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0248) {
    const struct CPU_State initial_cpu = {.pc=0xd1ba, .a=0x52, .x=0xd6, .y=0x46, .sp=0xb2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ba, .value=0x2f}, {.addr=0xd1bb, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xd1b5, .a=0x52, .x=0xd6, .y=0x46, .sp=0xb2, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd1ba, .value=0x2f}, {.addr=0xd1bb, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xd1ba, .value=0x2f, .type=IO_READ},
        {.addr=0xd1bb, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0249) {
    const struct CPU_State initial_cpu = {.pc=0x5c38, .a=0x71, .x=0xf1, .y=0x2d, .sp=0xa0, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5c38, .value=0x2f}, {.addr=0x5c39, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x5bc5, .a=0x71, .x=0xf1, .y=0x2d, .sp=0xa0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5c38, .value=0x2f}, {.addr=0x5c39, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x5c38, .value=0x2f, .type=IO_READ},
        {.addr=0x5c39, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024A) {
    const struct CPU_State initial_cpu = {.pc=0x01b7, .a=0x4b, .x=0x4d, .y=0x03, .sp=0x6e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x2f}, {.addr=0x01b8, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x01c9, .a=0x4b, .x=0x4d, .y=0x03, .sp=0x6e, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x2f}, {.addr=0x01b8, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x01b7, .value=0x2f, .type=IO_READ},
        {.addr=0x01b8, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024B) {
    const struct CPU_State initial_cpu = {.pc=0xeb4f, .a=0x91, .x=0x96, .y=0x66, .sp=0xf1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xeb4f, .value=0x2f}, {.addr=0xeb50, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xeb0d, .a=0x91, .x=0x96, .y=0x66, .sp=0xf1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xeb4f, .value=0x2f}, {.addr=0xeb50, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xeb4f, .value=0x2f, .type=IO_READ},
        {.addr=0xeb50, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024C) {
    const struct CPU_State initial_cpu = {.pc=0xb553, .a=0x76, .x=0xcc, .y=0x80, .sp=0x49, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb553, .value=0x2f}, {.addr=0xb554, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb571, .a=0x76, .x=0xcc, .y=0x80, .sp=0x49, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb553, .value=0x2f}, {.addr=0xb554, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb553, .value=0x2f, .type=IO_READ},
        {.addr=0xb554, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024D) {
    const struct CPU_State initial_cpu = {.pc=0x7bda, .a=0xff, .x=0x20, .y=0x6d, .sp=0x8a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7bda, .value=0x2f}, {.addr=0x7bdb, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x7be0, .a=0xff, .x=0x20, .y=0x6d, .sp=0x8a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7bda, .value=0x2f}, {.addr=0x7bdb, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x7bda, .value=0x2f, .type=IO_READ},
        {.addr=0x7bdb, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024E) {
    const struct CPU_State initial_cpu = {.pc=0xe2d2, .a=0xc8, .x=0x6c, .y=0x82, .sp=0xc6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d2, .value=0x2f}, {.addr=0xe2d3, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xe269, .a=0xc8, .x=0x6c, .y=0x82, .sp=0xc6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe2d2, .value=0x2f}, {.addr=0xe2d3, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xe2d2, .value=0x2f, .type=IO_READ},
        {.addr=0xe2d3, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf756, .a=0x21, .x=0x03, .y=0x0d, .sp=0x82, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf756, .value=0x2f}, {.addr=0xf757, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf708, .a=0x21, .x=0x03, .y=0x0d, .sp=0x82, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xf756, .value=0x2f}, {.addr=0xf757, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf756, .value=0x2f, .type=IO_READ},
        {.addr=0xf757, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0250) {
    const struct CPU_State initial_cpu = {.pc=0x8111, .a=0x38, .x=0xdf, .y=0x75, .sp=0xa8, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8111, .value=0x2f}, {.addr=0x8112, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x80c0, .a=0x38, .x=0xdf, .y=0x75, .sp=0xa8, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x8111, .value=0x2f}, {.addr=0x8112, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x8111, .value=0x2f, .type=IO_READ},
        {.addr=0x8112, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0251) {
    const struct CPU_State initial_cpu = {.pc=0xd3bd, .a=0x00, .x=0x4a, .y=0x6b, .sp=0x82, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd3bd, .value=0x2f}, {.addr=0xd3be, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xd369, .a=0x00, .x=0x4a, .y=0x6b, .sp=0x82, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd3bd, .value=0x2f}, {.addr=0xd3be, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xd3bd, .value=0x2f, .type=IO_READ},
        {.addr=0xd3be, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0252) {
    const struct CPU_State initial_cpu = {.pc=0x8703, .a=0xa5, .x=0xad, .y=0x86, .sp=0x2a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8703, .value=0x2f}, {.addr=0x8704, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8722, .a=0xa5, .x=0xad, .y=0x86, .sp=0x2a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8703, .value=0x2f}, {.addr=0x8704, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8703, .value=0x2f, .type=IO_READ},
        {.addr=0x8704, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0253) {
    const struct CPU_State initial_cpu = {.pc=0x1e04, .a=0x38, .x=0xcd, .y=0xef, .sp=0x8d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1e04, .value=0x2f}, {.addr=0x1e05, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x1de9, .a=0x38, .x=0xcd, .y=0xef, .sp=0x8d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1e04, .value=0x2f}, {.addr=0x1e05, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x1e04, .value=0x2f, .type=IO_READ},
        {.addr=0x1e05, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0254) {
    const struct CPU_State initial_cpu = {.pc=0x0de3, .a=0x65, .x=0xcf, .y=0xc1, .sp=0x1d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0de3, .value=0x2f}, {.addr=0x0de4, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x0db0, .a=0x65, .x=0xcf, .y=0xc1, .sp=0x1d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0de3, .value=0x2f}, {.addr=0x0de4, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x0de3, .value=0x2f, .type=IO_READ},
        {.addr=0x0de4, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0255) {
    const struct CPU_State initial_cpu = {.pc=0xb7cc, .a=0x6d, .x=0xbd, .y=0xee, .sp=0xba, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xb7cc, .value=0x2f}, {.addr=0xb7cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb7bb, .a=0x6d, .x=0xbd, .y=0xee, .sp=0xba, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xb7cc, .value=0x2f}, {.addr=0xb7cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb7cc, .value=0x2f, .type=IO_READ},
        {.addr=0xb7cd, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb338, .a=0xe2, .x=0x1c, .y=0xb6, .sp=0x4d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xb338, .value=0x2f}, {.addr=0xb339, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xb2c1, .a=0xe2, .x=0x1c, .y=0xb6, .sp=0x4d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb338, .value=0x2f}, {.addr=0xb339, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xb338, .value=0x2f, .type=IO_READ},
        {.addr=0xb339, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0257) {
    const struct CPU_State initial_cpu = {.pc=0xf547, .a=0xbc, .x=0xa4, .y=0x9e, .sp=0x40, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf547, .value=0x2f}, {.addr=0xf548, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf5bf, .a=0xbc, .x=0xa4, .y=0x9e, .sp=0x40, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xf547, .value=0x2f}, {.addr=0xf548, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf547, .value=0x2f, .type=IO_READ},
        {.addr=0xf548, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0258) {
    const struct CPU_State initial_cpu = {.pc=0x95d8, .a=0x71, .x=0x35, .y=0xe0, .sp=0xa4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x95d8, .value=0x2f}, {.addr=0x95d9, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x9653, .a=0x71, .x=0x35, .y=0xe0, .sp=0xa4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x95d8, .value=0x2f}, {.addr=0x95d9, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x95d8, .value=0x2f, .type=IO_READ},
        {.addr=0x95d9, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9aaf, .a=0xc6, .x=0x4d, .y=0xba, .sp=0x62, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9aaf, .value=0x2f}, {.addr=0x9ab0, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x9b26, .a=0xc6, .x=0x4d, .y=0xba, .sp=0x62, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9aaf, .value=0x2f}, {.addr=0x9ab0, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x9aaf, .value=0x2f, .type=IO_READ},
        {.addr=0x9ab0, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025A) {
    const struct CPU_State initial_cpu = {.pc=0xbef8, .a=0xba, .x=0x84, .y=0x94, .sp=0xcc, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xbef8, .value=0x2f}, {.addr=0xbef9, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xbee9, .a=0xba, .x=0x84, .y=0x94, .sp=0xcc, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbef8, .value=0x2f}, {.addr=0xbef9, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xbef8, .value=0x2f, .type=IO_READ},
        {.addr=0xbef9, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025B) {
    const struct CPU_State initial_cpu = {.pc=0x7dd7, .a=0xd3, .x=0xae, .y=0x68, .sp=0x4f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd7, .value=0x2f}, {.addr=0x7dd8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7dff, .a=0xd3, .x=0xae, .y=0x68, .sp=0x4f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7dd7, .value=0x2f}, {.addr=0x7dd8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7dd7, .value=0x2f, .type=IO_READ},
        {.addr=0x7dd8, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025C) {
    const struct CPU_State initial_cpu = {.pc=0x98df, .a=0x7e, .x=0xce, .y=0xb6, .sp=0x4e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x98df, .value=0x2f}, {.addr=0x98e0, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x9904, .a=0x7e, .x=0xce, .y=0xb6, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x98df, .value=0x2f}, {.addr=0x98e0, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x98df, .value=0x2f, .type=IO_READ},
        {.addr=0x98e0, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025D) {
    const struct CPU_State initial_cpu = {.pc=0x34b4, .a=0x06, .x=0xe0, .y=0x70, .sp=0x97, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x34b4, .value=0x2f}, {.addr=0x34b5, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x34b0, .a=0x06, .x=0xe0, .y=0x70, .sp=0x97, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x34b4, .value=0x2f}, {.addr=0x34b5, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x34b4, .value=0x2f, .type=IO_READ},
        {.addr=0x34b5, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025E) {
    const struct CPU_State initial_cpu = {.pc=0xcb7d, .a=0x2c, .x=0x03, .y=0x0d, .sp=0xf2, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7d, .value=0x2f}, {.addr=0xcb7e, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xcb18, .a=0x2c, .x=0x03, .y=0x0d, .sp=0xf2, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xcb7d, .value=0x2f}, {.addr=0xcb7e, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xcb7d, .value=0x2f, .type=IO_READ},
        {.addr=0xcb7e, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_025F) {
    const struct CPU_State initial_cpu = {.pc=0xb640, .a=0x09, .x=0x49, .y=0x81, .sp=0xdf, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xb640, .value=0x2f}, {.addr=0xb641, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb610, .a=0x09, .x=0x49, .y=0x81, .sp=0xdf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb640, .value=0x2f}, {.addr=0xb641, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb640, .value=0x2f, .type=IO_READ},
        {.addr=0xb641, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0260) {
    const struct CPU_State initial_cpu = {.pc=0xb17d, .a=0xf7, .x=0xbd, .y=0xd8, .sp=0x0e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb17d, .value=0x2f}, {.addr=0xb17e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb13c, .a=0xf7, .x=0xbd, .y=0xd8, .sp=0x0e, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xb17d, .value=0x2f}, {.addr=0xb17e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb17d, .value=0x2f, .type=IO_READ},
        {.addr=0xb17e, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0261) {
    const struct CPU_State initial_cpu = {.pc=0x8ee1, .a=0x1d, .x=0xa4, .y=0x6e, .sp=0x9b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8ee1, .value=0x2f}, {.addr=0x8ee2, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x8f4f, .a=0x1d, .x=0xa4, .y=0x6e, .sp=0x9b, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x8ee1, .value=0x2f}, {.addr=0x8ee2, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x8ee1, .value=0x2f, .type=IO_READ},
        {.addr=0x8ee2, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0262) {
    const struct CPU_State initial_cpu = {.pc=0x39f6, .a=0x94, .x=0x19, .y=0xad, .sp=0x8e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x39f6, .value=0x2f}, {.addr=0x39f7, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x39bb, .a=0x94, .x=0x19, .y=0xad, .sp=0x8e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x39f6, .value=0x2f}, {.addr=0x39f7, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x39f6, .value=0x2f, .type=IO_READ},
        {.addr=0x39f7, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0263) {
    const struct CPU_State initial_cpu = {.pc=0xae5e, .a=0x90, .x=0x2c, .y=0x82, .sp=0x64, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xae5e, .value=0x2f}, {.addr=0xae5f, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xaec3, .a=0x90, .x=0x2c, .y=0x82, .sp=0x64, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xae5e, .value=0x2f}, {.addr=0xae5f, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xae5e, .value=0x2f, .type=IO_READ},
        {.addr=0xae5f, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0264) {
    const struct CPU_State initial_cpu = {.pc=0x6c15, .a=0x12, .x=0x01, .y=0x15, .sp=0x29, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6c15, .value=0x2f}, {.addr=0x6c16, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6bd6, .a=0x12, .x=0x01, .y=0x15, .sp=0x29, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6c15, .value=0x2f}, {.addr=0x6c16, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6c15, .value=0x2f, .type=IO_READ},
        {.addr=0x6c16, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0265) {
    const struct CPU_State initial_cpu = {.pc=0x7c3b, .a=0x39, .x=0x83, .y=0x74, .sp=0x75, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3b, .value=0x2f}, {.addr=0x7c3c, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x7ca6, .a=0x39, .x=0x83, .y=0x74, .sp=0x75, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7c3b, .value=0x2f}, {.addr=0x7c3c, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x7c3b, .value=0x2f, .type=IO_READ},
        {.addr=0x7c3c, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0266) {
    const struct CPU_State initial_cpu = {.pc=0x4552, .a=0x2d, .x=0xf6, .y=0xe0, .sp=0x61, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4552, .value=0x2f}, {.addr=0x4553, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x4593, .a=0x2d, .x=0xf6, .y=0xe0, .sp=0x61, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4552, .value=0x2f}, {.addr=0x4553, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x4552, .value=0x2f, .type=IO_READ},
        {.addr=0x4553, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf376, .a=0x9b, .x=0xa2, .y=0x10, .sp=0x18, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xf376, .value=0x2f}, {.addr=0xf377, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf3de, .a=0x9b, .x=0xa2, .y=0x10, .sp=0x18, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xf376, .value=0x2f}, {.addr=0xf377, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf376, .value=0x2f, .type=IO_READ},
        {.addr=0xf377, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0268) {
    const struct CPU_State initial_cpu = {.pc=0x925a, .a=0x9b, .x=0x11, .y=0xc5, .sp=0x97, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x925a, .value=0x2f}, {.addr=0x925b, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x92bd, .a=0x9b, .x=0x11, .y=0xc5, .sp=0x97, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x925a, .value=0x2f}, {.addr=0x925b, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x925a, .value=0x2f, .type=IO_READ},
        {.addr=0x925b, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1510, .a=0xd0, .x=0x78, .y=0x7f, .sp=0xf6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1510, .value=0x2f}, {.addr=0x1511, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x1508, .a=0xd0, .x=0x78, .y=0x7f, .sp=0xf6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1510, .value=0x2f}, {.addr=0x1511, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x1510, .value=0x2f, .type=IO_READ},
        {.addr=0x1511, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026A) {
    const struct CPU_State initial_cpu = {.pc=0xcdd2, .a=0x5a, .x=0xfa, .y=0x2e, .sp=0x55, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd2, .value=0x2f}, {.addr=0xcdd3, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xcdd7, .a=0x5a, .x=0xfa, .y=0x2e, .sp=0x55, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xcdd2, .value=0x2f}, {.addr=0xcdd3, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xcdd2, .value=0x2f, .type=IO_READ},
        {.addr=0xcdd3, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026B) {
    const struct CPU_State initial_cpu = {.pc=0xf800, .a=0xc4, .x=0x85, .y=0x2f, .sp=0x01, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf800, .value=0x2f}, {.addr=0xf801, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xf804, .a=0xc4, .x=0x85, .y=0x2f, .sp=0x01, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xf800, .value=0x2f}, {.addr=0xf801, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xf800, .value=0x2f, .type=IO_READ},
        {.addr=0xf801, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026C) {
    const struct CPU_State initial_cpu = {.pc=0x9eab, .a=0x95, .x=0xed, .y=0x66, .sp=0x6d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x9eab, .value=0x2f}, {.addr=0x9eac, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x9ecb, .a=0x95, .x=0xed, .y=0x66, .sp=0x6d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9eab, .value=0x2f}, {.addr=0x9eac, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x9eab, .value=0x2f, .type=IO_READ},
        {.addr=0x9eac, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026D) {
    const struct CPU_State initial_cpu = {.pc=0xc602, .a=0x43, .x=0xf0, .y=0x8a, .sp=0xff, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc602, .value=0x2f}, {.addr=0xc603, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xc652, .a=0x43, .x=0xf0, .y=0x8a, .sp=0xff, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xc602, .value=0x2f}, {.addr=0xc603, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xc602, .value=0x2f, .type=IO_READ},
        {.addr=0xc603, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026E) {
    const struct CPU_State initial_cpu = {.pc=0x6a47, .a=0x3c, .x=0x75, .y=0x46, .sp=0x2b, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a47, .value=0x2f}, {.addr=0x6a48, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x69da, .a=0x3c, .x=0x75, .y=0x46, .sp=0x2b, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x6a47, .value=0x2f}, {.addr=0x6a48, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x6a47, .value=0x2f, .type=IO_READ},
        {.addr=0x6a48, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_026F) {
    const struct CPU_State initial_cpu = {.pc=0x5aa1, .a=0xb0, .x=0x40, .y=0x43, .sp=0x04, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa1, .value=0x2f}, {.addr=0x5aa2, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x5aa4, .a=0xb0, .x=0x40, .y=0x43, .sp=0x04, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5aa1, .value=0x2f}, {.addr=0x5aa2, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x5aa1, .value=0x2f, .type=IO_READ},
        {.addr=0x5aa2, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0270) {
    const struct CPU_State initial_cpu = {.pc=0x30ae, .a=0x35, .x=0x53, .y=0x61, .sp=0xfb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x30ae, .value=0x2f}, {.addr=0x30af, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x30c9, .a=0x35, .x=0x53, .y=0x61, .sp=0xfb, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x30ae, .value=0x2f}, {.addr=0x30af, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x30ae, .value=0x2f, .type=IO_READ},
        {.addr=0x30af, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5e98, .a=0x68, .x=0x32, .y=0xc3, .sp=0xd8, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5e98, .value=0x2f}, {.addr=0x5e99, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5ea9, .a=0x68, .x=0x32, .y=0xc3, .sp=0xd8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5e98, .value=0x2f}, {.addr=0x5e99, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5e98, .value=0x2f, .type=IO_READ},
        {.addr=0x5e99, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0272) {
    const struct CPU_State initial_cpu = {.pc=0xdf11, .a=0x09, .x=0x66, .y=0xae, .sp=0x74, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xdf11, .value=0x2f}, {.addr=0xdf12, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xded2, .a=0x09, .x=0x66, .y=0xae, .sp=0x74, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdf11, .value=0x2f}, {.addr=0xdf12, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdf11, .value=0x2f, .type=IO_READ},
        {.addr=0xdf12, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3639, .a=0x5c, .x=0x61, .y=0xdb, .sp=0xd9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x3639, .value=0x2f}, {.addr=0x363a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x35fa, .a=0x5c, .x=0x61, .y=0xdb, .sp=0xd9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3639, .value=0x2f}, {.addr=0x363a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3639, .value=0x2f, .type=IO_READ},
        {.addr=0x363a, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0274) {
    const struct CPU_State initial_cpu = {.pc=0xc2d3, .a=0xc2, .x=0xb9, .y=0x5e, .sp=0x18, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc2d3, .value=0x2f}, {.addr=0xc2d4, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc2f9, .a=0xc2, .x=0xb9, .y=0x5e, .sp=0x18, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc2d3, .value=0x2f}, {.addr=0xc2d4, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc2d3, .value=0x2f, .type=IO_READ},
        {.addr=0xc2d4, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0275) {
    const struct CPU_State initial_cpu = {.pc=0x50f7, .a=0xfd, .x=0x6e, .y=0x93, .sp=0xd4, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x50f7, .value=0x2f}, {.addr=0x50f8, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x508c, .a=0xfd, .x=0x6e, .y=0x93, .sp=0xd4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x50f7, .value=0x2f}, {.addr=0x50f8, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x50f7, .value=0x2f, .type=IO_READ},
        {.addr=0x50f8, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0276) {
    const struct CPU_State initial_cpu = {.pc=0x573f, .a=0x5a, .x=0x38, .y=0xab, .sp=0xda, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x573f, .value=0x2f}, {.addr=0x5740, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x57b3, .a=0x5a, .x=0x38, .y=0xab, .sp=0xda, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x573f, .value=0x2f}, {.addr=0x5740, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x573f, .value=0x2f, .type=IO_READ},
        {.addr=0x5740, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0277) {
    const struct CPU_State initial_cpu = {.pc=0x41ff, .a=0x55, .x=0xa8, .y=0x61, .sp=0xb4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x41ff, .value=0x2f}, {.addr=0x4200, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x41de, .a=0x55, .x=0xa8, .y=0x61, .sp=0xb4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x41ff, .value=0x2f}, {.addr=0x4200, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x41ff, .value=0x2f, .type=IO_READ},
        {.addr=0x4200, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0278) {
    const struct CPU_State initial_cpu = {.pc=0x954e, .a=0x38, .x=0xc6, .y=0xd1, .sp=0x97, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x954e, .value=0x2f}, {.addr=0x954f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x94d6, .a=0x38, .x=0xc6, .y=0xd1, .sp=0x97, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x954e, .value=0x2f}, {.addr=0x954f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x954e, .value=0x2f, .type=IO_READ},
        {.addr=0x954f, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0279) {
    const struct CPU_State initial_cpu = {.pc=0x271a, .a=0xc9, .x=0xe9, .y=0x28, .sp=0x06, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x271a, .value=0x2f}, {.addr=0x271b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x26f9, .a=0xc9, .x=0xe9, .y=0x28, .sp=0x06, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x271a, .value=0x2f}, {.addr=0x271b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x271a, .value=0x2f, .type=IO_READ},
        {.addr=0x271b, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027A) {
    const struct CPU_State initial_cpu = {.pc=0xf0b5, .a=0x40, .x=0x17, .y=0xa3, .sp=0x94, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b5, .value=0x2f}, {.addr=0xf0b6, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xf0af, .a=0x40, .x=0x17, .y=0xa3, .sp=0x94, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf0b5, .value=0x2f}, {.addr=0xf0b6, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xf0b5, .value=0x2f, .type=IO_READ},
        {.addr=0xf0b6, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027B) {
    const struct CPU_State initial_cpu = {.pc=0x1c60, .a=0x4d, .x=0x23, .y=0x36, .sp=0x71, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c60, .value=0x2f}, {.addr=0x1c61, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x1be7, .a=0x4d, .x=0x23, .y=0x36, .sp=0x71, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x1c60, .value=0x2f}, {.addr=0x1c61, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1c60, .value=0x2f, .type=IO_READ},
        {.addr=0x1c61, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027C) {
    const struct CPU_State initial_cpu = {.pc=0x3eb0, .a=0xfd, .x=0x59, .y=0xd7, .sp=0x2b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb0, .value=0x2f}, {.addr=0x3eb1, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3e74, .a=0xfd, .x=0x59, .y=0xd7, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3eb0, .value=0x2f}, {.addr=0x3eb1, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x3eb0, .value=0x2f, .type=IO_READ},
        {.addr=0x3eb1, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027D) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0x72, .x=0xe8, .y=0xf2, .sp=0x9a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef6, .value=0x2f}, {.addr=0x9ef7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x9f49, .a=0x72, .x=0xe8, .y=0xf2, .sp=0x9a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9ef6, .value=0x2f}, {.addr=0x9ef7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0x2f, .type=IO_READ},
        {.addr=0x9ef7, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027E) {
    const struct CPU_State initial_cpu = {.pc=0x774e, .a=0xfd, .x=0x41, .y=0x63, .sp=0xf6, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x774e, .value=0x2f}, {.addr=0x774f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x76de, .a=0xfd, .x=0x41, .y=0x63, .sp=0xf6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x774e, .value=0x2f}, {.addr=0x774f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x774e, .value=0x2f, .type=IO_READ},
        {.addr=0x774f, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_027F) {
    const struct CPU_State initial_cpu = {.pc=0x23d2, .a=0x81, .x=0x67, .y=0xd0, .sp=0x4a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x23d2, .value=0x2f}, {.addr=0x23d3, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x23eb, .a=0x81, .x=0x67, .y=0xd0, .sp=0x4a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x23d2, .value=0x2f}, {.addr=0x23d3, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x23d2, .value=0x2f, .type=IO_READ},
        {.addr=0x23d3, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0280) {
    const struct CPU_State initial_cpu = {.pc=0xcf27, .a=0xa5, .x=0xf2, .y=0xcc, .sp=0xba, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xcf27, .value=0x2f}, {.addr=0xcf28, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xcee3, .a=0xa5, .x=0xf2, .y=0xcc, .sp=0xba, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xcf27, .value=0x2f}, {.addr=0xcf28, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xcf27, .value=0x2f, .type=IO_READ},
        {.addr=0xcf28, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0281) {
    const struct CPU_State initial_cpu = {.pc=0x2234, .a=0x11, .x=0xa9, .y=0x96, .sp=0x32, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2234, .value=0x2f}, {.addr=0x2235, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x227b, .a=0x11, .x=0xa9, .y=0x96, .sp=0x32, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x2234, .value=0x2f}, {.addr=0x2235, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x2234, .value=0x2f, .type=IO_READ},
        {.addr=0x2235, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0282) {
    const struct CPU_State initial_cpu = {.pc=0xb144, .a=0x7c, .x=0x0a, .y=0x7c, .sp=0x41, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb144, .value=0x2f}, {.addr=0xb145, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xb197, .a=0x7c, .x=0x0a, .y=0x7c, .sp=0x41, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xb144, .value=0x2f}, {.addr=0xb145, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xb144, .value=0x2f, .type=IO_READ},
        {.addr=0xb145, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0283) {
    const struct CPU_State initial_cpu = {.pc=0x50f4, .a=0x6c, .x=0xd4, .y=0xb2, .sp=0xba, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x50f4, .value=0x2f}, {.addr=0x50f5, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x50df, .a=0x6c, .x=0xd4, .y=0xb2, .sp=0xba, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x50f4, .value=0x2f}, {.addr=0x50f5, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x50f4, .value=0x2f, .type=IO_READ},
        {.addr=0x50f5, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8737, .a=0x7a, .x=0xfa, .y=0xfe, .sp=0x12, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8737, .value=0x2f}, {.addr=0x8738, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x8704, .a=0x7a, .x=0xfa, .y=0xfe, .sp=0x12, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8737, .value=0x2f}, {.addr=0x8738, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x8737, .value=0x2f, .type=IO_READ},
        {.addr=0x8738, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0285) {
    const struct CPU_State initial_cpu = {.pc=0x6f72, .a=0xec, .x=0x3c, .y=0x87, .sp=0x2d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6f72, .value=0x2f}, {.addr=0x6f73, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x6fb5, .a=0xec, .x=0x3c, .y=0x87, .sp=0x2d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6f72, .value=0x2f}, {.addr=0x6f73, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x6f72, .value=0x2f, .type=IO_READ},
        {.addr=0x6f73, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0286) {
    const struct CPU_State initial_cpu = {.pc=0x86b9, .a=0x05, .x=0xdd, .y=0x91, .sp=0xdc, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x86b9, .value=0x2f}, {.addr=0x86ba, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x872e, .a=0x05, .x=0xdd, .y=0x91, .sp=0xdc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x86b9, .value=0x2f}, {.addr=0x86ba, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x86b9, .value=0x2f, .type=IO_READ},
        {.addr=0x86ba, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0287) {
    const struct CPU_State initial_cpu = {.pc=0x6ba0, .a=0x5c, .x=0x09, .y=0x42, .sp=0xc6, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6ba0, .value=0x2f}, {.addr=0x6ba1, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6b7d, .a=0x5c, .x=0x09, .y=0x42, .sp=0xc6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6ba0, .value=0x2f}, {.addr=0x6ba1, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6ba0, .value=0x2f, .type=IO_READ},
        {.addr=0x6ba1, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0288) {
    const struct CPU_State initial_cpu = {.pc=0x5880, .a=0xda, .x=0x68, .y=0x0d, .sp=0x64, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5880, .value=0x2f}, {.addr=0x5881, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x5877, .a=0xda, .x=0x68, .y=0x0d, .sp=0x64, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x5880, .value=0x2f}, {.addr=0x5881, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x5880, .value=0x2f, .type=IO_READ},
        {.addr=0x5881, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0289) {
    const struct CPU_State initial_cpu = {.pc=0xefff, .a=0x50, .x=0x05, .y=0x2a, .sp=0x9f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xefff, .value=0x2f}, {.addr=0xf000, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xef82, .a=0x50, .x=0x05, .y=0x2a, .sp=0x9f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xefff, .value=0x2f}, {.addr=0xf000, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xefff, .value=0x2f, .type=IO_READ},
        {.addr=0xf000, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe40e, .a=0x61, .x=0x1e, .y=0x4b, .sp=0x41, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe40e, .value=0x2f}, {.addr=0xe40f, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xe404, .a=0x61, .x=0x1e, .y=0x4b, .sp=0x41, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe40e, .value=0x2f}, {.addr=0xe40f, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xe40e, .value=0x2f, .type=IO_READ},
        {.addr=0xe40f, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028B) {
    const struct CPU_State initial_cpu = {.pc=0x660c, .a=0xb8, .x=0xf9, .y=0xf3, .sp=0x68, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x660c, .value=0x2f}, {.addr=0x660d, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x65be, .a=0xb8, .x=0xf9, .y=0xf3, .sp=0x68, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x660c, .value=0x2f}, {.addr=0x660d, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x660c, .value=0x2f, .type=IO_READ},
        {.addr=0x660d, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028C) {
    const struct CPU_State initial_cpu = {.pc=0x9dde, .a=0x2e, .x=0x45, .y=0xbc, .sp=0xcf, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9dde, .value=0x2f}, {.addr=0x9ddf, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x9dac, .a=0x2e, .x=0x45, .y=0xbc, .sp=0xcf, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x9dde, .value=0x2f}, {.addr=0x9ddf, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9dde, .value=0x2f, .type=IO_READ},
        {.addr=0x9ddf, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028D) {
    const struct CPU_State initial_cpu = {.pc=0x5438, .a=0x7a, .x=0x0c, .y=0xef, .sp=0x64, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x5438, .value=0x2f}, {.addr=0x5439, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x5470, .a=0x7a, .x=0x0c, .y=0xef, .sp=0x64, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x5438, .value=0x2f}, {.addr=0x5439, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x5438, .value=0x2f, .type=IO_READ},
        {.addr=0x5439, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028E) {
    const struct CPU_State initial_cpu = {.pc=0x36cc, .a=0x07, .x=0x9f, .y=0x6d, .sp=0x6f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x36cc, .value=0x2f}, {.addr=0x36cd, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x3652, .a=0x07, .x=0x9f, .y=0x6d, .sp=0x6f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x36cc, .value=0x2f}, {.addr=0x36cd, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x36cc, .value=0x2f, .type=IO_READ},
        {.addr=0x36cd, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_028F) {
    const struct CPU_State initial_cpu = {.pc=0xc124, .a=0x70, .x=0x2b, .y=0xa3, .sp=0xae, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc124, .value=0x2f}, {.addr=0xc125, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc122, .a=0x70, .x=0x2b, .y=0xa3, .sp=0xae, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xc124, .value=0x2f}, {.addr=0xc125, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc124, .value=0x2f, .type=IO_READ},
        {.addr=0xc125, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0290) {
    const struct CPU_State initial_cpu = {.pc=0x7cff, .a=0xce, .x=0x83, .y=0x07, .sp=0x14, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7cff, .value=0x2f}, {.addr=0x7d00, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7cb7, .a=0xce, .x=0x83, .y=0x07, .sp=0x14, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x7cff, .value=0x2f}, {.addr=0x7d00, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7cff, .value=0x2f, .type=IO_READ},
        {.addr=0x7d00, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0291) {
    const struct CPU_State initial_cpu = {.pc=0x157a, .a=0x89, .x=0xf5, .y=0x92, .sp=0xd7, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x157a, .value=0x2f}, {.addr=0x157b, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x1521, .a=0x89, .x=0xf5, .y=0x92, .sp=0xd7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x157a, .value=0x2f}, {.addr=0x157b, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x157a, .value=0x2f, .type=IO_READ},
        {.addr=0x157b, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0292) {
    const struct CPU_State initial_cpu = {.pc=0xdffc, .a=0xe4, .x=0x25, .y=0x2d, .sp=0xac, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdffc, .value=0x2f}, {.addr=0xdffd, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xe06d, .a=0xe4, .x=0x25, .y=0x2d, .sp=0xac, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdffc, .value=0x2f}, {.addr=0xdffd, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xdffc, .value=0x2f, .type=IO_READ},
        {.addr=0xdffd, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0293) {
    const struct CPU_State initial_cpu = {.pc=0x17c8, .a=0x1d, .x=0x31, .y=0x33, .sp=0xa3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x17c8, .value=0x2f}, {.addr=0x17c9, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x17bd, .a=0x1d, .x=0x31, .y=0x33, .sp=0xa3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x17c8, .value=0x2f}, {.addr=0x17c9, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x17c8, .value=0x2f, .type=IO_READ},
        {.addr=0x17c9, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6fb5, .a=0x1f, .x=0xa5, .y=0x53, .sp=0xd9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb5, .value=0x2f}, {.addr=0x6fb6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7004, .a=0x1f, .x=0xa5, .y=0x53, .sp=0xd9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x6fb5, .value=0x2f}, {.addr=0x6fb6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6fb5, .value=0x2f, .type=IO_READ},
        {.addr=0x6fb6, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0295) {
    const struct CPU_State initial_cpu = {.pc=0x6993, .a=0x80, .x=0xc6, .y=0x6d, .sp=0xd9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6993, .value=0x2f}, {.addr=0x6994, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x695a, .a=0x80, .x=0xc6, .y=0x6d, .sp=0xd9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6993, .value=0x2f}, {.addr=0x6994, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6993, .value=0x2f, .type=IO_READ},
        {.addr=0x6994, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0296) {
    const struct CPU_State initial_cpu = {.pc=0x427c, .a=0x22, .x=0x6b, .y=0x1d, .sp=0xaa, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x427c, .value=0x2f}, {.addr=0x427d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x42e6, .a=0x22, .x=0x6b, .y=0x1d, .sp=0xaa, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x427c, .value=0x2f}, {.addr=0x427d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x427c, .value=0x2f, .type=IO_READ},
        {.addr=0x427d, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0297) {
    const struct CPU_State initial_cpu = {.pc=0xb6a9, .a=0x87, .x=0x80, .y=0x8a, .sp=0x40, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a9, .value=0x2f}, {.addr=0xb6aa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb707, .a=0x87, .x=0x80, .y=0x8a, .sp=0x40, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb6a9, .value=0x2f}, {.addr=0xb6aa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb6a9, .value=0x2f, .type=IO_READ},
        {.addr=0xb6aa, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0298) {
    const struct CPU_State initial_cpu = {.pc=0xca2e, .a=0x34, .x=0x35, .y=0x0b, .sp=0x8c, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xca2e, .value=0x2f}, {.addr=0xca2f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xca17, .a=0x34, .x=0x35, .y=0x0b, .sp=0x8c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xca2e, .value=0x2f}, {.addr=0xca2f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xca2e, .value=0x2f, .type=IO_READ},
        {.addr=0xca2f, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0299) {
    const struct CPU_State initial_cpu = {.pc=0xfb7c, .a=0x2d, .x=0xe8, .y=0x26, .sp=0x4d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7c, .value=0x2f}, {.addr=0xfb7d, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xfb80, .a=0x2d, .x=0xe8, .y=0x26, .sp=0x4d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfb7c, .value=0x2f}, {.addr=0xfb7d, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xfb7c, .value=0x2f, .type=IO_READ},
        {.addr=0xfb7d, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029A) {
    const struct CPU_State initial_cpu = {.pc=0x6f79, .a=0xf6, .x=0x1c, .y=0xc2, .sp=0xb5, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x6f79, .value=0x2f}, {.addr=0x6f7a, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x6fdf, .a=0xf6, .x=0x1c, .y=0xc2, .sp=0xb5, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x6f79, .value=0x2f}, {.addr=0x6f7a, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x6f79, .value=0x2f, .type=IO_READ},
        {.addr=0x6f7a, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029B) {
    const struct CPU_State initial_cpu = {.pc=0x51b1, .a=0x10, .x=0xe2, .y=0x17, .sp=0x4a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x51b1, .value=0x2f}, {.addr=0x51b2, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x51a3, .a=0x10, .x=0xe2, .y=0x17, .sp=0x4a, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x51b1, .value=0x2f}, {.addr=0x51b2, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x51b1, .value=0x2f, .type=IO_READ},
        {.addr=0x51b2, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029C) {
    const struct CPU_State initial_cpu = {.pc=0x2eac, .a=0xb7, .x=0x5a, .y=0x64, .sp=0x81, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2eac, .value=0x2f}, {.addr=0x2ead, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x2e3a, .a=0xb7, .x=0x5a, .y=0x64, .sp=0x81, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2eac, .value=0x2f}, {.addr=0x2ead, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x2eac, .value=0x2f, .type=IO_READ},
        {.addr=0x2ead, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029D) {
    const struct CPU_State initial_cpu = {.pc=0xbe06, .a=0xb9, .x=0x8b, .y=0xf2, .sp=0x1f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbe06, .value=0x2f}, {.addr=0xbe07, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xbdfd, .a=0xb9, .x=0x8b, .y=0xf2, .sp=0x1f, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xbe06, .value=0x2f}, {.addr=0xbe07, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xbe06, .value=0x2f, .type=IO_READ},
        {.addr=0xbe07, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7c11, .a=0xa2, .x=0xa8, .y=0x49, .sp=0x01, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c11, .value=0x2f}, {.addr=0x7c12, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7c07, .a=0xa2, .x=0xa8, .y=0x49, .sp=0x01, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x7c11, .value=0x2f}, {.addr=0x7c12, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x7c11, .value=0x2f, .type=IO_READ},
        {.addr=0x7c12, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_029F) {
    const struct CPU_State initial_cpu = {.pc=0xadc6, .a=0x6d, .x=0x80, .y=0x5c, .sp=0x52, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xadc6, .value=0x2f}, {.addr=0xadc7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xadb6, .a=0x6d, .x=0x80, .y=0x5c, .sp=0x52, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xadc6, .value=0x2f}, {.addr=0xadc7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xadc6, .value=0x2f, .type=IO_READ},
        {.addr=0xadc7, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x4ba1, .a=0x07, .x=0x17, .y=0xe8, .sp=0x46, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba1, .value=0x2f}, {.addr=0x4ba2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b62, .a=0x07, .x=0x17, .y=0xe8, .sp=0x46, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4ba1, .value=0x2f}, {.addr=0x4ba2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4ba1, .value=0x2f, .type=IO_READ},
        {.addr=0x4ba2, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x4169, .a=0x35, .x=0x0a, .y=0x37, .sp=0x98, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4169, .value=0x2f}, {.addr=0x416a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4147, .a=0x35, .x=0x0a, .y=0x37, .sp=0x98, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x4169, .value=0x2f}, {.addr=0x416a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4169, .value=0x2f, .type=IO_READ},
        {.addr=0x416a, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x0fd8, .a=0x37, .x=0x70, .y=0xb6, .sp=0x74, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0fd8, .value=0x2f}, {.addr=0x0fd9, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0fc0, .a=0x37, .x=0x70, .y=0xb6, .sp=0x74, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0fd8, .value=0x2f}, {.addr=0x0fd9, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0fd8, .value=0x2f, .type=IO_READ},
        {.addr=0x0fd9, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x771b, .a=0x08, .x=0xdd, .y=0x08, .sp=0xff, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x771b, .value=0x2f}, {.addr=0x771c, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x7706, .a=0x08, .x=0xdd, .y=0x08, .sp=0xff, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x771b, .value=0x2f}, {.addr=0x771c, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x771b, .value=0x2f, .type=IO_READ},
        {.addr=0x771c, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9168, .a=0x27, .x=0x91, .y=0x62, .sp=0x74, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9168, .value=0x2f}, {.addr=0x9169, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x914c, .a=0x27, .x=0x91, .y=0x62, .sp=0x74, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9168, .value=0x2f}, {.addr=0x9169, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x9168, .value=0x2f, .type=IO_READ},
        {.addr=0x9169, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xad0e, .a=0x8e, .x=0x3e, .y=0x53, .sp=0x65, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xad0e, .value=0x2f}, {.addr=0xad0f, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xad43, .a=0x8e, .x=0x3e, .y=0x53, .sp=0x65, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xad0e, .value=0x2f}, {.addr=0xad0f, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xad0e, .value=0x2f, .type=IO_READ},
        {.addr=0xad0f, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xca9b, .a=0x41, .x=0x5e, .y=0xb4, .sp=0xd8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xca9b, .value=0x2f}, {.addr=0xca9c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0x41, .x=0x5e, .y=0xb4, .sp=0xd8, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xca9b, .value=0x2f}, {.addr=0xca9c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xca9b, .value=0x2f, .type=IO_READ},
        {.addr=0xca9c, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xfdec, .a=0xce, .x=0xe5, .y=0x44, .sp=0xe9, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xfdec, .value=0x2f}, {.addr=0xfded, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfe6a, .a=0xce, .x=0xe5, .y=0x44, .sp=0xe9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfdec, .value=0x2f}, {.addr=0xfded, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfdec, .value=0x2f, .type=IO_READ},
        {.addr=0xfded, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xac66, .a=0x6d, .x=0x5b, .y=0x97, .sp=0x8a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xac66, .value=0x2f}, {.addr=0xac67, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xac8a, .a=0x6d, .x=0x5b, .y=0x97, .sp=0x8a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xac66, .value=0x2f}, {.addr=0xac67, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xac66, .value=0x2f, .type=IO_READ},
        {.addr=0xac67, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x2339, .a=0xca, .x=0x76, .y=0x53, .sp=0x4c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2339, .value=0x2f}, {.addr=0x233a, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x233d, .a=0xca, .x=0x76, .y=0x53, .sp=0x4c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x2339, .value=0x2f}, {.addr=0x233a, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2339, .value=0x2f, .type=IO_READ},
        {.addr=0x233a, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x4459, .a=0x13, .x=0x29, .y=0xdb, .sp=0x41, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4459, .value=0x2f}, {.addr=0x445a, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x43f4, .a=0x13, .x=0x29, .y=0xdb, .sp=0x41, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x4459, .value=0x2f}, {.addr=0x445a, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x4459, .value=0x2f, .type=IO_READ},
        {.addr=0x445a, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x691e, .a=0x43, .x=0x5e, .y=0x88, .sp=0xe5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x691e, .value=0x2f}, {.addr=0x691f, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x695b, .a=0x43, .x=0x5e, .y=0x88, .sp=0xe5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x691e, .value=0x2f}, {.addr=0x691f, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x691e, .value=0x2f, .type=IO_READ},
        {.addr=0x691f, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1b7e, .a=0xf2, .x=0x1f, .y=0x63, .sp=0x39, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1b7e, .value=0x2f}, {.addr=0x1b7f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x1bd1, .a=0xf2, .x=0x1f, .y=0x63, .sp=0x39, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1b7e, .value=0x2f}, {.addr=0x1b7f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1b7e, .value=0x2f, .type=IO_READ},
        {.addr=0x1b7f, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0386, .a=0xfe, .x=0x3e, .y=0x8f, .sp=0x33, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0386, .value=0x2f}, {.addr=0x0387, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x0407, .a=0xfe, .x=0x3e, .y=0x8f, .sp=0x33, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0386, .value=0x2f}, {.addr=0x0387, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x0386, .value=0x2f, .type=IO_READ},
        {.addr=0x0387, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x48ff, .a=0x9a, .x=0x61, .y=0x5a, .sp=0x86, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x48ff, .value=0x2f}, {.addr=0x4900, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x4960, .a=0x9a, .x=0x61, .y=0x5a, .sp=0x86, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x48ff, .value=0x2f}, {.addr=0x4900, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x48ff, .value=0x2f, .type=IO_READ},
        {.addr=0x4900, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xb5c3, .a=0x2c, .x=0x7a, .y=0x5c, .sp=0xa9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c3, .value=0x2f}, {.addr=0xb5c4, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xb5d5, .a=0x2c, .x=0x7a, .y=0x5c, .sp=0xa9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb5c3, .value=0x2f}, {.addr=0xb5c4, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xb5c3, .value=0x2f, .type=IO_READ},
        {.addr=0xb5c4, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xfd86, .a=0x12, .x=0xfe, .y=0x3b, .sp=0x29, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xfd86, .value=0x2f}, {.addr=0xfd87, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xfde7, .a=0x12, .x=0xfe, .y=0x3b, .sp=0x29, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xfd86, .value=0x2f}, {.addr=0xfd87, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xfd86, .value=0x2f, .type=IO_READ},
        {.addr=0xfd87, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x7fad, .a=0xe9, .x=0x4d, .y=0x34, .sp=0xc2, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7fad, .value=0x2f}, {.addr=0x7fae, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7f6f, .a=0xe9, .x=0x4d, .y=0x34, .sp=0xc2, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x7fad, .value=0x2f}, {.addr=0x7fae, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7fad, .value=0x2f, .type=IO_READ},
        {.addr=0x7fae, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x165b, .a=0xd8, .x=0xc4, .y=0x29, .sp=0xa2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x165b, .value=0x2f}, {.addr=0x165c, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1648, .a=0xd8, .x=0xc4, .y=0x29, .sp=0xa2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x165b, .value=0x2f}, {.addr=0x165c, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x165b, .value=0x2f, .type=IO_READ},
        {.addr=0x165c, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0f2f, .a=0x93, .x=0xc7, .y=0xcb, .sp=0xaa, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0f2f, .value=0x2f}, {.addr=0x0f30, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0f91, .a=0x93, .x=0xc7, .y=0xcb, .sp=0xaa, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0f2f, .value=0x2f}, {.addr=0x0f30, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0f2f, .value=0x2f, .type=IO_READ},
        {.addr=0x0f30, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0x04, .x=0xcf, .y=0x11, .sp=0x29, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6300, .value=0x2f}, {.addr=0x6301, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x630b, .a=0x04, .x=0xcf, .y=0x11, .sp=0x29, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x6300, .value=0x2f}, {.addr=0x6301, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0x2f, .type=IO_READ},
        {.addr=0x6301, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6c74, .a=0x3b, .x=0xb8, .y=0xe8, .sp=0xb3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x6c74, .value=0x2f}, {.addr=0x6c75, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x6c8a, .a=0x3b, .x=0xb8, .y=0xe8, .sp=0xb3, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x6c74, .value=0x2f}, {.addr=0x6c75, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x6c74, .value=0x2f, .type=IO_READ},
        {.addr=0x6c75, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xc8cc, .a=0x85, .x=0x16, .y=0xc4, .sp=0xca, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc8cc, .value=0x2f}, {.addr=0xc8cd, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xc902, .a=0x85, .x=0x16, .y=0xc4, .sp=0xca, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xc8cc, .value=0x2f}, {.addr=0xc8cd, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xc8cc, .value=0x2f, .type=IO_READ},
        {.addr=0xc8cd, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x1ad6, .a=0x58, .x=0xeb, .y=0x4b, .sp=0x37, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad6, .value=0x2f}, {.addr=0x1ad7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1a74, .a=0x58, .x=0xeb, .y=0x4b, .sp=0x37, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x1ad6, .value=0x2f}, {.addr=0x1ad7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1ad6, .value=0x2f, .type=IO_READ},
        {.addr=0x1ad7, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x746f, .a=0xdb, .x=0x2c, .y=0x27, .sp=0xb2, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x746f, .value=0x2f}, {.addr=0x7470, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x741e, .a=0xdb, .x=0x2c, .y=0x27, .sp=0xb2, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x746f, .value=0x2f}, {.addr=0x7470, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x746f, .value=0x2f, .type=IO_READ},
        {.addr=0x7470, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5546, .a=0x20, .x=0x68, .y=0xcf, .sp=0xf0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5546, .value=0x2f}, {.addr=0x5547, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x558e, .a=0x20, .x=0x68, .y=0xcf, .sp=0xf0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5546, .value=0x2f}, {.addr=0x5547, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5546, .value=0x2f, .type=IO_READ},
        {.addr=0x5547, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x6be3, .a=0x5c, .x=0x04, .y=0x2f, .sp=0xe2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x6be3, .value=0x2f}, {.addr=0x6be4, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x6c47, .a=0x5c, .x=0x04, .y=0x2f, .sp=0xe2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6be3, .value=0x2f}, {.addr=0x6be4, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x6be3, .value=0x2f, .type=IO_READ},
        {.addr=0x6be4, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x0824, .a=0x8c, .x=0x90, .y=0xfd, .sp=0x4e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0824, .value=0x2f}, {.addr=0x0825, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x083b, .a=0x8c, .x=0x90, .y=0xfd, .sp=0x4e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0824, .value=0x2f}, {.addr=0x0825, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x0824, .value=0x2f, .type=IO_READ},
        {.addr=0x0825, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x69c8, .a=0x6f, .x=0x66, .y=0x03, .sp=0x74, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x69c8, .value=0x2f}, {.addr=0x69c9, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x696e, .a=0x6f, .x=0x66, .y=0x03, .sp=0x74, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x69c8, .value=0x2f}, {.addr=0x69c9, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x69c8, .value=0x2f, .type=IO_READ},
        {.addr=0x69c9, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc61c, .a=0xd4, .x=0x2e, .y=0x8e, .sp=0x0e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc61c, .value=0x2f}, {.addr=0xc61d, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xc61c, .a=0xd4, .x=0x2e, .y=0x8e, .sp=0x0e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc61c, .value=0x2f}, {.addr=0xc61d, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xc61c, .value=0x2f, .type=IO_READ},
        {.addr=0xc61d, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0dc1, .a=0x97, .x=0xbb, .y=0xc4, .sp=0x8d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc1, .value=0x2f}, {.addr=0x0dc2, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0df4, .a=0x97, .x=0xbb, .y=0xc4, .sp=0x8d, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0dc1, .value=0x2f}, {.addr=0x0dc2, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0dc1, .value=0x2f, .type=IO_READ},
        {.addr=0x0dc2, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x124f, .a=0x15, .x=0x9b, .y=0x17, .sp=0x51, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x124f, .value=0x2f}, {.addr=0x1250, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x125c, .a=0x15, .x=0x9b, .y=0x17, .sp=0x51, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x124f, .value=0x2f}, {.addr=0x1250, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x124f, .value=0x2f, .type=IO_READ},
        {.addr=0x1250, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x7be9, .a=0x8c, .x=0x90, .y=0xd1, .sp=0xc7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7be9, .value=0x2f}, {.addr=0x7bea, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x7bd7, .a=0x8c, .x=0x90, .y=0xd1, .sp=0xc7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7be9, .value=0x2f}, {.addr=0x7bea, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x7be9, .value=0x2f, .type=IO_READ},
        {.addr=0x7bea, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0x0d, .x=0x28, .y=0xac, .sp=0x48, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c14, .value=0x2f}, {.addr=0x7c15, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7bee, .a=0x0d, .x=0x28, .y=0xac, .sp=0x48, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x7c14, .value=0x2f}, {.addr=0x7c15, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0x2f, .type=IO_READ},
        {.addr=0x7c15, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x90c8, .a=0xfb, .x=0x9f, .y=0x4c, .sp=0x9e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x90c8, .value=0x2f}, {.addr=0x90c9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x90e7, .a=0xfb, .x=0x9f, .y=0x4c, .sp=0x9e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x90c8, .value=0x2f}, {.addr=0x90c9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x90c8, .value=0x2f, .type=IO_READ},
        {.addr=0x90c9, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xd0ec, .a=0xf2, .x=0xd5, .y=0xc4, .sp=0x67, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ec, .value=0x2f}, {.addr=0xd0ed, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd12b, .a=0xf2, .x=0xd5, .y=0xc4, .sp=0x67, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd0ec, .value=0x2f}, {.addr=0xd0ed, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd0ec, .value=0x2f, .type=IO_READ},
        {.addr=0xd0ed, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xe618, .a=0x46, .x=0x01, .y=0xa9, .sp=0x1c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xe618, .value=0x2f}, {.addr=0xe619, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xe5a3, .a=0x46, .x=0x01, .y=0xa9, .sp=0x1c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe618, .value=0x2f}, {.addr=0xe619, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xe618, .value=0x2f, .type=IO_READ},
        {.addr=0xe619, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xf8b4, .a=0x21, .x=0x0d, .y=0x1d, .sp=0x73, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf8b4, .value=0x2f}, {.addr=0xf8b5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf873, .a=0x21, .x=0x0d, .y=0x1d, .sp=0x73, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf8b4, .value=0x2f}, {.addr=0xf8b5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf8b4, .value=0x2f, .type=IO_READ},
        {.addr=0xf8b5, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xf1af, .a=0xab, .x=0x45, .y=0xd8, .sp=0xda, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf1af, .value=0x2f}, {.addr=0xf1b0, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0xab, .x=0x45, .y=0xd8, .sp=0xda, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xf1af, .value=0x2f}, {.addr=0xf1b0, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xf1af, .value=0x2f, .type=IO_READ},
        {.addr=0xf1b0, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xfca4, .a=0xc3, .x=0x85, .y=0x50, .sp=0xc3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xfca4, .value=0x2f}, {.addr=0xfca5, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xfc61, .a=0xc3, .x=0x85, .y=0x50, .sp=0xc3, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xfca4, .value=0x2f}, {.addr=0xfca5, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xfca4, .value=0x2f, .type=IO_READ},
        {.addr=0xfca5, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xb667, .a=0x16, .x=0xf4, .y=0x0c, .sp=0x9f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb667, .value=0x2f}, {.addr=0xb668, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xb6a4, .a=0x16, .x=0xf4, .y=0x0c, .sp=0x9f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb667, .value=0x2f}, {.addr=0xb668, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xb667, .value=0x2f, .type=IO_READ},
        {.addr=0xb668, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x87e9, .a=0x9c, .x=0x70, .y=0x63, .sp=0xc6, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x87e9, .value=0x2f}, {.addr=0x87ea, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x87ef, .a=0x9c, .x=0x70, .y=0x63, .sp=0xc6, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x87e9, .value=0x2f}, {.addr=0x87ea, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x87e9, .value=0x2f, .type=IO_READ},
        {.addr=0x87ea, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x34d0, .a=0xcc, .x=0x44, .y=0x48, .sp=0x28, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x34d0, .value=0x2f}, {.addr=0x34d1, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x354d, .a=0xcc, .x=0x44, .y=0x48, .sp=0x28, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x34d0, .value=0x2f}, {.addr=0x34d1, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x34d0, .value=0x2f, .type=IO_READ},
        {.addr=0x34d1, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd63c, .a=0xf5, .x=0xfd, .y=0xe5, .sp=0x5f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd63c, .value=0x2f}, {.addr=0xd63d, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xd6b6, .a=0xf5, .x=0xfd, .y=0xe5, .sp=0x5f, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xd63c, .value=0x2f}, {.addr=0xd63d, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xd63c, .value=0x2f, .type=IO_READ},
        {.addr=0xd63d, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x0f79, .a=0x55, .x=0x73, .y=0x8a, .sp=0xfa, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0f79, .value=0x2f}, {.addr=0x0f7a, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x0f1f, .a=0x55, .x=0x73, .y=0x8a, .sp=0xfa, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0f79, .value=0x2f}, {.addr=0x0f7a, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x0f79, .value=0x2f, .type=IO_READ},
        {.addr=0x0f7a, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3a9a, .a=0xf0, .x=0xbc, .y=0xee, .sp=0x11, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x3a9a, .value=0x2f}, {.addr=0x3a9b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x3a50, .a=0xf0, .x=0xbc, .y=0xee, .sp=0x11, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x3a9a, .value=0x2f}, {.addr=0x3a9b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x3a9a, .value=0x2f, .type=IO_READ},
        {.addr=0x3a9b, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x4c29, .a=0x95, .x=0xa3, .y=0x70, .sp=0x2f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4c29, .value=0x2f}, {.addr=0x4c2a, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x4c69, .a=0x95, .x=0xa3, .y=0x70, .sp=0x2f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4c29, .value=0x2f}, {.addr=0x4c2a, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x4c29, .value=0x2f, .type=IO_READ},
        {.addr=0x4c2a, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0xe9, .x=0xc8, .y=0x1e, .sp=0x1b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1e60, .value=0x2f}, {.addr=0x1e61, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1e43, .a=0xe9, .x=0xc8, .y=0x1e, .sp=0x1b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x1e60, .value=0x2f}, {.addr=0x1e61, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0x2f, .type=IO_READ},
        {.addr=0x1e61, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x6df2, .a=0x0b, .x=0x58, .y=0x5b, .sp=0xe1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x6df2, .value=0x2f}, {.addr=0x6df3, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x6e35, .a=0x0b, .x=0x58, .y=0x5b, .sp=0xe1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6df2, .value=0x2f}, {.addr=0x6df3, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x6df2, .value=0x2f, .type=IO_READ},
        {.addr=0x6df3, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x9ffe, .a=0x58, .x=0x29, .y=0xe6, .sp=0x14, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffe, .value=0x2f}, {.addr=0x9fff, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xa061, .a=0x58, .x=0x29, .y=0xe6, .sp=0x14, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x9ffe, .value=0x2f}, {.addr=0x9fff, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x9ffe, .value=0x2f, .type=IO_READ},
        {.addr=0x9fff, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xf922, .a=0x2c, .x=0xcb, .y=0x44, .sp=0xcf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf922, .value=0x2f}, {.addr=0xf923, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xf96d, .a=0x2c, .x=0xcb, .y=0x44, .sp=0xcf, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xf922, .value=0x2f}, {.addr=0xf923, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xf922, .value=0x2f, .type=IO_READ},
        {.addr=0xf923, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xbba8, .a=0xd9, .x=0xca, .y=0xbd, .sp=0xf3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xbba8, .value=0x2f}, {.addr=0xbba9, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xbc12, .a=0xd9, .x=0xca, .y=0xbd, .sp=0xf3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbba8, .value=0x2f}, {.addr=0xbba9, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xbba8, .value=0x2f, .type=IO_READ},
        {.addr=0xbba9, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x4e75, .a=0x51, .x=0x00, .y=0xf2, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e75, .value=0x2f}, {.addr=0x4e76, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x4e7b, .a=0x51, .x=0x00, .y=0xf2, .sp=0x4b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4e75, .value=0x2f}, {.addr=0x4e76, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x4e75, .value=0x2f, .type=IO_READ},
        {.addr=0x4e76, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x960e, .a=0x20, .x=0x92, .y=0x40, .sp=0x98, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x960e, .value=0x2f}, {.addr=0x960f, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x959d, .a=0x20, .x=0x92, .y=0x40, .sp=0x98, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x960e, .value=0x2f}, {.addr=0x960f, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x960e, .value=0x2f, .type=IO_READ},
        {.addr=0x960f, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xfc36, .a=0xd0, .x=0x5d, .y=0xb8, .sp=0x95, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xfc36, .value=0x2f}, {.addr=0xfc37, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xfbfb, .a=0xd0, .x=0x5d, .y=0xb8, .sp=0x95, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xfc36, .value=0x2f}, {.addr=0xfc37, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xfc36, .value=0x2f, .type=IO_READ},
        {.addr=0xfc37, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xa901, .a=0xf4, .x=0x09, .y=0xac, .sp=0xbe, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa901, .value=0x2f}, {.addr=0xa902, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa912, .a=0xf4, .x=0x09, .y=0xac, .sp=0xbe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa901, .value=0x2f}, {.addr=0xa902, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa901, .value=0x2f, .type=IO_READ},
        {.addr=0xa902, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x3045, .a=0x95, .x=0x82, .y=0xad, .sp=0xd3, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3045, .value=0x2f}, {.addr=0x3046, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x3096, .a=0x95, .x=0x82, .y=0xad, .sp=0xd3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3045, .value=0x2f}, {.addr=0x3046, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x3045, .value=0x2f, .type=IO_READ},
        {.addr=0x3046, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x0333, .a=0xd0, .x=0x7a, .y=0x7f, .sp=0xee, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0333, .value=0x2f}, {.addr=0x0334, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x038b, .a=0xd0, .x=0x7a, .y=0x7f, .sp=0xee, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0333, .value=0x2f}, {.addr=0x0334, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x0333, .value=0x2f, .type=IO_READ},
        {.addr=0x0334, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xd27c, .a=0x59, .x=0xe5, .y=0xcc, .sp=0x28, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd27c, .value=0x2f}, {.addr=0xd27d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xd228, .a=0x59, .x=0xe5, .y=0xcc, .sp=0x28, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd27c, .value=0x2f}, {.addr=0xd27d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xd27c, .value=0x2f, .type=IO_READ},
        {.addr=0xd27d, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6b86, .a=0x4e, .x=0x7f, .y=0x3f, .sp=0x20, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x6b86, .value=0x2f}, {.addr=0x6b87, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6bd0, .a=0x4e, .x=0x7f, .y=0x3f, .sp=0x20, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6b86, .value=0x2f}, {.addr=0x6b87, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6b86, .value=0x2f, .type=IO_READ},
        {.addr=0x6b87, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x16ea, .a=0xa4, .x=0x1f, .y=0x90, .sp=0x4e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x16ea, .value=0x2f}, {.addr=0x16eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x169a, .a=0xa4, .x=0x1f, .y=0x90, .sp=0x4e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x16ea, .value=0x2f}, {.addr=0x16eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x16ea, .value=0x2f, .type=IO_READ},
        {.addr=0x16eb, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x0f47, .a=0x1b, .x=0xc0, .y=0x5b, .sp=0x4f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0f47, .value=0x2f}, {.addr=0x0f48, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0f04, .a=0x1b, .x=0xc0, .y=0x5b, .sp=0x4f, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0f47, .value=0x2f}, {.addr=0x0f48, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x0f47, .value=0x2f, .type=IO_READ},
        {.addr=0x0f48, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xd13a, .a=0xcb, .x=0x90, .y=0xfa, .sp=0xaa, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xd13a, .value=0x2f}, {.addr=0xd13b, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xd107, .a=0xcb, .x=0x90, .y=0xfa, .sp=0xaa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd13a, .value=0x2f}, {.addr=0xd13b, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xd13a, .value=0x2f, .type=IO_READ},
        {.addr=0xd13b, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x6481, .a=0xf3, .x=0x3a, .y=0x70, .sp=0x41, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6481, .value=0x2f}, {.addr=0x6482, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x645d, .a=0xf3, .x=0x3a, .y=0x70, .sp=0x41, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6481, .value=0x2f}, {.addr=0x6482, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x6481, .value=0x2f, .type=IO_READ},
        {.addr=0x6482, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xa7ca, .a=0x4d, .x=0xc0, .y=0x38, .sp=0x85, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ca, .value=0x2f}, {.addr=0xa7cb, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xa74e, .a=0x4d, .x=0xc0, .y=0x38, .sp=0x85, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa7ca, .value=0x2f}, {.addr=0xa7cb, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xa7ca, .value=0x2f, .type=IO_READ},
        {.addr=0xa7cb, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xeb51, .a=0x87, .x=0x8d, .y=0xf3, .sp=0x00, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xeb51, .value=0x2f}, {.addr=0xeb52, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeb73, .a=0x87, .x=0x8d, .y=0xf3, .sp=0x00, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xeb51, .value=0x2f}, {.addr=0xeb52, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeb51, .value=0x2f, .type=IO_READ},
        {.addr=0xeb52, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x629e, .a=0x1e, .x=0xc9, .y=0x33, .sp=0x87, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x629e, .value=0x2f}, {.addr=0x629f, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x630b, .a=0x1e, .x=0xc9, .y=0x33, .sp=0x87, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x629e, .value=0x2f}, {.addr=0x629f, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x629e, .value=0x2f, .type=IO_READ},
        {.addr=0x629f, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xc713, .a=0xbf, .x=0x1f, .y=0xaa, .sp=0x83, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc713, .value=0x2f}, {.addr=0xc714, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xc6ff, .a=0xbf, .x=0x1f, .y=0xaa, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc713, .value=0x2f}, {.addr=0xc714, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xc713, .value=0x2f, .type=IO_READ},
        {.addr=0xc714, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x347c, .a=0x23, .x=0x60, .y=0xdc, .sp=0x30, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x347c, .value=0x2f}, {.addr=0x347d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x34f0, .a=0x23, .x=0x60, .y=0xdc, .sp=0x30, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x347c, .value=0x2f}, {.addr=0x347d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x347c, .value=0x2f, .type=IO_READ},
        {.addr=0x347d, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xa1cb, .a=0x99, .x=0x74, .y=0xc1, .sp=0x89, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa1cb, .value=0x2f}, {.addr=0xa1cc, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xa220, .a=0x99, .x=0x74, .y=0xc1, .sp=0x89, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa1cb, .value=0x2f}, {.addr=0xa1cc, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xa1cb, .value=0x2f, .type=IO_READ},
        {.addr=0xa1cc, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x9476, .a=0x09, .x=0x1a, .y=0x51, .sp=0xff, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9476, .value=0x2f}, {.addr=0x9477, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x94c7, .a=0x09, .x=0x1a, .y=0x51, .sp=0xff, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9476, .value=0x2f}, {.addr=0x9477, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x9476, .value=0x2f, .type=IO_READ},
        {.addr=0x9477, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5550, .a=0xd4, .x=0xd7, .y=0xcf, .sp=0x62, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5550, .value=0x2f}, {.addr=0x5551, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x556b, .a=0xd4, .x=0xd7, .y=0xcf, .sp=0x62, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x5550, .value=0x2f}, {.addr=0x5551, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x5550, .value=0x2f, .type=IO_READ},
        {.addr=0x5551, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x0d29, .a=0x99, .x=0x27, .y=0xd8, .sp=0x57, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0d29, .value=0x2f}, {.addr=0x0d2a, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x0d23, .a=0x99, .x=0x27, .y=0xd8, .sp=0x57, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0d29, .value=0x2f}, {.addr=0x0d2a, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x0d29, .value=0x2f, .type=IO_READ},
        {.addr=0x0d2a, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4b9c, .a=0xc3, .x=0xbb, .y=0x20, .sp=0x75, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4b9c, .value=0x2f}, {.addr=0x4b9d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4b64, .a=0xc3, .x=0xbb, .y=0x20, .sp=0x75, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x4b9c, .value=0x2f}, {.addr=0x4b9d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4b9c, .value=0x2f, .type=IO_READ},
        {.addr=0x4b9d, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x7785, .a=0x04, .x=0x3d, .y=0xe8, .sp=0xaf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7785, .value=0x2f}, {.addr=0x7786, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x779f, .a=0x04, .x=0x3d, .y=0xe8, .sp=0xaf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7785, .value=0x2f}, {.addr=0x7786, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7785, .value=0x2f, .type=IO_READ},
        {.addr=0x7786, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x9be6, .a=0xa5, .x=0xf8, .y=0x0f, .sp=0x8a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9be6, .value=0x2f}, {.addr=0x9be7, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x9bc0, .a=0xa5, .x=0xf8, .y=0x0f, .sp=0x8a, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x9be6, .value=0x2f}, {.addr=0x9be7, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x9be6, .value=0x2f, .type=IO_READ},
        {.addr=0x9be7, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x9ebe, .a=0x48, .x=0x33, .y=0xe1, .sp=0x0c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x9ebe, .value=0x2f}, {.addr=0x9ebf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9eed, .a=0x48, .x=0x33, .y=0xe1, .sp=0x0c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9ebe, .value=0x2f}, {.addr=0x9ebf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9ebe, .value=0x2f, .type=IO_READ},
        {.addr=0x9ebf, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x5dd8, .a=0xc8, .x=0xe2, .y=0x0d, .sp=0x45, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd8, .value=0x2f}, {.addr=0x5dd9, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x5d70, .a=0xc8, .x=0xe2, .y=0x0d, .sp=0x45, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5dd8, .value=0x2f}, {.addr=0x5dd9, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x5dd8, .value=0x2f, .type=IO_READ},
        {.addr=0x5dd9, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xe07c, .a=0x24, .x=0xab, .y=0x53, .sp=0xbb, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe07c, .value=0x2f}, {.addr=0xe07d, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xe034, .a=0x24, .x=0xab, .y=0x53, .sp=0xbb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe07c, .value=0x2f}, {.addr=0xe07d, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xe07c, .value=0x2f, .type=IO_READ},
        {.addr=0xe07d, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x520a, .a=0xc8, .x=0x58, .y=0xdd, .sp=0xb9, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x520a, .value=0x2f}, {.addr=0x520b, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x526d, .a=0xc8, .x=0x58, .y=0xdd, .sp=0xb9, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x520a, .value=0x2f}, {.addr=0x520b, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x520a, .value=0x2f, .type=IO_READ},
        {.addr=0x520b, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xbfd2, .a=0xd6, .x=0x1a, .y=0x92, .sp=0x55, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd2, .value=0x2f}, {.addr=0xbfd3, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xbfe2, .a=0xd6, .x=0x1a, .y=0x92, .sp=0x55, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xbfd2, .value=0x2f}, {.addr=0xbfd3, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xbfd2, .value=0x2f, .type=IO_READ},
        {.addr=0xbfd3, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4986, .a=0xb4, .x=0x44, .y=0xc9, .sp=0x16, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4986, .value=0x2f}, {.addr=0x4987, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x49fe, .a=0xb4, .x=0x44, .y=0xc9, .sp=0x16, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4986, .value=0x2f}, {.addr=0x4987, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x4986, .value=0x2f, .type=IO_READ},
        {.addr=0x4987, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xffc6, .a=0xb2, .x=0xf0, .y=0xc4, .sp=0x98, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xffc6, .value=0x2f}, {.addr=0xffc7, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xffbe, .a=0xb2, .x=0xf0, .y=0xc4, .sp=0x98, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xffc6, .value=0x2f}, {.addr=0xffc7, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xffc6, .value=0x2f, .type=IO_READ},
        {.addr=0xffc7, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x6e39, .a=0x87, .x=0x41, .y=0x0c, .sp=0x81, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6e39, .value=0x2f}, {.addr=0x6e3a, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x6e90, .a=0x87, .x=0x41, .y=0x0c, .sp=0x81, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6e39, .value=0x2f}, {.addr=0x6e3a, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x6e39, .value=0x2f, .type=IO_READ},
        {.addr=0x6e3a, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xeb80, .a=0x83, .x=0xef, .y=0x21, .sp=0x76, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xeb80, .value=0x2f}, {.addr=0xeb81, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xeb5f, .a=0x83, .x=0xef, .y=0x21, .sp=0x76, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xeb80, .value=0x2f}, {.addr=0xeb81, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xeb80, .value=0x2f, .type=IO_READ},
        {.addr=0xeb81, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x1ece, .a=0x11, .x=0xc9, .y=0x33, .sp=0x93, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1ece, .value=0x2f}, {.addr=0x1ecf, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x1edf, .a=0x11, .x=0xc9, .y=0x33, .sp=0x93, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1ece, .value=0x2f}, {.addr=0x1ecf, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x1ece, .value=0x2f, .type=IO_READ},
        {.addr=0x1ecf, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x3a11, .a=0x97, .x=0x17, .y=0x57, .sp=0x24, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a11, .value=0x2f}, {.addr=0x3a12, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x39ff, .a=0x97, .x=0x17, .y=0x57, .sp=0x24, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3a11, .value=0x2f}, {.addr=0x3a12, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x3a11, .value=0x2f, .type=IO_READ},
        {.addr=0x3a12, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xb084, .a=0x79, .x=0x8e, .y=0x9e, .sp=0xee, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb084, .value=0x2f}, {.addr=0xb085, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb0b3, .a=0x79, .x=0x8e, .y=0x9e, .sp=0xee, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xb084, .value=0x2f}, {.addr=0xb085, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb084, .value=0x2f, .type=IO_READ},
        {.addr=0xb085, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xfd5b, .a=0xb2, .x=0x64, .y=0xb5, .sp=0x02, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5b, .value=0x2f}, {.addr=0xfd5c, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xfda6, .a=0xb2, .x=0x64, .y=0xb5, .sp=0x02, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xfd5b, .value=0x2f}, {.addr=0xfd5c, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xfd5b, .value=0x2f, .type=IO_READ},
        {.addr=0xfd5c, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xf307, .a=0xf2, .x=0xb5, .y=0xd9, .sp=0xe8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf307, .value=0x2f}, {.addr=0xf308, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xf36c, .a=0xf2, .x=0xb5, .y=0xd9, .sp=0xe8, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xf307, .value=0x2f}, {.addr=0xf308, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xf307, .value=0x2f, .type=IO_READ},
        {.addr=0xf308, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8ace, .a=0xa6, .x=0x07, .y=0x51, .sp=0x9e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8ace, .value=0x2f}, {.addr=0x8acf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8add, .a=0xa6, .x=0x07, .y=0x51, .sp=0x9e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x8ace, .value=0x2f}, {.addr=0x8acf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8ace, .value=0x2f, .type=IO_READ},
        {.addr=0x8acf, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x6efe, .a=0x64, .x=0xb0, .y=0x9e, .sp=0xa8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6efe, .value=0x2f}, {.addr=0x6eff, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6e9f, .a=0x64, .x=0xb0, .y=0x9e, .sp=0xa8, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x6efe, .value=0x2f}, {.addr=0x6eff, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6efe, .value=0x2f, .type=IO_READ},
        {.addr=0x6eff, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x6ca6, .a=0x25, .x=0xd2, .y=0x08, .sp=0xf2, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca6, .value=0x2f}, {.addr=0x6ca7, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x6ccb, .a=0x25, .x=0xd2, .y=0x08, .sp=0xf2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6ca6, .value=0x2f}, {.addr=0x6ca7, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x6ca6, .value=0x2f, .type=IO_READ},
        {.addr=0x6ca7, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xecfe, .a=0x76, .x=0x58, .y=0x20, .sp=0x24, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xecfe, .value=0x2f}, {.addr=0xecff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xed06, .a=0x76, .x=0x58, .y=0x20, .sp=0x24, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xecfe, .value=0x2f}, {.addr=0xecff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xecfe, .value=0x2f, .type=IO_READ},
        {.addr=0xecff, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x052e, .a=0x7a, .x=0x7a, .y=0x15, .sp=0x1b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x052e, .value=0x2f}, {.addr=0x052f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x04d0, .a=0x7a, .x=0x7a, .y=0x15, .sp=0x1b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x052e, .value=0x2f}, {.addr=0x052f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x052e, .value=0x2f, .type=IO_READ},
        {.addr=0x052f, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x3025, .a=0xbf, .x=0x9b, .y=0x84, .sp=0x79, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3025, .value=0x2f}, {.addr=0x3026, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x2fd9, .a=0xbf, .x=0x9b, .y=0x84, .sp=0x79, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3025, .value=0x2f}, {.addr=0x3026, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x3025, .value=0x2f, .type=IO_READ},
        {.addr=0x3026, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0300) {
    const struct CPU_State initial_cpu = {.pc=0x067a, .a=0x44, .x=0x1f, .y=0xc0, .sp=0x23, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x067a, .value=0x2f}, {.addr=0x067b, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x06af, .a=0x44, .x=0x1f, .y=0xc0, .sp=0x23, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x067a, .value=0x2f}, {.addr=0x067b, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x067a, .value=0x2f, .type=IO_READ},
        {.addr=0x067b, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0301) {
    const struct CPU_State initial_cpu = {.pc=0x351a, .a=0xd8, .x=0x83, .y=0x26, .sp=0x1b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x351a, .value=0x2f}, {.addr=0x351b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3566, .a=0xd8, .x=0x83, .y=0x26, .sp=0x1b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x351a, .value=0x2f}, {.addr=0x351b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x351a, .value=0x2f, .type=IO_READ},
        {.addr=0x351b, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2043, .a=0xfc, .x=0x6b, .y=0x80, .sp=0xee, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2043, .value=0x2f}, {.addr=0x2044, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x2090, .a=0xfc, .x=0x6b, .y=0x80, .sp=0xee, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2043, .value=0x2f}, {.addr=0x2044, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2043, .value=0x2f, .type=IO_READ},
        {.addr=0x2044, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0303) {
    const struct CPU_State initial_cpu = {.pc=0xbe90, .a=0x5d, .x=0x4d, .y=0xfa, .sp=0xfa, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe90, .value=0x2f}, {.addr=0xbe91, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xbead, .a=0x5d, .x=0x4d, .y=0xfa, .sp=0xfa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xbe90, .value=0x2f}, {.addr=0xbe91, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xbe90, .value=0x2f, .type=IO_READ},
        {.addr=0xbe91, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0304) {
    const struct CPU_State initial_cpu = {.pc=0xd294, .a=0xf7, .x=0xc9, .y=0x2d, .sp=0x5a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd294, .value=0x2f}, {.addr=0xd295, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xd268, .a=0xf7, .x=0xc9, .y=0x2d, .sp=0x5a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd294, .value=0x2f}, {.addr=0xd295, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xd294, .value=0x2f, .type=IO_READ},
        {.addr=0xd295, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0305) {
    const struct CPU_State initial_cpu = {.pc=0xdf6a, .a=0x4d, .x=0xb6, .y=0x5c, .sp=0xba, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6a, .value=0x2f}, {.addr=0xdf6b, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xdf54, .a=0x4d, .x=0xb6, .y=0x5c, .sp=0xba, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xdf6a, .value=0x2f}, {.addr=0xdf6b, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xdf6a, .value=0x2f, .type=IO_READ},
        {.addr=0xdf6b, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdd58, .a=0x76, .x=0x45, .y=0x05, .sp=0x82, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xdd58, .value=0x2f}, {.addr=0xdd59, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xdcfc, .a=0x76, .x=0x45, .y=0x05, .sp=0x82, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xdd58, .value=0x2f}, {.addr=0xdd59, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xdd58, .value=0x2f, .type=IO_READ},
        {.addr=0xdd59, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0307) {
    const struct CPU_State initial_cpu = {.pc=0xa6a2, .a=0x06, .x=0xe9, .y=0x11, .sp=0xe8, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a2, .value=0x2f}, {.addr=0xa6a3, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xa655, .a=0x06, .x=0xe9, .y=0x11, .sp=0xe8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xa6a2, .value=0x2f}, {.addr=0xa6a3, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xa6a2, .value=0x2f, .type=IO_READ},
        {.addr=0xa6a3, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0308) {
    const struct CPU_State initial_cpu = {.pc=0x2071, .a=0xeb, .x=0x80, .y=0x8d, .sp=0xb3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2071, .value=0x2f}, {.addr=0x2072, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x1ffc, .a=0xeb, .x=0x80, .y=0x8d, .sp=0xb3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x2071, .value=0x2f}, {.addr=0x2072, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x2071, .value=0x2f, .type=IO_READ},
        {.addr=0x2072, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0309) {
    const struct CPU_State initial_cpu = {.pc=0x38a5, .a=0x04, .x=0xd2, .y=0x95, .sp=0xc4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x38a5, .value=0x2f}, {.addr=0x38a6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3883, .a=0x04, .x=0xd2, .y=0x95, .sp=0xc4, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x38a5, .value=0x2f}, {.addr=0x38a6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x38a5, .value=0x2f, .type=IO_READ},
        {.addr=0x38a6, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030A) {
    const struct CPU_State initial_cpu = {.pc=0xd7fd, .a=0xab, .x=0x64, .y=0xec, .sp=0x66, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fd, .value=0x2f}, {.addr=0xd7fe, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xd7fe, .a=0xab, .x=0x64, .y=0xec, .sp=0x66, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd7fd, .value=0x2f}, {.addr=0xd7fe, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xd7fd, .value=0x2f, .type=IO_READ},
        {.addr=0xd7fe, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030B) {
    const struct CPU_State initial_cpu = {.pc=0xf709, .a=0x0c, .x=0x4f, .y=0xcb, .sp=0x03, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf709, .value=0x2f}, {.addr=0xf70a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf781, .a=0x0c, .x=0x4f, .y=0xcb, .sp=0x03, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf709, .value=0x2f}, {.addr=0xf70a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf709, .value=0x2f, .type=IO_READ},
        {.addr=0xf70a, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030C) {
    const struct CPU_State initial_cpu = {.pc=0x4363, .a=0x6c, .x=0xa0, .y=0x19, .sp=0x6e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4363, .value=0x2f}, {.addr=0x4364, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x438a, .a=0x6c, .x=0xa0, .y=0x19, .sp=0x6e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4363, .value=0x2f}, {.addr=0x4364, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4363, .value=0x2f, .type=IO_READ},
        {.addr=0x4364, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa48b, .a=0x99, .x=0x3d, .y=0xe9, .sp=0x00, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa48b, .value=0x2f}, {.addr=0xa48c, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xa482, .a=0x99, .x=0x3d, .y=0xe9, .sp=0x00, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa48b, .value=0x2f}, {.addr=0xa48c, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xa48b, .value=0x2f, .type=IO_READ},
        {.addr=0xa48c, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030E) {
    const struct CPU_State initial_cpu = {.pc=0xc602, .a=0xc0, .x=0xa0, .y=0x60, .sp=0xe2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc602, .value=0x2f}, {.addr=0xc603, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xc636, .a=0xc0, .x=0xa0, .y=0x60, .sp=0xe2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc602, .value=0x2f}, {.addr=0xc603, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xc602, .value=0x2f, .type=IO_READ},
        {.addr=0xc603, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_030F) {
    const struct CPU_State initial_cpu = {.pc=0x91e3, .a=0x95, .x=0x0d, .y=0x66, .sp=0x61, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x91e3, .value=0x2f}, {.addr=0x91e4, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9210, .a=0x95, .x=0x0d, .y=0x66, .sp=0x61, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x91e3, .value=0x2f}, {.addr=0x91e4, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x91e3, .value=0x2f, .type=IO_READ},
        {.addr=0x91e4, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0310) {
    const struct CPU_State initial_cpu = {.pc=0x8aae, .a=0x15, .x=0x3e, .y=0x97, .sp=0xcd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8aae, .value=0x2f}, {.addr=0x8aaf, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8b15, .a=0x15, .x=0x3e, .y=0x97, .sp=0xcd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8aae, .value=0x2f}, {.addr=0x8aaf, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8aae, .value=0x2f, .type=IO_READ},
        {.addr=0x8aaf, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0311) {
    const struct CPU_State initial_cpu = {.pc=0xcd95, .a=0xc6, .x=0x08, .y=0x74, .sp=0x43, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xcd95, .value=0x2f}, {.addr=0xcd96, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xcd2e, .a=0xc6, .x=0x08, .y=0x74, .sp=0x43, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcd95, .value=0x2f}, {.addr=0xcd96, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xcd95, .value=0x2f, .type=IO_READ},
        {.addr=0xcd96, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0312) {
    const struct CPU_State initial_cpu = {.pc=0xd57d, .a=0xd1, .x=0x50, .y=0x5b, .sp=0x7d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd57d, .value=0x2f}, {.addr=0xd57e, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xd510, .a=0xd1, .x=0x50, .y=0x5b, .sp=0x7d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd57d, .value=0x2f}, {.addr=0xd57e, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xd57d, .value=0x2f, .type=IO_READ},
        {.addr=0xd57e, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0313) {
    const struct CPU_State initial_cpu = {.pc=0x6708, .a=0x75, .x=0x65, .y=0x04, .sp=0xfd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6708, .value=0x2f}, {.addr=0x6709, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x66cf, .a=0x75, .x=0x65, .y=0x04, .sp=0xfd, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x6708, .value=0x2f}, {.addr=0x6709, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6708, .value=0x2f, .type=IO_READ},
        {.addr=0x6709, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0314) {
    const struct CPU_State initial_cpu = {.pc=0x11df, .a=0x81, .x=0x0b, .y=0x06, .sp=0xf9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x11df, .value=0x2f}, {.addr=0x11e0, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x11e9, .a=0x81, .x=0x0b, .y=0x06, .sp=0xf9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x11df, .value=0x2f}, {.addr=0x11e0, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x11df, .value=0x2f, .type=IO_READ},
        {.addr=0x11e0, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0315) {
    const struct CPU_State initial_cpu = {.pc=0xb250, .a=0x8b, .x=0x7f, .y=0x29, .sp=0x34, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb250, .value=0x2f}, {.addr=0xb251, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb2bd, .a=0x8b, .x=0x7f, .y=0x29, .sp=0x34, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb250, .value=0x2f}, {.addr=0xb251, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb250, .value=0x2f, .type=IO_READ},
        {.addr=0xb251, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0316) {
    const struct CPU_State initial_cpu = {.pc=0xfa50, .a=0x60, .x=0xb7, .y=0x43, .sp=0x89, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xfa50, .value=0x2f}, {.addr=0xfa51, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf9ee, .a=0x60, .x=0xb7, .y=0x43, .sp=0x89, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfa50, .value=0x2f}, {.addr=0xfa51, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfa50, .value=0x2f, .type=IO_READ},
        {.addr=0xfa51, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0317) {
    const struct CPU_State initial_cpu = {.pc=0x87e9, .a=0xe4, .x=0x24, .y=0xc5, .sp=0xf3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x87e9, .value=0x2f}, {.addr=0x87ea, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x87cf, .a=0xe4, .x=0x24, .y=0xc5, .sp=0xf3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x87e9, .value=0x2f}, {.addr=0x87ea, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x87e9, .value=0x2f, .type=IO_READ},
        {.addr=0x87ea, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0318) {
    const struct CPU_State initial_cpu = {.pc=0x431d, .a=0xf3, .x=0x0e, .y=0xcc, .sp=0x72, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x431d, .value=0x2f}, {.addr=0x431e, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x4396, .a=0xf3, .x=0x0e, .y=0xcc, .sp=0x72, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x431d, .value=0x2f}, {.addr=0x431e, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x431d, .value=0x2f, .type=IO_READ},
        {.addr=0x431e, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0319) {
    const struct CPU_State initial_cpu = {.pc=0x87c2, .a=0xf4, .x=0xb0, .y=0x62, .sp=0x3d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x87c2, .value=0x2f}, {.addr=0x87c3, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8827, .a=0xf4, .x=0xb0, .y=0x62, .sp=0x3d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x87c2, .value=0x2f}, {.addr=0x87c3, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x87c2, .value=0x2f, .type=IO_READ},
        {.addr=0x87c3, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031A) {
    const struct CPU_State initial_cpu = {.pc=0x1a2b, .a=0x2b, .x=0x8d, .y=0x52, .sp=0xbe, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1a2b, .value=0x2f}, {.addr=0x1a2c, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x19f8, .a=0x2b, .x=0x8d, .y=0x52, .sp=0xbe, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1a2b, .value=0x2f}, {.addr=0x1a2c, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x1a2b, .value=0x2f, .type=IO_READ},
        {.addr=0x1a2c, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031B) {
    const struct CPU_State initial_cpu = {.pc=0x5cef, .a=0xa8, .x=0x10, .y=0xbe, .sp=0x72, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5cef, .value=0x2f}, {.addr=0x5cf0, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x5d60, .a=0xa8, .x=0x10, .y=0xbe, .sp=0x72, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5cef, .value=0x2f}, {.addr=0x5cf0, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x5cef, .value=0x2f, .type=IO_READ},
        {.addr=0x5cf0, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031C) {
    const struct CPU_State initial_cpu = {.pc=0x8c95, .a=0x9d, .x=0x47, .y=0x5c, .sp=0x1d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8c95, .value=0x2f}, {.addr=0x8c96, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x8cfb, .a=0x9d, .x=0x47, .y=0x5c, .sp=0x1d, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x8c95, .value=0x2f}, {.addr=0x8c96, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x8c95, .value=0x2f, .type=IO_READ},
        {.addr=0x8c96, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031D) {
    const struct CPU_State initial_cpu = {.pc=0x66dc, .a=0xb8, .x=0xe6, .y=0x11, .sp=0x5e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x66dc, .value=0x2f}, {.addr=0x66dd, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x66dc, .a=0xb8, .x=0xe6, .y=0x11, .sp=0x5e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x66dc, .value=0x2f}, {.addr=0x66dd, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x66dc, .value=0x2f, .type=IO_READ},
        {.addr=0x66dd, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031E) {
    const struct CPU_State initial_cpu = {.pc=0x36ee, .a=0x84, .x=0x17, .y=0xb8, .sp=0xc5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x36ee, .value=0x2f}, {.addr=0x36ef, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x36b9, .a=0x84, .x=0x17, .y=0xb8, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x36ee, .value=0x2f}, {.addr=0x36ef, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x36ee, .value=0x2f, .type=IO_READ},
        {.addr=0x36ef, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_031F) {
    const struct CPU_State initial_cpu = {.pc=0x8952, .a=0x83, .x=0x59, .y=0x41, .sp=0xb5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x8952, .value=0x2f}, {.addr=0x8953, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x8945, .a=0x83, .x=0x59, .y=0x41, .sp=0xb5, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x8952, .value=0x2f}, {.addr=0x8953, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x8952, .value=0x2f, .type=IO_READ},
        {.addr=0x8953, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0320) {
    const struct CPU_State initial_cpu = {.pc=0xf543, .a=0x32, .x=0xbb, .y=0xf3, .sp=0x6e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xf543, .value=0x2f}, {.addr=0xf544, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xf500, .a=0x32, .x=0xbb, .y=0xf3, .sp=0x6e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf543, .value=0x2f}, {.addr=0xf544, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xf543, .value=0x2f, .type=IO_READ},
        {.addr=0xf544, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0321) {
    const struct CPU_State initial_cpu = {.pc=0xea06, .a=0x04, .x=0xd0, .y=0xba, .sp=0x7b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xea06, .value=0x2f}, {.addr=0xea07, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xe9ac, .a=0x04, .x=0xd0, .y=0xba, .sp=0x7b, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xea06, .value=0x2f}, {.addr=0xea07, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xea06, .value=0x2f, .type=IO_READ},
        {.addr=0xea07, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0322) {
    const struct CPU_State initial_cpu = {.pc=0xcef2, .a=0x27, .x=0xb8, .y=0xe1, .sp=0xb4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xcef2, .value=0x2f}, {.addr=0xcef3, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xcf07, .a=0x27, .x=0xb8, .y=0xe1, .sp=0xb4, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xcef2, .value=0x2f}, {.addr=0xcef3, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xcef2, .value=0x2f, .type=IO_READ},
        {.addr=0xcef3, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0323) {
    const struct CPU_State initial_cpu = {.pc=0x3d3e, .a=0x11, .x=0x56, .y=0xee, .sp=0x63, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3e, .value=0x2f}, {.addr=0x3d3f, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x3d0d, .a=0x11, .x=0x56, .y=0xee, .sp=0x63, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3d3e, .value=0x2f}, {.addr=0x3d3f, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x3d3e, .value=0x2f, .type=IO_READ},
        {.addr=0x3d3f, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0324) {
    const struct CPU_State initial_cpu = {.pc=0xd367, .a=0x32, .x=0x2f, .y=0x06, .sp=0x41, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd367, .value=0x2f}, {.addr=0xd368, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd317, .a=0x32, .x=0x2f, .y=0x06, .sp=0x41, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xd367, .value=0x2f}, {.addr=0xd368, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd367, .value=0x2f, .type=IO_READ},
        {.addr=0xd368, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0325) {
    const struct CPU_State initial_cpu = {.pc=0xa585, .a=0xe8, .x=0x4c, .y=0x34, .sp=0x94, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa585, .value=0x2f}, {.addr=0xa586, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa54a, .a=0xe8, .x=0x4c, .y=0x34, .sp=0x94, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xa585, .value=0x2f}, {.addr=0xa586, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa585, .value=0x2f, .type=IO_READ},
        {.addr=0xa586, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0326) {
    const struct CPU_State initial_cpu = {.pc=0x6b7f, .a=0xc8, .x=0x84, .y=0x8c, .sp=0xc8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6b7f, .value=0x2f}, {.addr=0x6b80, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x6bf5, .a=0xc8, .x=0x84, .y=0x8c, .sp=0xc8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6b7f, .value=0x2f}, {.addr=0x6b80, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x6b7f, .value=0x2f, .type=IO_READ},
        {.addr=0x6b80, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0327) {
    const struct CPU_State initial_cpu = {.pc=0x29f8, .a=0xe8, .x=0xf7, .y=0x6d, .sp=0x97, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x29f8, .value=0x2f}, {.addr=0x29f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2999, .a=0xe8, .x=0xf7, .y=0x6d, .sp=0x97, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x29f8, .value=0x2f}, {.addr=0x29f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x29f8, .value=0x2f, .type=IO_READ},
        {.addr=0x29f9, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0328) {
    const struct CPU_State initial_cpu = {.pc=0x1971, .a=0xe8, .x=0x6e, .y=0x5d, .sp=0x5f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1971, .value=0x2f}, {.addr=0x1972, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x19bc, .a=0xe8, .x=0x6e, .y=0x5d, .sp=0x5f, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1971, .value=0x2f}, {.addr=0x1972, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1971, .value=0x2f, .type=IO_READ},
        {.addr=0x1972, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0329) {
    const struct CPU_State initial_cpu = {.pc=0xe7cd, .a=0xaa, .x=0x86, .y=0x27, .sp=0x53, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xe7cd, .value=0x2f}, {.addr=0xe7ce, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe7ae, .a=0xaa, .x=0x86, .y=0x27, .sp=0x53, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xe7cd, .value=0x2f}, {.addr=0xe7ce, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe7cd, .value=0x2f, .type=IO_READ},
        {.addr=0xe7ce, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032A) {
    const struct CPU_State initial_cpu = {.pc=0x80d5, .a=0x93, .x=0xcb, .y=0x66, .sp=0x38, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x80d5, .value=0x2f}, {.addr=0x80d6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8095, .a=0x93, .x=0xcb, .y=0x66, .sp=0x38, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x80d5, .value=0x2f}, {.addr=0x80d6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x80d5, .value=0x2f, .type=IO_READ},
        {.addr=0x80d6, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032B) {
    const struct CPU_State initial_cpu = {.pc=0xb04a, .a=0xc1, .x=0x9e, .y=0x54, .sp=0x73, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb04a, .value=0x2f}, {.addr=0xb04b, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xb045, .a=0xc1, .x=0x9e, .y=0x54, .sp=0x73, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb04a, .value=0x2f}, {.addr=0xb04b, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xb04a, .value=0x2f, .type=IO_READ},
        {.addr=0xb04b, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032C) {
    const struct CPU_State initial_cpu = {.pc=0xb320, .a=0x85, .x=0xac, .y=0x4d, .sp=0x60, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb320, .value=0x2f}, {.addr=0xb321, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xb367, .a=0x85, .x=0xac, .y=0x4d, .sp=0x60, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb320, .value=0x2f}, {.addr=0xb321, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xb320, .value=0x2f, .type=IO_READ},
        {.addr=0xb321, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032D) {
    const struct CPU_State initial_cpu = {.pc=0x0473, .a=0xbf, .x=0x19, .y=0xc7, .sp=0xbb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0473, .value=0x2f}, {.addr=0x0474, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x044c, .a=0xbf, .x=0x19, .y=0xc7, .sp=0xbb, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0473, .value=0x2f}, {.addr=0x0474, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x0473, .value=0x2f, .type=IO_READ},
        {.addr=0x0474, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032E) {
    const struct CPU_State initial_cpu = {.pc=0xeabc, .a=0x25, .x=0x28, .y=0xe0, .sp=0x29, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xeabc, .value=0x2f}, {.addr=0xeabd, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xeae7, .a=0x25, .x=0x28, .y=0xe0, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xeabc, .value=0x2f}, {.addr=0xeabd, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xeabc, .value=0x2f, .type=IO_READ},
        {.addr=0xeabd, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_032F) {
    const struct CPU_State initial_cpu = {.pc=0x8794, .a=0xed, .x=0x4e, .y=0x49, .sp=0x26, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8794, .value=0x2f}, {.addr=0x8795, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x879b, .a=0xed, .x=0x4e, .y=0x49, .sp=0x26, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x8794, .value=0x2f}, {.addr=0x8795, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x8794, .value=0x2f, .type=IO_READ},
        {.addr=0x8795, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0330) {
    const struct CPU_State initial_cpu = {.pc=0x3e65, .a=0xe1, .x=0x36, .y=0x65, .sp=0x8e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3e65, .value=0x2f}, {.addr=0x3e66, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x3e17, .a=0xe1, .x=0x36, .y=0x65, .sp=0x8e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3e65, .value=0x2f}, {.addr=0x3e66, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x3e65, .value=0x2f, .type=IO_READ},
        {.addr=0x3e66, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0331) {
    const struct CPU_State initial_cpu = {.pc=0x7d0d, .a=0x7d, .x=0x4d, .y=0x93, .sp=0x01, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0d, .value=0x2f}, {.addr=0x7d0e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x7c91, .a=0x7d, .x=0x4d, .y=0x93, .sp=0x01, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7d0d, .value=0x2f}, {.addr=0x7d0e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x7d0d, .value=0x2f, .type=IO_READ},
        {.addr=0x7d0e, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0332) {
    const struct CPU_State initial_cpu = {.pc=0xb6d0, .a=0xa2, .x=0x76, .y=0x5f, .sp=0xeb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d0, .value=0x2f}, {.addr=0xb6d1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb691, .a=0xa2, .x=0x76, .y=0x5f, .sp=0xeb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb6d0, .value=0x2f}, {.addr=0xb6d1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb6d0, .value=0x2f, .type=IO_READ},
        {.addr=0xb6d1, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0333) {
    const struct CPU_State initial_cpu = {.pc=0x565e, .a=0x65, .x=0xb4, .y=0x68, .sp=0x29, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x565e, .value=0x2f}, {.addr=0x565f, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x5614, .a=0x65, .x=0xb4, .y=0x68, .sp=0x29, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x565e, .value=0x2f}, {.addr=0x565f, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x565e, .value=0x2f, .type=IO_READ},
        {.addr=0x565f, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0334) {
    const struct CPU_State initial_cpu = {.pc=0x1067, .a=0xfc, .x=0x12, .y=0x7f, .sp=0x26, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1067, .value=0x2f}, {.addr=0x1068, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0fff, .a=0xfc, .x=0x12, .y=0x7f, .sp=0x26, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x1067, .value=0x2f}, {.addr=0x1068, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x1067, .value=0x2f, .type=IO_READ},
        {.addr=0x1068, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0335) {
    const struct CPU_State initial_cpu = {.pc=0x3071, .a=0xc9, .x=0x02, .y=0x12, .sp=0x81, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3071, .value=0x2f}, {.addr=0x3072, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x30f1, .a=0xc9, .x=0x02, .y=0x12, .sp=0x81, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x3071, .value=0x2f}, {.addr=0x3072, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x3071, .value=0x2f, .type=IO_READ},
        {.addr=0x3072, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0336) {
    const struct CPU_State initial_cpu = {.pc=0xdab7, .a=0xfd, .x=0x83, .y=0xe6, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xdab7, .value=0x2f}, {.addr=0xdab8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdaa6, .a=0xfd, .x=0x83, .y=0xe6, .sp=0xaa, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdab7, .value=0x2f}, {.addr=0xdab8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdab7, .value=0x2f, .type=IO_READ},
        {.addr=0xdab8, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0337) {
    const struct CPU_State initial_cpu = {.pc=0xc404, .a=0x03, .x=0xb2, .y=0x56, .sp=0xf7, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc404, .value=0x2f}, {.addr=0xc405, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xc410, .a=0x03, .x=0xb2, .y=0x56, .sp=0xf7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc404, .value=0x2f}, {.addr=0xc405, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xc404, .value=0x2f, .type=IO_READ},
        {.addr=0xc405, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0338) {
    const struct CPU_State initial_cpu = {.pc=0x029b, .a=0x5f, .x=0xe4, .y=0x8a, .sp=0x1a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x029b, .value=0x2f}, {.addr=0x029c, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x02eb, .a=0x5f, .x=0xe4, .y=0x8a, .sp=0x1a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x029b, .value=0x2f}, {.addr=0x029c, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x029b, .value=0x2f, .type=IO_READ},
        {.addr=0x029c, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0339) {
    const struct CPU_State initial_cpu = {.pc=0x8320, .a=0x27, .x=0xaa, .y=0xff, .sp=0x86, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8320, .value=0x2f}, {.addr=0x8321, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x8355, .a=0x27, .x=0xaa, .y=0xff, .sp=0x86, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8320, .value=0x2f}, {.addr=0x8321, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x8320, .value=0x2f, .type=IO_READ},
        {.addr=0x8321, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe1af, .a=0x8b, .x=0x9c, .y=0xd0, .sp=0x29, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xe1af, .value=0x2f}, {.addr=0xe1b0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe1f1, .a=0x8b, .x=0x9c, .y=0xd0, .sp=0x29, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xe1af, .value=0x2f}, {.addr=0xe1b0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe1af, .value=0x2f, .type=IO_READ},
        {.addr=0xe1b0, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033B) {
    const struct CPU_State initial_cpu = {.pc=0xff75, .a=0x5f, .x=0x4b, .y=0xe7, .sp=0xef, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xff75, .value=0x2f}, {.addr=0xff76, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xff9a, .a=0x5f, .x=0x4b, .y=0xe7, .sp=0xef, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xff75, .value=0x2f}, {.addr=0xff76, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xff75, .value=0x2f, .type=IO_READ},
        {.addr=0xff76, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1398, .a=0x9d, .x=0x22, .y=0x0f, .sp=0x45, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1398, .value=0x2f}, {.addr=0x1399, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x13a6, .a=0x9d, .x=0x22, .y=0x0f, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1398, .value=0x2f}, {.addr=0x1399, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x1398, .value=0x2f, .type=IO_READ},
        {.addr=0x1399, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033D) {
    const struct CPU_State initial_cpu = {.pc=0x719d, .a=0x2c, .x=0x79, .y=0xce, .sp=0xea, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x719d, .value=0x2f}, {.addr=0x719e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x7190, .a=0x2c, .x=0x79, .y=0xce, .sp=0xea, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x719d, .value=0x2f}, {.addr=0x719e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x719d, .value=0x2f, .type=IO_READ},
        {.addr=0x719e, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033E) {
    const struct CPU_State initial_cpu = {.pc=0x0424, .a=0x55, .x=0x37, .y=0x97, .sp=0xa5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0424, .value=0x2f}, {.addr=0x0425, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x03da, .a=0x55, .x=0x37, .y=0x97, .sp=0xa5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0424, .value=0x2f}, {.addr=0x0425, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x0424, .value=0x2f, .type=IO_READ},
        {.addr=0x0425, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_033F) {
    const struct CPU_State initial_cpu = {.pc=0xcca0, .a=0xd1, .x=0x76, .y=0x0d, .sp=0x92, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xcca0, .value=0x2f}, {.addr=0xcca1, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xccfa, .a=0xd1, .x=0x76, .y=0x0d, .sp=0x92, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xcca0, .value=0x2f}, {.addr=0xcca1, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xcca0, .value=0x2f, .type=IO_READ},
        {.addr=0xcca1, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0340) {
    const struct CPU_State initial_cpu = {.pc=0x929c, .a=0x2a, .x=0xb9, .y=0x42, .sp=0x91, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x929c, .value=0x2f}, {.addr=0x929d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x92eb, .a=0x2a, .x=0xb9, .y=0x42, .sp=0x91, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x929c, .value=0x2f}, {.addr=0x929d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x929c, .value=0x2f, .type=IO_READ},
        {.addr=0x929d, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0341) {
    const struct CPU_State initial_cpu = {.pc=0xeafa, .a=0xa7, .x=0xbd, .y=0x1e, .sp=0x78, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xeafa, .value=0x2f}, {.addr=0xeafb, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xea8e, .a=0xa7, .x=0xbd, .y=0x1e, .sp=0x78, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xeafa, .value=0x2f}, {.addr=0xeafb, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xeafa, .value=0x2f, .type=IO_READ},
        {.addr=0xeafb, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0342) {
    const struct CPU_State initial_cpu = {.pc=0x93ee, .a=0xd8, .x=0x5f, .y=0x6c, .sp=0x19, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x93ee, .value=0x2f}, {.addr=0x93ef, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x93b3, .a=0xd8, .x=0x5f, .y=0x6c, .sp=0x19, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x93ee, .value=0x2f}, {.addr=0x93ef, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x93ee, .value=0x2f, .type=IO_READ},
        {.addr=0x93ef, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0343) {
    const struct CPU_State initial_cpu = {.pc=0x1fad, .a=0x3f, .x=0x51, .y=0x66, .sp=0xf9, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1fad, .value=0x2f}, {.addr=0x1fae, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x1f30, .a=0x3f, .x=0x51, .y=0x66, .sp=0xf9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1fad, .value=0x2f}, {.addr=0x1fae, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x1fad, .value=0x2f, .type=IO_READ},
        {.addr=0x1fae, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0344) {
    const struct CPU_State initial_cpu = {.pc=0x5dfc, .a=0x43, .x=0x97, .y=0x10, .sp=0x39, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5dfc, .value=0x2f}, {.addr=0x5dfd, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x5dd6, .a=0x43, .x=0x97, .y=0x10, .sp=0x39, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5dfc, .value=0x2f}, {.addr=0x5dfd, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x5dfc, .value=0x2f, .type=IO_READ},
        {.addr=0x5dfd, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0345) {
    const struct CPU_State initial_cpu = {.pc=0xbd2c, .a=0xdb, .x=0x24, .y=0x4a, .sp=0xe5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xbd2c, .value=0x2f}, {.addr=0xbd2d, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xbd77, .a=0xdb, .x=0x24, .y=0x4a, .sp=0xe5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbd2c, .value=0x2f}, {.addr=0xbd2d, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xbd2c, .value=0x2f, .type=IO_READ},
        {.addr=0xbd2d, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0346) {
    const struct CPU_State initial_cpu = {.pc=0x889e, .a=0x32, .x=0x67, .y=0xc2, .sp=0x36, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x889e, .value=0x2f}, {.addr=0x889f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x88c0, .a=0x32, .x=0x67, .y=0xc2, .sp=0x36, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x889e, .value=0x2f}, {.addr=0x889f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x889e, .value=0x2f, .type=IO_READ},
        {.addr=0x889f, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0347) {
    const struct CPU_State initial_cpu = {.pc=0x3450, .a=0x7a, .x=0xb4, .y=0x4b, .sp=0xe4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3450, .value=0x2f}, {.addr=0x3451, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x34cb, .a=0x7a, .x=0xb4, .y=0x4b, .sp=0xe4, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3450, .value=0x2f}, {.addr=0x3451, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3450, .value=0x2f, .type=IO_READ},
        {.addr=0x3451, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0348) {
    const struct CPU_State initial_cpu = {.pc=0x835c, .a=0x49, .x=0x79, .y=0x35, .sp=0xbd, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x835c, .value=0x2f}, {.addr=0x835d, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x835d, .a=0x49, .x=0x79, .y=0x35, .sp=0xbd, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x835c, .value=0x2f}, {.addr=0x835d, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x835c, .value=0x2f, .type=IO_READ},
        {.addr=0x835d, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0349) {
    const struct CPU_State initial_cpu = {.pc=0x4c20, .a=0xcf, .x=0xae, .y=0x7a, .sp=0xff, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4c20, .value=0x2f}, {.addr=0x4c21, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4c8f, .a=0xcf, .x=0xae, .y=0x7a, .sp=0xff, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4c20, .value=0x2f}, {.addr=0x4c21, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c20, .value=0x2f, .type=IO_READ},
        {.addr=0x4c21, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034A) {
    const struct CPU_State initial_cpu = {.pc=0x7b8a, .a=0x80, .x=0x4d, .y=0x59, .sp=0x69, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8a, .value=0x2f}, {.addr=0x7b8b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7b8c, .a=0x80, .x=0x4d, .y=0x59, .sp=0x69, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x7b8a, .value=0x2f}, {.addr=0x7b8b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7b8a, .value=0x2f, .type=IO_READ},
        {.addr=0x7b8b, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034B) {
    const struct CPU_State initial_cpu = {.pc=0xed57, .a=0x59, .x=0xdb, .y=0x95, .sp=0x48, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xed57, .value=0x2f}, {.addr=0xed58, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xed72, .a=0x59, .x=0xdb, .y=0x95, .sp=0x48, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xed57, .value=0x2f}, {.addr=0xed58, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xed57, .value=0x2f, .type=IO_READ},
        {.addr=0xed58, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034C) {
    const struct CPU_State initial_cpu = {.pc=0x892a, .a=0x89, .x=0x8a, .y=0xbc, .sp=0x9a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x892a, .value=0x2f}, {.addr=0x892b, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x88cf, .a=0x89, .x=0x8a, .y=0xbc, .sp=0x9a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x892a, .value=0x2f}, {.addr=0x892b, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x892a, .value=0x2f, .type=IO_READ},
        {.addr=0x892b, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034D) {
    const struct CPU_State initial_cpu = {.pc=0xfcd7, .a=0xbe, .x=0x6c, .y=0xcc, .sp=0x25, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd7, .value=0x2f}, {.addr=0xfcd8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfc9f, .a=0xbe, .x=0x6c, .y=0xcc, .sp=0x25, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xfcd7, .value=0x2f}, {.addr=0xfcd8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfcd7, .value=0x2f, .type=IO_READ},
        {.addr=0xfcd8, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034E) {
    const struct CPU_State initial_cpu = {.pc=0xbc8d, .a=0xf8, .x=0x17, .y=0xe6, .sp=0x4e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbc8d, .value=0x2f}, {.addr=0xbc8e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xbc58, .a=0xf8, .x=0x17, .y=0xe6, .sp=0x4e, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xbc8d, .value=0x2f}, {.addr=0xbc8e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xbc8d, .value=0x2f, .type=IO_READ},
        {.addr=0xbc8e, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_034F) {
    const struct CPU_State initial_cpu = {.pc=0x36f6, .a=0x12, .x=0x21, .y=0x0e, .sp=0xbf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x36f6, .value=0x2f}, {.addr=0x36f7, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x372a, .a=0x12, .x=0x21, .y=0x0e, .sp=0xbf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x36f6, .value=0x2f}, {.addr=0x36f7, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x36f6, .value=0x2f, .type=IO_READ},
        {.addr=0x36f7, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa147, .a=0xd8, .x=0x2c, .y=0xf4, .sp=0x1b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa147, .value=0x2f}, {.addr=0xa148, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xa0e0, .a=0xd8, .x=0x2c, .y=0xf4, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa147, .value=0x2f}, {.addr=0xa148, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xa147, .value=0x2f, .type=IO_READ},
        {.addr=0xa148, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0351) {
    const struct CPU_State initial_cpu = {.pc=0xb233, .a=0x65, .x=0x96, .y=0xd2, .sp=0xac, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb233, .value=0x2f}, {.addr=0xb234, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb1e4, .a=0x65, .x=0x96, .y=0xd2, .sp=0xac, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb233, .value=0x2f}, {.addr=0xb234, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb233, .value=0x2f, .type=IO_READ},
        {.addr=0xb234, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0352) {
    const struct CPU_State initial_cpu = {.pc=0xa64a, .a=0x16, .x=0xf1, .y=0x56, .sp=0x4e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa64a, .value=0x2f}, {.addr=0xa64b, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xa6c6, .a=0x16, .x=0xf1, .y=0x56, .sp=0x4e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa64a, .value=0x2f}, {.addr=0xa64b, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xa64a, .value=0x2f, .type=IO_READ},
        {.addr=0xa64b, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0353) {
    const struct CPU_State initial_cpu = {.pc=0x4f1f, .a=0x2b, .x=0x62, .y=0xde, .sp=0xda, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1f, .value=0x2f}, {.addr=0x4f20, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x4ee3, .a=0x2b, .x=0x62, .y=0xde, .sp=0xda, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4f1f, .value=0x2f}, {.addr=0x4f20, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x4f1f, .value=0x2f, .type=IO_READ},
        {.addr=0x4f20, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0354) {
    const struct CPU_State initial_cpu = {.pc=0xb820, .a=0x51, .x=0x72, .y=0xe4, .sp=0x66, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb820, .value=0x2f}, {.addr=0xb821, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xb858, .a=0x51, .x=0x72, .y=0xe4, .sp=0x66, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb820, .value=0x2f}, {.addr=0xb821, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xb820, .value=0x2f, .type=IO_READ},
        {.addr=0xb821, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0355) {
    const struct CPU_State initial_cpu = {.pc=0x14d3, .a=0x19, .x=0xc7, .y=0xdd, .sp=0x97, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x14d3, .value=0x2f}, {.addr=0x14d4, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x14c6, .a=0x19, .x=0xc7, .y=0xdd, .sp=0x97, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x14d3, .value=0x2f}, {.addr=0x14d4, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x14d3, .value=0x2f, .type=IO_READ},
        {.addr=0x14d4, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0356) {
    const struct CPU_State initial_cpu = {.pc=0x914d, .a=0xce, .x=0x3e, .y=0x64, .sp=0x3a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x914d, .value=0x2f}, {.addr=0x914e, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x91c6, .a=0xce, .x=0x3e, .y=0x64, .sp=0x3a, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x914d, .value=0x2f}, {.addr=0x914e, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x914d, .value=0x2f, .type=IO_READ},
        {.addr=0x914e, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0357) {
    const struct CPU_State initial_cpu = {.pc=0xb6a9, .a=0x05, .x=0x4d, .y=0x27, .sp=0x96, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a9, .value=0x2f}, {.addr=0xb6aa, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xb6df, .a=0x05, .x=0x4d, .y=0x27, .sp=0x96, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xb6a9, .value=0x2f}, {.addr=0xb6aa, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xb6a9, .value=0x2f, .type=IO_READ},
        {.addr=0xb6aa, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5bdb, .a=0x33, .x=0x23, .y=0xdc, .sp=0x8d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5bdb, .value=0x2f}, {.addr=0x5bdc, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5bcb, .a=0x33, .x=0x23, .y=0xdc, .sp=0x8d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5bdb, .value=0x2f}, {.addr=0x5bdc, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5bdb, .value=0x2f, .type=IO_READ},
        {.addr=0x5bdc, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf29e, .a=0xca, .x=0x5a, .y=0x03, .sp=0x7d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf29e, .value=0x2f}, {.addr=0xf29f, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf2ec, .a=0xca, .x=0x5a, .y=0x03, .sp=0x7d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf29e, .value=0x2f}, {.addr=0xf29f, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf29e, .value=0x2f, .type=IO_READ},
        {.addr=0xf29f, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035A) {
    const struct CPU_State initial_cpu = {.pc=0x7b4b, .a=0x72, .x=0xb1, .y=0xab, .sp=0xaf, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b4b, .value=0x2f}, {.addr=0x7b4c, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x7af7, .a=0x72, .x=0xb1, .y=0xab, .sp=0xaf, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x7b4b, .value=0x2f}, {.addr=0x7b4c, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x7b4b, .value=0x2f, .type=IO_READ},
        {.addr=0x7b4c, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035B) {
    const struct CPU_State initial_cpu = {.pc=0x603a, .a=0x4e, .x=0x0a, .y=0xeb, .sp=0x9c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x603a, .value=0x2f}, {.addr=0x603b, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x6020, .a=0x4e, .x=0x0a, .y=0xeb, .sp=0x9c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x603a, .value=0x2f}, {.addr=0x603b, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x603a, .value=0x2f, .type=IO_READ},
        {.addr=0x603b, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035C) {
    const struct CPU_State initial_cpu = {.pc=0x9508, .a=0xe9, .x=0x52, .y=0x2f, .sp=0x70, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9508, .value=0x2f}, {.addr=0x9509, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x94c1, .a=0xe9, .x=0x52, .y=0x2f, .sp=0x70, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x9508, .value=0x2f}, {.addr=0x9509, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x9508, .value=0x2f, .type=IO_READ},
        {.addr=0x9509, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035D) {
    const struct CPU_State initial_cpu = {.pc=0xb9ef, .a=0xec, .x=0x8d, .y=0x84, .sp=0xba, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ef, .value=0x2f}, {.addr=0xb9f0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xba31, .a=0xec, .x=0x8d, .y=0x84, .sp=0xba, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xb9ef, .value=0x2f}, {.addr=0xb9f0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb9ef, .value=0x2f, .type=IO_READ},
        {.addr=0xb9f0, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035E) {
    const struct CPU_State initial_cpu = {.pc=0x28da, .a=0x16, .x=0x38, .y=0x10, .sp=0x02, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x28da, .value=0x2f}, {.addr=0x28db, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x28cc, .a=0x16, .x=0x38, .y=0x10, .sp=0x02, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x28da, .value=0x2f}, {.addr=0x28db, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x28da, .value=0x2f, .type=IO_READ},
        {.addr=0x28db, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_035F) {
    const struct CPU_State initial_cpu = {.pc=0x14ed, .a=0x4d, .x=0x1a, .y=0xa9, .sp=0x1b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x14ed, .value=0x2f}, {.addr=0x14ee, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x1472, .a=0x4d, .x=0x1a, .y=0xa9, .sp=0x1b, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x14ed, .value=0x2f}, {.addr=0x14ee, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x14ed, .value=0x2f, .type=IO_READ},
        {.addr=0x14ee, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0360) {
    const struct CPU_State initial_cpu = {.pc=0xa8eb, .a=0xfc, .x=0xef, .y=0xda, .sp=0xb5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8eb, .value=0x2f}, {.addr=0xa8ec, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa8ca, .a=0xfc, .x=0xef, .y=0xda, .sp=0xb5, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xa8eb, .value=0x2f}, {.addr=0xa8ec, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa8eb, .value=0x2f, .type=IO_READ},
        {.addr=0xa8ec, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0361) {
    const struct CPU_State initial_cpu = {.pc=0xb0ca, .a=0x01, .x=0x70, .y=0xa8, .sp=0xb0, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ca, .value=0x2f}, {.addr=0xb0cb, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xb0f3, .a=0x01, .x=0x70, .y=0xa8, .sp=0xb0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb0ca, .value=0x2f}, {.addr=0xb0cb, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xb0ca, .value=0x2f, .type=IO_READ},
        {.addr=0xb0cb, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0362) {
    const struct CPU_State initial_cpu = {.pc=0x8c2b, .a=0x5b, .x=0xe6, .y=0x1f, .sp=0x15, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2b, .value=0x2f}, {.addr=0x8c2c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x8bd8, .a=0x5b, .x=0xe6, .y=0x1f, .sp=0x15, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8c2b, .value=0x2f}, {.addr=0x8c2c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x8c2b, .value=0x2f, .type=IO_READ},
        {.addr=0x8c2c, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0363) {
    const struct CPU_State initial_cpu = {.pc=0xbf96, .a=0x03, .x=0xb9, .y=0x2c, .sp=0xb5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xbf96, .value=0x2f}, {.addr=0xbf97, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xbf1d, .a=0x03, .x=0xb9, .y=0x2c, .sp=0xb5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xbf96, .value=0x2f}, {.addr=0xbf97, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xbf96, .value=0x2f, .type=IO_READ},
        {.addr=0xbf97, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8a9b, .a=0xf8, .x=0xb0, .y=0x2f, .sp=0x64, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9b, .value=0x2f}, {.addr=0x8a9c, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x8acf, .a=0xf8, .x=0xb0, .y=0x2f, .sp=0x64, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x8a9b, .value=0x2f}, {.addr=0x8a9c, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x8a9b, .value=0x2f, .type=IO_READ},
        {.addr=0x8a9c, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0365) {
    const struct CPU_State initial_cpu = {.pc=0xaa8d, .a=0xb8, .x=0xd3, .y=0xd4, .sp=0xf2, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xaa8d, .value=0x2f}, {.addr=0xaa8e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xaa67, .a=0xb8, .x=0xd3, .y=0xd4, .sp=0xf2, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xaa8d, .value=0x2f}, {.addr=0xaa8e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xaa8d, .value=0x2f, .type=IO_READ},
        {.addr=0xaa8e, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0366) {
    const struct CPU_State initial_cpu = {.pc=0x5e1d, .a=0x0c, .x=0xdd, .y=0xac, .sp=0x55, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1d, .value=0x2f}, {.addr=0x5e1e, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5dcf, .a=0x0c, .x=0xdd, .y=0xac, .sp=0x55, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5e1d, .value=0x2f}, {.addr=0x5e1e, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x5e1d, .value=0x2f, .type=IO_READ},
        {.addr=0x5e1e, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0367) {
    const struct CPU_State initial_cpu = {.pc=0xf22e, .a=0xfc, .x=0x91, .y=0x83, .sp=0x18, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf22e, .value=0x2f}, {.addr=0xf22f, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xf23c, .a=0xfc, .x=0x91, .y=0x83, .sp=0x18, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xf22e, .value=0x2f}, {.addr=0xf22f, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xf22e, .value=0x2f, .type=IO_READ},
        {.addr=0xf22f, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0368) {
    const struct CPU_State initial_cpu = {.pc=0x21f8, .a=0xad, .x=0x0f, .y=0x30, .sp=0x12, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x21f8, .value=0x2f}, {.addr=0x21f9, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x223e, .a=0xad, .x=0x0f, .y=0x30, .sp=0x12, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x21f8, .value=0x2f}, {.addr=0x21f9, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x21f8, .value=0x2f, .type=IO_READ},
        {.addr=0x21f9, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0369) {
    const struct CPU_State initial_cpu = {.pc=0x9bf6, .a=0x10, .x=0x18, .y=0x3a, .sp=0xe5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf6, .value=0x2f}, {.addr=0x9bf7, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x9bdb, .a=0x10, .x=0x18, .y=0x3a, .sp=0xe5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9bf6, .value=0x2f}, {.addr=0x9bf7, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x9bf6, .value=0x2f, .type=IO_READ},
        {.addr=0x9bf7, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036A) {
    const struct CPU_State initial_cpu = {.pc=0x9810, .a=0x31, .x=0x92, .y=0x71, .sp=0xa1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9810, .value=0x2f}, {.addr=0x9811, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x984c, .a=0x31, .x=0x92, .y=0x71, .sp=0xa1, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x9810, .value=0x2f}, {.addr=0x9811, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x9810, .value=0x2f, .type=IO_READ},
        {.addr=0x9811, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7254, .a=0x3a, .x=0x0d, .y=0x5f, .sp=0x13, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7254, .value=0x2f}, {.addr=0x7255, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x71e0, .a=0x3a, .x=0x0d, .y=0x5f, .sp=0x13, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7254, .value=0x2f}, {.addr=0x7255, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x7254, .value=0x2f, .type=IO_READ},
        {.addr=0x7255, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa325, .a=0x73, .x=0x82, .y=0x84, .sp=0x1b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa325, .value=0x2f}, {.addr=0xa326, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa303, .a=0x73, .x=0x82, .y=0x84, .sp=0x1b, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xa325, .value=0x2f}, {.addr=0xa326, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa325, .value=0x2f, .type=IO_READ},
        {.addr=0xa326, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036D) {
    const struct CPU_State initial_cpu = {.pc=0xf9fc, .a=0xa2, .x=0xd0, .y=0xea, .sp=0x60, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf9fc, .value=0x2f}, {.addr=0xf9fd, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xfa19, .a=0xa2, .x=0xd0, .y=0xea, .sp=0x60, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf9fc, .value=0x2f}, {.addr=0xf9fd, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xf9fc, .value=0x2f, .type=IO_READ},
        {.addr=0xf9fd, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036E) {
    const struct CPU_State initial_cpu = {.pc=0xc9ac, .a=0xe0, .x=0x14, .y=0x7b, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc9ac, .value=0x2f}, {.addr=0xc9ad, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xc9c0, .a=0xe0, .x=0x14, .y=0x7b, .sp=0x68, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc9ac, .value=0x2f}, {.addr=0xc9ad, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xc9ac, .value=0x2f, .type=IO_READ},
        {.addr=0xc9ad, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_036F) {
    const struct CPU_State initial_cpu = {.pc=0x308a, .a=0xd5, .x=0xeb, .y=0xad, .sp=0x87, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x308a, .value=0x2f}, {.addr=0x308b, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x307b, .a=0xd5, .x=0xeb, .y=0xad, .sp=0x87, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x308a, .value=0x2f}, {.addr=0x308b, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x308a, .value=0x2f, .type=IO_READ},
        {.addr=0x308b, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0370) {
    const struct CPU_State initial_cpu = {.pc=0xa27a, .a=0xe6, .x=0xb6, .y=0x81, .sp=0xf1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa27a, .value=0x2f}, {.addr=0xa27b, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xa260, .a=0xe6, .x=0xb6, .y=0x81, .sp=0xf1, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa27a, .value=0x2f}, {.addr=0xa27b, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xa27a, .value=0x2f, .type=IO_READ},
        {.addr=0xa27b, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0371) {
    const struct CPU_State initial_cpu = {.pc=0x0f57, .a=0x26, .x=0x0c, .y=0x25, .sp=0xbe, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0f57, .value=0x2f}, {.addr=0x0f58, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0ef5, .a=0x26, .x=0x0c, .y=0x25, .sp=0xbe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0f57, .value=0x2f}, {.addr=0x0f58, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0f57, .value=0x2f, .type=IO_READ},
        {.addr=0x0f58, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0372) {
    const struct CPU_State initial_cpu = {.pc=0x56d3, .a=0xdf, .x=0x86, .y=0x93, .sp=0x86, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x56d3, .value=0x2f}, {.addr=0x56d4, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x565a, .a=0xdf, .x=0x86, .y=0x93, .sp=0x86, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x56d3, .value=0x2f}, {.addr=0x56d4, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x56d3, .value=0x2f, .type=IO_READ},
        {.addr=0x56d4, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0373) {
    const struct CPU_State initial_cpu = {.pc=0xb77d, .a=0xf1, .x=0xb2, .y=0x6f, .sp=0xaf, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb77d, .value=0x2f}, {.addr=0xb77e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xb779, .a=0xf1, .x=0xb2, .y=0x6f, .sp=0xaf, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb77d, .value=0x2f}, {.addr=0xb77e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xb77d, .value=0x2f, .type=IO_READ},
        {.addr=0xb77e, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0374) {
    const struct CPU_State initial_cpu = {.pc=0xaca1, .a=0x9b, .x=0x0a, .y=0x2a, .sp=0x38, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xaca1, .value=0x2f}, {.addr=0xaca2, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xad0a, .a=0x9b, .x=0x0a, .y=0x2a, .sp=0x38, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xaca1, .value=0x2f}, {.addr=0xaca2, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xaca1, .value=0x2f, .type=IO_READ},
        {.addr=0xaca2, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0375) {
    const struct CPU_State initial_cpu = {.pc=0x2132, .a=0xdb, .x=0x3e, .y=0x94, .sp=0x1e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2132, .value=0x2f}, {.addr=0x2133, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x216d, .a=0xdb, .x=0x3e, .y=0x94, .sp=0x1e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2132, .value=0x2f}, {.addr=0x2133, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2132, .value=0x2f, .type=IO_READ},
        {.addr=0x2133, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0376) {
    const struct CPU_State initial_cpu = {.pc=0xee68, .a=0xfe, .x=0xe9, .y=0x36, .sp=0x41, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xee68, .value=0x2f}, {.addr=0xee69, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xeee2, .a=0xfe, .x=0xe9, .y=0x36, .sp=0x41, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xee68, .value=0x2f}, {.addr=0xee69, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xee68, .value=0x2f, .type=IO_READ},
        {.addr=0xee69, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0377) {
    const struct CPU_State initial_cpu = {.pc=0x343a, .a=0xfb, .x=0x28, .y=0x5e, .sp=0x9f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x343a, .value=0x2f}, {.addr=0x343b, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x34b0, .a=0xfb, .x=0x28, .y=0x5e, .sp=0x9f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x343a, .value=0x2f}, {.addr=0x343b, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x343a, .value=0x2f, .type=IO_READ},
        {.addr=0x343b, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0378) {
    const struct CPU_State initial_cpu = {.pc=0x4a0b, .a=0x84, .x=0x36, .y=0x19, .sp=0x8b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x4a0b, .value=0x2f}, {.addr=0x4a0c, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x49a2, .a=0x84, .x=0x36, .y=0x19, .sp=0x8b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4a0b, .value=0x2f}, {.addr=0x4a0c, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x4a0b, .value=0x2f, .type=IO_READ},
        {.addr=0x4a0c, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0379) {
    const struct CPU_State initial_cpu = {.pc=0xf405, .a=0x98, .x=0xe9, .y=0x42, .sp=0x5c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf405, .value=0x2f}, {.addr=0xf406, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xf3e0, .a=0x98, .x=0xe9, .y=0x42, .sp=0x5c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xf405, .value=0x2f}, {.addr=0xf406, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xf405, .value=0x2f, .type=IO_READ},
        {.addr=0xf406, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037A) {
    const struct CPU_State initial_cpu = {.pc=0xa171, .a=0x41, .x=0x2a, .y=0x8f, .sp=0xe8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa171, .value=0x2f}, {.addr=0xa172, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xa1e8, .a=0x41, .x=0x2a, .y=0x8f, .sp=0xe8, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xa171, .value=0x2f}, {.addr=0xa172, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xa171, .value=0x2f, .type=IO_READ},
        {.addr=0xa172, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe03d, .a=0x07, .x=0x1c, .y=0xb4, .sp=0xc6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xe03d, .value=0x2f}, {.addr=0xe03e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe005, .a=0x07, .x=0x1c, .y=0xb4, .sp=0xc6, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xe03d, .value=0x2f}, {.addr=0xe03e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe03d, .value=0x2f, .type=IO_READ},
        {.addr=0xe03e, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037C) {
    const struct CPU_State initial_cpu = {.pc=0x0808, .a=0x94, .x=0x31, .y=0x74, .sp=0xc1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0808, .value=0x2f}, {.addr=0x0809, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x084a, .a=0x94, .x=0x31, .y=0x74, .sp=0xc1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0808, .value=0x2f}, {.addr=0x0809, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0808, .value=0x2f, .type=IO_READ},
        {.addr=0x0809, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037D) {
    const struct CPU_State initial_cpu = {.pc=0x4a97, .a=0xc0, .x=0xa1, .y=0x2d, .sp=0x95, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4a97, .value=0x2f}, {.addr=0x4a98, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x4a32, .a=0xc0, .x=0xa1, .y=0x2d, .sp=0x95, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4a97, .value=0x2f}, {.addr=0x4a98, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x4a97, .value=0x2f, .type=IO_READ},
        {.addr=0x4a98, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037E) {
    const struct CPU_State initial_cpu = {.pc=0x4d95, .a=0x62, .x=0xd2, .y=0xf3, .sp=0xe2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4d95, .value=0x2f}, {.addr=0x4d96, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x4def, .a=0x62, .x=0xd2, .y=0xf3, .sp=0xe2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4d95, .value=0x2f}, {.addr=0x4d96, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x4d95, .value=0x2f, .type=IO_READ},
        {.addr=0x4d96, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_037F) {
    const struct CPU_State initial_cpu = {.pc=0x16e7, .a=0xb2, .x=0x09, .y=0x94, .sp=0xf6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x16e7, .value=0x2f}, {.addr=0x16e8, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x167a, .a=0xb2, .x=0x09, .y=0x94, .sp=0xf6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x16e7, .value=0x2f}, {.addr=0x16e8, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x16e7, .value=0x2f, .type=IO_READ},
        {.addr=0x16e8, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0380) {
    const struct CPU_State initial_cpu = {.pc=0xc06b, .a=0xa5, .x=0xc7, .y=0xee, .sp=0x05, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc06b, .value=0x2f}, {.addr=0xc06c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc009, .a=0xa5, .x=0xc7, .y=0xee, .sp=0x05, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc06b, .value=0x2f}, {.addr=0xc06c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc06b, .value=0x2f, .type=IO_READ},
        {.addr=0xc06c, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0381) {
    const struct CPU_State initial_cpu = {.pc=0xecd7, .a=0x0d, .x=0x10, .y=0x6e, .sp=0x3b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xecd7, .value=0x2f}, {.addr=0xecd8, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xec9a, .a=0x0d, .x=0x10, .y=0x6e, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xecd7, .value=0x2f}, {.addr=0xecd8, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xecd7, .value=0x2f, .type=IO_READ},
        {.addr=0xecd8, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0382) {
    const struct CPU_State initial_cpu = {.pc=0x9245, .a=0x98, .x=0x1e, .y=0x1e, .sp=0x28, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9245, .value=0x2f}, {.addr=0x9246, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x9273, .a=0x98, .x=0x1e, .y=0x1e, .sp=0x28, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x9245, .value=0x2f}, {.addr=0x9246, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x9245, .value=0x2f, .type=IO_READ},
        {.addr=0x9246, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0383) {
    const struct CPU_State initial_cpu = {.pc=0x33d4, .a=0xe0, .x=0x2c, .y=0xe6, .sp=0x9a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x33d4, .value=0x2f}, {.addr=0x33d5, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x342b, .a=0xe0, .x=0x2c, .y=0xe6, .sp=0x9a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x33d4, .value=0x2f}, {.addr=0x33d5, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x33d4, .value=0x2f, .type=IO_READ},
        {.addr=0x33d5, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0384) {
    const struct CPU_State initial_cpu = {.pc=0xadda, .a=0x8f, .x=0xa0, .y=0xeb, .sp=0x2c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xadda, .value=0x2f}, {.addr=0xaddb, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xadfb, .a=0x8f, .x=0xa0, .y=0xeb, .sp=0x2c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xadda, .value=0x2f}, {.addr=0xaddb, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xadda, .value=0x2f, .type=IO_READ},
        {.addr=0xaddb, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2bdf, .a=0x1b, .x=0xd4, .y=0x41, .sp=0xef, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2bdf, .value=0x2f}, {.addr=0x2be0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2c07, .a=0x1b, .x=0xd4, .y=0x41, .sp=0xef, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x2bdf, .value=0x2f}, {.addr=0x2be0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2bdf, .value=0x2f, .type=IO_READ},
        {.addr=0x2be0, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0386) {
    const struct CPU_State initial_cpu = {.pc=0xa0df, .a=0x3d, .x=0xa6, .y=0x1a, .sp=0x62, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa0df, .value=0x2f}, {.addr=0xa0e0, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xa137, .a=0x3d, .x=0xa6, .y=0x1a, .sp=0x62, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa0df, .value=0x2f}, {.addr=0xa0e0, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xa0df, .value=0x2f, .type=IO_READ},
        {.addr=0xa0e0, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0387) {
    const struct CPU_State initial_cpu = {.pc=0x9905, .a=0x02, .x=0x14, .y=0x31, .sp=0xb9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x9905, .value=0x2f}, {.addr=0x9906, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9901, .a=0x02, .x=0x14, .y=0x31, .sp=0xb9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9905, .value=0x2f}, {.addr=0x9906, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x9905, .value=0x2f, .type=IO_READ},
        {.addr=0x9906, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0388) {
    const struct CPU_State initial_cpu = {.pc=0x82aa, .a=0x93, .x=0x5b, .y=0x1b, .sp=0xa9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x82aa, .value=0x2f}, {.addr=0x82ab, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x8290, .a=0x93, .x=0x5b, .y=0x1b, .sp=0xa9, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x82aa, .value=0x2f}, {.addr=0x82ab, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x82aa, .value=0x2f, .type=IO_READ},
        {.addr=0x82ab, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0389) {
    const struct CPU_State initial_cpu = {.pc=0xafc2, .a=0xd7, .x=0x54, .y=0xc5, .sp=0xf7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xafc2, .value=0x2f}, {.addr=0xafc3, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xaf90, .a=0xd7, .x=0x54, .y=0xc5, .sp=0xf7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xafc2, .value=0x2f}, {.addr=0xafc3, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xafc2, .value=0x2f, .type=IO_READ},
        {.addr=0xafc3, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038A) {
    const struct CPU_State initial_cpu = {.pc=0x0975, .a=0xbe, .x=0xde, .y=0x2d, .sp=0x8f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0975, .value=0x2f}, {.addr=0x0976, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x098b, .a=0xbe, .x=0xde, .y=0x2d, .sp=0x8f, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0975, .value=0x2f}, {.addr=0x0976, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x0975, .value=0x2f, .type=IO_READ},
        {.addr=0x0976, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038B) {
    const struct CPU_State initial_cpu = {.pc=0x8178, .a=0xa3, .x=0x4a, .y=0x7f, .sp=0x52, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8178, .value=0x2f}, {.addr=0x8179, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x814b, .a=0xa3, .x=0x4a, .y=0x7f, .sp=0x52, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x8178, .value=0x2f}, {.addr=0x8179, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x8178, .value=0x2f, .type=IO_READ},
        {.addr=0x8179, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038C) {
    const struct CPU_State initial_cpu = {.pc=0xd398, .a=0x26, .x=0xa9, .y=0x94, .sp=0x53, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd398, .value=0x2f}, {.addr=0xd399, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xd351, .a=0x26, .x=0xa9, .y=0x94, .sp=0x53, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xd398, .value=0x2f}, {.addr=0xd399, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xd398, .value=0x2f, .type=IO_READ},
        {.addr=0xd399, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2887, .a=0xe2, .x=0x04, .y=0x15, .sp=0xfd, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2887, .value=0x2f}, {.addr=0x2888, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x28d3, .a=0xe2, .x=0x04, .y=0x15, .sp=0xfd, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x2887, .value=0x2f}, {.addr=0x2888, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x2887, .value=0x2f, .type=IO_READ},
        {.addr=0x2888, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038E) {
    const struct CPU_State initial_cpu = {.pc=0x13f6, .a=0x55, .x=0x0c, .y=0x9b, .sp=0xb7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x13f6, .value=0x2f}, {.addr=0x13f7, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x13c7, .a=0x55, .x=0x0c, .y=0x9b, .sp=0xb7, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x13f6, .value=0x2f}, {.addr=0x13f7, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x13f6, .value=0x2f, .type=IO_READ},
        {.addr=0x13f7, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_038F) {
    const struct CPU_State initial_cpu = {.pc=0xe498, .a=0xce, .x=0x78, .y=0x15, .sp=0x62, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe498, .value=0x2f}, {.addr=0xe499, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xe451, .a=0xce, .x=0x78, .y=0x15, .sp=0x62, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe498, .value=0x2f}, {.addr=0xe499, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xe498, .value=0x2f, .type=IO_READ},
        {.addr=0xe499, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0390) {
    const struct CPU_State initial_cpu = {.pc=0x37dd, .a=0x9e, .x=0xda, .y=0x15, .sp=0x32, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x37dd, .value=0x2f}, {.addr=0x37de, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3828, .a=0x9e, .x=0xda, .y=0x15, .sp=0x32, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x37dd, .value=0x2f}, {.addr=0x37de, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x37dd, .value=0x2f, .type=IO_READ},
        {.addr=0x37de, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0391) {
    const struct CPU_State initial_cpu = {.pc=0xc584, .a=0xbb, .x=0xe3, .y=0x6c, .sp=0x89, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc584, .value=0x2f}, {.addr=0xc585, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc5aa, .a=0xbb, .x=0xe3, .y=0x6c, .sp=0x89, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc584, .value=0x2f}, {.addr=0xc585, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc584, .value=0x2f, .type=IO_READ},
        {.addr=0xc585, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0392) {
    const struct CPU_State initial_cpu = {.pc=0x07e2, .a=0xe4, .x=0x4f, .y=0xd5, .sp=0xe0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x07e2, .value=0x2f}, {.addr=0x07e3, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x0813, .a=0xe4, .x=0x4f, .y=0xd5, .sp=0xe0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x07e2, .value=0x2f}, {.addr=0x07e3, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x07e2, .value=0x2f, .type=IO_READ},
        {.addr=0x07e3, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0393) {
    const struct CPU_State initial_cpu = {.pc=0x1422, .a=0x19, .x=0x66, .y=0xc4, .sp=0x95, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x1422, .value=0x2f}, {.addr=0x1423, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x1422, .a=0x19, .x=0x66, .y=0xc4, .sp=0x95, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x1422, .value=0x2f}, {.addr=0x1423, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x1422, .value=0x2f, .type=IO_READ},
        {.addr=0x1423, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0394) {
    const struct CPU_State initial_cpu = {.pc=0x413b, .a=0xef, .x=0x57, .y=0xe3, .sp=0xb1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x413b, .value=0x2f}, {.addr=0x413c, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x41a5, .a=0xef, .x=0x57, .y=0xe3, .sp=0xb1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x413b, .value=0x2f}, {.addr=0x413c, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x413b, .value=0x2f, .type=IO_READ},
        {.addr=0x413c, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0395) {
    const struct CPU_State initial_cpu = {.pc=0xf880, .a=0x06, .x=0x52, .y=0xdb, .sp=0x15, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf880, .value=0x2f}, {.addr=0xf881, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf881, .a=0x06, .x=0x52, .y=0xdb, .sp=0x15, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf880, .value=0x2f}, {.addr=0xf881, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf880, .value=0x2f, .type=IO_READ},
        {.addr=0xf881, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1aca, .a=0xae, .x=0xd8, .y=0xa8, .sp=0x35, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1aca, .value=0x2f}, {.addr=0x1acb, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x1a78, .a=0xae, .x=0xd8, .y=0xa8, .sp=0x35, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x1aca, .value=0x2f}, {.addr=0x1acb, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x1aca, .value=0x2f, .type=IO_READ},
        {.addr=0x1acb, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4876, .a=0xf9, .x=0x0d, .y=0x37, .sp=0x0c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4876, .value=0x2f}, {.addr=0x4877, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x4816, .a=0xf9, .x=0x0d, .y=0x37, .sp=0x0c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4876, .value=0x2f}, {.addr=0x4877, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x4876, .value=0x2f, .type=IO_READ},
        {.addr=0x4877, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0398) {
    const struct CPU_State initial_cpu = {.pc=0x25cc, .a=0x14, .x=0x55, .y=0xd2, .sp=0x41, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x25cc, .value=0x2f}, {.addr=0x25cd, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x2640, .a=0x14, .x=0x55, .y=0xd2, .sp=0x41, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x25cc, .value=0x2f}, {.addr=0x25cd, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x25cc, .value=0x2f, .type=IO_READ},
        {.addr=0x25cd, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_0399) {
    const struct CPU_State initial_cpu = {.pc=0x3f25, .a=0x1b, .x=0x01, .y=0xf6, .sp=0xc1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3f25, .value=0x2f}, {.addr=0x3f26, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x3f5c, .a=0x1b, .x=0x01, .y=0xf6, .sp=0xc1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3f25, .value=0x2f}, {.addr=0x3f26, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x3f25, .value=0x2f, .type=IO_READ},
        {.addr=0x3f26, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039A) {
    const struct CPU_State initial_cpu = {.pc=0xdb3c, .a=0x72, .x=0xbf, .y=0xb9, .sp=0xd7, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xdb3c, .value=0x2f}, {.addr=0xdb3d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xdafc, .a=0x72, .x=0xbf, .y=0xb9, .sp=0xd7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdb3c, .value=0x2f}, {.addr=0xdb3d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xdb3c, .value=0x2f, .type=IO_READ},
        {.addr=0xdb3d, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039B) {
    const struct CPU_State initial_cpu = {.pc=0xafdb, .a=0xcd, .x=0x82, .y=0xa8, .sp=0x68, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xafdb, .value=0x2f}, {.addr=0xafdc, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xaf78, .a=0xcd, .x=0x82, .y=0xa8, .sp=0x68, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xafdb, .value=0x2f}, {.addr=0xafdc, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xafdb, .value=0x2f, .type=IO_READ},
        {.addr=0xafdc, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039C) {
    const struct CPU_State initial_cpu = {.pc=0x4781, .a=0x33, .x=0xf8, .y=0x58, .sp=0x6f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4781, .value=0x2f}, {.addr=0x4782, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x47d0, .a=0x33, .x=0xf8, .y=0x58, .sp=0x6f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x4781, .value=0x2f}, {.addr=0x4782, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4781, .value=0x2f, .type=IO_READ},
        {.addr=0x4782, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039D) {
    const struct CPU_State initial_cpu = {.pc=0x78c1, .a=0xec, .x=0xf8, .y=0x78, .sp=0x8b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x78c1, .value=0x2f}, {.addr=0x78c2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x78a1, .a=0xec, .x=0xf8, .y=0x78, .sp=0x8b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x78c1, .value=0x2f}, {.addr=0x78c2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x78c1, .value=0x2f, .type=IO_READ},
        {.addr=0x78c2, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039E) {
    const struct CPU_State initial_cpu = {.pc=0x5dcb, .a=0x55, .x=0xcb, .y=0xf5, .sp=0xd5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcb, .value=0x2f}, {.addr=0x5dcc, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x5d79, .a=0x55, .x=0xcb, .y=0xf5, .sp=0xd5, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5dcb, .value=0x2f}, {.addr=0x5dcc, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x5dcb, .value=0x2f, .type=IO_READ},
        {.addr=0x5dcc, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_039F) {
    const struct CPU_State initial_cpu = {.pc=0x1cf7, .a=0xfc, .x=0x3d, .y=0xb5, .sp=0x7f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf7, .value=0x2f}, {.addr=0x1cf8, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x1ce5, .a=0xfc, .x=0x3d, .y=0xb5, .sp=0x7f, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x1cf7, .value=0x2f}, {.addr=0x1cf8, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x1cf7, .value=0x2f, .type=IO_READ},
        {.addr=0x1cf8, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xcb17, .a=0xc3, .x=0x4d, .y=0x83, .sp=0x38, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xcb17, .value=0x2f}, {.addr=0xcb18, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcaad, .a=0xc3, .x=0x4d, .y=0x83, .sp=0x38, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xcb17, .value=0x2f}, {.addr=0xcb18, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcb17, .value=0x2f, .type=IO_READ},
        {.addr=0xcb18, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xdd4b, .a=0x64, .x=0xc6, .y=0xe1, .sp=0x98, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4b, .value=0x2f}, {.addr=0xdd4c, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xdd66, .a=0x64, .x=0xc6, .y=0xe1, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdd4b, .value=0x2f}, {.addr=0xdd4c, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xdd4b, .value=0x2f, .type=IO_READ},
        {.addr=0xdd4c, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xbb21, .a=0x81, .x=0x5a, .y=0x5f, .sp=0x7f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xbb21, .value=0x2f}, {.addr=0xbb22, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xbaab, .a=0x81, .x=0x5a, .y=0x5f, .sp=0x7f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xbb21, .value=0x2f}, {.addr=0xbb22, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xbb21, .value=0x2f, .type=IO_READ},
        {.addr=0xbb22, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xaae6, .a=0x16, .x=0xdf, .y=0x24, .sp=0x69, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xaae6, .value=0x2f}, {.addr=0xaae7, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xab53, .a=0x16, .x=0xdf, .y=0x24, .sp=0x69, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xaae6, .value=0x2f}, {.addr=0xaae7, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xaae6, .value=0x2f, .type=IO_READ},
        {.addr=0xaae7, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4859, .a=0x82, .x=0xb7, .y=0xd3, .sp=0xdf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4859, .value=0x2f}, {.addr=0x485a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4861, .a=0x82, .x=0xb7, .y=0xd3, .sp=0xdf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x4859, .value=0x2f}, {.addr=0x485a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4859, .value=0x2f, .type=IO_READ},
        {.addr=0x485a, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x1dde, .a=0x6e, .x=0x05, .y=0xae, .sp=0x20, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1dde, .value=0x2f}, {.addr=0x1ddf, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x1dc2, .a=0x6e, .x=0x05, .y=0xae, .sp=0x20, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1dde, .value=0x2f}, {.addr=0x1ddf, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x1dde, .value=0x2f, .type=IO_READ},
        {.addr=0x1ddf, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x63aa, .a=0xb9, .x=0x02, .y=0x7c, .sp=0x03, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x63aa, .value=0x2f}, {.addr=0x63ab, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x6424, .a=0xb9, .x=0x02, .y=0x7c, .sp=0x03, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x63aa, .value=0x2f}, {.addr=0x63ab, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x63aa, .value=0x2f, .type=IO_READ},
        {.addr=0x63ab, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xee38, .a=0x99, .x=0x21, .y=0x87, .sp=0x06, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xee38, .value=0x2f}, {.addr=0xee39, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xedbe, .a=0x99, .x=0x21, .y=0x87, .sp=0x06, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xee38, .value=0x2f}, {.addr=0xee39, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xee38, .value=0x2f, .type=IO_READ},
        {.addr=0xee39, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x7d55, .a=0xed, .x=0xc5, .y=0x93, .sp=0x43, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7d55, .value=0x2f}, {.addr=0x7d56, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x7d24, .a=0xed, .x=0xc5, .y=0x93, .sp=0x43, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7d55, .value=0x2f}, {.addr=0x7d56, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x7d55, .value=0x2f, .type=IO_READ},
        {.addr=0x7d56, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x1e3e, .a=0x26, .x=0x1b, .y=0xd6, .sp=0xfd, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x1e3e, .value=0x2f}, {.addr=0x1e3f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x1e4a, .a=0x26, .x=0x1b, .y=0xd6, .sp=0xfd, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1e3e, .value=0x2f}, {.addr=0x1e3f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x1e3e, .value=0x2f, .type=IO_READ},
        {.addr=0x1e3f, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x8082, .a=0x43, .x=0x09, .y=0xee, .sp=0xe2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x8082, .value=0x2f}, {.addr=0x8083, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x802d, .a=0x43, .x=0x09, .y=0xee, .sp=0xe2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8082, .value=0x2f}, {.addr=0x8083, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x8082, .value=0x2f, .type=IO_READ},
        {.addr=0x8083, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xfea0, .a=0xfe, .x=0x1d, .y=0x06, .sp=0x08, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xfea0, .value=0x2f}, {.addr=0xfea1, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xfe92, .a=0xfe, .x=0x1d, .y=0x06, .sp=0x08, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfea0, .value=0x2f}, {.addr=0xfea1, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xfea0, .value=0x2f, .type=IO_READ},
        {.addr=0xfea1, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xa811, .a=0xaf, .x=0xb9, .y=0x18, .sp=0x47, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa811, .value=0x2f}, {.addr=0xa812, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xa83f, .a=0xaf, .x=0xb9, .y=0x18, .sp=0x47, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa811, .value=0x2f}, {.addr=0xa812, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xa811, .value=0x2f, .type=IO_READ},
        {.addr=0xa812, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x3172, .a=0x4a, .x=0xf3, .y=0x11, .sp=0x71, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3172, .value=0x2f}, {.addr=0x3173, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x31ad, .a=0x4a, .x=0xf3, .y=0x11, .sp=0x71, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3172, .value=0x2f}, {.addr=0x3173, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x3172, .value=0x2f, .type=IO_READ},
        {.addr=0x3173, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x6bb9, .a=0x99, .x=0x16, .y=0x68, .sp=0xbd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb9, .value=0x2f}, {.addr=0x6bba, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x6b72, .a=0x99, .x=0x16, .y=0x68, .sp=0xbd, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x6bb9, .value=0x2f}, {.addr=0x6bba, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x6bb9, .value=0x2f, .type=IO_READ},
        {.addr=0x6bba, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x9b40, .a=0x5c, .x=0xe0, .y=0x7c, .sp=0x16, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9b40, .value=0x2f}, {.addr=0x9b41, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9b9a, .a=0x5c, .x=0xe0, .y=0x7c, .sp=0x16, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x9b40, .value=0x2f}, {.addr=0x9b41, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9b40, .value=0x2f, .type=IO_READ},
        {.addr=0x9b41, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x1aeb, .a=0xc8, .x=0x69, .y=0x2a, .sp=0xa6, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1aeb, .value=0x2f}, {.addr=0x1aec, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x1a72, .a=0xc8, .x=0x69, .y=0x2a, .sp=0xa6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x1aeb, .value=0x2f}, {.addr=0x1aec, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1aeb, .value=0x2f, .type=IO_READ},
        {.addr=0x1aec, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xfa4c, .a=0xc3, .x=0x06, .y=0xef, .sp=0x1d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4c, .value=0x2f}, {.addr=0xfa4d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xf9e2, .a=0xc3, .x=0x06, .y=0xef, .sp=0x1d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfa4c, .value=0x2f}, {.addr=0xfa4d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xfa4c, .value=0x2f, .type=IO_READ},
        {.addr=0xfa4d, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xc56e, .a=0x15, .x=0xfb, .y=0x52, .sp=0xd5, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xc56e, .value=0x2f}, {.addr=0xc56f, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xc54e, .a=0x15, .x=0xfb, .y=0x52, .sp=0xd5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc56e, .value=0x2f}, {.addr=0xc56f, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xc56e, .value=0x2f, .type=IO_READ},
        {.addr=0xc56f, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x5da6, .a=0x63, .x=0xfd, .y=0x12, .sp=0xc2, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x5da6, .value=0x2f}, {.addr=0x5da7, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5d4f, .a=0x63, .x=0xfd, .y=0x12, .sp=0xc2, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x5da6, .value=0x2f}, {.addr=0x5da7, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5da6, .value=0x2f, .type=IO_READ},
        {.addr=0x5da7, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2a9f, .a=0x65, .x=0x65, .y=0x85, .sp=0xeb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2a9f, .value=0x2f}, {.addr=0x2aa0, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2a36, .a=0x65, .x=0x65, .y=0x85, .sp=0xeb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2a9f, .value=0x2f}, {.addr=0x2aa0, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2a9f, .value=0x2f, .type=IO_READ},
        {.addr=0x2aa0, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x5175, .a=0xfa, .x=0x2e, .y=0x4f, .sp=0x89, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5175, .value=0x2f}, {.addr=0x5176, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0xfa, .x=0x2e, .y=0x4f, .sp=0x89, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5175, .value=0x2f}, {.addr=0x5176, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x5175, .value=0x2f, .type=IO_READ},
        {.addr=0x5176, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xee92, .a=0x86, .x=0x91, .y=0x8e, .sp=0x08, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xee92, .value=0x2f}, {.addr=0xee93, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xeede, .a=0x86, .x=0x91, .y=0x8e, .sp=0x08, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xee92, .value=0x2f}, {.addr=0xee93, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xee92, .value=0x2f, .type=IO_READ},
        {.addr=0xee93, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2224, .a=0xed, .x=0x28, .y=0x1e, .sp=0x99, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x2224, .value=0x2f}, {.addr=0x2225, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x2227, .a=0xed, .x=0x28, .y=0x1e, .sp=0x99, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2224, .value=0x2f}, {.addr=0x2225, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x2224, .value=0x2f, .type=IO_READ},
        {.addr=0x2225, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x2dfb, .a=0xd9, .x=0x8d, .y=0x4f, .sp=0x6e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2dfb, .value=0x2f}, {.addr=0x2dfc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2e19, .a=0xd9, .x=0x8d, .y=0x4f, .sp=0x6e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2dfb, .value=0x2f}, {.addr=0x2dfc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2dfb, .value=0x2f, .type=IO_READ},
        {.addr=0x2dfc, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xc8fc, .a=0x6c, .x=0x3f, .y=0xa6, .sp=0x51, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8fc, .value=0x2f}, {.addr=0xc8fd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc89d, .a=0x6c, .x=0x3f, .y=0xa6, .sp=0x51, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xc8fc, .value=0x2f}, {.addr=0xc8fd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc8fc, .value=0x2f, .type=IO_READ},
        {.addr=0xc8fd, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xc41f, .a=0xf0, .x=0x0c, .y=0x6b, .sp=0xc5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc41f, .value=0x2f}, {.addr=0xc420, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc400, .a=0xf0, .x=0x0c, .y=0x6b, .sp=0xc5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc41f, .value=0x2f}, {.addr=0xc420, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc41f, .value=0x2f, .type=IO_READ},
        {.addr=0xc420, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x50f8, .a=0xdf, .x=0x27, .y=0xe6, .sp=0x4f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x50f8, .value=0x2f}, {.addr=0x50f9, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x5138, .a=0xdf, .x=0x27, .y=0xe6, .sp=0x4f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x50f8, .value=0x2f}, {.addr=0x50f9, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x50f8, .value=0x2f, .type=IO_READ},
        {.addr=0x50f9, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x4e55, .a=0x45, .x=0xaa, .y=0x07, .sp=0xab, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e55, .value=0x2f}, {.addr=0x4e56, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x4dd8, .a=0x45, .x=0xaa, .y=0x07, .sp=0xab, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x4e55, .value=0x2f}, {.addr=0x4e56, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x4e55, .value=0x2f, .type=IO_READ},
        {.addr=0x4e56, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x7ced, .a=0x83, .x=0xf3, .y=0xbb, .sp=0x76, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x7ced, .value=0x2f}, {.addr=0x7cee, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x7ca7, .a=0x83, .x=0xf3, .y=0xbb, .sp=0x76, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7ced, .value=0x2f}, {.addr=0x7cee, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x7ced, .value=0x2f, .type=IO_READ},
        {.addr=0x7cee, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x5055, .a=0x5d, .x=0xd7, .y=0x47, .sp=0xdb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5055, .value=0x2f}, {.addr=0x5056, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x508e, .a=0x5d, .x=0xd7, .y=0x47, .sp=0xdb, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x5055, .value=0x2f}, {.addr=0x5056, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x5055, .value=0x2f, .type=IO_READ},
        {.addr=0x5056, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb2e2, .a=0xdf, .x=0xde, .y=0x63, .sp=0x1f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e2, .value=0x2f}, {.addr=0xb2e3, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xb302, .a=0xdf, .x=0xde, .y=0x63, .sp=0x1f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb2e2, .value=0x2f}, {.addr=0xb2e3, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xb2e2, .value=0x2f, .type=IO_READ},
        {.addr=0xb2e3, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x87ea, .a=0xf8, .x=0x1d, .y=0x7e, .sp=0x53, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x87ea, .value=0x2f}, {.addr=0x87eb, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x880b, .a=0xf8, .x=0x1d, .y=0x7e, .sp=0x53, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x87ea, .value=0x2f}, {.addr=0x87eb, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x87ea, .value=0x2f, .type=IO_READ},
        {.addr=0x87eb, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xd9af, .a=0x06, .x=0x06, .y=0x3a, .sp=0x9c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd9af, .value=0x2f}, {.addr=0xd9b0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xd9b8, .a=0x06, .x=0x06, .y=0x3a, .sp=0x9c, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd9af, .value=0x2f}, {.addr=0xd9b0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xd9af, .value=0x2f, .type=IO_READ},
        {.addr=0xd9b0, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x28a9, .a=0x83, .x=0x3d, .y=0xa3, .sp=0x74, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x28a9, .value=0x2f}, {.addr=0x28aa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x28cb, .a=0x83, .x=0x3d, .y=0xa3, .sp=0x74, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x28a9, .value=0x2f}, {.addr=0x28aa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x28a9, .value=0x2f, .type=IO_READ},
        {.addr=0x28aa, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x7ff2, .a=0xb4, .x=0x74, .y=0xe3, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff2, .value=0x2f}, {.addr=0x7ff3, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x7fe3, .a=0xb4, .x=0x74, .y=0xe3, .sp=0x28, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x7ff2, .value=0x2f}, {.addr=0x7ff3, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x7ff2, .value=0x2f, .type=IO_READ},
        {.addr=0x7ff3, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x66fc, .a=0xdb, .x=0xc8, .y=0x95, .sp=0xda, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x66fc, .value=0x2f}, {.addr=0x66fd, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x670f, .a=0xdb, .x=0xc8, .y=0x95, .sp=0xda, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x66fc, .value=0x2f}, {.addr=0x66fd, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x66fc, .value=0x2f, .type=IO_READ},
        {.addr=0x66fd, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xbb9e, .a=0x77, .x=0xfa, .y=0x1d, .sp=0x78, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9e, .value=0x2f}, {.addr=0xbb9f, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xbb2b, .a=0x77, .x=0xfa, .y=0x1d, .sp=0x78, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xbb9e, .value=0x2f}, {.addr=0xbb9f, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xbb9e, .value=0x2f, .type=IO_READ},
        {.addr=0xbb9f, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x5be6, .a=0xe4, .x=0xc2, .y=0xb1, .sp=0x66, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5be6, .value=0x2f}, {.addr=0x5be7, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x5b6b, .a=0xe4, .x=0xc2, .y=0xb1, .sp=0x66, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5be6, .value=0x2f}, {.addr=0x5be7, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x5be6, .value=0x2f, .type=IO_READ},
        {.addr=0x5be7, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x9a4a, .a=0x52, .x=0xd9, .y=0x47, .sp=0x44, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4a, .value=0x2f}, {.addr=0x9a4b, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x9a54, .a=0x52, .x=0xd9, .y=0x47, .sp=0x44, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9a4a, .value=0x2f}, {.addr=0x9a4b, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x9a4a, .value=0x2f, .type=IO_READ},
        {.addr=0x9a4b, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x1d19, .a=0xbe, .x=0x9e, .y=0x28, .sp=0xb6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1d19, .value=0x2f}, {.addr=0x1d1a, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x1cf9, .a=0xbe, .x=0x9e, .y=0x28, .sp=0xb6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1d19, .value=0x2f}, {.addr=0x1d1a, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1d19, .value=0x2f, .type=IO_READ},
        {.addr=0x1d1a, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x59dd, .a=0xe5, .x=0x52, .y=0x80, .sp=0x6b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x59dd, .value=0x2f}, {.addr=0x59de, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x5a10, .a=0xe5, .x=0x52, .y=0x80, .sp=0x6b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x59dd, .value=0x2f}, {.addr=0x59de, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x59dd, .value=0x2f, .type=IO_READ},
        {.addr=0x59de, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x9c50, .a=0xb9, .x=0x0e, .y=0xd8, .sp=0xe3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9c50, .value=0x2f}, {.addr=0x9c51, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x9cbb, .a=0xb9, .x=0x0e, .y=0xd8, .sp=0xe3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9c50, .value=0x2f}, {.addr=0x9c51, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x9c50, .value=0x2f, .type=IO_READ},
        {.addr=0x9c51, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3e39, .a=0x7c, .x=0x90, .y=0x9e, .sp=0x0e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3e39, .value=0x2f}, {.addr=0x3e3a, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x3e54, .a=0x7c, .x=0x90, .y=0x9e, .sp=0x0e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x3e39, .value=0x2f}, {.addr=0x3e3a, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x3e39, .value=0x2f, .type=IO_READ},
        {.addr=0x3e3a, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x0524, .a=0x08, .x=0xb7, .y=0x40, .sp=0x59, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0524, .value=0x2f}, {.addr=0x0525, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x04a6, .a=0x08, .x=0xb7, .y=0x40, .sp=0x59, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0524, .value=0x2f}, {.addr=0x0525, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0524, .value=0x2f, .type=IO_READ},
        {.addr=0x0525, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa464, .a=0x49, .x=0x18, .y=0x04, .sp=0x5a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa464, .value=0x2f}, {.addr=0xa465, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xa421, .a=0x49, .x=0x18, .y=0x04, .sp=0x5a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa464, .value=0x2f}, {.addr=0xa465, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xa464, .value=0x2f, .type=IO_READ},
        {.addr=0xa465, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xb401, .a=0x59, .x=0xe5, .y=0x3b, .sp=0x06, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb401, .value=0x2f}, {.addr=0xb402, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xb3a8, .a=0x59, .x=0xe5, .y=0x3b, .sp=0x06, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xb401, .value=0x2f}, {.addr=0xb402, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xb401, .value=0x2f, .type=IO_READ},
        {.addr=0xb402, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x70df, .a=0xa8, .x=0x58, .y=0x45, .sp=0xd6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x70df, .value=0x2f}, {.addr=0x70e0, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x7091, .a=0xa8, .x=0x58, .y=0x45, .sp=0xd6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x70df, .value=0x2f}, {.addr=0x70e0, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x70df, .value=0x2f, .type=IO_READ},
        {.addr=0x70e0, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xf133, .a=0xa7, .x=0xfd, .y=0xdf, .sp=0x53, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf133, .value=0x2f}, {.addr=0xf134, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xf11e, .a=0xa7, .x=0xfd, .y=0xdf, .sp=0x53, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf133, .value=0x2f}, {.addr=0xf134, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xf133, .value=0x2f, .type=IO_READ},
        {.addr=0xf134, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x116a, .a=0xc8, .x=0x38, .y=0x7c, .sp=0xc9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x116a, .value=0x2f}, {.addr=0x116b, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x116f, .a=0xc8, .x=0x38, .y=0x7c, .sp=0xc9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x116a, .value=0x2f}, {.addr=0x116b, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x116a, .value=0x2f, .type=IO_READ},
        {.addr=0x116b, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb92f, .a=0x80, .x=0xa2, .y=0x42, .sp=0x90, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb92f, .value=0x2f}, {.addr=0xb930, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb8ef, .a=0x80, .x=0xa2, .y=0x42, .sp=0x90, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xb92f, .value=0x2f}, {.addr=0xb930, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb92f, .value=0x2f, .type=IO_READ},
        {.addr=0xb930, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xcfb5, .a=0xdd, .x=0x9f, .y=0x31, .sp=0x03, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb5, .value=0x2f}, {.addr=0xcfb6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcf76, .a=0xdd, .x=0x9f, .y=0x31, .sp=0x03, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xcfb5, .value=0x2f}, {.addr=0xcfb6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcfb5, .value=0x2f, .type=IO_READ},
        {.addr=0xcfb6, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xbdcd, .a=0x86, .x=0x85, .y=0x54, .sp=0x27, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xbdcd, .value=0x2f}, {.addr=0xbdce, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xbe12, .a=0x86, .x=0x85, .y=0x54, .sp=0x27, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xbdcd, .value=0x2f}, {.addr=0xbdce, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xbdcd, .value=0x2f, .type=IO_READ},
        {.addr=0xbdce, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x9738, .a=0x0c, .x=0x17, .y=0x3f, .sp=0x1b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x9738, .value=0x2f}, {.addr=0x9739, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x96ce, .a=0x0c, .x=0x17, .y=0x3f, .sp=0x1b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9738, .value=0x2f}, {.addr=0x9739, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9738, .value=0x2f, .type=IO_READ},
        {.addr=0x9739, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x29f3, .a=0x9b, .x=0x35, .y=0xf2, .sp=0x4f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x29f3, .value=0x2f}, {.addr=0x29f4, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x2a07, .a=0x9b, .x=0x35, .y=0xf2, .sp=0x4f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x29f3, .value=0x2f}, {.addr=0x29f4, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x29f3, .value=0x2f, .type=IO_READ},
        {.addr=0x29f4, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xd5d9, .a=0x45, .x=0x5a, .y=0x16, .sp=0x68, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d9, .value=0x2f}, {.addr=0xd5da, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xd58d, .a=0x45, .x=0x5a, .y=0x16, .sp=0x68, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd5d9, .value=0x2f}, {.addr=0xd5da, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xd5d9, .value=0x2f, .type=IO_READ},
        {.addr=0xd5da, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xd820, .a=0x79, .x=0xb2, .y=0xdd, .sp=0xd5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd820, .value=0x2f}, {.addr=0xd821, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xd81d, .a=0x79, .x=0xb2, .y=0xdd, .sp=0xd5, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd820, .value=0x2f}, {.addr=0xd821, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xd820, .value=0x2f, .type=IO_READ},
        {.addr=0xd821, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3994, .a=0xbc, .x=0xde, .y=0xea, .sp=0x59, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3994, .value=0x2f}, {.addr=0x3995, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x3918, .a=0xbc, .x=0xde, .y=0xea, .sp=0x59, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3994, .value=0x2f}, {.addr=0x3995, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x3994, .value=0x2f, .type=IO_READ},
        {.addr=0x3995, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x0453, .a=0x69, .x=0x15, .y=0x54, .sp=0x56, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0453, .value=0x2f}, {.addr=0x0454, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0471, .a=0x69, .x=0x15, .y=0x54, .sp=0x56, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0453, .value=0x2f}, {.addr=0x0454, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0453, .value=0x2f, .type=IO_READ},
        {.addr=0x0454, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x4dbf, .a=0xd7, .x=0x9a, .y=0x32, .sp=0x65, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbf, .value=0x2f}, {.addr=0x4dc0, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x4dfa, .a=0xd7, .x=0x9a, .y=0x32, .sp=0x65, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4dbf, .value=0x2f}, {.addr=0x4dc0, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x4dbf, .value=0x2f, .type=IO_READ},
        {.addr=0x4dc0, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x92df, .a=0x08, .x=0x6e, .y=0xba, .sp=0xa2, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x92df, .value=0x2f}, {.addr=0x92e0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x92bd, .a=0x08, .x=0x6e, .y=0xba, .sp=0xa2, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x92df, .value=0x2f}, {.addr=0x92e0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x92df, .value=0x2f, .type=IO_READ},
        {.addr=0x92e0, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x5683, .a=0x50, .x=0x05, .y=0x45, .sp=0xbe, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x5683, .value=0x2f}, {.addr=0x5684, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x5654, .a=0x50, .x=0x05, .y=0x45, .sp=0xbe, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5683, .value=0x2f}, {.addr=0x5684, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x5683, .value=0x2f, .type=IO_READ},
        {.addr=0x5684, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x8b96, .a=0x02, .x=0xa1, .y=0x3e, .sp=0x37, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8b96, .value=0x2f}, {.addr=0x8b97, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8b57, .a=0x02, .x=0xa1, .y=0x3e, .sp=0x37, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x8b96, .value=0x2f}, {.addr=0x8b97, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8b96, .value=0x2f, .type=IO_READ},
        {.addr=0x8b97, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x2c13, .a=0xcb, .x=0xea, .y=0x2b, .sp=0x52, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2c13, .value=0x2f}, {.addr=0x2c14, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x2c3a, .a=0xcb, .x=0xea, .y=0x2b, .sp=0x52, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2c13, .value=0x2f}, {.addr=0x2c14, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x2c13, .value=0x2f, .type=IO_READ},
        {.addr=0x2c14, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x9d82, .a=0x3e, .x=0x60, .y=0x93, .sp=0x4a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9d82, .value=0x2f}, {.addr=0x9d83, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9dca, .a=0x3e, .x=0x60, .y=0x93, .sp=0x4a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9d82, .value=0x2f}, {.addr=0x9d83, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9d82, .value=0x2f, .type=IO_READ},
        {.addr=0x9d83, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x7bf2, .a=0x28, .x=0x4e, .y=0x09, .sp=0xe9, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf2, .value=0x2f}, {.addr=0x7bf3, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x7bbb, .a=0x28, .x=0x4e, .y=0x09, .sp=0xe9, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x7bf2, .value=0x2f}, {.addr=0x7bf3, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x7bf2, .value=0x2f, .type=IO_READ},
        {.addr=0x7bf3, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xf1c0, .a=0x49, .x=0x91, .y=0xc6, .sp=0x93, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c0, .value=0x2f}, {.addr=0xf1c1, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xf14c, .a=0x49, .x=0x91, .y=0xc6, .sp=0x93, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf1c0, .value=0x2f}, {.addr=0xf1c1, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xf1c0, .value=0x2f, .type=IO_READ},
        {.addr=0xf1c1, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x69ca, .a=0xc2, .x=0x06, .y=0x69, .sp=0x4a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x69ca, .value=0x2f}, {.addr=0x69cb, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x69f8, .a=0xc2, .x=0x06, .y=0x69, .sp=0x4a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x69ca, .value=0x2f}, {.addr=0x69cb, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x69ca, .value=0x2f, .type=IO_READ},
        {.addr=0x69cb, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x1930, .a=0xeb, .x=0xe7, .y=0x5e, .sp=0x9f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x1930, .value=0x2f}, {.addr=0x1931, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x18c2, .a=0xeb, .x=0xe7, .y=0x5e, .sp=0x9f, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x1930, .value=0x2f}, {.addr=0x1931, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x1930, .value=0x2f, .type=IO_READ},
        {.addr=0x1931, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x52d9, .a=0xde, .x=0x1b, .y=0x03, .sp=0xc0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x52d9, .value=0x2f}, {.addr=0x52da, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x52a9, .a=0xde, .x=0x1b, .y=0x03, .sp=0xc0, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x52d9, .value=0x2f}, {.addr=0x52da, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x52d9, .value=0x2f, .type=IO_READ},
        {.addr=0x52da, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x6777, .a=0x47, .x=0x00, .y=0x96, .sp=0x5c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6777, .value=0x2f}, {.addr=0x6778, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6757, .a=0x47, .x=0x00, .y=0x96, .sp=0x5c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x6777, .value=0x2f}, {.addr=0x6778, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x6777, .value=0x2f, .type=IO_READ},
        {.addr=0x6778, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2F, _2F_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd662, .a=0x1c, .x=0xe7, .y=0xe6, .sp=0x47, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xd662, .value=0x2f}, {.addr=0xd663, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd6e0, .a=0x1c, .x=0xe7, .y=0xe6, .sp=0x47, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd662, .value=0x2f}, {.addr=0xd663, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd662, .value=0x2f, .type=IO_READ},
        {.addr=0xd663, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2F 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
