#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_3C, _3C_0000) {
    const struct CPU_State initial_cpu = {.pc=0x84a2, .a=0x34, .x=0xdc, .y=0xf7, .sp=0x16, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x84a2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x84a3, .a=0x68, .x=0xdc, .y=0xf7, .sp=0x16, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x84a2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x84a2, .value=0x3c, .type=IO_READ},
        {.addr=0x84a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0001) {
    const struct CPU_State initial_cpu = {.pc=0x9e96, .a=0x88, .x=0x6e, .y=0x69, .sp=0x85, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9e96, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9e97, .a=0x10, .x=0x6e, .y=0x69, .sp=0x85, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9e96, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9e96, .value=0x3c, .type=IO_READ},
        {.addr=0x9e97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0002) {
    const struct CPU_State initial_cpu = {.pc=0x5149, .a=0x21, .x=0x4c, .y=0x25, .sp=0xdf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5149, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x514a, .a=0x42, .x=0x4c, .y=0x25, .sp=0xdf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5149, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5149, .value=0x3c, .type=IO_READ},
        {.addr=0x514a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0003) {
    const struct CPU_State initial_cpu = {.pc=0xb4f9, .a=0xd9, .x=0xa8, .y=0x3b, .sp=0xdc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb4fa, .a=0xb3, .x=0xa8, .y=0x3b, .sp=0xdc, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb4f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb4f9, .value=0x3c, .type=IO_READ},
        {.addr=0xb4fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0004) {
    const struct CPU_State initial_cpu = {.pc=0x2cdd, .a=0x94, .x=0x55, .y=0x9a, .sp=0x26, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2cdd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2cde, .a=0x29, .x=0x55, .y=0x9a, .sp=0x26, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2cdd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2cdd, .value=0x3c, .type=IO_READ},
        {.addr=0x2cde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0005) {
    const struct CPU_State initial_cpu = {.pc=0x5b94, .a=0x0c, .x=0x0d, .y=0xab, .sp=0xd7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5b94, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5b95, .a=0x18, .x=0x0d, .y=0xab, .sp=0xd7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5b94, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5b94, .value=0x3c, .type=IO_READ},
        {.addr=0x5b95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0006) {
    const struct CPU_State initial_cpu = {.pc=0xaec4, .a=0x82, .x=0x83, .y=0x4f, .sp=0x04, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xaec4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaec5, .a=0x04, .x=0x83, .y=0x4f, .sp=0x04, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xaec4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaec4, .value=0x3c, .type=IO_READ},
        {.addr=0xaec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0007) {
    const struct CPU_State initial_cpu = {.pc=0x4280, .a=0x14, .x=0x8c, .y=0xda, .sp=0x43, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4280, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4281, .a=0x29, .x=0x8c, .y=0xda, .sp=0x43, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4280, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4280, .value=0x3c, .type=IO_READ},
        {.addr=0x4281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0008) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0x72, .x=0x0d, .y=0xe4, .sp=0x3c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa520, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa521, .a=0xe4, .x=0x0d, .y=0xe4, .sp=0x3c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa520, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0x3c, .type=IO_READ},
        {.addr=0xa521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0009) {
    const struct CPU_State initial_cpu = {.pc=0x7411, .a=0x1f, .x=0x11, .y=0x48, .sp=0x66, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7411, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7412, .a=0x3f, .x=0x11, .y=0x48, .sp=0x66, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7411, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7411, .value=0x3c, .type=IO_READ},
        {.addr=0x7412, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000A) {
    const struct CPU_State initial_cpu = {.pc=0xbd59, .a=0x54, .x=0xb3, .y=0x2c, .sp=0xe6, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbd59, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbd5a, .a=0xa9, .x=0xb3, .y=0x2c, .sp=0xe6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbd59, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbd59, .value=0x3c, .type=IO_READ},
        {.addr=0xbd5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000B) {
    const struct CPU_State initial_cpu = {.pc=0xcc66, .a=0x2b, .x=0xd9, .y=0x3b, .sp=0xeb, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc66, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcc67, .a=0x56, .x=0xd9, .y=0x3b, .sp=0xeb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcc66, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcc66, .value=0x3c, .type=IO_READ},
        {.addr=0xcc67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000C) {
    const struct CPU_State initial_cpu = {.pc=0x26d5, .a=0xf4, .x=0x01, .y=0x3f, .sp=0xcb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x26d5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x26d6, .a=0xe9, .x=0x01, .y=0x3f, .sp=0xcb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x26d5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x26d5, .value=0x3c, .type=IO_READ},
        {.addr=0x26d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe54a, .a=0x1d, .x=0xd3, .y=0x43, .sp=0x96, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe54a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe54b, .a=0x3b, .x=0xd3, .y=0x43, .sp=0x96, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xe54a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe54a, .value=0x3c, .type=IO_READ},
        {.addr=0xe54b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000E) {
    const struct CPU_State initial_cpu = {.pc=0xef6e, .a=0x2f, .x=0x4b, .y=0x30, .sp=0x87, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xef6e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xef6f, .a=0x5e, .x=0x4b, .y=0x30, .sp=0x87, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xef6e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xef6e, .value=0x3c, .type=IO_READ},
        {.addr=0xef6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_000F) {
    const struct CPU_State initial_cpu = {.pc=0x4179, .a=0x65, .x=0x2a, .y=0x8c, .sp=0xc4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4179, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x417a, .a=0xca, .x=0x2a, .y=0x8c, .sp=0xc4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4179, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4179, .value=0x3c, .type=IO_READ},
        {.addr=0x417a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0010) {
    const struct CPU_State initial_cpu = {.pc=0x19cc, .a=0xb0, .x=0x57, .y=0xfa, .sp=0x90, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x19cc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x19cd, .a=0x60, .x=0x57, .y=0xfa, .sp=0x90, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x19cc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x19cc, .value=0x3c, .type=IO_READ},
        {.addr=0x19cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0011) {
    const struct CPU_State initial_cpu = {.pc=0xba42, .a=0xbe, .x=0x2d, .y=0x1c, .sp=0xda, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xba42, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xba43, .a=0x7c, .x=0x2d, .y=0x1c, .sp=0xda, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xba42, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xba42, .value=0x3c, .type=IO_READ},
        {.addr=0xba43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0012) {
    const struct CPU_State initial_cpu = {.pc=0x33c4, .a=0x37, .x=0x54, .y=0xc7, .sp=0x3f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x33c4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x33c5, .a=0x6f, .x=0x54, .y=0xc7, .sp=0x3f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x33c4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x33c4, .value=0x3c, .type=IO_READ},
        {.addr=0x33c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0013) {
    const struct CPU_State initial_cpu = {.pc=0x3132, .a=0xb8, .x=0xcb, .y=0x9d, .sp=0xaa, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3132, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3133, .a=0x71, .x=0xcb, .y=0x9d, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3132, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3132, .value=0x3c, .type=IO_READ},
        {.addr=0x3133, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0014) {
    const struct CPU_State initial_cpu = {.pc=0x7443, .a=0xf2, .x=0xdf, .y=0xde, .sp=0xc3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7443, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7444, .a=0xe5, .x=0xdf, .y=0xde, .sp=0xc3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x7443, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7443, .value=0x3c, .type=IO_READ},
        {.addr=0x7444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0015) {
    const struct CPU_State initial_cpu = {.pc=0xe7a2, .a=0xac, .x=0xbe, .y=0x3a, .sp=0x88, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe7a3, .a=0x58, .x=0xbe, .y=0x3a, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe7a2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe7a2, .value=0x3c, .type=IO_READ},
        {.addr=0xe7a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0016) {
    const struct CPU_State initial_cpu = {.pc=0x38d6, .a=0xda, .x=0x30, .y=0x6d, .sp=0x3a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x38d6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x38d7, .a=0xb4, .x=0x30, .y=0x6d, .sp=0x3a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x38d6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x38d6, .value=0x3c, .type=IO_READ},
        {.addr=0x38d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0017) {
    const struct CPU_State initial_cpu = {.pc=0xe5dc, .a=0xe3, .x=0xf2, .y=0xae, .sp=0x6b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xe5dc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe5dd, .a=0xc6, .x=0xf2, .y=0xae, .sp=0x6b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe5dc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe5dc, .value=0x3c, .type=IO_READ},
        {.addr=0xe5dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0018) {
    const struct CPU_State initial_cpu = {.pc=0x26b2, .a=0xea, .x=0xe2, .y=0x65, .sp=0xef, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x26b2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x26b3, .a=0xd4, .x=0xe2, .y=0x65, .sp=0xef, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x26b2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x26b2, .value=0x3c, .type=IO_READ},
        {.addr=0x26b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0019) {
    const struct CPU_State initial_cpu = {.pc=0xde13, .a=0x15, .x=0x72, .y=0xa1, .sp=0xc7, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xde13, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xde14, .a=0x2b, .x=0x72, .y=0xa1, .sp=0xc7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xde13, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xde13, .value=0x3c, .type=IO_READ},
        {.addr=0xde14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001A) {
    const struct CPU_State initial_cpu = {.pc=0xa7f9, .a=0xfa, .x=0xec, .y=0x25, .sp=0x1f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa7fa, .a=0xf5, .x=0xec, .y=0x25, .sp=0x1f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa7f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa7f9, .value=0x3c, .type=IO_READ},
        {.addr=0xa7fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001B) {
    const struct CPU_State initial_cpu = {.pc=0x14e8, .a=0x35, .x=0x2e, .y=0xdc, .sp=0x2f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x14e8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x14e9, .a=0x6a, .x=0x2e, .y=0xdc, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x14e8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x14e8, .value=0x3c, .type=IO_READ},
        {.addr=0x14e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001C) {
    const struct CPU_State initial_cpu = {.pc=0x2087, .a=0x9c, .x=0xc6, .y=0x4d, .sp=0xbd, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2087, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2088, .a=0x39, .x=0xc6, .y=0x4d, .sp=0xbd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2087, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2087, .value=0x3c, .type=IO_READ},
        {.addr=0x2088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001D) {
    const struct CPU_State initial_cpu = {.pc=0x097d, .a=0x9f, .x=0xb7, .y=0x70, .sp=0x85, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x097d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x097e, .a=0x3e, .x=0xb7, .y=0x70, .sp=0x85, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x097d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x097d, .value=0x3c, .type=IO_READ},
        {.addr=0x097e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001E) {
    const struct CPU_State initial_cpu = {.pc=0x653d, .a=0x20, .x=0x75, .y=0xed, .sp=0x8c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x653d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x653e, .a=0x40, .x=0x75, .y=0xed, .sp=0x8c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x653d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x653d, .value=0x3c, .type=IO_READ},
        {.addr=0x653e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_001F) {
    const struct CPU_State initial_cpu = {.pc=0x8671, .a=0x7c, .x=0xac, .y=0x0e, .sp=0xe7, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8671, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8672, .a=0xf9, .x=0xac, .y=0x0e, .sp=0xe7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8671, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8671, .value=0x3c, .type=IO_READ},
        {.addr=0x8672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0020) {
    const struct CPU_State initial_cpu = {.pc=0x4af3, .a=0x76, .x=0x62, .y=0x14, .sp=0x33, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4af3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4af4, .a=0xec, .x=0x62, .y=0x14, .sp=0x33, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4af3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4af3, .value=0x3c, .type=IO_READ},
        {.addr=0x4af4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0021) {
    const struct CPU_State initial_cpu = {.pc=0x93cd, .a=0x06, .x=0x85, .y=0x25, .sp=0xcf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x93cd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x93ce, .a=0x0c, .x=0x85, .y=0x25, .sp=0xcf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x93cd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x93cd, .value=0x3c, .type=IO_READ},
        {.addr=0x93ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0022) {
    const struct CPU_State initial_cpu = {.pc=0x892c, .a=0x58, .x=0xf2, .y=0x90, .sp=0xe5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x892c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x892d, .a=0xb1, .x=0xf2, .y=0x90, .sp=0xe5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x892c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x892c, .value=0x3c, .type=IO_READ},
        {.addr=0x892d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0023) {
    const struct CPU_State initial_cpu = {.pc=0x33b4, .a=0x33, .x=0x80, .y=0x14, .sp=0x0c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x33b4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x33b5, .a=0x67, .x=0x80, .y=0x14, .sp=0x0c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x33b4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x33b4, .value=0x3c, .type=IO_READ},
        {.addr=0x33b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0024) {
    const struct CPU_State initial_cpu = {.pc=0x4ee8, .a=0x2e, .x=0x2e, .y=0x4d, .sp=0x5e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4ee9, .a=0x5c, .x=0x2e, .y=0x4d, .sp=0x5e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4ee8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4ee8, .value=0x3c, .type=IO_READ},
        {.addr=0x4ee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0025) {
    const struct CPU_State initial_cpu = {.pc=0x2c31, .a=0x6d, .x=0xf1, .y=0x9f, .sp=0xde, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2c31, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2c32, .a=0xdb, .x=0xf1, .y=0x9f, .sp=0xde, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2c31, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2c31, .value=0x3c, .type=IO_READ},
        {.addr=0x2c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0026) {
    const struct CPU_State initial_cpu = {.pc=0x3baa, .a=0xe0, .x=0xd7, .y=0x4a, .sp=0x0a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3baa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3bab, .a=0xc1, .x=0xd7, .y=0x4a, .sp=0x0a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3baa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3baa, .value=0x3c, .type=IO_READ},
        {.addr=0x3bab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0027) {
    const struct CPU_State initial_cpu = {.pc=0x55bc, .a=0x98, .x=0x56, .y=0x2b, .sp=0xbf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x55bc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x55bd, .a=0x31, .x=0x56, .y=0x2b, .sp=0xbf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x55bc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x55bc, .value=0x3c, .type=IO_READ},
        {.addr=0x55bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0028) {
    const struct CPU_State initial_cpu = {.pc=0x236f, .a=0x0c, .x=0x46, .y=0x6d, .sp=0x94, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x236f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2370, .a=0x19, .x=0x46, .y=0x6d, .sp=0x94, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x236f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x236f, .value=0x3c, .type=IO_READ},
        {.addr=0x2370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0029) {
    const struct CPU_State initial_cpu = {.pc=0xa343, .a=0xbc, .x=0x42, .y=0x5a, .sp=0xef, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xa343, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa344, .a=0x78, .x=0x42, .y=0x5a, .sp=0xef, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa343, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa343, .value=0x3c, .type=IO_READ},
        {.addr=0xa344, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002A) {
    const struct CPU_State initial_cpu = {.pc=0x0c7d, .a=0x2a, .x=0x1f, .y=0x9c, .sp=0x6a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0c7e, .a=0x54, .x=0x1f, .y=0x9c, .sp=0x6a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0c7d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0c7d, .value=0x3c, .type=IO_READ},
        {.addr=0x0c7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002B) {
    const struct CPU_State initial_cpu = {.pc=0x5e7e, .a=0x77, .x=0xd3, .y=0xeb, .sp=0xb1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x5e7e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5e7f, .a=0xee, .x=0xd3, .y=0xeb, .sp=0xb1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5e7e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5e7e, .value=0x3c, .type=IO_READ},
        {.addr=0x5e7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002C) {
    const struct CPU_State initial_cpu = {.pc=0xaf9a, .a=0x24, .x=0x39, .y=0x34, .sp=0xb7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xaf9a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaf9b, .a=0x49, .x=0x39, .y=0x34, .sp=0xb7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xaf9a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaf9a, .value=0x3c, .type=IO_READ},
        {.addr=0xaf9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3b9d, .a=0x15, .x=0xf2, .y=0xbe, .sp=0x57, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3b9d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3b9e, .a=0x2b, .x=0xf2, .y=0xbe, .sp=0x57, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3b9d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3b9d, .value=0x3c, .type=IO_READ},
        {.addr=0x3b9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002E) {
    const struct CPU_State initial_cpu = {.pc=0x34b2, .a=0x4a, .x=0xd2, .y=0x2f, .sp=0x53, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x34b2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x34b3, .a=0x95, .x=0xd2, .y=0x2f, .sp=0x53, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x34b2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x34b2, .value=0x3c, .type=IO_READ},
        {.addr=0x34b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8765, .a=0x9a, .x=0x0b, .y=0xf5, .sp=0xd2, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8765, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8766, .a=0x34, .x=0x0b, .y=0xf5, .sp=0xd2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8765, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8765, .value=0x3c, .type=IO_READ},
        {.addr=0x8766, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0030) {
    const struct CPU_State initial_cpu = {.pc=0xbad3, .a=0x22, .x=0xc2, .y=0xf9, .sp=0x7a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xbad3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbad4, .a=0x44, .x=0xc2, .y=0xf9, .sp=0x7a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbad3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbad3, .value=0x3c, .type=IO_READ},
        {.addr=0xbad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0031) {
    const struct CPU_State initial_cpu = {.pc=0xa65a, .a=0x9e, .x=0x9c, .y=0xf1, .sp=0x01, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa65a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa65b, .a=0x3c, .x=0x9c, .y=0xf1, .sp=0x01, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa65a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa65a, .value=0x3c, .type=IO_READ},
        {.addr=0xa65b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0032) {
    const struct CPU_State initial_cpu = {.pc=0x95d8, .a=0xfb, .x=0x73, .y=0x8f, .sp=0x6b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x95d8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x95d9, .a=0xf7, .x=0x73, .y=0x8f, .sp=0x6b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x95d8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x95d8, .value=0x3c, .type=IO_READ},
        {.addr=0x95d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0033) {
    const struct CPU_State initial_cpu = {.pc=0xb1f2, .a=0xaf, .x=0x16, .y=0xc7, .sp=0x64, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb1f3, .a=0x5f, .x=0x16, .y=0xc7, .sp=0x64, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb1f2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb1f2, .value=0x3c, .type=IO_READ},
        {.addr=0xb1f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0034) {
    const struct CPU_State initial_cpu = {.pc=0x1792, .a=0x86, .x=0xc1, .y=0x52, .sp=0xb7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x1792, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1793, .a=0x0c, .x=0xc1, .y=0x52, .sp=0xb7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1792, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1792, .value=0x3c, .type=IO_READ},
        {.addr=0x1793, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0035) {
    const struct CPU_State initial_cpu = {.pc=0xd1bc, .a=0xc2, .x=0x3a, .y=0x9b, .sp=0x1a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd1bc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd1bd, .a=0x84, .x=0x3a, .y=0x9b, .sp=0x1a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd1bc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd1bc, .value=0x3c, .type=IO_READ},
        {.addr=0xd1bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0036) {
    const struct CPU_State initial_cpu = {.pc=0x443e, .a=0xa2, .x=0x34, .y=0xe1, .sp=0x8c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x443e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x443f, .a=0x45, .x=0x34, .y=0xe1, .sp=0x8c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x443e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x443e, .value=0x3c, .type=IO_READ},
        {.addr=0x443f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0037) {
    const struct CPU_State initial_cpu = {.pc=0x318d, .a=0x81, .x=0xa2, .y=0x8c, .sp=0x35, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x318d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x318e, .a=0x02, .x=0xa2, .y=0x8c, .sp=0x35, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x318d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x318d, .value=0x3c, .type=IO_READ},
        {.addr=0x318e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1e7c, .a=0xcc, .x=0xbf, .y=0xa6, .sp=0x1c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x1e7c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1e7d, .a=0x98, .x=0xbf, .y=0xa6, .sp=0x1c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1e7c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1e7c, .value=0x3c, .type=IO_READ},
        {.addr=0x1e7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0039) {
    const struct CPU_State initial_cpu = {.pc=0x1088, .a=0xdf, .x=0xf0, .y=0xae, .sp=0x36, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1088, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1089, .a=0xbf, .x=0xf0, .y=0xae, .sp=0x36, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1088, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1088, .value=0x3c, .type=IO_READ},
        {.addr=0x1089, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003A) {
    const struct CPU_State initial_cpu = {.pc=0x40e7, .a=0x68, .x=0x3e, .y=0x84, .sp=0x07, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x40e7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x40e8, .a=0xd0, .x=0x3e, .y=0x84, .sp=0x07, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x40e7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x40e7, .value=0x3c, .type=IO_READ},
        {.addr=0x40e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003B) {
    const struct CPU_State initial_cpu = {.pc=0x474f, .a=0x9d, .x=0xc1, .y=0xd6, .sp=0x7a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x474f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4750, .a=0x3a, .x=0xc1, .y=0xd6, .sp=0x7a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x474f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x474f, .value=0x3c, .type=IO_READ},
        {.addr=0x4750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003C) {
    const struct CPU_State initial_cpu = {.pc=0x28b9, .a=0xb1, .x=0x6d, .y=0x2b, .sp=0x88, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x28b9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x28ba, .a=0x63, .x=0x6d, .y=0x2b, .sp=0x88, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x28b9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x28b9, .value=0x3c, .type=IO_READ},
        {.addr=0x28ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003D) {
    const struct CPU_State initial_cpu = {.pc=0xf802, .a=0x04, .x=0xa6, .y=0x18, .sp=0x62, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xf802, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf803, .a=0x09, .x=0xa6, .y=0x18, .sp=0x62, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf802, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf802, .value=0x3c, .type=IO_READ},
        {.addr=0xf803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003E) {
    const struct CPU_State initial_cpu = {.pc=0x2978, .a=0x66, .x=0xed, .y=0x2d, .sp=0xcc, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2978, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2979, .a=0xcc, .x=0xed, .y=0x2d, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2978, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2978, .value=0x3c, .type=IO_READ},
        {.addr=0x2979, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_003F) {
    const struct CPU_State initial_cpu = {.pc=0x2cdb, .a=0x06, .x=0x60, .y=0x55, .sp=0xd8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2cdb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2cdc, .a=0x0c, .x=0x60, .y=0x55, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2cdb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2cdb, .value=0x3c, .type=IO_READ},
        {.addr=0x2cdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7db0, .a=0x42, .x=0x70, .y=0x25, .sp=0xf5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x7db0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7db1, .a=0x84, .x=0x70, .y=0x25, .sp=0xf5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7db0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7db0, .value=0x3c, .type=IO_READ},
        {.addr=0x7db1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0041) {
    const struct CPU_State initial_cpu = {.pc=0x8aab, .a=0x93, .x=0x8c, .y=0x6e, .sp=0x4b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8aab, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8aac, .a=0x26, .x=0x8c, .y=0x6e, .sp=0x4b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8aab, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8aab, .value=0x3c, .type=IO_READ},
        {.addr=0x8aac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0042) {
    const struct CPU_State initial_cpu = {.pc=0xd2a1, .a=0xde, .x=0x53, .y=0xc1, .sp=0x63, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd2a2, .a=0xbd, .x=0x53, .y=0xc1, .sp=0x63, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd2a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd2a1, .value=0x3c, .type=IO_READ},
        {.addr=0xd2a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0043) {
    const struct CPU_State initial_cpu = {.pc=0x3090, .a=0x57, .x=0xdf, .y=0x9b, .sp=0x74, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x3090, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3091, .a=0xaf, .x=0xdf, .y=0x9b, .sp=0x74, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3090, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3090, .value=0x3c, .type=IO_READ},
        {.addr=0x3091, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0044) {
    const struct CPU_State initial_cpu = {.pc=0xe4c3, .a=0x7f, .x=0x67, .y=0x53, .sp=0x77, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe4c4, .a=0xfe, .x=0x67, .y=0x53, .sp=0x77, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe4c3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe4c3, .value=0x3c, .type=IO_READ},
        {.addr=0xe4c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0045) {
    const struct CPU_State initial_cpu = {.pc=0xdffd, .a=0x0f, .x=0xb8, .y=0x47, .sp=0x64, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xdffd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdffe, .a=0x1f, .x=0xb8, .y=0x47, .sp=0x64, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xdffd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdffd, .value=0x3c, .type=IO_READ},
        {.addr=0xdffe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0046) {
    const struct CPU_State initial_cpu = {.pc=0x2324, .a=0xa2, .x=0x37, .y=0x4a, .sp=0xd1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2324, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2325, .a=0x45, .x=0x37, .y=0x4a, .sp=0xd1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2324, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2324, .value=0x3c, .type=IO_READ},
        {.addr=0x2325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0047) {
    const struct CPU_State initial_cpu = {.pc=0xb9e3, .a=0x1a, .x=0x72, .y=0xb3, .sp=0x5d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb9e4, .a=0x35, .x=0x72, .y=0xb3, .sp=0x5d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb9e3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb9e3, .value=0x3c, .type=IO_READ},
        {.addr=0xb9e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0048) {
    const struct CPU_State initial_cpu = {.pc=0xcd85, .a=0x46, .x=0x5a, .y=0x0c, .sp=0x8c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xcd85, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcd86, .a=0x8d, .x=0x5a, .y=0x0c, .sp=0x8c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcd85, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcd85, .value=0x3c, .type=IO_READ},
        {.addr=0xcd86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0049) {
    const struct CPU_State initial_cpu = {.pc=0x56e1, .a=0x9f, .x=0x3d, .y=0x47, .sp=0x89, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x56e1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x56e2, .a=0x3e, .x=0x3d, .y=0x47, .sp=0x89, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x56e1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x56e1, .value=0x3c, .type=IO_READ},
        {.addr=0x56e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf2b5, .a=0x6c, .x=0x3c, .y=0xb1, .sp=0xd1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf2b6, .a=0xd9, .x=0x3c, .y=0xb1, .sp=0xd1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf2b5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf2b5, .value=0x3c, .type=IO_READ},
        {.addr=0xf2b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004B) {
    const struct CPU_State initial_cpu = {.pc=0x4ecb, .a=0xbc, .x=0xf1, .y=0x1f, .sp=0x69, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4ecb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4ecc, .a=0x78, .x=0xf1, .y=0x1f, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4ecb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4ecb, .value=0x3c, .type=IO_READ},
        {.addr=0x4ecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004C) {
    const struct CPU_State initial_cpu = {.pc=0xc1c6, .a=0x9e, .x=0x79, .y=0x23, .sp=0x21, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc1c7, .a=0x3c, .x=0x79, .y=0x23, .sp=0x21, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc1c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc1c6, .value=0x3c, .type=IO_READ},
        {.addr=0xc1c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004D) {
    const struct CPU_State initial_cpu = {.pc=0x60c3, .a=0x04, .x=0xec, .y=0x57, .sp=0x68, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x60c3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x60c4, .a=0x09, .x=0xec, .y=0x57, .sp=0x68, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x60c3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x60c3, .value=0x3c, .type=IO_READ},
        {.addr=0x60c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc5c6, .a=0x99, .x=0xe7, .y=0xa7, .sp=0x79, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc5c7, .a=0x33, .x=0xe7, .y=0xa7, .sp=0x79, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc5c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc5c6, .value=0x3c, .type=IO_READ},
        {.addr=0xc5c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_004F) {
    const struct CPU_State initial_cpu = {.pc=0xc7e5, .a=0xd8, .x=0xb6, .y=0x49, .sp=0xbb, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc7e6, .a=0xb1, .x=0xb6, .y=0x49, .sp=0xbb, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc7e5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc7e5, .value=0x3c, .type=IO_READ},
        {.addr=0xc7e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0050) {
    const struct CPU_State initial_cpu = {.pc=0xe232, .a=0x57, .x=0xf5, .y=0x73, .sp=0xd4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xe232, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe233, .a=0xaf, .x=0xf5, .y=0x73, .sp=0xd4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe232, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe232, .value=0x3c, .type=IO_READ},
        {.addr=0xe233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0051) {
    const struct CPU_State initial_cpu = {.pc=0x7fef, .a=0x2c, .x=0x51, .y=0xb9, .sp=0x58, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7fef, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7ff0, .a=0x58, .x=0x51, .y=0xb9, .sp=0x58, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7fef, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7fef, .value=0x3c, .type=IO_READ},
        {.addr=0x7ff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0052) {
    const struct CPU_State initial_cpu = {.pc=0xb3a9, .a=0xa1, .x=0x39, .y=0xed, .sp=0x60, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb3aa, .a=0x42, .x=0x39, .y=0xed, .sp=0x60, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb3a9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb3a9, .value=0x3c, .type=IO_READ},
        {.addr=0xb3aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0053) {
    const struct CPU_State initial_cpu = {.pc=0x4256, .a=0x0d, .x=0xbb, .y=0x7f, .sp=0x43, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4256, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4257, .a=0x1a, .x=0xbb, .y=0x7f, .sp=0x43, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4256, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4256, .value=0x3c, .type=IO_READ},
        {.addr=0x4257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0054) {
    const struct CPU_State initial_cpu = {.pc=0x27df, .a=0x81, .x=0x65, .y=0x8f, .sp=0x9c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x27df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x27e0, .a=0x03, .x=0x65, .y=0x8f, .sp=0x9c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x27df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x27df, .value=0x3c, .type=IO_READ},
        {.addr=0x27e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0055) {
    const struct CPU_State initial_cpu = {.pc=0xd3d8, .a=0x77, .x=0x48, .y=0xa0, .sp=0xc6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd3d9, .a=0xef, .x=0x48, .y=0xa0, .sp=0xc6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd3d8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd3d8, .value=0x3c, .type=IO_READ},
        {.addr=0xd3d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0056) {
    const struct CPU_State initial_cpu = {.pc=0x4e24, .a=0x7d, .x=0x10, .y=0x6e, .sp=0x9b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4e24, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4e25, .a=0xfa, .x=0x10, .y=0x6e, .sp=0x9b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4e24, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4e24, .value=0x3c, .type=IO_READ},
        {.addr=0x4e25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0057) {
    const struct CPU_State initial_cpu = {.pc=0xd582, .a=0x67, .x=0x27, .y=0x52, .sp=0xa8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd582, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd583, .a=0xce, .x=0x27, .y=0x52, .sp=0xa8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd582, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd582, .value=0x3c, .type=IO_READ},
        {.addr=0xd583, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0058) {
    const struct CPU_State initial_cpu = {.pc=0xc46e, .a=0x1b, .x=0xae, .y=0xe6, .sp=0xc3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc46e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc46f, .a=0x36, .x=0xae, .y=0xe6, .sp=0xc3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc46e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc46e, .value=0x3c, .type=IO_READ},
        {.addr=0xc46f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0059) {
    const struct CPU_State initial_cpu = {.pc=0x53fb, .a=0x0e, .x=0xb7, .y=0x03, .sp=0x67, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x53fb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x53fc, .a=0x1d, .x=0xb7, .y=0x03, .sp=0x67, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x53fb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x53fb, .value=0x3c, .type=IO_READ},
        {.addr=0x53fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1dcb, .a=0xf8, .x=0xcd, .y=0x92, .sp=0x74, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1dcb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1dcc, .a=0xf1, .x=0xcd, .y=0x92, .sp=0x74, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1dcb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1dcb, .value=0x3c, .type=IO_READ},
        {.addr=0x1dcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005B) {
    const struct CPU_State initial_cpu = {.pc=0x3268, .a=0xea, .x=0x6e, .y=0x0e, .sp=0xbe, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3268, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3269, .a=0xd4, .x=0x6e, .y=0x0e, .sp=0xbe, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3268, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3268, .value=0x3c, .type=IO_READ},
        {.addr=0x3269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005C) {
    const struct CPU_State initial_cpu = {.pc=0x4863, .a=0x3c, .x=0xae, .y=0x07, .sp=0x9a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4863, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4864, .a=0x79, .x=0xae, .y=0x07, .sp=0x9a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4863, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4863, .value=0x3c, .type=IO_READ},
        {.addr=0x4864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005D) {
    const struct CPU_State initial_cpu = {.pc=0xdcdf, .a=0x50, .x=0x2c, .y=0xc0, .sp=0x2f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xdcdf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdce0, .a=0xa1, .x=0x2c, .y=0xc0, .sp=0x2f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdcdf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdcdf, .value=0x3c, .type=IO_READ},
        {.addr=0xdce0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005E) {
    const struct CPU_State initial_cpu = {.pc=0xd9ed, .a=0x62, .x=0xe7, .y=0x5c, .sp=0x0c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ed, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd9ee, .a=0xc4, .x=0xe7, .y=0x5c, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd9ed, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd9ed, .value=0x3c, .type=IO_READ},
        {.addr=0xd9ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_005F) {
    const struct CPU_State initial_cpu = {.pc=0x74e9, .a=0x4a, .x=0x03, .y=0x93, .sp=0xf0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x74e9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x74ea, .a=0x95, .x=0x03, .y=0x93, .sp=0xf0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x74e9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x74e9, .value=0x3c, .type=IO_READ},
        {.addr=0x74ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0060) {
    const struct CPU_State initial_cpu = {.pc=0x9bc2, .a=0x3d, .x=0x2a, .y=0x22, .sp=0x02, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9bc3, .a=0x7a, .x=0x2a, .y=0x22, .sp=0x02, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9bc2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9bc2, .value=0x3c, .type=IO_READ},
        {.addr=0x9bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0061) {
    const struct CPU_State initial_cpu = {.pc=0x67a7, .a=0xbe, .x=0xc3, .y=0xaf, .sp=0x31, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x67a7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x67a8, .a=0x7d, .x=0xc3, .y=0xaf, .sp=0x31, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x67a7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x67a7, .value=0x3c, .type=IO_READ},
        {.addr=0x67a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0062) {
    const struct CPU_State initial_cpu = {.pc=0x05ae, .a=0xc9, .x=0x3f, .y=0x85, .sp=0xd7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x05ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x05af, .a=0x92, .x=0x3f, .y=0x85, .sp=0xd7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x05ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x05ae, .value=0x3c, .type=IO_READ},
        {.addr=0x05af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0063) {
    const struct CPU_State initial_cpu = {.pc=0x0c62, .a=0x88, .x=0x9d, .y=0x88, .sp=0xd6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0c62, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0c63, .a=0x10, .x=0x9d, .y=0x88, .sp=0xd6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0c62, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0c62, .value=0x3c, .type=IO_READ},
        {.addr=0x0c63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0064) {
    const struct CPU_State initial_cpu = {.pc=0xe745, .a=0xba, .x=0xd2, .y=0x28, .sp=0x26, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe745, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe746, .a=0x74, .x=0xd2, .y=0x28, .sp=0x26, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe745, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe745, .value=0x3c, .type=IO_READ},
        {.addr=0xe746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0065) {
    const struct CPU_State initial_cpu = {.pc=0xad41, .a=0x65, .x=0xa8, .y=0xd7, .sp=0x95, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xad41, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad42, .a=0xca, .x=0xa8, .y=0xd7, .sp=0x95, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xad41, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad41, .value=0x3c, .type=IO_READ},
        {.addr=0xad42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0066) {
    const struct CPU_State initial_cpu = {.pc=0x2729, .a=0x47, .x=0x76, .y=0xec, .sp=0x11, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2729, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x272a, .a=0x8f, .x=0x76, .y=0xec, .sp=0x11, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2729, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2729, .value=0x3c, .type=IO_READ},
        {.addr=0x272a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf888, .a=0x35, .x=0xb3, .y=0xd2, .sp=0xd9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf888, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf889, .a=0x6a, .x=0xb3, .y=0xd2, .sp=0xd9, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf888, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf888, .value=0x3c, .type=IO_READ},
        {.addr=0xf889, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0068) {
    const struct CPU_State initial_cpu = {.pc=0x09a7, .a=0xe5, .x=0x6a, .y=0x2a, .sp=0x8b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x09a7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x09a8, .a=0xca, .x=0x6a, .y=0x2a, .sp=0x8b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x09a7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x09a7, .value=0x3c, .type=IO_READ},
        {.addr=0x09a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0069) {
    const struct CPU_State initial_cpu = {.pc=0x8636, .a=0x85, .x=0xc9, .y=0x2e, .sp=0x8a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8636, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8637, .a=0x0a, .x=0xc9, .y=0x2e, .sp=0x8a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8636, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8636, .value=0x3c, .type=IO_READ},
        {.addr=0x8637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006A) {
    const struct CPU_State initial_cpu = {.pc=0xcca1, .a=0xcc, .x=0x6e, .y=0x48, .sp=0xcf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xcca1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcca2, .a=0x98, .x=0x6e, .y=0x48, .sp=0xcf, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xcca1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcca1, .value=0x3c, .type=IO_READ},
        {.addr=0xcca2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006B) {
    const struct CPU_State initial_cpu = {.pc=0x50aa, .a=0x5d, .x=0xa1, .y=0x87, .sp=0xed, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x50aa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x50ab, .a=0xba, .x=0xa1, .y=0x87, .sp=0xed, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x50aa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x50aa, .value=0x3c, .type=IO_READ},
        {.addr=0x50ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006C) {
    const struct CPU_State initial_cpu = {.pc=0x87f8, .a=0xf7, .x=0xbd, .y=0x3b, .sp=0xda, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x87f8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x87f9, .a=0xef, .x=0xbd, .y=0x3b, .sp=0xda, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x87f8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x87f8, .value=0x3c, .type=IO_READ},
        {.addr=0x87f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006D) {
    const struct CPU_State initial_cpu = {.pc=0x375d, .a=0xf1, .x=0xf2, .y=0x94, .sp=0xae, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x375d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x375e, .a=0xe2, .x=0xf2, .y=0x94, .sp=0xae, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x375d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x375d, .value=0x3c, .type=IO_READ},
        {.addr=0x375e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006E) {
    const struct CPU_State initial_cpu = {.pc=0x4eb7, .a=0x8a, .x=0xf6, .y=0xb8, .sp=0x6b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4eb8, .a=0x15, .x=0xf6, .y=0xb8, .sp=0x6b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4eb7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4eb7, .value=0x3c, .type=IO_READ},
        {.addr=0x4eb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_006F) {
    const struct CPU_State initial_cpu = {.pc=0x4163, .a=0x25, .x=0xd5, .y=0x63, .sp=0x21, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x4163, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4164, .a=0x4a, .x=0xd5, .y=0x63, .sp=0x21, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4163, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4163, .value=0x3c, .type=IO_READ},
        {.addr=0x4164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0070) {
    const struct CPU_State initial_cpu = {.pc=0xecef, .a=0xf6, .x=0xd5, .y=0x3a, .sp=0x97, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xecef, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xecf0, .a=0xec, .x=0xd5, .y=0x3a, .sp=0x97, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xecef, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xecef, .value=0x3c, .type=IO_READ},
        {.addr=0xecf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6782, .a=0x52, .x=0xe9, .y=0xae, .sp=0x04, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6782, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6783, .a=0xa4, .x=0xe9, .y=0xae, .sp=0x04, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6782, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6782, .value=0x3c, .type=IO_READ},
        {.addr=0x6783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9b0a, .a=0xf3, .x=0xee, .y=0xba, .sp=0xdc, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x9b0a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9b0b, .a=0xe7, .x=0xee, .y=0xba, .sp=0xdc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9b0a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9b0a, .value=0x3c, .type=IO_READ},
        {.addr=0x9b0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0073) {
    const struct CPU_State initial_cpu = {.pc=0x260e, .a=0x74, .x=0xb0, .y=0x31, .sp=0xf9, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x260e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x260f, .a=0xe8, .x=0xb0, .y=0x31, .sp=0xf9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x260e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x260e, .value=0x3c, .type=IO_READ},
        {.addr=0x260f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0074) {
    const struct CPU_State initial_cpu = {.pc=0xa439, .a=0x26, .x=0x1e, .y=0xa5, .sp=0x23, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa439, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa43a, .a=0x4c, .x=0x1e, .y=0xa5, .sp=0x23, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa439, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa439, .value=0x3c, .type=IO_READ},
        {.addr=0xa43a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0075) {
    const struct CPU_State initial_cpu = {.pc=0x86eb, .a=0xa2, .x=0xb8, .y=0x4e, .sp=0xc7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x86eb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x86ec, .a=0x44, .x=0xb8, .y=0x4e, .sp=0xc7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x86eb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x86eb, .value=0x3c, .type=IO_READ},
        {.addr=0x86ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0076) {
    const struct CPU_State initial_cpu = {.pc=0xabc2, .a=0x50, .x=0xa3, .y=0x1a, .sp=0x88, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xabc2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xabc3, .a=0xa1, .x=0xa3, .y=0x1a, .sp=0x88, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xabc2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xabc2, .value=0x3c, .type=IO_READ},
        {.addr=0xabc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0077) {
    const struct CPU_State initial_cpu = {.pc=0xd9f4, .a=0x4c, .x=0x91, .y=0x07, .sp=0x8e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd9f5, .a=0x99, .x=0x91, .y=0x07, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd9f4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd9f4, .value=0x3c, .type=IO_READ},
        {.addr=0xd9f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0078) {
    const struct CPU_State initial_cpu = {.pc=0x4fd2, .a=0x2b, .x=0x26, .y=0xe0, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4fd3, .a=0x57, .x=0x26, .y=0xe0, .sp=0x9b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4fd2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4fd2, .value=0x3c, .type=IO_READ},
        {.addr=0x4fd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0079) {
    const struct CPU_State initial_cpu = {.pc=0x5b99, .a=0x2c, .x=0xe5, .y=0x8b, .sp=0xcd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5b99, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5b9a, .a=0x58, .x=0xe5, .y=0x8b, .sp=0xcd, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5b99, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5b99, .value=0x3c, .type=IO_READ},
        {.addr=0x5b9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007A) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0x7f, .x=0x89, .y=0xd2, .sp=0x8d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6338, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0xfe, .x=0x89, .y=0xd2, .sp=0x8d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6338, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0x3c, .type=IO_READ},
        {.addr=0x6339, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc3b8, .a=0x19, .x=0x7c, .y=0xde, .sp=0x5b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc3b9, .a=0x33, .x=0x7c, .y=0xde, .sp=0x5b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc3b8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc3b8, .value=0x3c, .type=IO_READ},
        {.addr=0xc3b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007C) {
    const struct CPU_State initial_cpu = {.pc=0x8885, .a=0xcc, .x=0x56, .y=0x65, .sp=0xe9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8885, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8886, .a=0x99, .x=0x56, .y=0x65, .sp=0xe9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8885, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8885, .value=0x3c, .type=IO_READ},
        {.addr=0x8886, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007D) {
    const struct CPU_State initial_cpu = {.pc=0x8d50, .a=0x9b, .x=0x88, .y=0xf4, .sp=0x94, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x8d50, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d51, .a=0x37, .x=0x88, .y=0xf4, .sp=0x94, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8d50, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d50, .value=0x3c, .type=IO_READ},
        {.addr=0x8d51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007E) {
    const struct CPU_State initial_cpu = {.pc=0x6e2d, .a=0x8b, .x=0x8a, .y=0xeb, .sp=0x24, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6e2e, .a=0x17, .x=0x8a, .y=0xeb, .sp=0x24, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6e2d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6e2d, .value=0x3c, .type=IO_READ},
        {.addr=0x6e2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_007F) {
    const struct CPU_State initial_cpu = {.pc=0xb960, .a=0x2e, .x=0xfb, .y=0x4c, .sp=0xbc, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb960, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb961, .a=0x5c, .x=0xfb, .y=0x4c, .sp=0xbc, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb960, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb960, .value=0x3c, .type=IO_READ},
        {.addr=0xb961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0080) {
    const struct CPU_State initial_cpu = {.pc=0x6c2e, .a=0x45, .x=0x61, .y=0xc7, .sp=0x7d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6c2f, .a=0x8b, .x=0x61, .y=0xc7, .sp=0x7d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6c2e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6c2e, .value=0x3c, .type=IO_READ},
        {.addr=0x6c2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0081) {
    const struct CPU_State initial_cpu = {.pc=0x546f, .a=0xe4, .x=0xe4, .y=0x94, .sp=0xd7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x546f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5470, .a=0xc9, .x=0xe4, .y=0x94, .sp=0xd7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x546f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x546f, .value=0x3c, .type=IO_READ},
        {.addr=0x5470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0082) {
    const struct CPU_State initial_cpu = {.pc=0x6a35, .a=0xb2, .x=0x2d, .y=0x6a, .sp=0xde, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a35, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6a36, .a=0x65, .x=0x2d, .y=0x6a, .sp=0xde, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6a35, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6a35, .value=0x3c, .type=IO_READ},
        {.addr=0x6a36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0083) {
    const struct CPU_State initial_cpu = {.pc=0x6ea5, .a=0xfd, .x=0x66, .y=0xe2, .sp=0x93, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6ea6, .a=0xfb, .x=0x66, .y=0xe2, .sp=0x93, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6ea5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6ea5, .value=0x3c, .type=IO_READ},
        {.addr=0x6ea6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0084) {
    const struct CPU_State initial_cpu = {.pc=0x25a7, .a=0xbd, .x=0xc8, .y=0x28, .sp=0xcb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x25a7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x25a8, .a=0x7a, .x=0xc8, .y=0x28, .sp=0xcb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x25a7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x25a7, .value=0x3c, .type=IO_READ},
        {.addr=0x25a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0085) {
    const struct CPU_State initial_cpu = {.pc=0x6998, .a=0x30, .x=0x6b, .y=0x35, .sp=0x05, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6998, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6999, .a=0x61, .x=0x6b, .y=0x35, .sp=0x05, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6998, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6998, .value=0x3c, .type=IO_READ},
        {.addr=0x6999, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9bf6, .a=0x0d, .x=0xed, .y=0xd9, .sp=0x26, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9bf7, .a=0x1a, .x=0xed, .y=0xd9, .sp=0x26, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9bf6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9bf6, .value=0x3c, .type=IO_READ},
        {.addr=0x9bf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0087) {
    const struct CPU_State initial_cpu = {.pc=0x0be4, .a=0x10, .x=0x8f, .y=0x94, .sp=0x9c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0be4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0be5, .a=0x20, .x=0x8f, .y=0x94, .sp=0x9c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0be4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0be4, .value=0x3c, .type=IO_READ},
        {.addr=0x0be5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1795, .a=0xe4, .x=0x26, .y=0x81, .sp=0x03, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1795, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1796, .a=0xc8, .x=0x26, .y=0x81, .sp=0x03, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1795, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1795, .value=0x3c, .type=IO_READ},
        {.addr=0x1796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0089) {
    const struct CPU_State initial_cpu = {.pc=0x59b6, .a=0xea, .x=0x2d, .y=0x29, .sp=0x45, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x59b6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x59b7, .a=0xd5, .x=0x2d, .y=0x29, .sp=0x45, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x59b6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x59b6, .value=0x3c, .type=IO_READ},
        {.addr=0x59b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008A) {
    const struct CPU_State initial_cpu = {.pc=0x503e, .a=0xb9, .x=0x39, .y=0x81, .sp=0x56, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x503e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x503f, .a=0x73, .x=0x39, .y=0x81, .sp=0x56, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x503e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x503e, .value=0x3c, .type=IO_READ},
        {.addr=0x503f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008B) {
    const struct CPU_State initial_cpu = {.pc=0x3284, .a=0x49, .x=0xe2, .y=0x1e, .sp=0xd2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3284, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3285, .a=0x92, .x=0xe2, .y=0x1e, .sp=0xd2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3284, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3284, .value=0x3c, .type=IO_READ},
        {.addr=0x3285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008C) {
    const struct CPU_State initial_cpu = {.pc=0x2c6b, .a=0x21, .x=0x80, .y=0x17, .sp=0x36, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2c6b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2c6c, .a=0x42, .x=0x80, .y=0x17, .sp=0x36, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2c6b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2c6b, .value=0x3c, .type=IO_READ},
        {.addr=0x2c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008D) {
    const struct CPU_State initial_cpu = {.pc=0x9e83, .a=0xcc, .x=0xe5, .y=0x4e, .sp=0x87, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9e83, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9e84, .a=0x99, .x=0xe5, .y=0x4e, .sp=0x87, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9e83, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9e83, .value=0x3c, .type=IO_READ},
        {.addr=0x9e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008E) {
    const struct CPU_State initial_cpu = {.pc=0xc810, .a=0xf5, .x=0xbb, .y=0xe3, .sp=0xdb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc810, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc811, .a=0xeb, .x=0xbb, .y=0xe3, .sp=0xdb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc810, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc810, .value=0x3c, .type=IO_READ},
        {.addr=0xc811, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_008F) {
    const struct CPU_State initial_cpu = {.pc=0x8fe1, .a=0x54, .x=0xc2, .y=0x9a, .sp=0x02, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8fe1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8fe2, .a=0xa9, .x=0xc2, .y=0x9a, .sp=0x02, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8fe1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8fe1, .value=0x3c, .type=IO_READ},
        {.addr=0x8fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0090) {
    const struct CPU_State initial_cpu = {.pc=0x2345, .a=0x92, .x=0x2f, .y=0xa7, .sp=0xae, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2345, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2346, .a=0x24, .x=0x2f, .y=0xa7, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2345, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2345, .value=0x3c, .type=IO_READ},
        {.addr=0x2346, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0091) {
    const struct CPU_State initial_cpu = {.pc=0x2230, .a=0x35, .x=0xd2, .y=0x17, .sp=0x62, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2230, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2231, .a=0x6b, .x=0xd2, .y=0x17, .sp=0x62, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2230, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2230, .value=0x3c, .type=IO_READ},
        {.addr=0x2231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0092) {
    const struct CPU_State initial_cpu = {.pc=0x4cbd, .a=0xb4, .x=0x3a, .y=0x58, .sp=0xee, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4cbd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4cbe, .a=0x68, .x=0x3a, .y=0x58, .sp=0xee, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4cbd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4cbd, .value=0x3c, .type=IO_READ},
        {.addr=0x4cbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7c7c, .a=0xf8, .x=0xab, .y=0xa7, .sp=0x02, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7c7c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7c7d, .a=0xf0, .x=0xab, .y=0xa7, .sp=0x02, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7c7c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7c7c, .value=0x3c, .type=IO_READ},
        {.addr=0x7c7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0094) {
    const struct CPU_State initial_cpu = {.pc=0x142e, .a=0xa3, .x=0xf1, .y=0x5a, .sp=0x6c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x142e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x142f, .a=0x47, .x=0xf1, .y=0x5a, .sp=0x6c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x142e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x142e, .value=0x3c, .type=IO_READ},
        {.addr=0x142f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0095) {
    const struct CPU_State initial_cpu = {.pc=0x86a1, .a=0x87, .x=0x55, .y=0xd4, .sp=0x89, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x86a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x86a2, .a=0x0e, .x=0x55, .y=0xd4, .sp=0x89, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x86a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x86a1, .value=0x3c, .type=IO_READ},
        {.addr=0x86a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0096) {
    const struct CPU_State initial_cpu = {.pc=0xfdea, .a=0x87, .x=0x07, .y=0xcf, .sp=0x61, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xfdea, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfdeb, .a=0x0f, .x=0x07, .y=0xcf, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xfdea, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfdea, .value=0x3c, .type=IO_READ},
        {.addr=0xfdeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0097) {
    const struct CPU_State initial_cpu = {.pc=0x9625, .a=0x96, .x=0x46, .y=0x96, .sp=0x36, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9625, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9626, .a=0x2d, .x=0x46, .y=0x96, .sp=0x36, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9625, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9625, .value=0x3c, .type=IO_READ},
        {.addr=0x9626, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0098) {
    const struct CPU_State initial_cpu = {.pc=0x69fa, .a=0x47, .x=0x77, .y=0x65, .sp=0x08, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x69fa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x69fb, .a=0x8e, .x=0x77, .y=0x65, .sp=0x08, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x69fa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x69fa, .value=0x3c, .type=IO_READ},
        {.addr=0x69fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0099) {
    const struct CPU_State initial_cpu = {.pc=0xa8a5, .a=0x35, .x=0xae, .y=0xfd, .sp=0x41, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa8a6, .a=0x6a, .x=0xae, .y=0xfd, .sp=0x41, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa8a5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa8a5, .value=0x3c, .type=IO_READ},
        {.addr=0xa8a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009A) {
    const struct CPU_State initial_cpu = {.pc=0xf25b, .a=0x63, .x=0x8c, .y=0x35, .sp=0x03, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf25b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf25c, .a=0xc7, .x=0x8c, .y=0x35, .sp=0x03, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf25b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf25b, .value=0x3c, .type=IO_READ},
        {.addr=0xf25c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009B) {
    const struct CPU_State initial_cpu = {.pc=0x65a1, .a=0x54, .x=0xed, .y=0xe9, .sp=0xf7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x65a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x65a2, .a=0xa9, .x=0xed, .y=0xe9, .sp=0xf7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x65a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x65a1, .value=0x3c, .type=IO_READ},
        {.addr=0x65a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009C) {
    const struct CPU_State initial_cpu = {.pc=0xa1a6, .a=0x8c, .x=0x1c, .y=0x7e, .sp=0x83, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa1a7, .a=0x18, .x=0x1c, .y=0x7e, .sp=0x83, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa1a6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa1a6, .value=0x3c, .type=IO_READ},
        {.addr=0xa1a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009D) {
    const struct CPU_State initial_cpu = {.pc=0xc89d, .a=0xc9, .x=0xb9, .y=0x42, .sp=0x6c, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc89d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc89e, .a=0x93, .x=0xb9, .y=0x42, .sp=0x6c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc89d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc89d, .value=0x3c, .type=IO_READ},
        {.addr=0xc89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009E) {
    const struct CPU_State initial_cpu = {.pc=0x4110, .a=0x95, .x=0xd3, .y=0x42, .sp=0x0e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4110, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4111, .a=0x2b, .x=0xd3, .y=0x42, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4110, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4110, .value=0x3c, .type=IO_READ},
        {.addr=0x4111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_009F) {
    const struct CPU_State initial_cpu = {.pc=0xbb81, .a=0x2c, .x=0xb8, .y=0xa7, .sp=0xde, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xbb81, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbb82, .a=0x58, .x=0xb8, .y=0xa7, .sp=0xde, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbb81, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbb81, .value=0x3c, .type=IO_READ},
        {.addr=0xbb82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x3c95, .a=0x3c, .x=0xa4, .y=0x19, .sp=0xb5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3c95, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3c96, .a=0x78, .x=0xa4, .y=0x19, .sp=0xb5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3c95, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3c95, .value=0x3c, .type=IO_READ},
        {.addr=0x3c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xdd06, .a=0xa8, .x=0xf5, .y=0xe7, .sp=0x24, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdd06, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdd07, .a=0x50, .x=0xf5, .y=0xe7, .sp=0x24, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdd06, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdd06, .value=0x3c, .type=IO_READ},
        {.addr=0xdd07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x85f9, .a=0x06, .x=0xf8, .y=0x62, .sp=0x75, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x85f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85fa, .a=0x0d, .x=0xf8, .y=0x62, .sp=0x75, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x85f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85f9, .value=0x3c, .type=IO_READ},
        {.addr=0x85fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xc300, .a=0xc2, .x=0x00, .y=0x85, .sp=0x14, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xc300, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc301, .a=0x85, .x=0x00, .y=0x85, .sp=0x14, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc300, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc300, .value=0x3c, .type=IO_READ},
        {.addr=0xc301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb924, .a=0x72, .x=0x6b, .y=0x14, .sp=0x30, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb924, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb925, .a=0xe5, .x=0x6b, .y=0x14, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb924, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb924, .value=0x3c, .type=IO_READ},
        {.addr=0xb925, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x4dd2, .a=0xb0, .x=0xa7, .y=0x90, .sp=0xe4, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4dd3, .a=0x61, .x=0xa7, .y=0x90, .sp=0xe4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4dd2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4dd2, .value=0x3c, .type=IO_READ},
        {.addr=0x4dd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xc9f6, .a=0xcc, .x=0x94, .y=0x06, .sp=0xab, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc9f7, .a=0x99, .x=0x94, .y=0x06, .sp=0xab, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc9f6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc9f6, .value=0x3c, .type=IO_READ},
        {.addr=0xc9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xe47b, .a=0xa7, .x=0x7d, .y=0xf5, .sp=0x13, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xe47b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe47c, .a=0x4f, .x=0x7d, .y=0xf5, .sp=0x13, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe47b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe47b, .value=0x3c, .type=IO_READ},
        {.addr=0xe47c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x708b, .a=0x02, .x=0xd4, .y=0xe1, .sp=0x49, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x708b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x708c, .a=0x04, .x=0xd4, .y=0xe1, .sp=0x49, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x708b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x708b, .value=0x3c, .type=IO_READ},
        {.addr=0x708c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9e62, .a=0xa5, .x=0x88, .y=0xa2, .sp=0x57, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9e62, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9e63, .a=0x4b, .x=0x88, .y=0xa2, .sp=0x57, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9e62, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9e62, .value=0x3c, .type=IO_READ},
        {.addr=0x9e63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xcfb0, .a=0x60, .x=0x58, .y=0xe0, .sp=0xf1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcfb1, .a=0xc0, .x=0x58, .y=0xe0, .sp=0xf1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcfb0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcfb0, .value=0x3c, .type=IO_READ},
        {.addr=0xcfb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x50ff, .a=0x56, .x=0x38, .y=0x6e, .sp=0xee, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x50ff, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5100, .a=0xac, .x=0x38, .y=0x6e, .sp=0xee, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x50ff, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x50ff, .value=0x3c, .type=IO_READ},
        {.addr=0x5100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xed54, .a=0xb8, .x=0x07, .y=0x50, .sp=0x28, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xed54, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xed55, .a=0x71, .x=0x07, .y=0x50, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xed54, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xed54, .value=0x3c, .type=IO_READ},
        {.addr=0xed55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x03f2, .a=0x1b, .x=0xed, .y=0xf5, .sp=0x97, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x03f2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x03f3, .a=0x37, .x=0xed, .y=0xf5, .sp=0x97, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x03f2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x03f2, .value=0x3c, .type=IO_READ},
        {.addr=0x03f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x92b9, .a=0x04, .x=0x55, .y=0xcf, .sp=0x0b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x92b9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x92ba, .a=0x09, .x=0x55, .y=0xcf, .sp=0x0b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x92b9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x92b9, .value=0x3c, .type=IO_READ},
        {.addr=0x92ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xec76, .a=0x68, .x=0x76, .y=0x2d, .sp=0x42, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xec76, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xec77, .a=0xd0, .x=0x76, .y=0x2d, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xec76, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xec76, .value=0x3c, .type=IO_READ},
        {.addr=0xec77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x9c87, .a=0x97, .x=0x0d, .y=0x65, .sp=0x81, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9c87, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9c88, .a=0x2e, .x=0x0d, .y=0x65, .sp=0x81, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9c87, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9c87, .value=0x3c, .type=IO_READ},
        {.addr=0x9c88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0a0e, .a=0xc4, .x=0x46, .y=0x5a, .sp=0x46, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0a0f, .a=0x88, .x=0x46, .y=0x5a, .sp=0x46, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0a0e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0a0e, .value=0x3c, .type=IO_READ},
        {.addr=0x0a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xbf25, .a=0xf6, .x=0x39, .y=0xce, .sp=0x9e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbf25, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbf26, .a=0xec, .x=0x39, .y=0xce, .sp=0x9e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xbf25, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbf25, .value=0x3c, .type=IO_READ},
        {.addr=0xbf26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x6d60, .a=0x8d, .x=0x82, .y=0x9a, .sp=0xbf, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6d60, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d61, .a=0x1a, .x=0x82, .y=0x9a, .sp=0xbf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6d60, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d60, .value=0x3c, .type=IO_READ},
        {.addr=0x6d61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x168b, .a=0x9b, .x=0x8d, .y=0xad, .sp=0x19, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x168b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x168c, .a=0x36, .x=0x8d, .y=0xad, .sp=0x19, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x168b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x168b, .value=0x3c, .type=IO_READ},
        {.addr=0x168c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xd84c, .a=0x36, .x=0x16, .y=0xbe, .sp=0x43, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd84c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd84d, .a=0x6c, .x=0x16, .y=0xbe, .sp=0x43, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd84c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd84c, .value=0x3c, .type=IO_READ},
        {.addr=0xd84d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x77c6, .a=0xe0, .x=0xfb, .y=0xcf, .sp=0xad, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x77c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x77c7, .a=0xc1, .x=0xfb, .y=0xcf, .sp=0xad, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x77c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x77c6, .value=0x3c, .type=IO_READ},
        {.addr=0x77c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0x16, .x=0xb5, .y=0x60, .sp=0x25, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2367, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2368, .a=0x2d, .x=0xb5, .y=0x60, .sp=0x25, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2367, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0x3c, .type=IO_READ},
        {.addr=0x2368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xa2e1, .a=0x73, .x=0x64, .y=0xa0, .sp=0xf8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa2e2, .a=0xe6, .x=0x64, .y=0xa0, .sp=0xf8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa2e1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa2e1, .value=0x3c, .type=IO_READ},
        {.addr=0xa2e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x64ed, .a=0xeb, .x=0xde, .y=0x09, .sp=0x6b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x64ed, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x64ee, .a=0xd6, .x=0xde, .y=0x09, .sp=0x6b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x64ed, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x64ed, .value=0x3c, .type=IO_READ},
        {.addr=0x64ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xdad7, .a=0xe2, .x=0x6a, .y=0xa2, .sp=0x93, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdad7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdad8, .a=0xc5, .x=0x6a, .y=0xa2, .sp=0x93, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdad7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdad7, .value=0x3c, .type=IO_READ},
        {.addr=0xdad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xd7fd, .a=0xa9, .x=0x3b, .y=0xf1, .sp=0x3b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7fe, .a=0x53, .x=0x3b, .y=0xf1, .sp=0x3b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd7fd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7fd, .value=0x3c, .type=IO_READ},
        {.addr=0xd7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x181e, .a=0x2b, .x=0x22, .y=0xb3, .sp=0xdb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x181e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x181f, .a=0x57, .x=0x22, .y=0xb3, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x181e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x181e, .value=0x3c, .type=IO_READ},
        {.addr=0x181f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xa0c2, .a=0x19, .x=0x81, .y=0x93, .sp=0xb4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa0c3, .a=0x33, .x=0x81, .y=0x93, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa0c2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa0c2, .value=0x3c, .type=IO_READ},
        {.addr=0xa0c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x3dcd, .a=0xac, .x=0x26, .y=0xe4, .sp=0x0e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3dcd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3dce, .a=0x59, .x=0x26, .y=0xe4, .sp=0x0e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3dcd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3dcd, .value=0x3c, .type=IO_READ},
        {.addr=0x3dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xa79a, .a=0xa6, .x=0x76, .y=0x75, .sp=0x72, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xa79a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa79b, .a=0x4d, .x=0x76, .y=0x75, .sp=0x72, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa79a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa79a, .value=0x3c, .type=IO_READ},
        {.addr=0xa79b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x1390, .a=0x7a, .x=0x37, .y=0x5d, .sp=0xa9, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1390, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1391, .a=0xf4, .x=0x37, .y=0x5d, .sp=0xa9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1390, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1390, .value=0x3c, .type=IO_READ},
        {.addr=0x1391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x9f97, .a=0x45, .x=0xbf, .y=0x4a, .sp=0xc9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9f97, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9f98, .a=0x8a, .x=0xbf, .y=0x4a, .sp=0xc9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9f97, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9f97, .value=0x3c, .type=IO_READ},
        {.addr=0x9f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xb06b, .a=0x7f, .x=0x34, .y=0x4d, .sp=0x36, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb06b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb06c, .a=0xff, .x=0x34, .y=0x4d, .sp=0x36, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb06b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb06b, .value=0x3c, .type=IO_READ},
        {.addr=0xb06c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xeefa, .a=0xf0, .x=0x1b, .y=0x63, .sp=0x31, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xeefa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeefb, .a=0xe0, .x=0x1b, .y=0x63, .sp=0x31, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeefa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeefa, .value=0x3c, .type=IO_READ},
        {.addr=0xeefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x9444, .a=0x5d, .x=0x47, .y=0x34, .sp=0x1d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9444, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9445, .a=0xbb, .x=0x47, .y=0x34, .sp=0x1d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9444, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9444, .value=0x3c, .type=IO_READ},
        {.addr=0x9445, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xb082, .a=0x13, .x=0x08, .y=0x54, .sp=0x37, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb082, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb083, .a=0x27, .x=0x08, .y=0x54, .sp=0x37, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb082, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb082, .value=0x3c, .type=IO_READ},
        {.addr=0xb083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xf89d, .a=0x09, .x=0x8e, .y=0x8d, .sp=0xae, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xf89d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf89e, .a=0x13, .x=0x8e, .y=0x8d, .sp=0xae, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf89d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf89d, .value=0x3c, .type=IO_READ},
        {.addr=0xf89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x4abd, .a=0xad, .x=0x3f, .y=0x71, .sp=0xa9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4abd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4abe, .a=0x5b, .x=0x3f, .y=0x71, .sp=0xa9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4abd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4abd, .value=0x3c, .type=IO_READ},
        {.addr=0x4abe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb653, .a=0xe4, .x=0x81, .y=0x7c, .sp=0xd2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb653, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb654, .a=0xc8, .x=0x81, .y=0x7c, .sp=0xd2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb653, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb653, .value=0x3c, .type=IO_READ},
        {.addr=0xb654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x8e5d, .a=0x6c, .x=0x29, .y=0x62, .sp=0x5b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x8e5d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8e5e, .a=0xd8, .x=0x29, .y=0x62, .sp=0x5b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8e5d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8e5d, .value=0x3c, .type=IO_READ},
        {.addr=0x8e5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa4b6, .a=0x73, .x=0x5f, .y=0xb3, .sp=0xd9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa4b7, .a=0xe6, .x=0x5f, .y=0xb3, .sp=0xd9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa4b6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa4b6, .value=0x3c, .type=IO_READ},
        {.addr=0xa4b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x1f00, .a=0x71, .x=0x39, .y=0x7c, .sp=0x8e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1f00, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1f01, .a=0xe3, .x=0x39, .y=0x7c, .sp=0x8e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1f00, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1f00, .value=0x3c, .type=IO_READ},
        {.addr=0x1f01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x06b1, .a=0x4d, .x=0x2d, .y=0x51, .sp=0x49, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x06b1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x06b2, .a=0x9b, .x=0x2d, .y=0x51, .sp=0x49, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x06b1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x06b1, .value=0x3c, .type=IO_READ},
        {.addr=0x06b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf9a3, .a=0xae, .x=0x77, .y=0xce, .sp=0xc6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf9a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf9a4, .a=0x5c, .x=0x77, .y=0xce, .sp=0xc6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf9a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf9a3, .value=0x3c, .type=IO_READ},
        {.addr=0xf9a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x1181, .a=0x70, .x=0xf3, .y=0x58, .sp=0x8b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1181, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1182, .a=0xe1, .x=0xf3, .y=0x58, .sp=0x8b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1181, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1181, .value=0x3c, .type=IO_READ},
        {.addr=0x1182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x0aa6, .a=0xda, .x=0x61, .y=0xe1, .sp=0xd0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0aa7, .a=0xb4, .x=0x61, .y=0xe1, .sp=0xd0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0aa6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0aa6, .value=0x3c, .type=IO_READ},
        {.addr=0x0aa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb58d, .a=0x65, .x=0x78, .y=0x33, .sp=0xef, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb58d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb58e, .a=0xcb, .x=0x78, .y=0x33, .sp=0xef, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb58d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb58d, .value=0x3c, .type=IO_READ},
        {.addr=0xb58e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x5f18, .a=0x6c, .x=0x0f, .y=0xb4, .sp=0x59, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5f18, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f19, .a=0xd8, .x=0x0f, .y=0xb4, .sp=0x59, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5f18, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f18, .value=0x3c, .type=IO_READ},
        {.addr=0x5f19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x93e0, .a=0xab, .x=0x75, .y=0xf2, .sp=0xcc, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x93e0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x93e1, .a=0x56, .x=0x75, .y=0xf2, .sp=0xcc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x93e0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x93e0, .value=0x3c, .type=IO_READ},
        {.addr=0x93e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0x71, .x=0xcd, .y=0x17, .sp=0x6f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa973, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0xe2, .x=0xcd, .y=0x17, .sp=0x6f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa973, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0x3c, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xfb9c, .a=0x09, .x=0x81, .y=0x32, .sp=0x85, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xfb9c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfb9d, .a=0x12, .x=0x81, .y=0x32, .sp=0x85, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfb9c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfb9c, .value=0x3c, .type=IO_READ},
        {.addr=0xfb9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xf5b6, .a=0xe9, .x=0xbc, .y=0x4b, .sp=0x6f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf5b6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf5b7, .a=0xd3, .x=0xbc, .y=0x4b, .sp=0x6f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf5b6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf5b6, .value=0x3c, .type=IO_READ},
        {.addr=0xf5b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x63e7, .a=0x4d, .x=0xbb, .y=0x37, .sp=0x9f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x63e7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x63e8, .a=0x9b, .x=0xbb, .y=0x37, .sp=0x9f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x63e7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x63e7, .value=0x3c, .type=IO_READ},
        {.addr=0x63e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xd23b, .a=0xf4, .x=0xcb, .y=0x82, .sp=0xba, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xd23b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd23c, .a=0xe9, .x=0xcb, .y=0x82, .sp=0xba, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd23b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd23b, .value=0x3c, .type=IO_READ},
        {.addr=0xd23c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x12a4, .a=0x30, .x=0xf8, .y=0x5e, .sp=0x63, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x12a4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x12a5, .a=0x60, .x=0xf8, .y=0x5e, .sp=0x63, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x12a4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x12a4, .value=0x3c, .type=IO_READ},
        {.addr=0x12a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x2f42, .a=0xc0, .x=0xb1, .y=0xd8, .sp=0x31, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f42, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2f43, .a=0x80, .x=0xb1, .y=0xd8, .sp=0x31, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2f42, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2f42, .value=0x3c, .type=IO_READ},
        {.addr=0x2f43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xf0b5, .a=0xad, .x=0x4f, .y=0x52, .sp=0x46, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf0b6, .a=0x5b, .x=0x4f, .y=0x52, .sp=0x46, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf0b5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf0b5, .value=0x3c, .type=IO_READ},
        {.addr=0xf0b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xca8c, .a=0x61, .x=0x87, .y=0xe3, .sp=0x66, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xca8c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xca8d, .a=0xc3, .x=0x87, .y=0xe3, .sp=0x66, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xca8c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xca8c, .value=0x3c, .type=IO_READ},
        {.addr=0xca8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xef97, .a=0x8c, .x=0x4f, .y=0xec, .sp=0xb2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xef97, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xef98, .a=0x19, .x=0x4f, .y=0xec, .sp=0xb2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xef97, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xef97, .value=0x3c, .type=IO_READ},
        {.addr=0xef98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x6bb4, .a=0x96, .x=0xd7, .y=0xe2, .sp=0xb6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6bb5, .a=0x2d, .x=0xd7, .y=0xe2, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6bb4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6bb4, .value=0x3c, .type=IO_READ},
        {.addr=0x6bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x155f, .a=0x36, .x=0xa2, .y=0x76, .sp=0xb3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x155f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1560, .a=0x6d, .x=0xa2, .y=0x76, .sp=0xb3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x155f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x155f, .value=0x3c, .type=IO_READ},
        {.addr=0x1560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x765f, .a=0x76, .x=0x36, .y=0x77, .sp=0x0c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x765f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7660, .a=0xec, .x=0x36, .y=0x77, .sp=0x0c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x765f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x765f, .value=0x3c, .type=IO_READ},
        {.addr=0x7660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xf6b3, .a=0x20, .x=0xf6, .y=0x0a, .sp=0xcc, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf6b4, .a=0x41, .x=0xf6, .y=0x0a, .sp=0xcc, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf6b3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf6b3, .value=0x3c, .type=IO_READ},
        {.addr=0xf6b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x5524, .a=0xae, .x=0xda, .y=0xa2, .sp=0xdf, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5524, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5525, .a=0x5d, .x=0xda, .y=0xa2, .sp=0xdf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5524, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5524, .value=0x3c, .type=IO_READ},
        {.addr=0x5525, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x2ea1, .a=0xd5, .x=0x06, .y=0xe8, .sp=0xbc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2ea2, .a=0xaa, .x=0x06, .y=0xe8, .sp=0xbc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2ea1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2ea1, .value=0x3c, .type=IO_READ},
        {.addr=0x2ea2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xaba9, .a=0x1a, .x=0x2f, .y=0xcc, .sp=0xc3, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xaba9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xabaa, .a=0x35, .x=0x2f, .y=0xcc, .sp=0xc3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xaba9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaba9, .value=0x3c, .type=IO_READ},
        {.addr=0xabaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x8432, .a=0x67, .x=0x05, .y=0x73, .sp=0xe0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8432, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8433, .a=0xcf, .x=0x05, .y=0x73, .sp=0xe0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8432, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8432, .value=0x3c, .type=IO_READ},
        {.addr=0x8433, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xb871, .a=0x36, .x=0x36, .y=0x48, .sp=0xd7, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb871, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb872, .a=0x6c, .x=0x36, .y=0x48, .sp=0xd7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb871, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb871, .value=0x3c, .type=IO_READ},
        {.addr=0xb872, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xf603, .a=0x19, .x=0xe5, .y=0xd5, .sp=0xc6, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf603, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf604, .a=0x33, .x=0xe5, .y=0xd5, .sp=0xc6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf603, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf603, .value=0x3c, .type=IO_READ},
        {.addr=0xf604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa080, .a=0x84, .x=0xf2, .y=0x80, .sp=0x14, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa080, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa081, .a=0x09, .x=0xf2, .y=0x80, .sp=0x14, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa080, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa080, .value=0x3c, .type=IO_READ},
        {.addr=0xa081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xe71f, .a=0x08, .x=0x4f, .y=0x91, .sp=0x26, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xe71f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe720, .a=0x10, .x=0x4f, .y=0x91, .sp=0x26, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe71f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe71f, .value=0x3c, .type=IO_READ},
        {.addr=0xe720, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xa986, .a=0x38, .x=0xb9, .y=0x9b, .sp=0x02, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa986, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa987, .a=0x70, .x=0xb9, .y=0x9b, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa986, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa986, .value=0x3c, .type=IO_READ},
        {.addr=0xa987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x8de6, .a=0x96, .x=0x5b, .y=0xbe, .sp=0xed, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8de6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8de7, .a=0x2d, .x=0x5b, .y=0xbe, .sp=0xed, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8de6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8de6, .value=0x3c, .type=IO_READ},
        {.addr=0x8de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf911, .a=0xe0, .x=0x9a, .y=0x21, .sp=0xc8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf911, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf912, .a=0xc1, .x=0x9a, .y=0x21, .sp=0xc8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf911, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf911, .value=0x3c, .type=IO_READ},
        {.addr=0xf912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xaedc, .a=0xfd, .x=0x82, .y=0xe1, .sp=0xe9, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xaedc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaedd, .a=0xfa, .x=0x82, .y=0xe1, .sp=0xe9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xaedc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaedc, .value=0x3c, .type=IO_READ},
        {.addr=0xaedd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9fd3, .a=0x0f, .x=0x88, .y=0x52, .sp=0xce, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9fd3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9fd4, .a=0x1e, .x=0x88, .y=0x52, .sp=0xce, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9fd3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9fd3, .value=0x3c, .type=IO_READ},
        {.addr=0x9fd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x49e9, .a=0x84, .x=0x19, .y=0x9f, .sp=0x19, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x49e9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x49ea, .a=0x08, .x=0x19, .y=0x9f, .sp=0x19, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x49e9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x49e9, .value=0x3c, .type=IO_READ},
        {.addr=0x49ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x8431, .a=0x22, .x=0x74, .y=0x1a, .sp=0x05, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8431, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8432, .a=0x44, .x=0x74, .y=0x1a, .sp=0x05, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8431, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8431, .value=0x3c, .type=IO_READ},
        {.addr=0x8432, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x5ac2, .a=0xc1, .x=0x03, .y=0xa0, .sp=0x48, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5ac3, .a=0x83, .x=0x03, .y=0xa0, .sp=0x48, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5ac2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5ac2, .value=0x3c, .type=IO_READ},
        {.addr=0x5ac3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x1aef, .a=0xd5, .x=0xaf, .y=0x8a, .sp=0xa1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1aef, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1af0, .a=0xab, .x=0xaf, .y=0x8a, .sp=0xa1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1aef, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1aef, .value=0x3c, .type=IO_READ},
        {.addr=0x1af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xab60, .a=0x53, .x=0x32, .y=0x43, .sp=0x60, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xab60, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xab61, .a=0xa6, .x=0x32, .y=0x43, .sp=0x60, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xab60, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xab60, .value=0x3c, .type=IO_READ},
        {.addr=0xab61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xcc3e, .a=0x34, .x=0xfe, .y=0x73, .sp=0xc7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xcc3e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcc3f, .a=0x68, .x=0xfe, .y=0x73, .sp=0xc7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcc3e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcc3e, .value=0x3c, .type=IO_READ},
        {.addr=0xcc3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x26f6, .a=0x9f, .x=0x33, .y=0xb5, .sp=0x99, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x26f6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x26f7, .a=0x3e, .x=0x33, .y=0xb5, .sp=0x99, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x26f6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x26f6, .value=0x3c, .type=IO_READ},
        {.addr=0x26f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x658e, .a=0xc7, .x=0xdb, .y=0x05, .sp=0x4e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x658e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x658f, .a=0x8f, .x=0xdb, .y=0x05, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x658e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x658e, .value=0x3c, .type=IO_READ},
        {.addr=0x658f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xb19d, .a=0x3b, .x=0xc1, .y=0x32, .sp=0xaf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb19d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb19e, .a=0x77, .x=0xc1, .y=0x32, .sp=0xaf, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb19d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb19d, .value=0x3c, .type=IO_READ},
        {.addr=0xb19e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x0c14, .a=0x1d, .x=0x17, .y=0xdd, .sp=0x50, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0c14, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0c15, .a=0x3a, .x=0x17, .y=0xdd, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0c14, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0c14, .value=0x3c, .type=IO_READ},
        {.addr=0x0c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x02f2, .a=0xe3, .x=0x15, .y=0x1a, .sp=0xaa, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x02f2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x02f3, .a=0xc7, .x=0x15, .y=0x1a, .sp=0xaa, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x02f2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x02f2, .value=0x3c, .type=IO_READ},
        {.addr=0x02f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x401d, .a=0x3e, .x=0x36, .y=0x89, .sp=0xc1, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x401d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x401e, .a=0x7c, .x=0x36, .y=0x89, .sp=0xc1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x401d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x401d, .value=0x3c, .type=IO_READ},
        {.addr=0x401e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x5333, .a=0x96, .x=0x3d, .y=0x2b, .sp=0x4a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5333, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5334, .a=0x2d, .x=0x3d, .y=0x2b, .sp=0x4a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5333, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5333, .value=0x3c, .type=IO_READ},
        {.addr=0x5334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xc403, .a=0xff, .x=0x5c, .y=0x3c, .sp=0x44, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc403, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc404, .a=0xfe, .x=0x5c, .y=0x3c, .sp=0x44, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc403, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc403, .value=0x3c, .type=IO_READ},
        {.addr=0xc404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x6d13, .a=0x0f, .x=0x13, .y=0xbe, .sp=0x88, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x6d13, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d14, .a=0x1e, .x=0x13, .y=0xbe, .sp=0x88, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6d13, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d13, .value=0x3c, .type=IO_READ},
        {.addr=0x6d14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xe471, .a=0x53, .x=0xe0, .y=0x38, .sp=0x8a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe471, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe472, .a=0xa7, .x=0xe0, .y=0x38, .sp=0x8a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe471, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe471, .value=0x3c, .type=IO_READ},
        {.addr=0xe472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x8023, .a=0xe7, .x=0x65, .y=0xd4, .sp=0xed, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x8023, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8024, .a=0xcf, .x=0x65, .y=0xd4, .sp=0xed, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8023, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8023, .value=0x3c, .type=IO_READ},
        {.addr=0x8024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3a61, .a=0x69, .x=0x7f, .y=0xde, .sp=0xf1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3a61, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3a62, .a=0xd2, .x=0x7f, .y=0xde, .sp=0xf1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3a61, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3a61, .value=0x3c, .type=IO_READ},
        {.addr=0x3a62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0100) {
    const struct CPU_State initial_cpu = {.pc=0x45df, .a=0x9c, .x=0x9a, .y=0xbb, .sp=0xca, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x45df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x45e0, .a=0x38, .x=0x9a, .y=0xbb, .sp=0xca, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x45df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x45df, .value=0x3c, .type=IO_READ},
        {.addr=0x45e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0101) {
    const struct CPU_State initial_cpu = {.pc=0x0dc2, .a=0x03, .x=0xd2, .y=0x32, .sp=0x0b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0dc3, .a=0x06, .x=0xd2, .y=0x32, .sp=0x0b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0dc2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0dc2, .value=0x3c, .type=IO_READ},
        {.addr=0x0dc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0102) {
    const struct CPU_State initial_cpu = {.pc=0xa8bc, .a=0xd0, .x=0x58, .y=0xd4, .sp=0xba, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa8bc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa8bd, .a=0xa1, .x=0x58, .y=0xd4, .sp=0xba, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa8bc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa8bc, .value=0x3c, .type=IO_READ},
        {.addr=0xa8bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb15c, .a=0x0d, .x=0x07, .y=0x89, .sp=0xff, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb15c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb15d, .a=0x1a, .x=0x07, .y=0x89, .sp=0xff, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb15c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb15c, .value=0x3c, .type=IO_READ},
        {.addr=0xb15d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd10d, .a=0x96, .x=0x06, .y=0x6f, .sp=0x82, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd10d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd10e, .a=0x2c, .x=0x06, .y=0x6f, .sp=0x82, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd10d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd10d, .value=0x3c, .type=IO_READ},
        {.addr=0xd10e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0105) {
    const struct CPU_State initial_cpu = {.pc=0xcfbf, .a=0x5d, .x=0x35, .y=0x62, .sp=0x04, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xcfbf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcfc0, .a=0xbb, .x=0x35, .y=0x62, .sp=0x04, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcfbf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcfbf, .value=0x3c, .type=IO_READ},
        {.addr=0xcfc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0106) {
    const struct CPU_State initial_cpu = {.pc=0x3b12, .a=0xda, .x=0xfb, .y=0x8b, .sp=0x61, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3b12, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3b13, .a=0xb4, .x=0xfb, .y=0x8b, .sp=0x61, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3b12, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3b12, .value=0x3c, .type=IO_READ},
        {.addr=0x3b13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0107) {
    const struct CPU_State initial_cpu = {.pc=0x8c55, .a=0xd7, .x=0x30, .y=0x16, .sp=0x14, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x8c55, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8c56, .a=0xaf, .x=0x30, .y=0x16, .sp=0x14, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8c55, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8c55, .value=0x3c, .type=IO_READ},
        {.addr=0x8c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0108) {
    const struct CPU_State initial_cpu = {.pc=0xb64f, .a=0x7e, .x=0x06, .y=0x7f, .sp=0x72, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb64f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb650, .a=0xfc, .x=0x06, .y=0x7f, .sp=0x72, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb64f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb64f, .value=0x3c, .type=IO_READ},
        {.addr=0xb650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0109) {
    const struct CPU_State initial_cpu = {.pc=0x240e, .a=0xa7, .x=0x1b, .y=0xe9, .sp=0x04, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x240e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x240f, .a=0x4e, .x=0x1b, .y=0xe9, .sp=0x04, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x240e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x240e, .value=0x3c, .type=IO_READ},
        {.addr=0x240f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010A) {
    const struct CPU_State initial_cpu = {.pc=0x836f, .a=0x43, .x=0xf6, .y=0xb8, .sp=0x34, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x836f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8370, .a=0x87, .x=0xf6, .y=0xb8, .sp=0x34, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x836f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x836f, .value=0x3c, .type=IO_READ},
        {.addr=0x8370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010B) {
    const struct CPU_State initial_cpu = {.pc=0x9354, .a=0xe3, .x=0x0b, .y=0xce, .sp=0xe3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9354, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9355, .a=0xc6, .x=0x0b, .y=0xce, .sp=0xe3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9354, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9354, .value=0x3c, .type=IO_READ},
        {.addr=0x9355, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010C) {
    const struct CPU_State initial_cpu = {.pc=0x3f12, .a=0xa5, .x=0xe1, .y=0x65, .sp=0x5a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3f12, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3f13, .a=0x4b, .x=0xe1, .y=0x65, .sp=0x5a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3f12, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3f12, .value=0x3c, .type=IO_READ},
        {.addr=0x3f13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010D) {
    const struct CPU_State initial_cpu = {.pc=0xacf7, .a=0xc6, .x=0xbf, .y=0x00, .sp=0x4a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xacf7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xacf8, .a=0x8c, .x=0xbf, .y=0x00, .sp=0x4a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xacf7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xacf7, .value=0x3c, .type=IO_READ},
        {.addr=0xacf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010E) {
    const struct CPU_State initial_cpu = {.pc=0x796d, .a=0xf9, .x=0xb9, .y=0x28, .sp=0xc7, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x796d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x796e, .a=0xf3, .x=0xb9, .y=0x28, .sp=0xc7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x796d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x796d, .value=0x3c, .type=IO_READ},
        {.addr=0x796e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_010F) {
    const struct CPU_State initial_cpu = {.pc=0x5e95, .a=0x38, .x=0x11, .y=0x95, .sp=0x54, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5e95, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5e96, .a=0x71, .x=0x11, .y=0x95, .sp=0x54, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5e95, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5e95, .value=0x3c, .type=IO_READ},
        {.addr=0x5e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa012, .a=0xb6, .x=0x7d, .y=0x87, .sp=0xf8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa012, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa013, .a=0x6d, .x=0x7d, .y=0x87, .sp=0xf8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa012, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa012, .value=0x3c, .type=IO_READ},
        {.addr=0xa013, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0111) {
    const struct CPU_State initial_cpu = {.pc=0x3257, .a=0xee, .x=0x08, .y=0x5b, .sp=0x2d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3257, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3258, .a=0xdd, .x=0x08, .y=0x5b, .sp=0x2d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3257, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3257, .value=0x3c, .type=IO_READ},
        {.addr=0x3258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0112) {
    const struct CPU_State initial_cpu = {.pc=0x0ab4, .a=0xcb, .x=0x86, .y=0x32, .sp=0x54, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0ab5, .a=0x97, .x=0x86, .y=0x32, .sp=0x54, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0ab4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0ab4, .value=0x3c, .type=IO_READ},
        {.addr=0x0ab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0113) {
    const struct CPU_State initial_cpu = {.pc=0xabd2, .a=0xfc, .x=0x1f, .y=0xea, .sp=0x82, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xabd2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xabd3, .a=0xf9, .x=0x1f, .y=0xea, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xabd2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xabd2, .value=0x3c, .type=IO_READ},
        {.addr=0xabd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf723, .a=0x1f, .x=0xc7, .y=0xe4, .sp=0x1c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf723, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf724, .a=0x3f, .x=0xc7, .y=0xe4, .sp=0x1c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf723, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf723, .value=0x3c, .type=IO_READ},
        {.addr=0xf724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0115) {
    const struct CPU_State initial_cpu = {.pc=0xcc24, .a=0x26, .x=0x56, .y=0x64, .sp=0x2d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xcc24, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcc25, .a=0x4d, .x=0x56, .y=0x64, .sp=0x2d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcc24, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcc24, .value=0x3c, .type=IO_READ},
        {.addr=0xcc25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0116) {
    const struct CPU_State initial_cpu = {.pc=0xdfdb, .a=0x46, .x=0xed, .y=0x3b, .sp=0x5f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xdfdb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdfdc, .a=0x8d, .x=0xed, .y=0x3b, .sp=0x5f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdfdb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdfdb, .value=0x3c, .type=IO_READ},
        {.addr=0xdfdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0117) {
    const struct CPU_State initial_cpu = {.pc=0x1ff0, .a=0x69, .x=0x00, .y=0xb1, .sp=0x17, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1ff1, .a=0xd2, .x=0x00, .y=0xb1, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1ff0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1ff0, .value=0x3c, .type=IO_READ},
        {.addr=0x1ff1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0118) {
    const struct CPU_State initial_cpu = {.pc=0x3a83, .a=0xb5, .x=0x4c, .y=0x24, .sp=0x43, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x3a83, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3a84, .a=0x6a, .x=0x4c, .y=0x24, .sp=0x43, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3a83, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3a83, .value=0x3c, .type=IO_READ},
        {.addr=0x3a84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0119) {
    const struct CPU_State initial_cpu = {.pc=0xfaa1, .a=0xcd, .x=0x17, .y=0xff, .sp=0xe9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfaa2, .a=0x9a, .x=0x17, .y=0xff, .sp=0xe9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xfaa1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfaa1, .value=0x3c, .type=IO_READ},
        {.addr=0xfaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011A) {
    const struct CPU_State initial_cpu = {.pc=0x70f2, .a=0x09, .x=0xb5, .y=0x15, .sp=0xfe, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x70f2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x70f3, .a=0x12, .x=0xb5, .y=0x15, .sp=0xfe, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x70f2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x70f2, .value=0x3c, .type=IO_READ},
        {.addr=0x70f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd75d, .a=0x08, .x=0x2c, .y=0x13, .sp=0xb1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xd75d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd75e, .a=0x11, .x=0x2c, .y=0x13, .sp=0xb1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd75d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd75d, .value=0x3c, .type=IO_READ},
        {.addr=0xd75e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011C) {
    const struct CPU_State initial_cpu = {.pc=0x2c9d, .a=0x16, .x=0xdd, .y=0x87, .sp=0x90, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2c9e, .a=0x2d, .x=0xdd, .y=0x87, .sp=0x90, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2c9d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2c9d, .value=0x3c, .type=IO_READ},
        {.addr=0x2c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011D) {
    const struct CPU_State initial_cpu = {.pc=0x05dd, .a=0x26, .x=0x68, .y=0xc9, .sp=0x91, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x05dd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x05de, .a=0x4c, .x=0x68, .y=0xc9, .sp=0x91, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x05dd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x05dd, .value=0x3c, .type=IO_READ},
        {.addr=0x05de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011E) {
    const struct CPU_State initial_cpu = {.pc=0x35c2, .a=0x8c, .x=0x3f, .y=0xf3, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x35c2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x35c3, .a=0x19, .x=0x3f, .y=0xf3, .sp=0x8f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x35c2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x35c2, .value=0x3c, .type=IO_READ},
        {.addr=0x35c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_011F) {
    const struct CPU_State initial_cpu = {.pc=0xfc6f, .a=0x12, .x=0x44, .y=0x82, .sp=0x73, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfc6f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfc70, .a=0x25, .x=0x44, .y=0x82, .sp=0x73, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfc6f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfc6f, .value=0x3c, .type=IO_READ},
        {.addr=0xfc70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd7e9, .a=0x2e, .x=0x76, .y=0x44, .sp=0xbe, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7ea, .a=0x5d, .x=0x76, .y=0x44, .sp=0xbe, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd7e9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7e9, .value=0x3c, .type=IO_READ},
        {.addr=0xd7ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0121) {
    const struct CPU_State initial_cpu = {.pc=0x60e3, .a=0xdd, .x=0x2e, .y=0x7f, .sp=0x24, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x60e3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x60e4, .a=0xbb, .x=0x2e, .y=0x7f, .sp=0x24, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x60e3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x60e3, .value=0x3c, .type=IO_READ},
        {.addr=0x60e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0122) {
    const struct CPU_State initial_cpu = {.pc=0xb587, .a=0x02, .x=0xac, .y=0x19, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xb587, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb588, .a=0x04, .x=0xac, .y=0x19, .sp=0x65, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb587, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb587, .value=0x3c, .type=IO_READ},
        {.addr=0xb588, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8f62, .a=0x69, .x=0x84, .y=0xcb, .sp=0xa9, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8f62, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8f63, .a=0xd2, .x=0x84, .y=0xcb, .sp=0xa9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8f62, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8f62, .value=0x3c, .type=IO_READ},
        {.addr=0x8f63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0124) {
    const struct CPU_State initial_cpu = {.pc=0x2025, .a=0xdd, .x=0x45, .y=0x5e, .sp=0xf3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2025, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2026, .a=0xbb, .x=0x45, .y=0x5e, .sp=0xf3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2025, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2025, .value=0x3c, .type=IO_READ},
        {.addr=0x2026, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4afa, .a=0x5c, .x=0x97, .y=0x88, .sp=0x4e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4afa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4afb, .a=0xb9, .x=0x97, .y=0x88, .sp=0x4e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x4afa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4afa, .value=0x3c, .type=IO_READ},
        {.addr=0x4afb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0cb4, .a=0xbf, .x=0xac, .y=0xad, .sp=0x0f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0cb4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0cb5, .a=0x7e, .x=0xac, .y=0xad, .sp=0x0f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0cb4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0cb4, .value=0x3c, .type=IO_READ},
        {.addr=0x0cb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0127) {
    const struct CPU_State initial_cpu = {.pc=0xfc2a, .a=0x15, .x=0xa6, .y=0x76, .sp=0x09, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xfc2a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfc2b, .a=0x2a, .x=0xa6, .y=0x76, .sp=0x09, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfc2a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfc2a, .value=0x3c, .type=IO_READ},
        {.addr=0xfc2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0128) {
    const struct CPU_State initial_cpu = {.pc=0x5d6d, .a=0xbd, .x=0x4f, .y=0x94, .sp=0x97, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5d6e, .a=0x7a, .x=0x4f, .y=0x94, .sp=0x97, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5d6d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5d6d, .value=0x3c, .type=IO_READ},
        {.addr=0x5d6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0129) {
    const struct CPU_State initial_cpu = {.pc=0xb2b8, .a=0xa5, .x=0x7d, .y=0xdb, .sp=0x00, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb2b9, .a=0x4b, .x=0x7d, .y=0xdb, .sp=0x00, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb2b8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb2b8, .value=0x3c, .type=IO_READ},
        {.addr=0xb2b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012A) {
    const struct CPU_State initial_cpu = {.pc=0x0701, .a=0x45, .x=0x15, .y=0x23, .sp=0xc2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0701, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0702, .a=0x8a, .x=0x15, .y=0x23, .sp=0xc2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0701, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0701, .value=0x3c, .type=IO_READ},
        {.addr=0x0702, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012B) {
    const struct CPU_State initial_cpu = {.pc=0x84c6, .a=0x88, .x=0x98, .y=0xbe, .sp=0x70, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x84c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x84c7, .a=0x11, .x=0x98, .y=0xbe, .sp=0x70, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x84c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x84c6, .value=0x3c, .type=IO_READ},
        {.addr=0x84c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012C) {
    const struct CPU_State initial_cpu = {.pc=0x804c, .a=0xf9, .x=0xf0, .y=0xfc, .sp=0xbd, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x804c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x804d, .a=0xf3, .x=0xf0, .y=0xfc, .sp=0xbd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x804c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x804c, .value=0x3c, .type=IO_READ},
        {.addr=0x804d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012D) {
    const struct CPU_State initial_cpu = {.pc=0xb9e9, .a=0xdf, .x=0xbd, .y=0x70, .sp=0xc8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb9ea, .a=0xbe, .x=0xbd, .y=0x70, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb9e9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb9e9, .value=0x3c, .type=IO_READ},
        {.addr=0xb9ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012E) {
    const struct CPU_State initial_cpu = {.pc=0x77db, .a=0xde, .x=0xc4, .y=0x1d, .sp=0x15, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x77db, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x77dc, .a=0xbc, .x=0xc4, .y=0x1d, .sp=0x15, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x77db, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x77db, .value=0x3c, .type=IO_READ},
        {.addr=0x77dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_012F) {
    const struct CPU_State initial_cpu = {.pc=0x5462, .a=0x17, .x=0x0b, .y=0x15, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5462, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5463, .a=0x2f, .x=0x0b, .y=0x15, .sp=0x30, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5462, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5462, .value=0x3c, .type=IO_READ},
        {.addr=0x5463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0130) {
    const struct CPU_State initial_cpu = {.pc=0x4d1c, .a=0xf7, .x=0xf6, .y=0x31, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4d1c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4d1d, .a=0xee, .x=0xf6, .y=0x31, .sp=0x8c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4d1c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4d1c, .value=0x3c, .type=IO_READ},
        {.addr=0x4d1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0131) {
    const struct CPU_State initial_cpu = {.pc=0xdb3c, .a=0xd4, .x=0xf5, .y=0xc9, .sp=0x82, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdb3c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdb3d, .a=0xa8, .x=0xf5, .y=0xc9, .sp=0x82, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xdb3c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdb3c, .value=0x3c, .type=IO_READ},
        {.addr=0xdb3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0132) {
    const struct CPU_State initial_cpu = {.pc=0xfb98, .a=0x34, .x=0x08, .y=0x19, .sp=0xd7, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfb98, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfb99, .a=0x68, .x=0x08, .y=0x19, .sp=0xd7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfb98, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfb98, .value=0x3c, .type=IO_READ},
        {.addr=0xfb99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0133) {
    const struct CPU_State initial_cpu = {.pc=0xf69f, .a=0x14, .x=0x75, .y=0xcc, .sp=0x19, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf69f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf6a0, .a=0x29, .x=0x75, .y=0xcc, .sp=0x19, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf69f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf69f, .value=0x3c, .type=IO_READ},
        {.addr=0xf6a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0134) {
    const struct CPU_State initial_cpu = {.pc=0x7f4d, .a=0x0a, .x=0x09, .y=0x10, .sp=0x74, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7f4d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7f4e, .a=0x14, .x=0x09, .y=0x10, .sp=0x74, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7f4d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7f4d, .value=0x3c, .type=IO_READ},
        {.addr=0x7f4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0184, .a=0x4b, .x=0xa9, .y=0x2c, .sp=0xf9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0185, .a=0x96, .x=0xa9, .y=0x2c, .sp=0xf9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0184, .value=0x3c, .type=IO_READ},
        {.addr=0x0185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0136) {
    const struct CPU_State initial_cpu = {.pc=0xce3c, .a=0x44, .x=0x47, .y=0xfd, .sp=0x78, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xce3c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce3d, .a=0x89, .x=0x47, .y=0xfd, .sp=0x78, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xce3c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce3c, .value=0x3c, .type=IO_READ},
        {.addr=0xce3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0137) {
    const struct CPU_State initial_cpu = {.pc=0x476f, .a=0x1f, .x=0x81, .y=0x8f, .sp=0x99, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x476f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4770, .a=0x3f, .x=0x81, .y=0x8f, .sp=0x99, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x476f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x476f, .value=0x3c, .type=IO_READ},
        {.addr=0x4770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0138) {
    const struct CPU_State initial_cpu = {.pc=0x262f, .a=0x1e, .x=0x4f, .y=0x91, .sp=0x5a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x262f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2630, .a=0x3d, .x=0x4f, .y=0x91, .sp=0x5a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x262f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x262f, .value=0x3c, .type=IO_READ},
        {.addr=0x2630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0139) {
    const struct CPU_State initial_cpu = {.pc=0xd558, .a=0x7f, .x=0x2d, .y=0x3c, .sp=0x5e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd558, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd559, .a=0xfe, .x=0x2d, .y=0x3c, .sp=0x5e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd558, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd558, .value=0x3c, .type=IO_READ},
        {.addr=0xd559, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013A) {
    const struct CPU_State initial_cpu = {.pc=0xec95, .a=0xde, .x=0xdb, .y=0x56, .sp=0x78, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xec95, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xec96, .a=0xbd, .x=0xdb, .y=0x56, .sp=0x78, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xec95, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xec95, .value=0x3c, .type=IO_READ},
        {.addr=0xec96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013B) {
    const struct CPU_State initial_cpu = {.pc=0xc529, .a=0x03, .x=0xd3, .y=0xf4, .sp=0x51, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc529, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc52a, .a=0x06, .x=0xd3, .y=0xf4, .sp=0x51, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc529, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc529, .value=0x3c, .type=IO_READ},
        {.addr=0xc52a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013C) {
    const struct CPU_State initial_cpu = {.pc=0xbecc, .a=0xb1, .x=0xa3, .y=0x18, .sp=0x49, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xbecc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbecd, .a=0x62, .x=0xa3, .y=0x18, .sp=0x49, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbecc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbecc, .value=0x3c, .type=IO_READ},
        {.addr=0xbecd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013D) {
    const struct CPU_State initial_cpu = {.pc=0x1abd, .a=0xae, .x=0xfd, .y=0x31, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1abd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1abe, .a=0x5c, .x=0xfd, .y=0x31, .sp=0x18, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1abd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1abd, .value=0x3c, .type=IO_READ},
        {.addr=0x1abe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013E) {
    const struct CPU_State initial_cpu = {.pc=0x474b, .a=0xee, .x=0x5a, .y=0xea, .sp=0xf9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x474b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x474c, .a=0xdd, .x=0x5a, .y=0xea, .sp=0xf9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x474b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x474b, .value=0x3c, .type=IO_READ},
        {.addr=0x474c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_013F) {
    const struct CPU_State initial_cpu = {.pc=0x7811, .a=0xc7, .x=0xe0, .y=0x54, .sp=0x9a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7811, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7812, .a=0x8e, .x=0xe0, .y=0x54, .sp=0x9a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7811, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7811, .value=0x3c, .type=IO_READ},
        {.addr=0x7812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0140) {
    const struct CPU_State initial_cpu = {.pc=0x828c, .a=0xbe, .x=0x5a, .y=0x71, .sp=0x58, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x828c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x828d, .a=0x7c, .x=0x5a, .y=0x71, .sp=0x58, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x828c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x828c, .value=0x3c, .type=IO_READ},
        {.addr=0x828d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe50d, .a=0x96, .x=0xce, .y=0xa0, .sp=0x7d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe50d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe50e, .a=0x2c, .x=0xce, .y=0xa0, .sp=0x7d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe50d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe50d, .value=0x3c, .type=IO_READ},
        {.addr=0xe50e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0142) {
    const struct CPU_State initial_cpu = {.pc=0x0436, .a=0x7d, .x=0x4a, .y=0xc6, .sp=0x82, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0436, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0437, .a=0xfb, .x=0x4a, .y=0xc6, .sp=0x82, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0436, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0436, .value=0x3c, .type=IO_READ},
        {.addr=0x0437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0143) {
    const struct CPU_State initial_cpu = {.pc=0xe431, .a=0x7a, .x=0xca, .y=0xf3, .sp=0x27, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe431, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe432, .a=0xf4, .x=0xca, .y=0xf3, .sp=0x27, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe431, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe431, .value=0x3c, .type=IO_READ},
        {.addr=0xe432, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5f99, .a=0x71, .x=0xef, .y=0x56, .sp=0x6d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5f99, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f9a, .a=0xe2, .x=0xef, .y=0x56, .sp=0x6d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5f99, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f99, .value=0x3c, .type=IO_READ},
        {.addr=0x5f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0145) {
    const struct CPU_State initial_cpu = {.pc=0x13db, .a=0xe7, .x=0x21, .y=0x24, .sp=0xe8, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x13db, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x13dc, .a=0xcf, .x=0x21, .y=0x24, .sp=0xe8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x13db, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x13db, .value=0x3c, .type=IO_READ},
        {.addr=0x13dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0146) {
    const struct CPU_State initial_cpu = {.pc=0x6bcd, .a=0xcb, .x=0x55, .y=0xb5, .sp=0x7f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6bce, .a=0x96, .x=0x55, .y=0xb5, .sp=0x7f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6bcd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6bcd, .value=0x3c, .type=IO_READ},
        {.addr=0x6bce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0147) {
    const struct CPU_State initial_cpu = {.pc=0xab6e, .a=0xb9, .x=0x13, .y=0xd2, .sp=0xf9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xab6e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xab6f, .a=0x73, .x=0x13, .y=0xd2, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xab6e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xab6e, .value=0x3c, .type=IO_READ},
        {.addr=0xab6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf9bf, .a=0x59, .x=0x09, .y=0xfb, .sp=0xb5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xf9bf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf9c0, .a=0xb3, .x=0x09, .y=0xfb, .sp=0xb5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf9bf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf9bf, .value=0x3c, .type=IO_READ},
        {.addr=0xf9c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0149) {
    const struct CPU_State initial_cpu = {.pc=0xe711, .a=0x58, .x=0xc6, .y=0xea, .sp=0xe0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xe711, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe712, .a=0xb1, .x=0xc6, .y=0xea, .sp=0xe0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe711, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe711, .value=0x3c, .type=IO_READ},
        {.addr=0xe712, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014A) {
    const struct CPU_State initial_cpu = {.pc=0x3ef2, .a=0xd6, .x=0x00, .y=0x30, .sp=0x81, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3ef3, .a=0xac, .x=0x00, .y=0x30, .sp=0x81, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3ef2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3ef2, .value=0x3c, .type=IO_READ},
        {.addr=0x3ef3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014B) {
    const struct CPU_State initial_cpu = {.pc=0x1db0, .a=0x05, .x=0x0e, .y=0x6b, .sp=0xec, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1db0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1db1, .a=0x0a, .x=0x0e, .y=0x6b, .sp=0xec, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1db0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1db0, .value=0x3c, .type=IO_READ},
        {.addr=0x1db1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014C) {
    const struct CPU_State initial_cpu = {.pc=0x24b8, .a=0xec, .x=0xc5, .y=0x6f, .sp=0x6c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x24b8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x24b9, .a=0xd9, .x=0xc5, .y=0x6f, .sp=0x6c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x24b8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x24b8, .value=0x3c, .type=IO_READ},
        {.addr=0x24b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb8a9, .a=0xc6, .x=0xcb, .y=0xc5, .sp=0x07, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb8aa, .a=0x8c, .x=0xcb, .y=0xc5, .sp=0x07, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb8a9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb8a9, .value=0x3c, .type=IO_READ},
        {.addr=0xb8aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014E) {
    const struct CPU_State initial_cpu = {.pc=0xebbc, .a=0x86, .x=0x56, .y=0x7b, .sp=0xfe, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xebbc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xebbd, .a=0x0c, .x=0x56, .y=0x7b, .sp=0xfe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xebbc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xebbc, .value=0x3c, .type=IO_READ},
        {.addr=0xebbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_014F) {
    const struct CPU_State initial_cpu = {.pc=0xc5f6, .a=0xb8, .x=0x00, .y=0xe3, .sp=0x97, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc5f7, .a=0x71, .x=0x00, .y=0xe3, .sp=0x97, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc5f6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc5f6, .value=0x3c, .type=IO_READ},
        {.addr=0xc5f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0150) {
    const struct CPU_State initial_cpu = {.pc=0xa98f, .a=0x7d, .x=0xc4, .y=0x59, .sp=0xd9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa98f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa990, .a=0xfa, .x=0xc4, .y=0x59, .sp=0xd9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa98f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa98f, .value=0x3c, .type=IO_READ},
        {.addr=0xa990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0151) {
    const struct CPU_State initial_cpu = {.pc=0xf069, .a=0xc8, .x=0x94, .y=0xbd, .sp=0x15, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf069, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf06a, .a=0x91, .x=0x94, .y=0xbd, .sp=0x15, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf069, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf069, .value=0x3c, .type=IO_READ},
        {.addr=0xf06a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0152) {
    const struct CPU_State initial_cpu = {.pc=0x95c6, .a=0x1f, .x=0x71, .y=0xc9, .sp=0x19, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x95c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x95c7, .a=0x3f, .x=0x71, .y=0xc9, .sp=0x19, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x95c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x95c6, .value=0x3c, .type=IO_READ},
        {.addr=0x95c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0153) {
    const struct CPU_State initial_cpu = {.pc=0xa63a, .a=0xdd, .x=0x72, .y=0xab, .sp=0x2a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa63a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa63b, .a=0xba, .x=0x72, .y=0xab, .sp=0x2a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa63a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa63a, .value=0x3c, .type=IO_READ},
        {.addr=0xa63b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0154) {
    const struct CPU_State initial_cpu = {.pc=0xd424, .a=0x64, .x=0xd8, .y=0xb9, .sp=0x01, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd424, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd425, .a=0xc9, .x=0xd8, .y=0xb9, .sp=0x01, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd424, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd424, .value=0x3c, .type=IO_READ},
        {.addr=0xd425, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0155) {
    const struct CPU_State initial_cpu = {.pc=0x5743, .a=0xe4, .x=0x98, .y=0x5e, .sp=0x93, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5743, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5744, .a=0xc8, .x=0x98, .y=0x5e, .sp=0x93, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5743, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5743, .value=0x3c, .type=IO_READ},
        {.addr=0x5744, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0156) {
    const struct CPU_State initial_cpu = {.pc=0xbe4a, .a=0x12, .x=0xe4, .y=0x2a, .sp=0x2a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe4a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbe4b, .a=0x25, .x=0xe4, .y=0x2a, .sp=0x2a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbe4a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbe4a, .value=0x3c, .type=IO_READ},
        {.addr=0xbe4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0157) {
    const struct CPU_State initial_cpu = {.pc=0x8e76, .a=0x77, .x=0x5d, .y=0xd9, .sp=0xa7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8e76, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8e77, .a=0xee, .x=0x5d, .y=0xd9, .sp=0xa7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8e76, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8e76, .value=0x3c, .type=IO_READ},
        {.addr=0x8e77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0158) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x87, .x=0x42, .y=0x89, .sp=0x33, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x53df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x53e0, .a=0x0e, .x=0x42, .y=0x89, .sp=0x33, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x53df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0x3c, .type=IO_READ},
        {.addr=0x53e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9134, .a=0xcf, .x=0x95, .y=0x2d, .sp=0x64, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9134, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9135, .a=0x9f, .x=0x95, .y=0x2d, .sp=0x64, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9134, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9134, .value=0x3c, .type=IO_READ},
        {.addr=0x9135, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015A) {
    const struct CPU_State initial_cpu = {.pc=0xd0af, .a=0x04, .x=0xb5, .y=0x8a, .sp=0x94, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd0af, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd0b0, .a=0x08, .x=0xb5, .y=0x8a, .sp=0x94, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd0af, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd0af, .value=0x3c, .type=IO_READ},
        {.addr=0xd0b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015B) {
    const struct CPU_State initial_cpu = {.pc=0x8cf4, .a=0x39, .x=0xd1, .y=0xf3, .sp=0xb7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8cf5, .a=0x72, .x=0xd1, .y=0xf3, .sp=0xb7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8cf4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8cf4, .value=0x3c, .type=IO_READ},
        {.addr=0x8cf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015C) {
    const struct CPU_State initial_cpu = {.pc=0xfbcf, .a=0xf3, .x=0x00, .y=0x32, .sp=0xbf, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfbcf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfbd0, .a=0xe6, .x=0x00, .y=0x32, .sp=0xbf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfbcf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfbcf, .value=0x3c, .type=IO_READ},
        {.addr=0xfbd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015D) {
    const struct CPU_State initial_cpu = {.pc=0xe68e, .a=0xcf, .x=0x5f, .y=0xff, .sp=0xbf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe68e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe68f, .a=0x9f, .x=0x5f, .y=0xff, .sp=0xbf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe68e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe68e, .value=0x3c, .type=IO_READ},
        {.addr=0xe68f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015E) {
    const struct CPU_State initial_cpu = {.pc=0x14ab, .a=0x7d, .x=0x5a, .y=0x98, .sp=0xea, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x14ab, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x14ac, .a=0xfa, .x=0x5a, .y=0x98, .sp=0xea, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x14ab, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x14ab, .value=0x3c, .type=IO_READ},
        {.addr=0x14ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_015F) {
    const struct CPU_State initial_cpu = {.pc=0x05df, .a=0xe1, .x=0x43, .y=0x9d, .sp=0xd1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x05df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x05e0, .a=0xc3, .x=0x43, .y=0x9d, .sp=0xd1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x05df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x05df, .value=0x3c, .type=IO_READ},
        {.addr=0x05e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0160) {
    const struct CPU_State initial_cpu = {.pc=0x8bc7, .a=0xa1, .x=0x35, .y=0xf4, .sp=0x19, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8bc8, .a=0x42, .x=0x35, .y=0xf4, .sp=0x19, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8bc7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8bc7, .value=0x3c, .type=IO_READ},
        {.addr=0x8bc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0161) {
    const struct CPU_State initial_cpu = {.pc=0xce98, .a=0x52, .x=0x6d, .y=0x07, .sp=0xf5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xce98, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce99, .a=0xa4, .x=0x6d, .y=0x07, .sp=0xf5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xce98, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce98, .value=0x3c, .type=IO_READ},
        {.addr=0xce99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0162) {
    const struct CPU_State initial_cpu = {.pc=0x2d9e, .a=0x41, .x=0x54, .y=0x13, .sp=0x28, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2d9f, .a=0x83, .x=0x54, .y=0x13, .sp=0x28, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2d9e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2d9e, .value=0x3c, .type=IO_READ},
        {.addr=0x2d9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0163) {
    const struct CPU_State initial_cpu = {.pc=0x7f55, .a=0xee, .x=0x58, .y=0x68, .sp=0x66, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x7f55, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7f56, .a=0xdd, .x=0x58, .y=0x68, .sp=0x66, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7f55, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7f55, .value=0x3c, .type=IO_READ},
        {.addr=0x7f56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe639, .a=0xdc, .x=0x33, .y=0x7c, .sp=0xd1, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe639, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe63a, .a=0xb9, .x=0x33, .y=0x7c, .sp=0xd1, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe639, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe639, .value=0x3c, .type=IO_READ},
        {.addr=0xe63a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0165) {
    const struct CPU_State initial_cpu = {.pc=0xb245, .a=0xab, .x=0x25, .y=0x2e, .sp=0x12, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb245, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb246, .a=0x56, .x=0x25, .y=0x2e, .sp=0x12, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb245, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb245, .value=0x3c, .type=IO_READ},
        {.addr=0xb246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0166) {
    const struct CPU_State initial_cpu = {.pc=0x2dc5, .a=0x48, .x=0x62, .y=0xa9, .sp=0xe0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2dc6, .a=0x91, .x=0x62, .y=0xa9, .sp=0xe0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x2dc5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2dc5, .value=0x3c, .type=IO_READ},
        {.addr=0x2dc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0167) {
    const struct CPU_State initial_cpu = {.pc=0xb859, .a=0xbf, .x=0xca, .y=0xd0, .sp=0xfa, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb859, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb85a, .a=0x7f, .x=0xca, .y=0xd0, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb859, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb859, .value=0x3c, .type=IO_READ},
        {.addr=0xb85a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0168) {
    const struct CPU_State initial_cpu = {.pc=0xb3f9, .a=0x43, .x=0xb1, .y=0xe2, .sp=0xac, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb3fa, .a=0x86, .x=0xb1, .y=0xe2, .sp=0xac, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb3f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb3f9, .value=0x3c, .type=IO_READ},
        {.addr=0xb3fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0169) {
    const struct CPU_State initial_cpu = {.pc=0xfadb, .a=0xde, .x=0x95, .y=0x22, .sp=0xd7, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xfadb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfadc, .a=0xbd, .x=0x95, .y=0x22, .sp=0xd7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfadb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfadb, .value=0x3c, .type=IO_READ},
        {.addr=0xfadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016A) {
    const struct CPU_State initial_cpu = {.pc=0x9480, .a=0x30, .x=0xa0, .y=0x56, .sp=0x7d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9480, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9481, .a=0x61, .x=0xa0, .y=0x56, .sp=0x7d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9480, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9480, .value=0x3c, .type=IO_READ},
        {.addr=0x9481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016B) {
    const struct CPU_State initial_cpu = {.pc=0x805c, .a=0x83, .x=0xcc, .y=0xe9, .sp=0xf6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x805c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x805d, .a=0x06, .x=0xcc, .y=0xe9, .sp=0xf6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x805c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x805c, .value=0x3c, .type=IO_READ},
        {.addr=0x805d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016C) {
    const struct CPU_State initial_cpu = {.pc=0xa7c7, .a=0xcf, .x=0xee, .y=0xd5, .sp=0x90, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa7c8, .a=0x9f, .x=0xee, .y=0xd5, .sp=0x90, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa7c7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa7c7, .value=0x3c, .type=IO_READ},
        {.addr=0xa7c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016D) {
    const struct CPU_State initial_cpu = {.pc=0x5f3e, .a=0x5f, .x=0xb6, .y=0x78, .sp=0xaa, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f3f, .a=0xbf, .x=0xb6, .y=0x78, .sp=0xaa, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5f3e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f3e, .value=0x3c, .type=IO_READ},
        {.addr=0x5f3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016E) {
    const struct CPU_State initial_cpu = {.pc=0xaa23, .a=0x9e, .x=0x7c, .y=0x8b, .sp=0x6c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xaa23, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaa24, .a=0x3c, .x=0x7c, .y=0x8b, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaa23, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaa23, .value=0x3c, .type=IO_READ},
        {.addr=0xaa24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_016F) {
    const struct CPU_State initial_cpu = {.pc=0xf67b, .a=0xdb, .x=0x6f, .y=0x9a, .sp=0x19, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf67b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf67c, .a=0xb6, .x=0x6f, .y=0x9a, .sp=0x19, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf67b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf67b, .value=0x3c, .type=IO_READ},
        {.addr=0xf67c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0170) {
    const struct CPU_State initial_cpu = {.pc=0x69ac, .a=0xf4, .x=0x50, .y=0x63, .sp=0x6e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x69ac, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x69ad, .a=0xe9, .x=0x50, .y=0x63, .sp=0x6e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x69ac, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x69ac, .value=0x3c, .type=IO_READ},
        {.addr=0x69ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0171) {
    const struct CPU_State initial_cpu = {.pc=0xc191, .a=0x87, .x=0x53, .y=0x4f, .sp=0x28, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc191, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc192, .a=0x0e, .x=0x53, .y=0x4f, .sp=0x28, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc191, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc191, .value=0x3c, .type=IO_READ},
        {.addr=0xc192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0172) {
    const struct CPU_State initial_cpu = {.pc=0x2069, .a=0x31, .x=0xed, .y=0x13, .sp=0x24, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2069, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x206a, .a=0x62, .x=0xed, .y=0x13, .sp=0x24, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2069, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2069, .value=0x3c, .type=IO_READ},
        {.addr=0x206a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0173) {
    const struct CPU_State initial_cpu = {.pc=0x20c2, .a=0x74, .x=0x63, .y=0xf0, .sp=0x65, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x20c2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x20c3, .a=0xe8, .x=0x63, .y=0xf0, .sp=0x65, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x20c2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x20c2, .value=0x3c, .type=IO_READ},
        {.addr=0x20c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0174) {
    const struct CPU_State initial_cpu = {.pc=0xd3c3, .a=0xd5, .x=0xd3, .y=0x36, .sp=0xec, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd3c4, .a=0xab, .x=0xd3, .y=0x36, .sp=0xec, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd3c3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd3c3, .value=0x3c, .type=IO_READ},
        {.addr=0xd3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0175) {
    const struct CPU_State initial_cpu = {.pc=0x3bc3, .a=0x61, .x=0x70, .y=0x2e, .sp=0x5b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3bc4, .a=0xc2, .x=0x70, .y=0x2e, .sp=0x5b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3bc3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3bc3, .value=0x3c, .type=IO_READ},
        {.addr=0x3bc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd273, .a=0x12, .x=0xd9, .y=0xa1, .sp=0xaa, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xd273, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd274, .a=0x25, .x=0xd9, .y=0xa1, .sp=0xaa, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xd273, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd273, .value=0x3c, .type=IO_READ},
        {.addr=0xd274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0177) {
    const struct CPU_State initial_cpu = {.pc=0x8c7e, .a=0xd0, .x=0xab, .y=0x88, .sp=0xaa, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8c7f, .a=0xa1, .x=0xab, .y=0x88, .sp=0xaa, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8c7e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8c7e, .value=0x3c, .type=IO_READ},
        {.addr=0x8c7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0178) {
    const struct CPU_State initial_cpu = {.pc=0x5238, .a=0x9a, .x=0x45, .y=0xcd, .sp=0xdb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5238, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5239, .a=0x34, .x=0x45, .y=0xcd, .sp=0xdb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5238, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5238, .value=0x3c, .type=IO_READ},
        {.addr=0x5239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0179) {
    const struct CPU_State initial_cpu = {.pc=0x09c1, .a=0x89, .x=0xdb, .y=0xbe, .sp=0x75, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x09c1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x09c2, .a=0x12, .x=0xdb, .y=0xbe, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x09c1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x09c1, .value=0x3c, .type=IO_READ},
        {.addr=0x09c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017A) {
    const struct CPU_State initial_cpu = {.pc=0x4d71, .a=0x68, .x=0x98, .y=0xb1, .sp=0x23, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x4d71, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4d72, .a=0xd0, .x=0x98, .y=0xb1, .sp=0x23, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4d71, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4d71, .value=0x3c, .type=IO_READ},
        {.addr=0x4d72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017B) {
    const struct CPU_State initial_cpu = {.pc=0x7557, .a=0x58, .x=0xaf, .y=0x0c, .sp=0xb5, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7557, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7558, .a=0xb0, .x=0xaf, .y=0x0c, .sp=0xb5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7557, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7557, .value=0x3c, .type=IO_READ},
        {.addr=0x7558, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe164, .a=0xbb, .x=0xb4, .y=0xe4, .sp=0x78, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe164, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe165, .a=0x77, .x=0xb4, .y=0xe4, .sp=0x78, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe164, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe164, .value=0x3c, .type=IO_READ},
        {.addr=0xe165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017D) {
    const struct CPU_State initial_cpu = {.pc=0xc93c, .a=0xa6, .x=0x6c, .y=0x4c, .sp=0x16, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc93c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc93d, .a=0x4d, .x=0x6c, .y=0x4c, .sp=0x16, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc93c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc93c, .value=0x3c, .type=IO_READ},
        {.addr=0xc93d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017E) {
    const struct CPU_State initial_cpu = {.pc=0xcf88, .a=0x65, .x=0xe0, .y=0xbd, .sp=0x2c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xcf88, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcf89, .a=0xca, .x=0xe0, .y=0xbd, .sp=0x2c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcf88, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcf88, .value=0x3c, .type=IO_READ},
        {.addr=0xcf89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_017F) {
    const struct CPU_State initial_cpu = {.pc=0x8a21, .a=0xea, .x=0xcc, .y=0x2b, .sp=0x5d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8a21, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8a22, .a=0xd5, .x=0xcc, .y=0x2b, .sp=0x5d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8a21, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8a21, .value=0x3c, .type=IO_READ},
        {.addr=0x8a22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0180) {
    const struct CPU_State initial_cpu = {.pc=0xa74b, .a=0x19, .x=0xd8, .y=0x91, .sp=0x0f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa74b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa74c, .a=0x32, .x=0xd8, .y=0x91, .sp=0x0f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa74b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa74b, .value=0x3c, .type=IO_READ},
        {.addr=0xa74c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0181) {
    const struct CPU_State initial_cpu = {.pc=0xea07, .a=0x7a, .x=0xfb, .y=0x5c, .sp=0xa1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xea07, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xea08, .a=0xf4, .x=0xfb, .y=0x5c, .sp=0xa1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xea07, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xea07, .value=0x3c, .type=IO_READ},
        {.addr=0xea08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0182) {
    const struct CPU_State initial_cpu = {.pc=0xfb92, .a=0x48, .x=0x62, .y=0x9d, .sp=0xb1, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xfb92, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfb93, .a=0x91, .x=0x62, .y=0x9d, .sp=0xb1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfb92, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfb92, .value=0x3c, .type=IO_READ},
        {.addr=0xfb93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0183) {
    const struct CPU_State initial_cpu = {.pc=0xed57, .a=0x3c, .x=0x2f, .y=0xb7, .sp=0xf0, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xed57, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xed58, .a=0x78, .x=0x2f, .y=0xb7, .sp=0xf0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xed57, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xed57, .value=0x3c, .type=IO_READ},
        {.addr=0xed58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0184) {
    const struct CPU_State initial_cpu = {.pc=0x429f, .a=0x0b, .x=0x7e, .y=0x06, .sp=0x69, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x429f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x42a0, .a=0x16, .x=0x7e, .y=0x06, .sp=0x69, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x429f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x429f, .value=0x3c, .type=IO_READ},
        {.addr=0x42a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0185) {
    const struct CPU_State initial_cpu = {.pc=0x856e, .a=0xdb, .x=0x62, .y=0xe1, .sp=0xe2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x856e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x856f, .a=0xb6, .x=0x62, .y=0xe1, .sp=0xe2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x856e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x856e, .value=0x3c, .type=IO_READ},
        {.addr=0x856f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0186) {
    const struct CPU_State initial_cpu = {.pc=0x373f, .a=0xff, .x=0x81, .y=0x90, .sp=0x0c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x373f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3740, .a=0xfe, .x=0x81, .y=0x90, .sp=0x0c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x373f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x373f, .value=0x3c, .type=IO_READ},
        {.addr=0x3740, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc1f4, .a=0xfd, .x=0x9c, .y=0x68, .sp=0x8d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc1f5, .a=0xfa, .x=0x9c, .y=0x68, .sp=0x8d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xc1f4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc1f4, .value=0x3c, .type=IO_READ},
        {.addr=0xc1f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0188) {
    const struct CPU_State initial_cpu = {.pc=0xc6f7, .a=0x7b, .x=0xa9, .y=0x64, .sp=0xf5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc6f8, .a=0xf7, .x=0xa9, .y=0x64, .sp=0xf5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc6f7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc6f7, .value=0x3c, .type=IO_READ},
        {.addr=0xc6f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4e88, .a=0x55, .x=0x45, .y=0x78, .sp=0x12, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e88, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4e89, .a=0xab, .x=0x45, .y=0x78, .sp=0x12, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4e88, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4e88, .value=0x3c, .type=IO_READ},
        {.addr=0x4e89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018A) {
    const struct CPU_State initial_cpu = {.pc=0x5a0e, .a=0x47, .x=0x81, .y=0xd2, .sp=0x32, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5a0f, .a=0x8f, .x=0x81, .y=0xd2, .sp=0x32, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5a0e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5a0e, .value=0x3c, .type=IO_READ},
        {.addr=0x5a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018B) {
    const struct CPU_State initial_cpu = {.pc=0x5103, .a=0x14, .x=0x1b, .y=0x69, .sp=0xb7, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5103, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5104, .a=0x28, .x=0x1b, .y=0x69, .sp=0xb7, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5103, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5103, .value=0x3c, .type=IO_READ},
        {.addr=0x5104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018C) {
    const struct CPU_State initial_cpu = {.pc=0xeae9, .a=0x03, .x=0xe4, .y=0x06, .sp=0x1d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xeae9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeaea, .a=0x07, .x=0xe4, .y=0x06, .sp=0x1d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xeae9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeae9, .value=0x3c, .type=IO_READ},
        {.addr=0xeaea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018D) {
    const struct CPU_State initial_cpu = {.pc=0x8d87, .a=0xe6, .x=0x90, .y=0x6a, .sp=0x70, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8d87, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d88, .a=0xcc, .x=0x90, .y=0x6a, .sp=0x70, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8d87, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d87, .value=0x3c, .type=IO_READ},
        {.addr=0x8d88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018E) {
    const struct CPU_State initial_cpu = {.pc=0x5178, .a=0x67, .x=0xac, .y=0xbd, .sp=0x2b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5178, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5179, .a=0xcf, .x=0xac, .y=0xbd, .sp=0x2b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5178, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5178, .value=0x3c, .type=IO_READ},
        {.addr=0x5179, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_018F) {
    const struct CPU_State initial_cpu = {.pc=0xf2eb, .a=0x44, .x=0x46, .y=0xc2, .sp=0x52, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xf2eb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf2ec, .a=0x89, .x=0x46, .y=0xc2, .sp=0x52, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf2eb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf2eb, .value=0x3c, .type=IO_READ},
        {.addr=0xf2ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0d85, .a=0x8a, .x=0x31, .y=0x98, .sp=0x7e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d85, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0d86, .a=0x14, .x=0x31, .y=0x98, .sp=0x7e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0d85, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0d85, .value=0x3c, .type=IO_READ},
        {.addr=0x0d86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc546, .a=0x3f, .x=0x60, .y=0x56, .sp=0x5a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc546, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc547, .a=0x7e, .x=0x60, .y=0x56, .sp=0x5a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xc546, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc546, .value=0x3c, .type=IO_READ},
        {.addr=0xc547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0192) {
    const struct CPU_State initial_cpu = {.pc=0x6f2f, .a=0xc6, .x=0xf6, .y=0x48, .sp=0xb6, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6f2f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6f30, .a=0x8d, .x=0xf6, .y=0x48, .sp=0xb6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6f2f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6f2f, .value=0x3c, .type=IO_READ},
        {.addr=0x6f30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0193) {
    const struct CPU_State initial_cpu = {.pc=0x7df6, .a=0x4f, .x=0x49, .y=0xff, .sp=0x08, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7df6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7df7, .a=0x9f, .x=0x49, .y=0xff, .sp=0x08, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7df6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7df6, .value=0x3c, .type=IO_READ},
        {.addr=0x7df7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0194) {
    const struct CPU_State initial_cpu = {.pc=0x6d28, .a=0xe1, .x=0xce, .y=0x94, .sp=0x6e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6d28, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d29, .a=0xc3, .x=0xce, .y=0x94, .sp=0x6e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6d28, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d28, .value=0x3c, .type=IO_READ},
        {.addr=0x6d29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0195) {
    const struct CPU_State initial_cpu = {.pc=0x2554, .a=0x45, .x=0x8a, .y=0x13, .sp=0x7c, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2554, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2555, .a=0x8a, .x=0x8a, .y=0x13, .sp=0x7c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x2554, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2554, .value=0x3c, .type=IO_READ},
        {.addr=0x2555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0196) {
    const struct CPU_State initial_cpu = {.pc=0xeac3, .a=0xfa, .x=0x84, .y=0xda, .sp=0xf2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xeac3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeac4, .a=0xf4, .x=0x84, .y=0xda, .sp=0xf2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xeac3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeac3, .value=0x3c, .type=IO_READ},
        {.addr=0xeac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0197) {
    const struct CPU_State initial_cpu = {.pc=0xad37, .a=0x2e, .x=0xbe, .y=0x26, .sp=0x41, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xad37, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad38, .a=0x5d, .x=0xbe, .y=0x26, .sp=0x41, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xad37, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad37, .value=0x3c, .type=IO_READ},
        {.addr=0xad38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0198) {
    const struct CPU_State initial_cpu = {.pc=0x3393, .a=0x36, .x=0xd2, .y=0x5f, .sp=0x9d, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3393, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3394, .a=0x6d, .x=0xd2, .y=0x5f, .sp=0x9d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3393, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3393, .value=0x3c, .type=IO_READ},
        {.addr=0x3394, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0199) {
    const struct CPU_State initial_cpu = {.pc=0x2ea2, .a=0x05, .x=0xfd, .y=0xe9, .sp=0x72, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2ea3, .a=0x0b, .x=0xfd, .y=0xe9, .sp=0x72, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2ea2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2ea2, .value=0x3c, .type=IO_READ},
        {.addr=0x2ea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6ec9, .a=0x25, .x=0xcf, .y=0x3d, .sp=0x6e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6eca, .a=0x4a, .x=0xcf, .y=0x3d, .sp=0x6e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6ec9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6ec9, .value=0x3c, .type=IO_READ},
        {.addr=0x6eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019B) {
    const struct CPU_State initial_cpu = {.pc=0x49a6, .a=0x05, .x=0x7f, .y=0xad, .sp=0x77, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x49a6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x49a7, .a=0x0a, .x=0x7f, .y=0xad, .sp=0x77, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x49a6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x49a6, .value=0x3c, .type=IO_READ},
        {.addr=0x49a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019C) {
    const struct CPU_State initial_cpu = {.pc=0xce06, .a=0x11, .x=0xcb, .y=0xee, .sp=0x3c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xce06, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce07, .a=0x23, .x=0xcb, .y=0xee, .sp=0x3c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xce06, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce06, .value=0x3c, .type=IO_READ},
        {.addr=0xce07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019D) {
    const struct CPU_State initial_cpu = {.pc=0x85bd, .a=0x77, .x=0x62, .y=0x6c, .sp=0x3d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x85bd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85be, .a=0xee, .x=0x62, .y=0x6c, .sp=0x3d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x85bd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85bd, .value=0x3c, .type=IO_READ},
        {.addr=0x85be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019E) {
    const struct CPU_State initial_cpu = {.pc=0x5f64, .a=0x37, .x=0x8d, .y=0xe5, .sp=0xe2, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5f64, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f65, .a=0x6f, .x=0x8d, .y=0xe5, .sp=0xe2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5f64, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f64, .value=0x3c, .type=IO_READ},
        {.addr=0x5f65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_019F) {
    const struct CPU_State initial_cpu = {.pc=0xdc5b, .a=0xce, .x=0xba, .y=0x8c, .sp=0xc5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdc5b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdc5c, .a=0x9d, .x=0xba, .y=0x8c, .sp=0xc5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdc5b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdc5b, .value=0x3c, .type=IO_READ},
        {.addr=0xdc5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x9020, .a=0x42, .x=0x76, .y=0x3e, .sp=0x92, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9020, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9021, .a=0x84, .x=0x76, .y=0x3e, .sp=0x92, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9020, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9020, .value=0x3c, .type=IO_READ},
        {.addr=0x9021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x83ca, .a=0x2b, .x=0xe3, .y=0x30, .sp=0x49, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x83ca, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x83cb, .a=0x57, .x=0xe3, .y=0x30, .sp=0x49, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x83ca, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x83ca, .value=0x3c, .type=IO_READ},
        {.addr=0x83cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x7467, .a=0x34, .x=0x17, .y=0x78, .sp=0xa1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7467, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7468, .a=0x69, .x=0x17, .y=0x78, .sp=0xa1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7467, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7467, .value=0x3c, .type=IO_READ},
        {.addr=0x7468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xb361, .a=0xfd, .x=0x7f, .y=0xdc, .sp=0x22, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb361, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb362, .a=0xfb, .x=0x7f, .y=0xdc, .sp=0x22, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb361, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb361, .value=0x3c, .type=IO_READ},
        {.addr=0xb362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd7db, .a=0xce, .x=0x41, .y=0xdd, .sp=0xa4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd7db, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7dc, .a=0x9c, .x=0x41, .y=0xdd, .sp=0xa4, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd7db, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7db, .value=0x3c, .type=IO_READ},
        {.addr=0xd7dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x8952, .a=0x91, .x=0x85, .y=0xa0, .sp=0x36, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8952, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8953, .a=0x23, .x=0x85, .y=0xa0, .sp=0x36, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8952, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8952, .value=0x3c, .type=IO_READ},
        {.addr=0x8953, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x43be, .a=0x33, .x=0xac, .y=0x6d, .sp=0x3f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x43be, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x43bf, .a=0x66, .x=0xac, .y=0x6d, .sp=0x3f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x43be, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x43be, .value=0x3c, .type=IO_READ},
        {.addr=0x43bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0bb2, .a=0xb7, .x=0x6a, .y=0xf0, .sp=0xde, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0bb3, .a=0x6e, .x=0x6a, .y=0xf0, .sp=0xde, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0bb2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0bb2, .value=0x3c, .type=IO_READ},
        {.addr=0x0bb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x9628, .a=0x4a, .x=0xa8, .y=0x28, .sp=0xc1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9628, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9629, .a=0x95, .x=0xa8, .y=0x28, .sp=0xc1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9628, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9628, .value=0x3c, .type=IO_READ},
        {.addr=0x9629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x12a3, .a=0x48, .x=0x42, .y=0xba, .sp=0xbb, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x12a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x12a4, .a=0x91, .x=0x42, .y=0xba, .sp=0xbb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x12a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x12a3, .value=0x3c, .type=IO_READ},
        {.addr=0x12a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xade8, .a=0xbc, .x=0x6d, .y=0x34, .sp=0xec, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xade8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xade9, .a=0x78, .x=0x6d, .y=0x34, .sp=0xec, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xade8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xade8, .value=0x3c, .type=IO_READ},
        {.addr=0xade9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x806a, .a=0xb7, .x=0xa2, .y=0x95, .sp=0xf5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x806a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x806b, .a=0x6e, .x=0xa2, .y=0x95, .sp=0xf5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x806a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x806a, .value=0x3c, .type=IO_READ},
        {.addr=0x806b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xd788, .a=0x5b, .x=0x80, .y=0xdf, .sp=0xed, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xd788, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd789, .a=0xb7, .x=0x80, .y=0xdf, .sp=0xed, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd788, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd788, .value=0x3c, .type=IO_READ},
        {.addr=0xd789, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9cf1, .a=0x8f, .x=0x15, .y=0x57, .sp=0x2b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9cf2, .a=0x1e, .x=0x15, .y=0x57, .sp=0x2b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9cf1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9cf1, .value=0x3c, .type=IO_READ},
        {.addr=0x9cf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7f65, .a=0xa7, .x=0x76, .y=0xcf, .sp=0xd1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7f65, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7f66, .a=0x4e, .x=0x76, .y=0xcf, .sp=0xd1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7f65, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7f65, .value=0x3c, .type=IO_READ},
        {.addr=0x7f66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4ae3, .a=0x79, .x=0x8d, .y=0x22, .sp=0x5d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4ae4, .a=0xf3, .x=0x8d, .y=0x22, .sp=0x5d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4ae3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4ae3, .value=0x3c, .type=IO_READ},
        {.addr=0x4ae4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5942, .a=0x3c, .x=0xd4, .y=0x55, .sp=0xc9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5942, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5943, .a=0x78, .x=0xd4, .y=0x55, .sp=0xc9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5942, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5942, .value=0x3c, .type=IO_READ},
        {.addr=0x5943, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf825, .a=0xc5, .x=0xc2, .y=0x03, .sp=0x2b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xf825, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf826, .a=0x8a, .x=0xc2, .y=0x03, .sp=0x2b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf825, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf825, .value=0x3c, .type=IO_READ},
        {.addr=0xf826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x0e41, .a=0x11, .x=0x58, .y=0xa5, .sp=0x4b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0e41, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0e42, .a=0x22, .x=0x58, .y=0xa5, .sp=0x4b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0e41, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0e41, .value=0x3c, .type=IO_READ},
        {.addr=0x0e42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x93c9, .a=0xc8, .x=0x2f, .y=0x4e, .sp=0x1e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x93c9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x93ca, .a=0x91, .x=0x2f, .y=0x4e, .sp=0x1e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x93c9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x93c9, .value=0x3c, .type=IO_READ},
        {.addr=0x93ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x57d2, .a=0x36, .x=0xda, .y=0x14, .sp=0x8c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x57d2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x57d3, .a=0x6c, .x=0xda, .y=0x14, .sp=0x8c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x57d2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x57d2, .value=0x3c, .type=IO_READ},
        {.addr=0x57d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xd747, .a=0x32, .x=0x1f, .y=0x00, .sp=0x8b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd747, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd748, .a=0x65, .x=0x1f, .y=0x00, .sp=0x8b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xd747, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd747, .value=0x3c, .type=IO_READ},
        {.addr=0xd748, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xa4f4, .a=0xdf, .x=0x96, .y=0x91, .sp=0x23, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa4f5, .a=0xbf, .x=0x96, .y=0x91, .sp=0x23, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa4f4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa4f4, .value=0x3c, .type=IO_READ},
        {.addr=0xa4f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x9a1b, .a=0xdb, .x=0xdc, .y=0x4f, .sp=0x88, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9a1c, .a=0xb6, .x=0xdc, .y=0x4f, .sp=0x88, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9a1b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9a1b, .value=0x3c, .type=IO_READ},
        {.addr=0x9a1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x7738, .a=0xfc, .x=0xf4, .y=0xbb, .sp=0x30, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7738, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7739, .a=0xf8, .x=0xf4, .y=0xbb, .sp=0x30, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7738, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7738, .value=0x3c, .type=IO_READ},
        {.addr=0x7739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x9724, .a=0x80, .x=0x98, .y=0xe7, .sp=0x24, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9724, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9725, .a=0x00, .x=0x98, .y=0xe7, .sp=0x24, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x9724, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9724, .value=0x3c, .type=IO_READ},
        {.addr=0x9725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x8241, .a=0x04, .x=0x5e, .y=0x19, .sp=0x48, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8241, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8242, .a=0x09, .x=0x5e, .y=0x19, .sp=0x48, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8241, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8241, .value=0x3c, .type=IO_READ},
        {.addr=0x8242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x1f65, .a=0x4d, .x=0x71, .y=0xe2, .sp=0xae, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1f65, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1f66, .a=0x9b, .x=0x71, .y=0xe2, .sp=0xae, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1f65, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1f65, .value=0x3c, .type=IO_READ},
        {.addr=0x1f66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x191e, .a=0x2e, .x=0x71, .y=0x49, .sp=0x65, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x191e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x191f, .a=0x5d, .x=0x71, .y=0x49, .sp=0x65, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x191e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x191e, .value=0x3c, .type=IO_READ},
        {.addr=0x191f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x9b19, .a=0xb0, .x=0x4b, .y=0x89, .sp=0xe6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9b19, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9b1a, .a=0x61, .x=0x4b, .y=0x89, .sp=0xe6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9b19, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9b19, .value=0x3c, .type=IO_READ},
        {.addr=0x9b1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x79d2, .a=0x24, .x=0x64, .y=0xc0, .sp=0xf6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x79d2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x79d3, .a=0x49, .x=0x64, .y=0xc0, .sp=0xf6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x79d2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x79d2, .value=0x3c, .type=IO_READ},
        {.addr=0x79d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb057, .a=0x10, .x=0xe5, .y=0x27, .sp=0x36, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb057, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb058, .a=0x21, .x=0xe5, .y=0x27, .sp=0x36, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb057, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb057, .value=0x3c, .type=IO_READ},
        {.addr=0xb058, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x93fd, .a=0x49, .x=0x1b, .y=0x19, .sp=0x4b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x93fd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x92, .x=0x1b, .y=0x19, .sp=0x4b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x93fd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x93fd, .value=0x3c, .type=IO_READ},
        {.addr=0x93fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf363, .a=0x37, .x=0x80, .y=0xd2, .sp=0x96, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf363, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf364, .a=0x6f, .x=0x80, .y=0xd2, .sp=0x96, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf363, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf363, .value=0x3c, .type=IO_READ},
        {.addr=0xf364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x99f1, .a=0x1c, .x=0x71, .y=0x25, .sp=0x08, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x99f1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x99f2, .a=0x38, .x=0x71, .y=0x25, .sp=0x08, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x99f1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x99f1, .value=0x3c, .type=IO_READ},
        {.addr=0x99f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xb5d4, .a=0x0f, .x=0x42, .y=0x84, .sp=0xca, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb5d5, .a=0x1f, .x=0x42, .y=0x84, .sp=0xca, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb5d4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb5d4, .value=0x3c, .type=IO_READ},
        {.addr=0xb5d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x7413, .a=0x89, .x=0x0c, .y=0x30, .sp=0x63, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x7413, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7414, .a=0x12, .x=0x0c, .y=0x30, .sp=0x63, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7413, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7413, .value=0x3c, .type=IO_READ},
        {.addr=0x7414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x53e2, .a=0x8f, .x=0xfb, .y=0xbb, .sp=0xeb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x53e2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x53e3, .a=0x1e, .x=0xfb, .y=0xbb, .sp=0xeb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x53e2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x53e2, .value=0x3c, .type=IO_READ},
        {.addr=0x53e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x3216, .a=0xd0, .x=0x3d, .y=0xe7, .sp=0xef, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3216, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3217, .a=0xa1, .x=0x3d, .y=0xe7, .sp=0xef, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3216, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3216, .value=0x3c, .type=IO_READ},
        {.addr=0x3217, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xbc98, .a=0xe1, .x=0x64, .y=0x02, .sp=0x07, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc98, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbc99, .a=0xc2, .x=0x64, .y=0x02, .sp=0x07, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbc98, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbc98, .value=0x3c, .type=IO_READ},
        {.addr=0xbc99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xc1ff, .a=0xb2, .x=0x29, .y=0xe7, .sp=0x4c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ff, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc200, .a=0x64, .x=0x29, .y=0xe7, .sp=0x4c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc1ff, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc1ff, .value=0x3c, .type=IO_READ},
        {.addr=0xc200, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0386, .a=0xcb, .x=0x79, .y=0x02, .sp=0xe4, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0386, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0387, .a=0x96, .x=0x79, .y=0x02, .sp=0xe4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0386, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0386, .value=0x3c, .type=IO_READ},
        {.addr=0x0387, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x916e, .a=0x10, .x=0x72, .y=0x36, .sp=0x74, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x916e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x916f, .a=0x21, .x=0x72, .y=0x36, .sp=0x74, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x916e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x916e, .value=0x3c, .type=IO_READ},
        {.addr=0x916f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xbeca, .a=0x6a, .x=0x5c, .y=0xae, .sp=0x80, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbeca, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbecb, .a=0xd5, .x=0x5c, .y=0xae, .sp=0x80, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbeca, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbeca, .value=0x3c, .type=IO_READ},
        {.addr=0xbecb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x7e2f, .a=0xc2, .x=0x09, .y=0x95, .sp=0x6f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7e2f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7e30, .a=0x84, .x=0x09, .y=0x95, .sp=0x6f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7e2f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7e2f, .value=0x3c, .type=IO_READ},
        {.addr=0x7e30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x39fc, .a=0xab, .x=0xe7, .y=0xe8, .sp=0xd2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x39fc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x39fd, .a=0x57, .x=0xe7, .y=0xe8, .sp=0xd2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x39fc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x39fc, .value=0x3c, .type=IO_READ},
        {.addr=0x39fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x5536, .a=0x7b, .x=0xe0, .y=0x92, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5536, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5537, .a=0xf6, .x=0xe0, .y=0x92, .sp=0x2e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5536, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5536, .value=0x3c, .type=IO_READ},
        {.addr=0x5537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x17ce, .a=0x7e, .x=0x2b, .y=0x13, .sp=0x87, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x17ce, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x17cf, .a=0xfc, .x=0x2b, .y=0x13, .sp=0x87, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x17ce, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x17ce, .value=0x3c, .type=IO_READ},
        {.addr=0x17cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x1552, .a=0xed, .x=0x05, .y=0x84, .sp=0xb4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1552, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1553, .a=0xda, .x=0x05, .y=0x84, .sp=0xb4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1552, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1552, .value=0x3c, .type=IO_READ},
        {.addr=0x1553, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x5a63, .a=0xda, .x=0x32, .y=0xef, .sp=0x0c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5a63, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5a64, .a=0xb5, .x=0x32, .y=0xef, .sp=0x0c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5a63, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5a63, .value=0x3c, .type=IO_READ},
        {.addr=0x5a64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xb76f, .a=0xb1, .x=0xfc, .y=0x6d, .sp=0xa8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb76f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb770, .a=0x62, .x=0xfc, .y=0x6d, .sp=0xa8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb76f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb76f, .value=0x3c, .type=IO_READ},
        {.addr=0xb770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xfa7c, .a=0xaa, .x=0x63, .y=0x05, .sp=0xf0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfa7d, .a=0x54, .x=0x63, .y=0x05, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfa7c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfa7c, .value=0x3c, .type=IO_READ},
        {.addr=0xfa7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x9fc7, .a=0x10, .x=0x9f, .y=0xda, .sp=0x8c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9fc8, .a=0x21, .x=0x9f, .y=0xda, .sp=0x8c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9fc7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9fc7, .value=0x3c, .type=IO_READ},
        {.addr=0x9fc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb870, .a=0x67, .x=0xde, .y=0x97, .sp=0x51, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xb870, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb871, .a=0xce, .x=0xde, .y=0x97, .sp=0x51, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb870, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb870, .value=0x3c, .type=IO_READ},
        {.addr=0xb871, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0x31, .x=0xa8, .y=0xc2, .sp=0x20, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x075f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0760, .a=0x63, .x=0xa8, .y=0xc2, .sp=0x20, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x075f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0x3c, .type=IO_READ},
        {.addr=0x0760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x6a33, .a=0xf4, .x=0xf2, .y=0x73, .sp=0xfd, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a33, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6a34, .a=0xe8, .x=0xf2, .y=0x73, .sp=0xfd, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6a33, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6a33, .value=0x3c, .type=IO_READ},
        {.addr=0x6a34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x9949, .a=0xf3, .x=0xd4, .y=0x0b, .sp=0x76, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9949, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x994a, .a=0xe7, .x=0xd4, .y=0x0b, .sp=0x76, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9949, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9949, .value=0x3c, .type=IO_READ},
        {.addr=0x994a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x8940, .a=0xf0, .x=0x7a, .y=0x4d, .sp=0xc3, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x8940, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8941, .a=0xe0, .x=0x7a, .y=0x4d, .sp=0xc3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8940, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8940, .value=0x3c, .type=IO_READ},
        {.addr=0x8941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xd8b8, .a=0x43, .x=0xd0, .y=0x4f, .sp=0x6f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd8b9, .a=0x87, .x=0xd0, .y=0x4f, .sp=0x6f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd8b8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd8b8, .value=0x3c, .type=IO_READ},
        {.addr=0xd8b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x8b34, .a=0x23, .x=0x26, .y=0xd6, .sp=0x35, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8b34, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8b35, .a=0x46, .x=0x26, .y=0xd6, .sp=0x35, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8b34, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8b34, .value=0x3c, .type=IO_READ},
        {.addr=0x8b35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x4e21, .a=0x35, .x=0x28, .y=0x3b, .sp=0x13, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4e21, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4e22, .a=0x6b, .x=0x28, .y=0x3b, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4e21, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4e21, .value=0x3c, .type=IO_READ},
        {.addr=0x4e22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x31e9, .a=0xb3, .x=0x0b, .y=0xa1, .sp=0x78, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x31e9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x31ea, .a=0x67, .x=0x0b, .y=0xa1, .sp=0x78, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x31e9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x31e9, .value=0x3c, .type=IO_READ},
        {.addr=0x31ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x01ec, .a=0x68, .x=0xcc, .y=0x5f, .sp=0xc8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x01ed, .a=0xd0, .x=0xcc, .y=0x5f, .sp=0xc8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x01ec, .value=0x3c, .type=IO_READ},
        {.addr=0x01ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x3848, .a=0x54, .x=0xf1, .y=0x64, .sp=0x01, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3848, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3849, .a=0xa9, .x=0xf1, .y=0x64, .sp=0x01, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3848, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3848, .value=0x3c, .type=IO_READ},
        {.addr=0x3849, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x85f3, .a=0xcf, .x=0xd3, .y=0xab, .sp=0x53, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x85f3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85f4, .a=0x9f, .x=0xd3, .y=0xab, .sp=0x53, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x85f3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85f3, .value=0x3c, .type=IO_READ},
        {.addr=0x85f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x2b01, .a=0x29, .x=0x63, .y=0xed, .sp=0x01, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2b01, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2b02, .a=0x52, .x=0x63, .y=0xed, .sp=0x01, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2b01, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2b01, .value=0x3c, .type=IO_READ},
        {.addr=0x2b02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x42f9, .a=0x30, .x=0x91, .y=0xfa, .sp=0x6d, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x42f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x42fa, .a=0x60, .x=0x91, .y=0xfa, .sp=0x6d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x42f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x42f9, .value=0x3c, .type=IO_READ},
        {.addr=0x42fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x30d4, .a=0xc8, .x=0x64, .y=0x56, .sp=0xe9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x30d4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x30d5, .a=0x91, .x=0x64, .y=0x56, .sp=0xe9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x30d4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x30d4, .value=0x3c, .type=IO_READ},
        {.addr=0x30d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xca48, .a=0x28, .x=0xf6, .y=0x56, .sp=0xf7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xca48, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xca49, .a=0x51, .x=0xf6, .y=0x56, .sp=0xf7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xca48, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xca48, .value=0x3c, .type=IO_READ},
        {.addr=0xca49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x428d, .a=0x48, .x=0x1f, .y=0xc6, .sp=0x5f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x428d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x428e, .a=0x91, .x=0x1f, .y=0xc6, .sp=0x5f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x428d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x428d, .value=0x3c, .type=IO_READ},
        {.addr=0x428e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xc156, .a=0x0d, .x=0xdc, .y=0x69, .sp=0x93, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc156, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc157, .a=0x1b, .x=0xdc, .y=0x69, .sp=0x93, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc156, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc156, .value=0x3c, .type=IO_READ},
        {.addr=0xc157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x030b, .a=0x50, .x=0x6b, .y=0x13, .sp=0xf8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x030b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x030c, .a=0xa1, .x=0x6b, .y=0x13, .sp=0xf8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x030b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x030b, .value=0x3c, .type=IO_READ},
        {.addr=0x030c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x162c, .a=0x76, .x=0xaf, .y=0xdd, .sp=0xcb, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x162c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x162d, .a=0xed, .x=0xaf, .y=0xdd, .sp=0xcb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x162c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x162c, .value=0x3c, .type=IO_READ},
        {.addr=0x162d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x49b2, .a=0x37, .x=0xb8, .y=0x5b, .sp=0x3a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x49b2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x49b3, .a=0x6e, .x=0xb8, .y=0x5b, .sp=0x3a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x49b2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x49b2, .value=0x3c, .type=IO_READ},
        {.addr=0x49b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x4a9d, .a=0xda, .x=0xb3, .y=0xd5, .sp=0x84, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4a9e, .a=0xb4, .x=0xb3, .y=0xd5, .sp=0x84, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4a9d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4a9d, .value=0x3c, .type=IO_READ},
        {.addr=0x4a9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc3d7, .a=0xbc, .x=0x26, .y=0x03, .sp=0xc3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc3d8, .a=0x79, .x=0x26, .y=0x03, .sp=0xc3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc3d7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc3d7, .value=0x3c, .type=IO_READ},
        {.addr=0xc3d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd545, .a=0xca, .x=0x65, .y=0x01, .sp=0xf1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd545, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd546, .a=0x95, .x=0x65, .y=0x01, .sp=0xf1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd545, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd545, .value=0x3c, .type=IO_READ},
        {.addr=0xd546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x8e57, .a=0xb9, .x=0xcc, .y=0xcb, .sp=0xe8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8e57, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8e58, .a=0x73, .x=0xcc, .y=0xcb, .sp=0xe8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8e57, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8e57, .value=0x3c, .type=IO_READ},
        {.addr=0x8e58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x9414, .a=0x18, .x=0xaf, .y=0xcf, .sp=0x22, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9414, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9415, .a=0x30, .x=0xaf, .y=0xcf, .sp=0x22, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9414, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9414, .value=0x3c, .type=IO_READ},
        {.addr=0x9415, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe5d9, .a=0xb5, .x=0x2e, .y=0x0d, .sp=0xb1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe5da, .a=0x6b, .x=0x2e, .y=0x0d, .sp=0xb1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe5d9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe5d9, .value=0x3c, .type=IO_READ},
        {.addr=0xe5da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xca89, .a=0xde, .x=0x9e, .y=0xcc, .sp=0x1b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xca89, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xca8a, .a=0xbc, .x=0x9e, .y=0xcc, .sp=0x1b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xca89, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xca89, .value=0x3c, .type=IO_READ},
        {.addr=0xca8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x4f70, .a=0xce, .x=0x9c, .y=0xec, .sp=0x12, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4f70, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4f71, .a=0x9d, .x=0x9c, .y=0xec, .sp=0x12, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4f70, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4f70, .value=0x3c, .type=IO_READ},
        {.addr=0x4f71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xee0c, .a=0x55, .x=0x44, .y=0xcc, .sp=0xe7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xee0c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xee0d, .a=0xaa, .x=0x44, .y=0xcc, .sp=0xe7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xee0c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xee0c, .value=0x3c, .type=IO_READ},
        {.addr=0xee0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xba4a, .a=0x56, .x=0x90, .y=0xa6, .sp=0xb8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xba4a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xba4b, .a=0xac, .x=0x90, .y=0xa6, .sp=0xb8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xba4a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xba4a, .value=0x3c, .type=IO_READ},
        {.addr=0xba4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xd50b, .a=0xf0, .x=0xb0, .y=0x98, .sp=0x1a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd50b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd50c, .a=0xe0, .x=0xb0, .y=0x98, .sp=0x1a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd50b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd50b, .value=0x3c, .type=IO_READ},
        {.addr=0xd50c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x323d, .a=0x2f, .x=0x5e, .y=0x27, .sp=0x00, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x323d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x323e, .a=0x5f, .x=0x5e, .y=0x27, .sp=0x00, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x323d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x323d, .value=0x3c, .type=IO_READ},
        {.addr=0x323e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x0bdb, .a=0x35, .x=0x02, .y=0xbb, .sp=0x1a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0bdb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0bdc, .a=0x6b, .x=0x02, .y=0xbb, .sp=0x1a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0bdb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0bdb, .value=0x3c, .type=IO_READ},
        {.addr=0x0bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xe8f1, .a=0x75, .x=0x69, .y=0x0c, .sp=0xee, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe8f2, .a=0xeb, .x=0x69, .y=0x0c, .sp=0xee, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe8f1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe8f1, .value=0x3c, .type=IO_READ},
        {.addr=0xe8f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xff9a, .a=0xf8, .x=0xd3, .y=0x68, .sp=0xdd, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xff9a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xff9b, .a=0xf1, .x=0xd3, .y=0x68, .sp=0xdd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xff9a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xff9a, .value=0x3c, .type=IO_READ},
        {.addr=0xff9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x410e, .a=0x19, .x=0x63, .y=0x8d, .sp=0x1b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x410e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x410f, .a=0x32, .x=0x63, .y=0x8d, .sp=0x1b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x410e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x410e, .value=0x3c, .type=IO_READ},
        {.addr=0x410f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x4654, .a=0xba, .x=0xb6, .y=0xb6, .sp=0x91, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4654, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4655, .a=0x74, .x=0xb6, .y=0xb6, .sp=0x91, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4654, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4654, .value=0x3c, .type=IO_READ},
        {.addr=0x4655, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x28f8, .a=0xd3, .x=0x15, .y=0x89, .sp=0xdd, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x28f8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x28f9, .a=0xa7, .x=0x15, .y=0x89, .sp=0xdd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x28f8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x28f8, .value=0x3c, .type=IO_READ},
        {.addr=0x28f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x6b49, .a=0x6d, .x=0xfe, .y=0x9b, .sp=0x5d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6b49, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6b4a, .a=0xdb, .x=0xfe, .y=0x9b, .sp=0x5d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6b49, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6b49, .value=0x3c, .type=IO_READ},
        {.addr=0x6b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x2997, .a=0xbf, .x=0x85, .y=0x80, .sp=0x5e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2997, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2998, .a=0x7e, .x=0x85, .y=0x80, .sp=0x5e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2997, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2997, .value=0x3c, .type=IO_READ},
        {.addr=0x2998, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x3300, .a=0x5e, .x=0x26, .y=0x54, .sp=0xd5, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x3300, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3301, .a=0xbd, .x=0x26, .y=0x54, .sp=0xd5, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3300, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3300, .value=0x3c, .type=IO_READ},
        {.addr=0x3301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xd091, .a=0x1d, .x=0xac, .y=0x0e, .sp=0xe2, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd091, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd092, .a=0x3b, .x=0xac, .y=0x0e, .sp=0xe2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd091, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd091, .value=0x3c, .type=IO_READ},
        {.addr=0xd092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0200) {
    const struct CPU_State initial_cpu = {.pc=0x229e, .a=0x4c, .x=0x3c, .y=0x9c, .sp=0xc5, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x229e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x229f, .a=0x99, .x=0x3c, .y=0x9c, .sp=0xc5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x229e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x229e, .value=0x3c, .type=IO_READ},
        {.addr=0x229f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0201) {
    const struct CPU_State initial_cpu = {.pc=0x18a1, .a=0x0c, .x=0x46, .y=0x30, .sp=0x46, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x18a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x18a2, .a=0x19, .x=0x46, .y=0x30, .sp=0x46, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x18a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x18a1, .value=0x3c, .type=IO_READ},
        {.addr=0x18a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0202) {
    const struct CPU_State initial_cpu = {.pc=0xea97, .a=0x33, .x=0x0a, .y=0xd3, .sp=0x0b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xea97, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xea98, .a=0x67, .x=0x0a, .y=0xd3, .sp=0x0b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xea97, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xea97, .value=0x3c, .type=IO_READ},
        {.addr=0xea98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0203) {
    const struct CPU_State initial_cpu = {.pc=0x2a14, .a=0x32, .x=0x66, .y=0x39, .sp=0x34, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2a14, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2a15, .a=0x64, .x=0x66, .y=0x39, .sp=0x34, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2a14, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2a14, .value=0x3c, .type=IO_READ},
        {.addr=0x2a15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0204) {
    const struct CPU_State initial_cpu = {.pc=0x592f, .a=0xca, .x=0xe3, .y=0xc7, .sp=0x29, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x592f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5930, .a=0x95, .x=0xe3, .y=0xc7, .sp=0x29, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x592f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x592f, .value=0x3c, .type=IO_READ},
        {.addr=0x5930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0205) {
    const struct CPU_State initial_cpu = {.pc=0x4333, .a=0x65, .x=0x29, .y=0x1b, .sp=0x1d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4333, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4334, .a=0xcb, .x=0x29, .y=0x1b, .sp=0x1d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4333, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4333, .value=0x3c, .type=IO_READ},
        {.addr=0x4334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc9a5, .a=0x74, .x=0x92, .y=0x24, .sp=0xd6, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc9a6, .a=0xe9, .x=0x92, .y=0x24, .sp=0xd6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc9a5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc9a5, .value=0x3c, .type=IO_READ},
        {.addr=0xc9a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb916, .a=0x6d, .x=0xea, .y=0x94, .sp=0xb9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb916, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb917, .a=0xdb, .x=0xea, .y=0x94, .sp=0xb9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb916, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb916, .value=0x3c, .type=IO_READ},
        {.addr=0xb917, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6934, .a=0xad, .x=0x84, .y=0xe8, .sp=0x63, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6934, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6935, .a=0x5a, .x=0x84, .y=0xe8, .sp=0x63, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6934, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6934, .value=0x3c, .type=IO_READ},
        {.addr=0x6935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5f5c, .a=0xe0, .x=0xa3, .y=0xc8, .sp=0xc8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f5d, .a=0xc1, .x=0xa3, .y=0xc8, .sp=0xc8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5f5c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f5c, .value=0x3c, .type=IO_READ},
        {.addr=0x5f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020A) {
    const struct CPU_State initial_cpu = {.pc=0x7f99, .a=0xdc, .x=0x17, .y=0x88, .sp=0xc8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7f99, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7f9a, .a=0xb9, .x=0x17, .y=0x88, .sp=0xc8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7f99, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7f99, .value=0x3c, .type=IO_READ},
        {.addr=0x7f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020B) {
    const struct CPU_State initial_cpu = {.pc=0x53cf, .a=0x17, .x=0x10, .y=0xd2, .sp=0x01, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x53cf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x53d0, .a=0x2e, .x=0x10, .y=0xd2, .sp=0x01, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x53cf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x53cf, .value=0x3c, .type=IO_READ},
        {.addr=0x53d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020C) {
    const struct CPU_State initial_cpu = {.pc=0xe230, .a=0x62, .x=0x69, .y=0x4a, .sp=0xc0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe230, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe231, .a=0xc5, .x=0x69, .y=0x4a, .sp=0xc0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe230, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe230, .value=0x3c, .type=IO_READ},
        {.addr=0xe231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020D) {
    const struct CPU_State initial_cpu = {.pc=0xd1eb, .a=0xd1, .x=0x70, .y=0x44, .sp=0x4f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd1eb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd1ec, .a=0xa2, .x=0x70, .y=0x44, .sp=0x4f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd1eb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd1eb, .value=0x3c, .type=IO_READ},
        {.addr=0xd1ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020E) {
    const struct CPU_State initial_cpu = {.pc=0x1ee1, .a=0xdc, .x=0x86, .y=0x7b, .sp=0x8d, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1ee2, .a=0xb9, .x=0x86, .y=0x7b, .sp=0x8d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1ee1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1ee1, .value=0x3c, .type=IO_READ},
        {.addr=0x1ee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5556, .a=0xfa, .x=0xec, .y=0x8c, .sp=0xdf, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5556, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5557, .a=0xf4, .x=0xec, .y=0x8c, .sp=0xdf, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5556, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5556, .value=0x3c, .type=IO_READ},
        {.addr=0x5557, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0210) {
    const struct CPU_State initial_cpu = {.pc=0x676d, .a=0x7f, .x=0x5b, .y=0x20, .sp=0x4d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x676d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x676e, .a=0xfe, .x=0x5b, .y=0x20, .sp=0x4d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x676d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x676d, .value=0x3c, .type=IO_READ},
        {.addr=0x676e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0211) {
    const struct CPU_State initial_cpu = {.pc=0x58bf, .a=0x95, .x=0x50, .y=0xa9, .sp=0x2d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x58bf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x58c0, .a=0x2a, .x=0x50, .y=0xa9, .sp=0x2d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x58bf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x58bf, .value=0x3c, .type=IO_READ},
        {.addr=0x58c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0212) {
    const struct CPU_State initial_cpu = {.pc=0x84a4, .a=0xbc, .x=0xf7, .y=0x27, .sp=0x6f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x84a4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x84a5, .a=0x79, .x=0xf7, .y=0x27, .sp=0x6f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x84a4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x84a4, .value=0x3c, .type=IO_READ},
        {.addr=0x84a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0213) {
    const struct CPU_State initial_cpu = {.pc=0x32b7, .a=0xee, .x=0xd5, .y=0xfc, .sp=0xfb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x32b7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x32b8, .a=0xdc, .x=0xd5, .y=0xfc, .sp=0xfb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x32b7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x32b7, .value=0x3c, .type=IO_READ},
        {.addr=0x32b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0214) {
    const struct CPU_State initial_cpu = {.pc=0x60c5, .a=0x63, .x=0xa4, .y=0xfc, .sp=0x59, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x60c5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x60c6, .a=0xc6, .x=0xa4, .y=0xfc, .sp=0x59, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x60c5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x60c5, .value=0x3c, .type=IO_READ},
        {.addr=0x60c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0215) {
    const struct CPU_State initial_cpu = {.pc=0x6913, .a=0x3e, .x=0xef, .y=0x3e, .sp=0xe6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6913, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6914, .a=0x7c, .x=0xef, .y=0x3e, .sp=0xe6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6913, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6913, .value=0x3c, .type=IO_READ},
        {.addr=0x6914, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0216) {
    const struct CPU_State initial_cpu = {.pc=0x4595, .a=0xe9, .x=0xbf, .y=0x4d, .sp=0xdf, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4595, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4596, .a=0xd3, .x=0xbf, .y=0x4d, .sp=0xdf, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4595, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4595, .value=0x3c, .type=IO_READ},
        {.addr=0x4596, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0217) {
    const struct CPU_State initial_cpu = {.pc=0x0fa3, .a=0xce, .x=0x01, .y=0xea, .sp=0x92, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0fa3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0fa4, .a=0x9d, .x=0x01, .y=0xea, .sp=0x92, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0fa3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0fa3, .value=0x3c, .type=IO_READ},
        {.addr=0x0fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe61d, .a=0xa3, .x=0x25, .y=0x68, .sp=0x82, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe61d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe61e, .a=0x47, .x=0x25, .y=0x68, .sp=0x82, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe61d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe61d, .value=0x3c, .type=IO_READ},
        {.addr=0xe61e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7bb8, .a=0x61, .x=0x97, .y=0xbb, .sp=0x08, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7bb9, .a=0xc2, .x=0x97, .y=0xbb, .sp=0x08, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7bb8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7bb8, .value=0x3c, .type=IO_READ},
        {.addr=0x7bb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2c45, .a=0x97, .x=0xc9, .y=0xd3, .sp=0xb8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2c45, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2c46, .a=0x2e, .x=0xc9, .y=0xd3, .sp=0xb8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2c45, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2c45, .value=0x3c, .type=IO_READ},
        {.addr=0x2c46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021B) {
    const struct CPU_State initial_cpu = {.pc=0xf137, .a=0xea, .x=0x8a, .y=0xa3, .sp=0x11, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf137, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf138, .a=0xd4, .x=0x8a, .y=0xa3, .sp=0x11, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf137, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf137, .value=0x3c, .type=IO_READ},
        {.addr=0xf138, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021C) {
    const struct CPU_State initial_cpu = {.pc=0x899a, .a=0x67, .x=0xd2, .y=0xc3, .sp=0xf0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x899a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x899b, .a=0xcf, .x=0xd2, .y=0xc3, .sp=0xf0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x899a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x899a, .value=0x3c, .type=IO_READ},
        {.addr=0x899b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021D) {
    const struct CPU_State initial_cpu = {.pc=0x121d, .a=0x7f, .x=0x71, .y=0xa6, .sp=0x11, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x121d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x121e, .a=0xfe, .x=0x71, .y=0xa6, .sp=0x11, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x121d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x121d, .value=0x3c, .type=IO_READ},
        {.addr=0x121e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021E) {
    const struct CPU_State initial_cpu = {.pc=0xab75, .a=0x39, .x=0xfa, .y=0x12, .sp=0x6e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xab75, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xab76, .a=0x72, .x=0xfa, .y=0x12, .sp=0x6e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xab75, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xab75, .value=0x3c, .type=IO_READ},
        {.addr=0xab76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_021F) {
    const struct CPU_State initial_cpu = {.pc=0x0feb, .a=0xcf, .x=0x31, .y=0x91, .sp=0x57, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0feb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0fec, .a=0x9f, .x=0x31, .y=0x91, .sp=0x57, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0feb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0feb, .value=0x3c, .type=IO_READ},
        {.addr=0x0fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0220) {
    const struct CPU_State initial_cpu = {.pc=0xce45, .a=0x1f, .x=0xc7, .y=0xac, .sp=0xd2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xce45, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce46, .a=0x3e, .x=0xc7, .y=0xac, .sp=0xd2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xce45, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce45, .value=0x3c, .type=IO_READ},
        {.addr=0xce46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0221) {
    const struct CPU_State initial_cpu = {.pc=0x0e82, .a=0x90, .x=0x8c, .y=0xd7, .sp=0xa5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0e82, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0e83, .a=0x21, .x=0x8c, .y=0xd7, .sp=0xa5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0e82, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0e82, .value=0x3c, .type=IO_READ},
        {.addr=0x0e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0222) {
    const struct CPU_State initial_cpu = {.pc=0xad12, .a=0xfb, .x=0xb1, .y=0x73, .sp=0x33, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xad12, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad13, .a=0xf7, .x=0xb1, .y=0x73, .sp=0x33, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xad12, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad12, .value=0x3c, .type=IO_READ},
        {.addr=0xad13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0223) {
    const struct CPU_State initial_cpu = {.pc=0xe820, .a=0x3b, .x=0x99, .y=0x98, .sp=0xf3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe820, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe821, .a=0x76, .x=0x99, .y=0x98, .sp=0xf3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe820, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe820, .value=0x3c, .type=IO_READ},
        {.addr=0xe821, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0224) {
    const struct CPU_State initial_cpu = {.pc=0x4643, .a=0x0c, .x=0x71, .y=0x1c, .sp=0x56, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4643, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4644, .a=0x19, .x=0x71, .y=0x1c, .sp=0x56, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4643, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4643, .value=0x3c, .type=IO_READ},
        {.addr=0x4644, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0225) {
    const struct CPU_State initial_cpu = {.pc=0x5ea3, .a=0x73, .x=0x2c, .y=0x30, .sp=0x5d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5ea4, .a=0xe7, .x=0x2c, .y=0x30, .sp=0x5d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5ea3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5ea3, .value=0x3c, .type=IO_READ},
        {.addr=0x5ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0226) {
    const struct CPU_State initial_cpu = {.pc=0x0384, .a=0x29, .x=0x79, .y=0x07, .sp=0xac, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0384, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0385, .a=0x53, .x=0x79, .y=0x07, .sp=0xac, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0384, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0384, .value=0x3c, .type=IO_READ},
        {.addr=0x0385, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0227) {
    const struct CPU_State initial_cpu = {.pc=0x241a, .a=0x02, .x=0x87, .y=0x42, .sp=0x69, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x241a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x241b, .a=0x05, .x=0x87, .y=0x42, .sp=0x69, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x241a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x241a, .value=0x3c, .type=IO_READ},
        {.addr=0x241b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0228) {
    const struct CPU_State initial_cpu = {.pc=0x338f, .a=0x2a, .x=0xb7, .y=0x80, .sp=0xae, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x338f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3390, .a=0x54, .x=0xb7, .y=0x80, .sp=0xae, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x338f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x338f, .value=0x3c, .type=IO_READ},
        {.addr=0x3390, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0229) {
    const struct CPU_State initial_cpu = {.pc=0xc163, .a=0x69, .x=0xfc, .y=0x05, .sp=0xc7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc163, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc164, .a=0xd2, .x=0xfc, .y=0x05, .sp=0xc7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc163, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc163, .value=0x3c, .type=IO_READ},
        {.addr=0xc164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6f16, .a=0x46, .x=0x21, .y=0xc5, .sp=0xf5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6f16, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6f17, .a=0x8c, .x=0x21, .y=0xc5, .sp=0xf5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6f16, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6f16, .value=0x3c, .type=IO_READ},
        {.addr=0x6f17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022B) {
    const struct CPU_State initial_cpu = {.pc=0x8322, .a=0xc7, .x=0xda, .y=0x36, .sp=0x99, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8322, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8323, .a=0x8e, .x=0xda, .y=0x36, .sp=0x99, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8322, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8322, .value=0x3c, .type=IO_READ},
        {.addr=0x8323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022C) {
    const struct CPU_State initial_cpu = {.pc=0x0fae, .a=0x54, .x=0xdb, .y=0x7d, .sp=0x7d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0fae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0faf, .a=0xa8, .x=0xdb, .y=0x7d, .sp=0x7d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0fae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0fae, .value=0x3c, .type=IO_READ},
        {.addr=0x0faf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022D) {
    const struct CPU_State initial_cpu = {.pc=0x20d9, .a=0xb2, .x=0xd0, .y=0xfe, .sp=0x45, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x20d9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x20da, .a=0x64, .x=0xd0, .y=0xfe, .sp=0x45, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x20d9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x20d9, .value=0x3c, .type=IO_READ},
        {.addr=0x20da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022E) {
    const struct CPU_State initial_cpu = {.pc=0x4502, .a=0xa2, .x=0x26, .y=0xb1, .sp=0x7b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x4502, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4503, .a=0x45, .x=0x26, .y=0xb1, .sp=0x7b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4502, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4502, .value=0x3c, .type=IO_READ},
        {.addr=0x4503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_022F) {
    const struct CPU_State initial_cpu = {.pc=0x25f8, .a=0xed, .x=0xe1, .y=0x9a, .sp=0x2d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x25f8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x25f9, .a=0xdb, .x=0xe1, .y=0x9a, .sp=0x2d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x25f8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x25f8, .value=0x3c, .type=IO_READ},
        {.addr=0x25f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0230) {
    const struct CPU_State initial_cpu = {.pc=0xce65, .a=0xf7, .x=0x31, .y=0x05, .sp=0x56, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xce65, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce66, .a=0xee, .x=0x31, .y=0x05, .sp=0x56, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xce65, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce65, .value=0x3c, .type=IO_READ},
        {.addr=0xce66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0231) {
    const struct CPU_State initial_cpu = {.pc=0xa3c1, .a=0xdc, .x=0xa0, .y=0xf3, .sp=0x2d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa3c2, .a=0xb8, .x=0xa0, .y=0xf3, .sp=0x2d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa3c1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa3c1, .value=0x3c, .type=IO_READ},
        {.addr=0xa3c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0232) {
    const struct CPU_State initial_cpu = {.pc=0x3816, .a=0xce, .x=0x8e, .y=0x96, .sp=0x05, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3816, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3817, .a=0x9d, .x=0x8e, .y=0x96, .sp=0x05, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3816, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3816, .value=0x3c, .type=IO_READ},
        {.addr=0x3817, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0233) {
    const struct CPU_State initial_cpu = {.pc=0xbcea, .a=0xb1, .x=0xf5, .y=0x5d, .sp=0x71, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xbcea, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbceb, .a=0x62, .x=0xf5, .y=0x5d, .sp=0x71, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbcea, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbcea, .value=0x3c, .type=IO_READ},
        {.addr=0xbceb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0234) {
    const struct CPU_State initial_cpu = {.pc=0x2949, .a=0xdd, .x=0x0e, .y=0x2f, .sp=0xf2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2949, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x294a, .a=0xba, .x=0x0e, .y=0x2f, .sp=0xf2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2949, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2949, .value=0x3c, .type=IO_READ},
        {.addr=0x294a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2ba5, .a=0x57, .x=0xfe, .y=0xe0, .sp=0xa3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2ba6, .a=0xaf, .x=0xfe, .y=0xe0, .sp=0xa3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2ba5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2ba5, .value=0x3c, .type=IO_READ},
        {.addr=0x2ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0982, .a=0x64, .x=0xa3, .y=0xa6, .sp=0x70, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0982, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0983, .a=0xc8, .x=0xa3, .y=0xa6, .sp=0x70, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0982, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0982, .value=0x3c, .type=IO_READ},
        {.addr=0x0983, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0237) {
    const struct CPU_State initial_cpu = {.pc=0xf409, .a=0x9b, .x=0x64, .y=0x44, .sp=0xb9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf409, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf40a, .a=0x36, .x=0x64, .y=0x44, .sp=0xb9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf409, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf409, .value=0x3c, .type=IO_READ},
        {.addr=0xf40a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0238) {
    const struct CPU_State initial_cpu = {.pc=0x521f, .a=0x06, .x=0x4a, .y=0x55, .sp=0x9b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x521f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5220, .a=0x0d, .x=0x4a, .y=0x55, .sp=0x9b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x521f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x521f, .value=0x3c, .type=IO_READ},
        {.addr=0x5220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0239) {
    const struct CPU_State initial_cpu = {.pc=0x8eef, .a=0x51, .x=0x36, .y=0xa8, .sp=0xf0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8eef, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0xa2, .x=0x36, .y=0xa8, .sp=0xf0, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8eef, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8eef, .value=0x3c, .type=IO_READ},
        {.addr=0x8ef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023A) {
    const struct CPU_State initial_cpu = {.pc=0x07c7, .a=0xd1, .x=0x80, .y=0xae, .sp=0x26, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x07c7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x07c8, .a=0xa3, .x=0x80, .y=0xae, .sp=0x26, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x07c7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x07c7, .value=0x3c, .type=IO_READ},
        {.addr=0x07c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023B) {
    const struct CPU_State initial_cpu = {.pc=0x5fee, .a=0x34, .x=0x81, .y=0x15, .sp=0xb2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5fee, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5fef, .a=0x68, .x=0x81, .y=0x15, .sp=0xb2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5fee, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5fee, .value=0x3c, .type=IO_READ},
        {.addr=0x5fef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023C) {
    const struct CPU_State initial_cpu = {.pc=0x8ad7, .a=0x41, .x=0x15, .y=0x5d, .sp=0x92, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8ad8, .a=0x83, .x=0x15, .y=0x5d, .sp=0x92, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8ad7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8ad7, .value=0x3c, .type=IO_READ},
        {.addr=0x8ad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023D) {
    const struct CPU_State initial_cpu = {.pc=0x6044, .a=0x61, .x=0xd3, .y=0xed, .sp=0x34, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6044, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6045, .a=0xc2, .x=0xd3, .y=0xed, .sp=0x34, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6044, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6044, .value=0x3c, .type=IO_READ},
        {.addr=0x6045, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8ad3, .a=0xe3, .x=0xb0, .y=0x71, .sp=0xbb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8ad4, .a=0xc6, .x=0xb0, .y=0x71, .sp=0xbb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8ad3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8ad3, .value=0x3c, .type=IO_READ},
        {.addr=0x8ad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe6f8, .a=0xb7, .x=0x81, .y=0x6f, .sp=0x45, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe6f9, .a=0x6e, .x=0x81, .y=0x6f, .sp=0x45, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe6f8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe6f8, .value=0x3c, .type=IO_READ},
        {.addr=0xe6f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0240) {
    const struct CPU_State initial_cpu = {.pc=0xb838, .a=0xae, .x=0x29, .y=0x58, .sp=0xec, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb838, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb839, .a=0x5d, .x=0x29, .y=0x58, .sp=0xec, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb838, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb838, .value=0x3c, .type=IO_READ},
        {.addr=0xb839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0241) {
    const struct CPU_State initial_cpu = {.pc=0x6101, .a=0xba, .x=0x30, .y=0xf3, .sp=0x77, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6101, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6102, .a=0x75, .x=0x30, .y=0xf3, .sp=0x77, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6101, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6101, .value=0x3c, .type=IO_READ},
        {.addr=0x6102, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0242) {
    const struct CPU_State initial_cpu = {.pc=0x7373, .a=0x51, .x=0x67, .y=0xd6, .sp=0xf1, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7373, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7374, .a=0xa2, .x=0x67, .y=0xd6, .sp=0xf1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7373, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7373, .value=0x3c, .type=IO_READ},
        {.addr=0x7374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3348, .a=0x7b, .x=0x1a, .y=0x04, .sp=0x8a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3348, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3349, .a=0xf7, .x=0x1a, .y=0x04, .sp=0x8a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3348, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3348, .value=0x3c, .type=IO_READ},
        {.addr=0x3349, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0189, .a=0x03, .x=0x6c, .y=0x97, .sp=0xce, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x018a, .a=0x07, .x=0x6c, .y=0x97, .sp=0xce, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0189, .value=0x3c, .type=IO_READ},
        {.addr=0x018a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0245) {
    const struct CPU_State initial_cpu = {.pc=0x378d, .a=0x5a, .x=0xac, .y=0x11, .sp=0xc8, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x378d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x378e, .a=0xb5, .x=0xac, .y=0x11, .sp=0xc8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x378d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x378d, .value=0x3c, .type=IO_READ},
        {.addr=0x378e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0246) {
    const struct CPU_State initial_cpu = {.pc=0x76e7, .a=0x03, .x=0xb8, .y=0x4b, .sp=0xc4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x76e7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x76e8, .a=0x07, .x=0xb8, .y=0x4b, .sp=0xc4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x76e7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x76e7, .value=0x3c, .type=IO_READ},
        {.addr=0x76e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0247) {
    const struct CPU_State initial_cpu = {.pc=0xa766, .a=0x4b, .x=0xbf, .y=0xde, .sp=0x40, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa766, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa767, .a=0x97, .x=0xbf, .y=0xde, .sp=0x40, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa766, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa766, .value=0x3c, .type=IO_READ},
        {.addr=0xa767, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0248) {
    const struct CPU_State initial_cpu = {.pc=0xa531, .a=0x77, .x=0xb4, .y=0x2b, .sp=0xc1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa531, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa532, .a=0xef, .x=0xb4, .y=0x2b, .sp=0xc1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa531, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa531, .value=0x3c, .type=IO_READ},
        {.addr=0xa532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0249) {
    const struct CPU_State initial_cpu = {.pc=0x3ab9, .a=0xa5, .x=0xa0, .y=0x54, .sp=0x02, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3aba, .a=0x4a, .x=0xa0, .y=0x54, .sp=0x02, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3ab9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3ab9, .value=0x3c, .type=IO_READ},
        {.addr=0x3aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024A) {
    const struct CPU_State initial_cpu = {.pc=0x2f65, .a=0xd8, .x=0x7d, .y=0xb3, .sp=0x91, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2f65, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2f66, .a=0xb0, .x=0x7d, .y=0xb3, .sp=0x91, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2f65, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2f65, .value=0x3c, .type=IO_READ},
        {.addr=0x2f66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024B) {
    const struct CPU_State initial_cpu = {.pc=0xd450, .a=0xc3, .x=0x50, .y=0x1b, .sp=0xbe, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd450, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd451, .a=0x87, .x=0x50, .y=0x1b, .sp=0xbe, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd450, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd450, .value=0x3c, .type=IO_READ},
        {.addr=0xd451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024C) {
    const struct CPU_State initial_cpu = {.pc=0x28dd, .a=0x45, .x=0x6c, .y=0xe1, .sp=0x0a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x28dd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x28de, .a=0x8a, .x=0x6c, .y=0xe1, .sp=0x0a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x28dd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x28dd, .value=0x3c, .type=IO_READ},
        {.addr=0x28de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024D) {
    const struct CPU_State initial_cpu = {.pc=0x8079, .a=0x05, .x=0xe6, .y=0xd3, .sp=0xc2, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x8079, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x807a, .a=0x0b, .x=0xe6, .y=0xd3, .sp=0xc2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8079, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8079, .value=0x3c, .type=IO_READ},
        {.addr=0x807a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024E) {
    const struct CPU_State initial_cpu = {.pc=0x8579, .a=0xb6, .x=0x44, .y=0x88, .sp=0xac, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8579, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x857a, .a=0x6d, .x=0x44, .y=0x88, .sp=0xac, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8579, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8579, .value=0x3c, .type=IO_READ},
        {.addr=0x857a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_024F) {
    const struct CPU_State initial_cpu = {.pc=0x19b8, .a=0xdb, .x=0x0c, .y=0xd5, .sp=0xa6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x19b8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x19b9, .a=0xb6, .x=0x0c, .y=0xd5, .sp=0xa6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x19b8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x19b8, .value=0x3c, .type=IO_READ},
        {.addr=0x19b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0250) {
    const struct CPU_State initial_cpu = {.pc=0x1dec, .a=0xc6, .x=0x95, .y=0x29, .sp=0xf8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1dec, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1ded, .a=0x8d, .x=0x95, .y=0x29, .sp=0xf8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1dec, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1dec, .value=0x3c, .type=IO_READ},
        {.addr=0x1ded, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0251) {
    const struct CPU_State initial_cpu = {.pc=0xd4d4, .a=0x91, .x=0xc4, .y=0xcd, .sp=0x83, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd4d5, .a=0x22, .x=0xc4, .y=0xcd, .sp=0x83, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd4d4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd4d4, .value=0x3c, .type=IO_READ},
        {.addr=0xd4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0252) {
    const struct CPU_State initial_cpu = {.pc=0x69bb, .a=0x3d, .x=0xf3, .y=0x5e, .sp=0x7d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x69bb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x69bc, .a=0x7a, .x=0xf3, .y=0x5e, .sp=0x7d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x69bb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x69bb, .value=0x3c, .type=IO_READ},
        {.addr=0x69bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0253) {
    const struct CPU_State initial_cpu = {.pc=0x0eee, .a=0x7e, .x=0xac, .y=0x05, .sp=0x27, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0eee, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0eef, .a=0xfc, .x=0xac, .y=0x05, .sp=0x27, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0eee, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0eee, .value=0x3c, .type=IO_READ},
        {.addr=0x0eef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0254) {
    const struct CPU_State initial_cpu = {.pc=0xaee5, .a=0x34, .x=0x53, .y=0x42, .sp=0xc4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xaee5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaee6, .a=0x68, .x=0x53, .y=0x42, .sp=0xc4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xaee5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaee5, .value=0x3c, .type=IO_READ},
        {.addr=0xaee6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4938, .a=0x2b, .x=0x39, .y=0x42, .sp=0x45, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4938, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4939, .a=0x57, .x=0x39, .y=0x42, .sp=0x45, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4938, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4938, .value=0x3c, .type=IO_READ},
        {.addr=0x4939, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf612, .a=0x80, .x=0x2a, .y=0xd0, .sp=0xf3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf612, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf613, .a=0x00, .x=0x2a, .y=0xd0, .sp=0xf3, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xf612, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf612, .value=0x3c, .type=IO_READ},
        {.addr=0xf613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0257) {
    const struct CPU_State initial_cpu = {.pc=0x44ae, .a=0x18, .x=0xd4, .y=0xa1, .sp=0xc2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x44ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x44af, .a=0x30, .x=0xd4, .y=0xa1, .sp=0xc2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x44ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x44ae, .value=0x3c, .type=IO_READ},
        {.addr=0x44af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0258) {
    const struct CPU_State initial_cpu = {.pc=0xe536, .a=0x41, .x=0xd3, .y=0x02, .sp=0x99, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe536, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe537, .a=0x82, .x=0xd3, .y=0x02, .sp=0x99, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe536, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe536, .value=0x3c, .type=IO_READ},
        {.addr=0xe537, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0259) {
    const struct CPU_State initial_cpu = {.pc=0x8bc9, .a=0x3f, .x=0x4b, .y=0xff, .sp=0x4d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8bca, .a=0x7e, .x=0x4b, .y=0xff, .sp=0x4d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8bc9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8bc9, .value=0x3c, .type=IO_READ},
        {.addr=0x8bca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025A) {
    const struct CPU_State initial_cpu = {.pc=0x60c0, .a=0x2a, .x=0x5f, .y=0xda, .sp=0xb6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x60c0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x60c1, .a=0x54, .x=0x5f, .y=0xda, .sp=0xb6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x60c0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x60c0, .value=0x3c, .type=IO_READ},
        {.addr=0x60c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025B) {
    const struct CPU_State initial_cpu = {.pc=0xad77, .a=0xcd, .x=0xb5, .y=0x94, .sp=0xe3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xad77, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad78, .a=0x9b, .x=0xb5, .y=0x94, .sp=0xe3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xad77, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad77, .value=0x3c, .type=IO_READ},
        {.addr=0xad78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7d26, .a=0x48, .x=0xcf, .y=0xbf, .sp=0x7d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x7d26, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7d27, .a=0x90, .x=0xcf, .y=0xbf, .sp=0x7d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7d26, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7d26, .value=0x3c, .type=IO_READ},
        {.addr=0x7d27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025D) {
    const struct CPU_State initial_cpu = {.pc=0xb5ac, .a=0x1a, .x=0xf0, .y=0x01, .sp=0xc8, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ac, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb5ad, .a=0x35, .x=0xf0, .y=0x01, .sp=0xc8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb5ac, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb5ac, .value=0x3c, .type=IO_READ},
        {.addr=0xb5ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb98c, .a=0x2f, .x=0x69, .y=0x4d, .sp=0xf9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb98c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb98d, .a=0x5e, .x=0x69, .y=0x4d, .sp=0xf9, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb98c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb98c, .value=0x3c, .type=IO_READ},
        {.addr=0xb98d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_025F) {
    const struct CPU_State initial_cpu = {.pc=0x4c9d, .a=0x77, .x=0x96, .y=0xe0, .sp=0x9c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4c9e, .a=0xef, .x=0x96, .y=0xe0, .sp=0x9c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4c9d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4c9d, .value=0x3c, .type=IO_READ},
        {.addr=0x4c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0260) {
    const struct CPU_State initial_cpu = {.pc=0xdcc3, .a=0xfa, .x=0x60, .y=0x72, .sp=0x6c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdcc4, .a=0xf4, .x=0x60, .y=0x72, .sp=0x6c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xdcc3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdcc3, .value=0x3c, .type=IO_READ},
        {.addr=0xdcc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1561, .a=0x56, .x=0xb3, .y=0x37, .sp=0x61, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1561, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1562, .a=0xad, .x=0xb3, .y=0x37, .sp=0x61, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1561, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1561, .value=0x3c, .type=IO_READ},
        {.addr=0x1562, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0262) {
    const struct CPU_State initial_cpu = {.pc=0x0a3d, .a=0xfd, .x=0x40, .y=0x03, .sp=0x2d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0a3d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0a3e, .a=0xfa, .x=0x40, .y=0x03, .sp=0x2d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0a3d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0a3d, .value=0x3c, .type=IO_READ},
        {.addr=0x0a3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0263) {
    const struct CPU_State initial_cpu = {.pc=0x9d19, .a=0x05, .x=0x1a, .y=0x55, .sp=0x31, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9d19, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9d1a, .a=0x0a, .x=0x1a, .y=0x55, .sp=0x31, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9d19, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9d19, .value=0x3c, .type=IO_READ},
        {.addr=0x9d1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0264) {
    const struct CPU_State initial_cpu = {.pc=0x0e6e, .a=0x64, .x=0x79, .y=0xc5, .sp=0xb2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0e6e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0e6f, .a=0xc8, .x=0x79, .y=0xc5, .sp=0xb2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0e6e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0e6e, .value=0x3c, .type=IO_READ},
        {.addr=0x0e6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0265) {
    const struct CPU_State initial_cpu = {.pc=0x3b13, .a=0xf6, .x=0x06, .y=0x33, .sp=0x34, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3b13, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3b14, .a=0xed, .x=0x06, .y=0x33, .sp=0x34, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3b13, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3b13, .value=0x3c, .type=IO_READ},
        {.addr=0x3b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0266) {
    const struct CPU_State initial_cpu = {.pc=0x0e25, .a=0xd8, .x=0x94, .y=0x51, .sp=0x83, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0e25, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0e26, .a=0xb0, .x=0x94, .y=0x51, .sp=0x83, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0e25, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0e25, .value=0x3c, .type=IO_READ},
        {.addr=0x0e26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0267) {
    const struct CPU_State initial_cpu = {.pc=0x2a85, .a=0xac, .x=0xb3, .y=0xb5, .sp=0x04, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2a85, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2a86, .a=0x58, .x=0xb3, .y=0xb5, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2a85, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2a85, .value=0x3c, .type=IO_READ},
        {.addr=0x2a86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0268) {
    const struct CPU_State initial_cpu = {.pc=0x51fe, .a=0x69, .x=0x36, .y=0x5c, .sp=0xa9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x51fe, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x51ff, .a=0xd3, .x=0x36, .y=0x5c, .sp=0xa9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x51fe, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x51fe, .value=0x3c, .type=IO_READ},
        {.addr=0x51ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0269) {
    const struct CPU_State initial_cpu = {.pc=0x0404, .a=0xb9, .x=0x9a, .y=0x4b, .sp=0xcf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0404, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0405, .a=0x72, .x=0x9a, .y=0x4b, .sp=0xcf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0404, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0404, .value=0x3c, .type=IO_READ},
        {.addr=0x0405, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3a7a, .a=0xa2, .x=0x56, .y=0xc9, .sp=0xc8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3a7a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3a7b, .a=0x44, .x=0x56, .y=0xc9, .sp=0xc8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3a7a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3a7a, .value=0x3c, .type=IO_READ},
        {.addr=0x3a7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe23f, .a=0x1f, .x=0xce, .y=0x8c, .sp=0xe7, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe23f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe240, .a=0x3e, .x=0xce, .y=0x8c, .sp=0xe7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe23f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe23f, .value=0x3c, .type=IO_READ},
        {.addr=0xe240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026C) {
    const struct CPU_State initial_cpu = {.pc=0xbca7, .a=0x04, .x=0xfc, .y=0x8d, .sp=0x22, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbca7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbca8, .a=0x08, .x=0xfc, .y=0x8d, .sp=0x22, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbca7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbca7, .value=0x3c, .type=IO_READ},
        {.addr=0xbca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026D) {
    const struct CPU_State initial_cpu = {.pc=0xad39, .a=0x12, .x=0x47, .y=0xaf, .sp=0xe2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xad39, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad3a, .a=0x25, .x=0x47, .y=0xaf, .sp=0xe2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xad39, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad39, .value=0x3c, .type=IO_READ},
        {.addr=0xad3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026E) {
    const struct CPU_State initial_cpu = {.pc=0xd857, .a=0x7f, .x=0x67, .y=0x8d, .sp=0xec, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xd857, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd858, .a=0xff, .x=0x67, .y=0x8d, .sp=0xec, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd857, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd857, .value=0x3c, .type=IO_READ},
        {.addr=0xd858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_026F) {
    const struct CPU_State initial_cpu = {.pc=0x91f6, .a=0x9b, .x=0xc3, .y=0xb7, .sp=0x1b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x91f6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x91f7, .a=0x36, .x=0xc3, .y=0xb7, .sp=0x1b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x91f6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x91f6, .value=0x3c, .type=IO_READ},
        {.addr=0x91f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0270) {
    const struct CPU_State initial_cpu = {.pc=0x4d6b, .a=0x30, .x=0x19, .y=0xc0, .sp=0xc5, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x4d6b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4d6c, .a=0x60, .x=0x19, .y=0xc0, .sp=0xc5, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4d6b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4d6b, .value=0x3c, .type=IO_READ},
        {.addr=0x4d6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0271) {
    const struct CPU_State initial_cpu = {.pc=0x68a1, .a=0x47, .x=0x84, .y=0xc1, .sp=0x81, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x68a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x68a2, .a=0x8f, .x=0x84, .y=0xc1, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x68a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x68a1, .value=0x3c, .type=IO_READ},
        {.addr=0x68a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0272) {
    const struct CPU_State initial_cpu = {.pc=0x2975, .a=0xf4, .x=0x50, .y=0x43, .sp=0xa4, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2975, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2976, .a=0xe8, .x=0x50, .y=0x43, .sp=0xa4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2975, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2975, .value=0x3c, .type=IO_READ},
        {.addr=0x2976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0273) {
    const struct CPU_State initial_cpu = {.pc=0xf23f, .a=0x09, .x=0x0e, .y=0x17, .sp=0xa0, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xf23f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf240, .a=0x13, .x=0x0e, .y=0x17, .sp=0xa0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf23f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf23f, .value=0x3c, .type=IO_READ},
        {.addr=0xf240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4121, .a=0x5f, .x=0xf8, .y=0xed, .sp=0x9f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4121, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4122, .a=0xbe, .x=0xf8, .y=0xed, .sp=0x9f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4121, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4121, .value=0x3c, .type=IO_READ},
        {.addr=0x4122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0275) {
    const struct CPU_State initial_cpu = {.pc=0x21e6, .a=0xf9, .x=0xfd, .y=0xd0, .sp=0xe2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x21e6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x21e7, .a=0xf2, .x=0xfd, .y=0xd0, .sp=0xe2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x21e6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x21e6, .value=0x3c, .type=IO_READ},
        {.addr=0x21e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0276) {
    const struct CPU_State initial_cpu = {.pc=0x1919, .a=0x49, .x=0xe0, .y=0x41, .sp=0xeb, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1919, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x191a, .a=0x93, .x=0xe0, .y=0x41, .sp=0xeb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1919, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1919, .value=0x3c, .type=IO_READ},
        {.addr=0x191a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0277) {
    const struct CPU_State initial_cpu = {.pc=0x76ca, .a=0x7f, .x=0x47, .y=0xce, .sp=0xc3, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x76ca, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x76cb, .a=0xff, .x=0x47, .y=0xce, .sp=0xc3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x76ca, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x76ca, .value=0x3c, .type=IO_READ},
        {.addr=0x76cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0278) {
    const struct CPU_State initial_cpu = {.pc=0x8206, .a=0xf8, .x=0x11, .y=0xc2, .sp=0x09, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x8206, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8207, .a=0xf0, .x=0x11, .y=0xc2, .sp=0x09, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8206, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8206, .value=0x3c, .type=IO_READ},
        {.addr=0x8207, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0279) {
    const struct CPU_State initial_cpu = {.pc=0x9774, .a=0x68, .x=0x2d, .y=0x3e, .sp=0xb5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9774, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9775, .a=0xd1, .x=0x2d, .y=0x3e, .sp=0xb5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9774, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9774, .value=0x3c, .type=IO_READ},
        {.addr=0x9775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027A) {
    const struct CPU_State initial_cpu = {.pc=0x8eb5, .a=0x33, .x=0x38, .y=0xdc, .sp=0x6c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8eb6, .a=0x67, .x=0x38, .y=0xdc, .sp=0x6c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8eb5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8eb5, .value=0x3c, .type=IO_READ},
        {.addr=0x8eb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027B) {
    const struct CPU_State initial_cpu = {.pc=0x95a3, .a=0x01, .x=0x54, .y=0xab, .sp=0xa8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x95a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x95a4, .a=0x02, .x=0x54, .y=0xab, .sp=0xa8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x95a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x95a3, .value=0x3c, .type=IO_READ},
        {.addr=0x95a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027C) {
    const struct CPU_State initial_cpu = {.pc=0x03e5, .a=0x19, .x=0x0a, .y=0xbb, .sp=0x42, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x03e5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x03e6, .a=0x32, .x=0x0a, .y=0xbb, .sp=0x42, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x03e5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x03e5, .value=0x3c, .type=IO_READ},
        {.addr=0x03e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027D) {
    const struct CPU_State initial_cpu = {.pc=0x0301, .a=0x03, .x=0x26, .y=0x1f, .sp=0x30, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0301, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0302, .a=0x06, .x=0x26, .y=0x1f, .sp=0x30, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0301, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0301, .value=0x3c, .type=IO_READ},
        {.addr=0x0302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027E) {
    const struct CPU_State initial_cpu = {.pc=0xbfc9, .a=0xd3, .x=0xcd, .y=0xd6, .sp=0x0b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbfca, .a=0xa6, .x=0xcd, .y=0xd6, .sp=0x0b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xbfc9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbfc9, .value=0x3c, .type=IO_READ},
        {.addr=0xbfca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_027F) {
    const struct CPU_State initial_cpu = {.pc=0x9120, .a=0xea, .x=0x39, .y=0x1f, .sp=0x0c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9120, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9121, .a=0xd5, .x=0x39, .y=0x1f, .sp=0x0c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9120, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9120, .value=0x3c, .type=IO_READ},
        {.addr=0x9121, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0280) {
    const struct CPU_State initial_cpu = {.pc=0x3f35, .a=0xa8, .x=0x1d, .y=0x09, .sp=0x4e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3f35, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3f36, .a=0x50, .x=0x1d, .y=0x09, .sp=0x4e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3f35, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3f35, .value=0x3c, .type=IO_READ},
        {.addr=0x3f36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0281) {
    const struct CPU_State initial_cpu = {.pc=0x761a, .a=0xd2, .x=0x81, .y=0xba, .sp=0x74, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x761a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x761b, .a=0xa4, .x=0x81, .y=0xba, .sp=0x74, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x761a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x761a, .value=0x3c, .type=IO_READ},
        {.addr=0x761b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0282) {
    const struct CPU_State initial_cpu = {.pc=0x5c8a, .a=0x7c, .x=0x48, .y=0xd8, .sp=0x87, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x5c8a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5c8b, .a=0xf8, .x=0x48, .y=0xd8, .sp=0x87, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5c8a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5c8a, .value=0x3c, .type=IO_READ},
        {.addr=0x5c8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0283) {
    const struct CPU_State initial_cpu = {.pc=0x41e3, .a=0xd7, .x=0xce, .y=0x1f, .sp=0x74, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x41e3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x41e4, .a=0xae, .x=0xce, .y=0x1f, .sp=0x74, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x41e3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x41e3, .value=0x3c, .type=IO_READ},
        {.addr=0x41e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0284) {
    const struct CPU_State initial_cpu = {.pc=0xf746, .a=0x30, .x=0x38, .y=0x7f, .sp=0x13, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf746, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf747, .a=0x61, .x=0x38, .y=0x7f, .sp=0x13, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf746, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf746, .value=0x3c, .type=IO_READ},
        {.addr=0xf747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0285) {
    const struct CPU_State initial_cpu = {.pc=0xe063, .a=0x14, .x=0xb5, .y=0xd7, .sp=0xca, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe063, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe064, .a=0x29, .x=0xb5, .y=0xd7, .sp=0xca, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe063, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe063, .value=0x3c, .type=IO_READ},
        {.addr=0xe064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0286) {
    const struct CPU_State initial_cpu = {.pc=0x587b, .a=0x8d, .x=0x0e, .y=0x50, .sp=0xc4, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x587b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x587c, .a=0x1b, .x=0x0e, .y=0x50, .sp=0xc4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x587b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x587b, .value=0x3c, .type=IO_READ},
        {.addr=0x587c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0287) {
    const struct CPU_State initial_cpu = {.pc=0x5e8c, .a=0xdb, .x=0xc1, .y=0xef, .sp=0xbd, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5e8c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5e8d, .a=0xb6, .x=0xc1, .y=0xef, .sp=0xbd, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5e8c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5e8c, .value=0x3c, .type=IO_READ},
        {.addr=0x5e8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0288) {
    const struct CPU_State initial_cpu = {.pc=0xfa67, .a=0xa9, .x=0xbe, .y=0x39, .sp=0x1d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xfa67, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfa68, .a=0x53, .x=0xbe, .y=0x39, .sp=0x1d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfa67, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfa67, .value=0x3c, .type=IO_READ},
        {.addr=0xfa68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0289) {
    const struct CPU_State initial_cpu = {.pc=0x0b71, .a=0xfe, .x=0xbd, .y=0x83, .sp=0x36, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0b71, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0b72, .a=0xfc, .x=0xbd, .y=0x83, .sp=0x36, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0b71, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0b71, .value=0x3c, .type=IO_READ},
        {.addr=0x0b72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028A) {
    const struct CPU_State initial_cpu = {.pc=0x5fd6, .a=0x9a, .x=0x7d, .y=0x9d, .sp=0x3d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5fd6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5fd7, .a=0x35, .x=0x7d, .y=0x9d, .sp=0x3d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5fd6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5fd6, .value=0x3c, .type=IO_READ},
        {.addr=0x5fd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028B) {
    const struct CPU_State initial_cpu = {.pc=0xb64d, .a=0xa8, .x=0xa3, .y=0x20, .sp=0x93, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb64d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb64e, .a=0x50, .x=0xa3, .y=0x20, .sp=0x93, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb64d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb64d, .value=0x3c, .type=IO_READ},
        {.addr=0xb64e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028C) {
    const struct CPU_State initial_cpu = {.pc=0x71b5, .a=0xe7, .x=0xd2, .y=0x59, .sp=0xfb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x71b5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x71b6, .a=0xce, .x=0xd2, .y=0x59, .sp=0xfb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x71b5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x71b5, .value=0x3c, .type=IO_READ},
        {.addr=0x71b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028D) {
    const struct CPU_State initial_cpu = {.pc=0x77bc, .a=0xfc, .x=0x07, .y=0x10, .sp=0xdc, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x77bc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x77bd, .a=0xf8, .x=0x07, .y=0x10, .sp=0xdc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x77bc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x77bc, .value=0x3c, .type=IO_READ},
        {.addr=0x77bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028E) {
    const struct CPU_State initial_cpu = {.pc=0x9e3e, .a=0xc5, .x=0x62, .y=0x0b, .sp=0x3a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9e3f, .a=0x8a, .x=0x62, .y=0x0b, .sp=0x3a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9e3e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9e3e, .value=0x3c, .type=IO_READ},
        {.addr=0x9e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4b98, .a=0xa1, .x=0xd6, .y=0x89, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4b98, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4b99, .a=0x42, .x=0xd6, .y=0x89, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4b98, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4b98, .value=0x3c, .type=IO_READ},
        {.addr=0x4b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0290) {
    const struct CPU_State initial_cpu = {.pc=0xec68, .a=0xd9, .x=0x69, .y=0xd9, .sp=0x88, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xec68, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xec69, .a=0xb2, .x=0x69, .y=0xd9, .sp=0x88, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xec68, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xec68, .value=0x3c, .type=IO_READ},
        {.addr=0xec69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0291) {
    const struct CPU_State initial_cpu = {.pc=0xe113, .a=0x1c, .x=0x4b, .y=0x07, .sp=0x89, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe113, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe114, .a=0x39, .x=0x4b, .y=0x07, .sp=0x89, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe113, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe113, .value=0x3c, .type=IO_READ},
        {.addr=0xe114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfa4d, .a=0x9f, .x=0x1a, .y=0x35, .sp=0x14, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfa4e, .a=0x3e, .x=0x1a, .y=0x35, .sp=0x14, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfa4d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfa4d, .value=0x3c, .type=IO_READ},
        {.addr=0xfa4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0293) {
    const struct CPU_State initial_cpu = {.pc=0xd24e, .a=0xe1, .x=0x66, .y=0x12, .sp=0x34, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd24e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd24f, .a=0xc2, .x=0x66, .y=0x12, .sp=0x34, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd24e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd24e, .value=0x3c, .type=IO_READ},
        {.addr=0xd24f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0294) {
    const struct CPU_State initial_cpu = {.pc=0xd7df, .a=0x62, .x=0xc9, .y=0x9f, .sp=0x44, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd7df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7e0, .a=0xc4, .x=0xc9, .y=0x9f, .sp=0x44, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd7df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7df, .value=0x3c, .type=IO_READ},
        {.addr=0xd7e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9a5f, .a=0xb2, .x=0x5d, .y=0xaf, .sp=0xe8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9a5f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9a60, .a=0x65, .x=0x5d, .y=0xaf, .sp=0xe8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9a5f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9a5f, .value=0x3c, .type=IO_READ},
        {.addr=0x9a60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0296) {
    const struct CPU_State initial_cpu = {.pc=0xb3af, .a=0xc4, .x=0xb4, .y=0xc6, .sp=0xc7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb3af, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb3b0, .a=0x88, .x=0xb4, .y=0xc6, .sp=0xc7, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb3af, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb3af, .value=0x3c, .type=IO_READ},
        {.addr=0xb3b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0297) {
    const struct CPU_State initial_cpu = {.pc=0xbeed, .a=0x16, .x=0x5a, .y=0x71, .sp=0xef, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xbeed, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbeee, .a=0x2d, .x=0x5a, .y=0x71, .sp=0xef, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xbeed, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbeed, .value=0x3c, .type=IO_READ},
        {.addr=0xbeee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0298) {
    const struct CPU_State initial_cpu = {.pc=0xbc0e, .a=0x51, .x=0xa3, .y=0x5c, .sp=0xdc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc0e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbc0f, .a=0xa3, .x=0xa3, .y=0x5c, .sp=0xdc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbc0e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbc0e, .value=0x3c, .type=IO_READ},
        {.addr=0xbc0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0299) {
    const struct CPU_State initial_cpu = {.pc=0xf2d5, .a=0x99, .x=0xd8, .y=0x01, .sp=0x36, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf2d6, .a=0x33, .x=0xd8, .y=0x01, .sp=0x36, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf2d5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf2d5, .value=0x3c, .type=IO_READ},
        {.addr=0xf2d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029A) {
    const struct CPU_State initial_cpu = {.pc=0x9c29, .a=0x90, .x=0x38, .y=0xcf, .sp=0xde, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9c29, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9c2a, .a=0x21, .x=0x38, .y=0xcf, .sp=0xde, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9c29, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9c29, .value=0x3c, .type=IO_READ},
        {.addr=0x9c2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029B) {
    const struct CPU_State initial_cpu = {.pc=0xcd0c, .a=0xa1, .x=0xdc, .y=0x30, .sp=0xc4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xcd0c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcd0d, .a=0x43, .x=0xdc, .y=0x30, .sp=0xc4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcd0c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcd0c, .value=0x3c, .type=IO_READ},
        {.addr=0xcd0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029C) {
    const struct CPU_State initial_cpu = {.pc=0xd6b4, .a=0xd6, .x=0xbb, .y=0x6f, .sp=0x31, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd6b5, .a=0xac, .x=0xbb, .y=0x6f, .sp=0x31, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd6b4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd6b4, .value=0x3c, .type=IO_READ},
        {.addr=0xd6b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029D) {
    const struct CPU_State initial_cpu = {.pc=0x7eb7, .a=0x56, .x=0x69, .y=0xa1, .sp=0x71, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7eb8, .a=0xac, .x=0x69, .y=0xa1, .sp=0x71, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7eb7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7eb7, .value=0x3c, .type=IO_READ},
        {.addr=0x7eb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029E) {
    const struct CPU_State initial_cpu = {.pc=0x31fd, .a=0x4e, .x=0x4b, .y=0xf6, .sp=0x69, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x31fd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x31fe, .a=0x9d, .x=0x4b, .y=0xf6, .sp=0x69, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x31fd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x31fd, .value=0x3c, .type=IO_READ},
        {.addr=0x31fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_029F) {
    const struct CPU_State initial_cpu = {.pc=0x0ab5, .a=0x65, .x=0x54, .y=0x41, .sp=0x14, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0ab6, .a=0xcb, .x=0x54, .y=0x41, .sp=0x14, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0ab5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0ab5, .value=0x3c, .type=IO_READ},
        {.addr=0x0ab6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xde05, .a=0x03, .x=0x22, .y=0x7e, .sp=0x91, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xde05, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xde06, .a=0x06, .x=0x22, .y=0x7e, .sp=0x91, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xde05, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xde05, .value=0x3c, .type=IO_READ},
        {.addr=0xde06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x4e74, .a=0xc4, .x=0x74, .y=0x8d, .sp=0xe6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4e74, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4e75, .a=0x88, .x=0x74, .y=0x8d, .sp=0xe6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4e74, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4e74, .value=0x3c, .type=IO_READ},
        {.addr=0x4e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x3992, .a=0x6f, .x=0x84, .y=0x12, .sp=0x4e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3992, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3993, .a=0xdf, .x=0x84, .y=0x12, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3992, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3992, .value=0x3c, .type=IO_READ},
        {.addr=0x3993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x646a, .a=0x25, .x=0x44, .y=0x72, .sp=0x06, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x646a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x646b, .a=0x4a, .x=0x44, .y=0x72, .sp=0x06, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x646a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x646a, .value=0x3c, .type=IO_READ},
        {.addr=0x646b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x06a3, .a=0x84, .x=0x7c, .y=0x93, .sp=0x9e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x06a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x06a4, .a=0x09, .x=0x7c, .y=0x93, .sp=0x9e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x06a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x06a3, .value=0x3c, .type=IO_READ},
        {.addr=0x06a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x3f50, .a=0x3d, .x=0x77, .y=0x48, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3f50, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3f51, .a=0x7b, .x=0x77, .y=0x48, .sp=0x0f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3f50, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3f50, .value=0x3c, .type=IO_READ},
        {.addr=0x3f51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x104d, .a=0x57, .x=0xe8, .y=0x9b, .sp=0x00, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x104d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x104e, .a=0xae, .x=0xe8, .y=0x9b, .sp=0x00, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x104d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x104d, .value=0x3c, .type=IO_READ},
        {.addr=0x104e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x46f5, .a=0xbd, .x=0x62, .y=0xe1, .sp=0x05, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x46f5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x46f6, .a=0x7b, .x=0x62, .y=0xe1, .sp=0x05, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x46f5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x46f5, .value=0x3c, .type=IO_READ},
        {.addr=0x46f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xed62, .a=0x6c, .x=0x9c, .y=0xb8, .sp=0xd8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xed62, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xed63, .a=0xd9, .x=0x9c, .y=0xb8, .sp=0xd8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xed62, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xed62, .value=0x3c, .type=IO_READ},
        {.addr=0xed63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x2d54, .a=0xe9, .x=0xd5, .y=0x8d, .sp=0x2b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2d54, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2d55, .a=0xd3, .x=0xd5, .y=0x8d, .sp=0x2b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2d54, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2d54, .value=0x3c, .type=IO_READ},
        {.addr=0x2d55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0b5f, .a=0xc9, .x=0xe3, .y=0x21, .sp=0x22, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0b5f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0b60, .a=0x92, .x=0xe3, .y=0x21, .sp=0x22, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0b5f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0b5f, .value=0x3c, .type=IO_READ},
        {.addr=0x0b60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xd485, .a=0x7e, .x=0xe7, .y=0xc4, .sp=0xbc, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd485, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd486, .a=0xfc, .x=0xe7, .y=0xc4, .sp=0xbc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd485, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd485, .value=0x3c, .type=IO_READ},
        {.addr=0xd486, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5d34, .a=0x41, .x=0xab, .y=0x95, .sp=0xf0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x5d34, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5d35, .a=0x83, .x=0xab, .y=0x95, .sp=0xf0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5d34, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5d34, .value=0x3c, .type=IO_READ},
        {.addr=0x5d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xa229, .a=0x3b, .x=0x8c, .y=0x3b, .sp=0x03, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa229, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa22a, .a=0x76, .x=0x8c, .y=0x3b, .sp=0x03, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa229, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa229, .value=0x3c, .type=IO_READ},
        {.addr=0xa22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x4beb, .a=0xfa, .x=0x5b, .y=0x9e, .sp=0x68, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4beb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4bec, .a=0xf5, .x=0x5b, .y=0x9e, .sp=0x68, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4beb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4beb, .value=0x3c, .type=IO_READ},
        {.addr=0x4bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x2ab7, .a=0x51, .x=0xe9, .y=0x60, .sp=0xd2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2ab8, .a=0xa2, .x=0xe9, .y=0x60, .sp=0xd2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2ab7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2ab7, .value=0x3c, .type=IO_READ},
        {.addr=0x2ab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xda2a, .a=0xbb, .x=0xcd, .y=0x45, .sp=0x92, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xda2a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xda2b, .a=0x76, .x=0xcd, .y=0x45, .sp=0x92, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xda2a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xda2a, .value=0x3c, .type=IO_READ},
        {.addr=0xda2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x78f9, .a=0x9f, .x=0x43, .y=0xc9, .sp=0x4d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x78f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x78fa, .a=0x3e, .x=0x43, .y=0xc9, .sp=0x4d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x78f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x78f9, .value=0x3c, .type=IO_READ},
        {.addr=0x78fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xb453, .a=0x01, .x=0xec, .y=0x08, .sp=0x46, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb453, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb454, .a=0x02, .x=0xec, .y=0x08, .sp=0x46, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb453, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb453, .value=0x3c, .type=IO_READ},
        {.addr=0xb454, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x3388, .a=0x9e, .x=0xe2, .y=0x67, .sp=0x36, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3388, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3389, .a=0x3c, .x=0xe2, .y=0x67, .sp=0x36, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3388, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3388, .value=0x3c, .type=IO_READ},
        {.addr=0x3389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x8243, .a=0xa7, .x=0x6d, .y=0xb9, .sp=0xb4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8243, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8244, .a=0x4e, .x=0x6d, .y=0xb9, .sp=0xb4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8243, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8243, .value=0x3c, .type=IO_READ},
        {.addr=0x8244, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xf0d7, .a=0x01, .x=0x36, .y=0x34, .sp=0xd5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf0d7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf0d8, .a=0x02, .x=0x36, .y=0x34, .sp=0xd5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf0d7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf0d7, .value=0x3c, .type=IO_READ},
        {.addr=0xf0d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xdf35, .a=0xa7, .x=0xcf, .y=0x2a, .sp=0x9f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xdf35, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdf36, .a=0x4f, .x=0xcf, .y=0x2a, .sp=0x9f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xdf35, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdf35, .value=0x3c, .type=IO_READ},
        {.addr=0xdf36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xdfa3, .a=0x91, .x=0x95, .y=0x30, .sp=0xb9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdfa4, .a=0x23, .x=0x95, .y=0x30, .sp=0xb9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdfa3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdfa3, .value=0x3c, .type=IO_READ},
        {.addr=0xdfa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xd75c, .a=0xd2, .x=0x66, .y=0x82, .sp=0x8f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd75c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd75d, .a=0xa4, .x=0x66, .y=0x82, .sp=0x8f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd75c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd75c, .value=0x3c, .type=IO_READ},
        {.addr=0xd75d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xa0b9, .a=0xf2, .x=0x08, .y=0x20, .sp=0xae, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa0ba, .a=0xe5, .x=0x08, .y=0x20, .sp=0xae, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa0b9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa0b9, .value=0x3c, .type=IO_READ},
        {.addr=0xa0ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xb26c, .a=0x98, .x=0x3f, .y=0x94, .sp=0x1c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb26c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb26d, .a=0x31, .x=0x3f, .y=0x94, .sp=0x1c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb26c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb26c, .value=0x3c, .type=IO_READ},
        {.addr=0xb26d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x54fb, .a=0x49, .x=0xd0, .y=0x8f, .sp=0xd2, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x54fb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x54fc, .a=0x92, .x=0xd0, .y=0x8f, .sp=0xd2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x54fb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x54fb, .value=0x3c, .type=IO_READ},
        {.addr=0x54fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x7c6f, .a=0xa1, .x=0x81, .y=0xcf, .sp=0x66, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7c70, .a=0x43, .x=0x81, .y=0xcf, .sp=0x66, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7c6f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7c6f, .value=0x3c, .type=IO_READ},
        {.addr=0x7c70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xbb0f, .a=0xde, .x=0x5f, .y=0xd7, .sp=0xca, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbb10, .a=0xbc, .x=0x5f, .y=0xd7, .sp=0xca, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbb0f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbb0f, .value=0x3c, .type=IO_READ},
        {.addr=0xbb10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x3574, .a=0x0b, .x=0x94, .y=0x44, .sp=0x0d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3574, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3575, .a=0x16, .x=0x94, .y=0x44, .sp=0x0d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3574, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3574, .value=0x3c, .type=IO_READ},
        {.addr=0x3575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x0e4a, .a=0x98, .x=0x47, .y=0xc0, .sp=0x74, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0e4a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0e4b, .a=0x30, .x=0x47, .y=0xc0, .sp=0x74, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0e4a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0e4a, .value=0x3c, .type=IO_READ},
        {.addr=0x0e4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xfd48, .a=0x16, .x=0xd7, .y=0xfc, .sp=0x25, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xfd48, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfd49, .a=0x2d, .x=0xd7, .y=0xfc, .sp=0x25, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xfd48, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfd48, .value=0x3c, .type=IO_READ},
        {.addr=0xfd49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x7e52, .a=0x75, .x=0x13, .y=0xfc, .sp=0x9d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x7e52, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7e53, .a=0xea, .x=0x13, .y=0xfc, .sp=0x9d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7e52, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7e52, .value=0x3c, .type=IO_READ},
        {.addr=0x7e53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd0ca, .a=0x5b, .x=0xbf, .y=0xbd, .sp=0x8b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ca, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd0cb, .a=0xb6, .x=0xbf, .y=0xbd, .sp=0x8b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd0ca, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd0ca, .value=0x3c, .type=IO_READ},
        {.addr=0xd0cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xa92e, .a=0x07, .x=0x1f, .y=0x95, .sp=0x9a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa92e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa92f, .a=0x0e, .x=0x1f, .y=0x95, .sp=0x9a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa92e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa92e, .value=0x3c, .type=IO_READ},
        {.addr=0xa92f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x0c04, .a=0xce, .x=0xe6, .y=0xa9, .sp=0x87, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0c04, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0c05, .a=0x9d, .x=0xe6, .y=0xa9, .sp=0x87, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0c04, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0c04, .value=0x3c, .type=IO_READ},
        {.addr=0x0c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x8a05, .a=0x89, .x=0xfd, .y=0xfb, .sp=0x39, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8a05, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8a06, .a=0x13, .x=0xfd, .y=0xfb, .sp=0x39, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8a05, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8a05, .value=0x3c, .type=IO_READ},
        {.addr=0x8a06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xeafd, .a=0x6e, .x=0xd5, .y=0x85, .sp=0xf2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xeafd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeafe, .a=0xdd, .x=0xd5, .y=0x85, .sp=0xf2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xeafd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeafd, .value=0x3c, .type=IO_READ},
        {.addr=0xeafe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xafe8, .a=0x18, .x=0x9b, .y=0xad, .sp=0xa5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xafe8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xafe9, .a=0x31, .x=0x9b, .y=0xad, .sp=0xa5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xafe8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xafe8, .value=0x3c, .type=IO_READ},
        {.addr=0xafe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xa2f5, .a=0xc5, .x=0x8d, .y=0x93, .sp=0x99, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa2f6, .a=0x8b, .x=0x8d, .y=0x93, .sp=0x99, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa2f5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa2f5, .value=0x3c, .type=IO_READ},
        {.addr=0xa2f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x4b71, .a=0x8d, .x=0x0b, .y=0x0b, .sp=0x16, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4b71, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4b72, .a=0x1a, .x=0x0b, .y=0x0b, .sp=0x16, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4b71, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4b71, .value=0x3c, .type=IO_READ},
        {.addr=0x4b72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xb9bd, .a=0x91, .x=0x75, .y=0x50, .sp=0xe1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb9bd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb9be, .a=0x23, .x=0x75, .y=0x50, .sp=0xe1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb9bd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb9bd, .value=0x3c, .type=IO_READ},
        {.addr=0xb9be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd3ad, .a=0x6d, .x=0x79, .y=0x3f, .sp=0xa8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ad, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd3ae, .a=0xdb, .x=0x79, .y=0x3f, .sp=0xa8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd3ad, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd3ad, .value=0x3c, .type=IO_READ},
        {.addr=0xd3ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x7d3f, .a=0x8c, .x=0x5b, .y=0x34, .sp=0x25, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7d40, .a=0x19, .x=0x5b, .y=0x34, .sp=0x25, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7d3f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7d3f, .value=0x3c, .type=IO_READ},
        {.addr=0x7d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xba1b, .a=0xc2, .x=0xbc, .y=0xb0, .sp=0xbd, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xba1b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xba1c, .a=0x84, .x=0xbc, .y=0xb0, .sp=0xbd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xba1b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xba1b, .value=0x3c, .type=IO_READ},
        {.addr=0xba1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x758f, .a=0xa6, .x=0xb2, .y=0x3a, .sp=0xf3, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x758f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7590, .a=0x4c, .x=0xb2, .y=0x3a, .sp=0xf3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x758f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x758f, .value=0x3c, .type=IO_READ},
        {.addr=0x7590, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x6822, .a=0x20, .x=0x90, .y=0x59, .sp=0xd9, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6822, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6823, .a=0x40, .x=0x90, .y=0x59, .sp=0xd9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6822, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6822, .value=0x3c, .type=IO_READ},
        {.addr=0x6823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x01eb, .a=0x88, .x=0x10, .y=0xa7, .sp=0x78, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0x10, .x=0x10, .y=0xa7, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x01eb, .value=0x3c, .type=IO_READ},
        {.addr=0x01ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x177f, .a=0x74, .x=0x47, .y=0xcf, .sp=0x3d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x177f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1780, .a=0xe9, .x=0x47, .y=0xcf, .sp=0x3d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x177f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x177f, .value=0x3c, .type=IO_READ},
        {.addr=0x1780, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x27e5, .a=0x31, .x=0x13, .y=0x60, .sp=0xb8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x27e5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x27e6, .a=0x62, .x=0x13, .y=0x60, .sp=0xb8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x27e5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x27e5, .value=0x3c, .type=IO_READ},
        {.addr=0x27e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x84f1, .a=0x04, .x=0xdd, .y=0x71, .sp=0x5e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x84f1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x84f2, .a=0x09, .x=0xdd, .y=0x71, .sp=0x5e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x84f1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x84f1, .value=0x3c, .type=IO_READ},
        {.addr=0x84f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xb1da, .a=0xe6, .x=0x12, .y=0x67, .sp=0xec, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb1da, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb1db, .a=0xcd, .x=0x12, .y=0x67, .sp=0xec, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb1da, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb1da, .value=0x3c, .type=IO_READ},
        {.addr=0xb1db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x1b88, .a=0x20, .x=0x07, .y=0xf7, .sp=0x1c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1b88, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1b89, .a=0x41, .x=0x07, .y=0xf7, .sp=0x1c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1b88, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1b88, .value=0x3c, .type=IO_READ},
        {.addr=0x1b89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x4747, .a=0xcd, .x=0xb5, .y=0x40, .sp=0x6e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4747, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4748, .a=0x9a, .x=0xb5, .y=0x40, .sp=0x6e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4747, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4747, .value=0x3c, .type=IO_READ},
        {.addr=0x4748, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xa757, .a=0xcf, .x=0x0c, .y=0x8c, .sp=0x8b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa757, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa758, .a=0x9f, .x=0x0c, .y=0x8c, .sp=0x8b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa757, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa757, .value=0x3c, .type=IO_READ},
        {.addr=0xa758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xd7c4, .a=0xf7, .x=0x86, .y=0x0e, .sp=0x7e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7c5, .a=0xef, .x=0x86, .y=0x0e, .sp=0x7e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd7c4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7c4, .value=0x3c, .type=IO_READ},
        {.addr=0xd7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x63cd, .a=0xb0, .x=0xb7, .y=0xe4, .sp=0xba, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x63cd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x63ce, .a=0x60, .x=0xb7, .y=0xe4, .sp=0xba, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x63cd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x63cd, .value=0x3c, .type=IO_READ},
        {.addr=0x63ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x866d, .a=0x98, .x=0x08, .y=0x84, .sp=0x39, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x866d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x866e, .a=0x31, .x=0x08, .y=0x84, .sp=0x39, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x866d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x866d, .value=0x3c, .type=IO_READ},
        {.addr=0x866e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x1089, .a=0x9f, .x=0x22, .y=0x88, .sp=0x4f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x1089, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x108a, .a=0x3f, .x=0x22, .y=0x88, .sp=0x4f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1089, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1089, .value=0x3c, .type=IO_READ},
        {.addr=0x108a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xbe3c, .a=0x05, .x=0xa2, .y=0x6d, .sp=0x17, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbe3d, .a=0x0a, .x=0xa2, .y=0x6d, .sp=0x17, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbe3c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbe3c, .value=0x3c, .type=IO_READ},
        {.addr=0xbe3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x0dfd, .a=0x81, .x=0x7a, .y=0x9e, .sp=0x74, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0dfe, .a=0x03, .x=0x7a, .y=0x9e, .sp=0x74, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0dfd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0dfd, .value=0x3c, .type=IO_READ},
        {.addr=0x0dfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x53fa, .a=0x15, .x=0x0c, .y=0xf9, .sp=0x93, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x53fa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x53fb, .a=0x2a, .x=0x0c, .y=0xf9, .sp=0x93, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x53fa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x53fa, .value=0x3c, .type=IO_READ},
        {.addr=0x53fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5d4a, .a=0xd7, .x=0x77, .y=0xec, .sp=0xe8, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5d4b, .a=0xaf, .x=0x77, .y=0xec, .sp=0xe8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5d4a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5d4a, .value=0x3c, .type=IO_READ},
        {.addr=0x5d4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x85ac, .a=0xbd, .x=0x8a, .y=0x5a, .sp=0xd3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x85ac, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85ad, .a=0x7b, .x=0x8a, .y=0x5a, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x85ac, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85ac, .value=0x3c, .type=IO_READ},
        {.addr=0x85ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x90d2, .a=0xc2, .x=0x4b, .y=0x67, .sp=0x0f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x90d2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x90d3, .a=0x84, .x=0x4b, .y=0x67, .sp=0x0f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x90d2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x90d2, .value=0x3c, .type=IO_READ},
        {.addr=0x90d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x8065, .a=0x4c, .x=0x7d, .y=0x6c, .sp=0x75, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8065, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8066, .a=0x98, .x=0x7d, .y=0x6c, .sp=0x75, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8065, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8065, .value=0x3c, .type=IO_READ},
        {.addr=0x8066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x8af6, .a=0xd9, .x=0x2b, .y=0x48, .sp=0xd0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8af6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8af7, .a=0xb3, .x=0x2b, .y=0x48, .sp=0xd0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8af6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8af6, .value=0x3c, .type=IO_READ},
        {.addr=0x8af7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x354a, .a=0xe1, .x=0x84, .y=0x9a, .sp=0x7e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x354a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x354b, .a=0xc3, .x=0x84, .y=0x9a, .sp=0x7e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x354a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x354a, .value=0x3c, .type=IO_READ},
        {.addr=0x354b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x0266, .a=0x2e, .x=0xc8, .y=0x1b, .sp=0x98, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0266, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0267, .a=0x5d, .x=0xc8, .y=0x1b, .sp=0x98, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0266, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0266, .value=0x3c, .type=IO_READ},
        {.addr=0x0267, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x3318, .a=0x7d, .x=0xed, .y=0x42, .sp=0x98, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3318, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3319, .a=0xfb, .x=0xed, .y=0x42, .sp=0x98, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3318, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3318, .value=0x3c, .type=IO_READ},
        {.addr=0x3319, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2d69, .a=0xcc, .x=0x4b, .y=0x34, .sp=0x5b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2d69, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2d6a, .a=0x99, .x=0x4b, .y=0x34, .sp=0x5b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2d69, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2d69, .value=0x3c, .type=IO_READ},
        {.addr=0x2d6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb8b3, .a=0x4e, .x=0xc2, .y=0x2e, .sp=0x88, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb8b4, .a=0x9d, .x=0xc2, .y=0x2e, .sp=0x88, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb8b3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb8b3, .value=0x3c, .type=IO_READ},
        {.addr=0xb8b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x897a, .a=0xf3, .x=0x65, .y=0x3b, .sp=0xeb, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x897a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x897b, .a=0xe7, .x=0x65, .y=0x3b, .sp=0xeb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x897a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x897a, .value=0x3c, .type=IO_READ},
        {.addr=0x897b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x3be1, .a=0x17, .x=0xcb, .y=0x9c, .sp=0xd5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x3be1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3be2, .a=0x2e, .x=0xcb, .y=0x9c, .sp=0xd5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3be1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3be1, .value=0x3c, .type=IO_READ},
        {.addr=0x3be2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x39fe, .a=0x21, .x=0x71, .y=0x20, .sp=0x22, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x39fe, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x39ff, .a=0x43, .x=0x71, .y=0x20, .sp=0x22, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x39fe, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x39fe, .value=0x3c, .type=IO_READ},
        {.addr=0x39ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xe47c, .a=0xc0, .x=0xe3, .y=0xdc, .sp=0x13, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe47c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe47d, .a=0x81, .x=0xe3, .y=0xdc, .sp=0x13, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe47c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe47c, .value=0x3c, .type=IO_READ},
        {.addr=0xe47d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2a9f, .a=0x72, .x=0xce, .y=0xe0, .sp=0x48, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a9f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2aa0, .a=0xe4, .x=0xce, .y=0xe0, .sp=0x48, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2a9f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2a9f, .value=0x3c, .type=IO_READ},
        {.addr=0x2aa0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xc6ae, .a=0xb6, .x=0x51, .y=0x6d, .sp=0x9a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc6af, .a=0x6d, .x=0x51, .y=0x6d, .sp=0x9a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc6ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc6ae, .value=0x3c, .type=IO_READ},
        {.addr=0xc6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xeaa2, .a=0x27, .x=0xa3, .y=0x91, .sp=0x96, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeaa3, .a=0x4f, .x=0xa3, .y=0x91, .sp=0x96, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xeaa2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeaa2, .value=0x3c, .type=IO_READ},
        {.addr=0xeaa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xecdc, .a=0xe1, .x=0x76, .y=0x3b, .sp=0x0f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xecdc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xecdd, .a=0xc3, .x=0x76, .y=0x3b, .sp=0x0f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xecdc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xecdc, .value=0x3c, .type=IO_READ},
        {.addr=0xecdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x37fb, .a=0x95, .x=0x76, .y=0xbd, .sp=0x70, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x37fb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x37fc, .a=0x2a, .x=0x76, .y=0xbd, .sp=0x70, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x37fb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x37fb, .value=0x3c, .type=IO_READ},
        {.addr=0x37fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x2b97, .a=0x53, .x=0xc0, .y=0x67, .sp=0x23, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b97, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2b98, .a=0xa7, .x=0xc0, .y=0x67, .sp=0x23, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2b97, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2b97, .value=0x3c, .type=IO_READ},
        {.addr=0x2b98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x2984, .a=0xc7, .x=0x50, .y=0x39, .sp=0x36, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x2984, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2985, .a=0x8f, .x=0x50, .y=0x39, .sp=0x36, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2984, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2984, .value=0x3c, .type=IO_READ},
        {.addr=0x2985, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xc7df, .a=0xd9, .x=0xf7, .y=0xb6, .sp=0x21, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc7df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc7e0, .a=0xb2, .x=0xf7, .y=0xb6, .sp=0x21, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc7df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc7df, .value=0x3c, .type=IO_READ},
        {.addr=0xc7e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x9544, .a=0x9d, .x=0xd3, .y=0xea, .sp=0x29, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9544, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9545, .a=0x3b, .x=0xd3, .y=0xea, .sp=0x29, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9544, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9544, .value=0x3c, .type=IO_READ},
        {.addr=0x9545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x5df0, .a=0x21, .x=0xd3, .y=0xa2, .sp=0xd8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5df0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5df1, .a=0x42, .x=0xd3, .y=0xa2, .sp=0xd8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5df0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5df0, .value=0x3c, .type=IO_READ},
        {.addr=0x5df1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x366a, .a=0xcd, .x=0xc3, .y=0xa3, .sp=0x9c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x366a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x366b, .a=0x9b, .x=0xc3, .y=0xa3, .sp=0x9c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x366a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x366a, .value=0x3c, .type=IO_READ},
        {.addr=0x366b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xe36e, .a=0x88, .x=0x00, .y=0x37, .sp=0xe6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe36e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe36f, .a=0x10, .x=0x00, .y=0x37, .sp=0xe6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe36e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe36e, .value=0x3c, .type=IO_READ},
        {.addr=0xe36f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8953, .a=0xcb, .x=0x45, .y=0x0e, .sp=0xfa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8953, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8954, .a=0x97, .x=0x45, .y=0x0e, .sp=0xfa, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8953, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8953, .value=0x3c, .type=IO_READ},
        {.addr=0x8954, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8ac0, .a=0x97, .x=0x8f, .y=0xff, .sp=0xb7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8ac1, .a=0x2f, .x=0x8f, .y=0xff, .sp=0xb7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8ac0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8ac0, .value=0x3c, .type=IO_READ},
        {.addr=0x8ac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x7e66, .a=0x3d, .x=0xcc, .y=0x66, .sp=0xc0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7e66, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7e67, .a=0x7a, .x=0xcc, .y=0x66, .sp=0xc0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7e66, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7e66, .value=0x3c, .type=IO_READ},
        {.addr=0x7e67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x6ba5, .a=0xf9, .x=0x21, .y=0xcb, .sp=0x29, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6ba5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6ba6, .a=0xf3, .x=0x21, .y=0xcb, .sp=0x29, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6ba5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6ba5, .value=0x3c, .type=IO_READ},
        {.addr=0x6ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xf2da, .a=0x73, .x=0xa7, .y=0x65, .sp=0x8e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf2da, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf2db, .a=0xe7, .x=0xa7, .y=0x65, .sp=0x8e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf2da, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf2da, .value=0x3c, .type=IO_READ},
        {.addr=0xf2db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xd869, .a=0x1e, .x=0x9b, .y=0xa7, .sp=0x12, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd869, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd86a, .a=0x3d, .x=0x9b, .y=0xa7, .sp=0x12, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd869, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd869, .value=0x3c, .type=IO_READ},
        {.addr=0xd86a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xf6e0, .a=0xb2, .x=0x19, .y=0x96, .sp=0x1b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf6e1, .a=0x65, .x=0x19, .y=0x96, .sp=0x1b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf6e0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf6e0, .value=0x3c, .type=IO_READ},
        {.addr=0xf6e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0300) {
    const struct CPU_State initial_cpu = {.pc=0x4692, .a=0xd0, .x=0xb0, .y=0xb0, .sp=0x85, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4692, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4693, .a=0xa1, .x=0xb0, .y=0xb0, .sp=0x85, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4692, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4692, .value=0x3c, .type=IO_READ},
        {.addr=0x4693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0301) {
    const struct CPU_State initial_cpu = {.pc=0x9ddf, .a=0xbb, .x=0xeb, .y=0xeb, .sp=0x05, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9ddf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9de0, .a=0x76, .x=0xeb, .y=0xeb, .sp=0x05, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9ddf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9ddf, .value=0x3c, .type=IO_READ},
        {.addr=0x9de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4c98, .a=0x39, .x=0x86, .y=0xb1, .sp=0xaf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4c98, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4c99, .a=0x73, .x=0x86, .y=0xb1, .sp=0xaf, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4c98, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4c98, .value=0x3c, .type=IO_READ},
        {.addr=0x4c99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0303) {
    const struct CPU_State initial_cpu = {.pc=0x61ce, .a=0xbe, .x=0xaf, .y=0x3e, .sp=0x80, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x61ce, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x61cf, .a=0x7c, .x=0xaf, .y=0x3e, .sp=0x80, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x61ce, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x61ce, .value=0x3c, .type=IO_READ},
        {.addr=0x61cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0304) {
    const struct CPU_State initial_cpu = {.pc=0x8f99, .a=0x35, .x=0xa6, .y=0xd1, .sp=0xd0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f99, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8f9a, .a=0x6a, .x=0xa6, .y=0xd1, .sp=0xd0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8f99, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8f99, .value=0x3c, .type=IO_READ},
        {.addr=0x8f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa729, .a=0xd6, .x=0xc7, .y=0x81, .sp=0x82, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa729, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa72a, .a=0xad, .x=0xc7, .y=0x81, .sp=0x82, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa729, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa729, .value=0x3c, .type=IO_READ},
        {.addr=0xa72a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0306) {
    const struct CPU_State initial_cpu = {.pc=0x123b, .a=0x5e, .x=0x2b, .y=0xab, .sp=0x78, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x123b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x123c, .a=0xbd, .x=0x2b, .y=0xab, .sp=0x78, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x123b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x123b, .value=0x3c, .type=IO_READ},
        {.addr=0x123c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0307) {
    const struct CPU_State initial_cpu = {.pc=0xc919, .a=0x60, .x=0x78, .y=0x74, .sp=0x84, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc919, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc91a, .a=0xc1, .x=0x78, .y=0x74, .sp=0x84, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc919, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc919, .value=0x3c, .type=IO_READ},
        {.addr=0xc91a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0308) {
    const struct CPU_State initial_cpu = {.pc=0x0b29, .a=0x46, .x=0xc2, .y=0x19, .sp=0x75, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0b29, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0b2a, .a=0x8d, .x=0xc2, .y=0x19, .sp=0x75, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0b29, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0b29, .value=0x3c, .type=IO_READ},
        {.addr=0x0b2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0309) {
    const struct CPU_State initial_cpu = {.pc=0x96d3, .a=0x56, .x=0x72, .y=0x94, .sp=0xc7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x96d3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x96d4, .a=0xac, .x=0x72, .y=0x94, .sp=0xc7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x96d3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x96d3, .value=0x3c, .type=IO_READ},
        {.addr=0x96d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030A) {
    const struct CPU_State initial_cpu = {.pc=0x8152, .a=0xfb, .x=0xba, .y=0xdc, .sp=0xf8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8152, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8153, .a=0xf6, .x=0xba, .y=0xdc, .sp=0xf8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8152, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8152, .value=0x3c, .type=IO_READ},
        {.addr=0x8153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030B) {
    const struct CPU_State initial_cpu = {.pc=0x7567, .a=0x4c, .x=0x9e, .y=0x66, .sp=0x92, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7567, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7568, .a=0x99, .x=0x9e, .y=0x66, .sp=0x92, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7567, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7567, .value=0x3c, .type=IO_READ},
        {.addr=0x7568, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030C) {
    const struct CPU_State initial_cpu = {.pc=0x811e, .a=0x77, .x=0x9a, .y=0x8b, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x811e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x811f, .a=0xef, .x=0x9a, .y=0x8b, .sp=0x3f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x811e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x811e, .value=0x3c, .type=IO_READ},
        {.addr=0x811f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030D) {
    const struct CPU_State initial_cpu = {.pc=0x6689, .a=0xce, .x=0xa6, .y=0x4d, .sp=0x3c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6689, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x668a, .a=0x9c, .x=0xa6, .y=0x4d, .sp=0x3c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6689, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6689, .value=0x3c, .type=IO_READ},
        {.addr=0x668a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030E) {
    const struct CPU_State initial_cpu = {.pc=0x54a6, .a=0x3d, .x=0xc7, .y=0x94, .sp=0x36, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x54a6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x54a7, .a=0x7a, .x=0xc7, .y=0x94, .sp=0x36, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x54a6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x54a6, .value=0x3c, .type=IO_READ},
        {.addr=0x54a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_030F) {
    const struct CPU_State initial_cpu = {.pc=0x8ba9, .a=0x74, .x=0x4c, .y=0xc8, .sp=0x10, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8baa, .a=0xe9, .x=0x4c, .y=0xc8, .sp=0x10, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8ba9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8ba9, .value=0x3c, .type=IO_READ},
        {.addr=0x8baa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe24d, .a=0x26, .x=0x66, .y=0xea, .sp=0xb2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe24d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe24e, .a=0x4c, .x=0x66, .y=0xea, .sp=0xb2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe24d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe24d, .value=0x3c, .type=IO_READ},
        {.addr=0xe24e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0311) {
    const struct CPU_State initial_cpu = {.pc=0x509a, .a=0xde, .x=0x21, .y=0x8a, .sp=0xc0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x509a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x509b, .a=0xbd, .x=0x21, .y=0x8a, .sp=0xc0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x509a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x509a, .value=0x3c, .type=IO_READ},
        {.addr=0x509b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0312) {
    const struct CPU_State initial_cpu = {.pc=0x50c0, .a=0x5d, .x=0x99, .y=0xe0, .sp=0xc6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x50c0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x50c1, .a=0xbb, .x=0x99, .y=0xe0, .sp=0xc6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x50c0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x50c0, .value=0x3c, .type=IO_READ},
        {.addr=0x50c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0313) {
    const struct CPU_State initial_cpu = {.pc=0x6039, .a=0x3c, .x=0x80, .y=0xa8, .sp=0x43, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6039, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x603a, .a=0x78, .x=0x80, .y=0xa8, .sp=0x43, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6039, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6039, .value=0x3c, .type=IO_READ},
        {.addr=0x603a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0314) {
    const struct CPU_State initial_cpu = {.pc=0xde3b, .a=0x79, .x=0x1a, .y=0x61, .sp=0x98, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xde3b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xde3c, .a=0xf3, .x=0x1a, .y=0x61, .sp=0x98, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xde3b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xde3b, .value=0x3c, .type=IO_READ},
        {.addr=0xde3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0315) {
    const struct CPU_State initial_cpu = {.pc=0x22f8, .a=0x76, .x=0x04, .y=0x23, .sp=0xd8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x22f8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x22f9, .a=0xec, .x=0x04, .y=0x23, .sp=0xd8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x22f8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x22f8, .value=0x3c, .type=IO_READ},
        {.addr=0x22f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0316) {
    const struct CPU_State initial_cpu = {.pc=0x7b9e, .a=0xd4, .x=0x86, .y=0xba, .sp=0xa0, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7b9e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7b9f, .a=0xa9, .x=0x86, .y=0xba, .sp=0xa0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7b9e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7b9e, .value=0x3c, .type=IO_READ},
        {.addr=0x7b9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0317) {
    const struct CPU_State initial_cpu = {.pc=0xdeab, .a=0xce, .x=0x73, .y=0x22, .sp=0x76, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xdeab, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdeac, .a=0x9c, .x=0x73, .y=0x22, .sp=0x76, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdeab, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdeab, .value=0x3c, .type=IO_READ},
        {.addr=0xdeac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5198, .a=0x92, .x=0x60, .y=0xd2, .sp=0xde, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5198, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5199, .a=0x25, .x=0x60, .y=0xd2, .sp=0xde, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5198, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5198, .value=0x3c, .type=IO_READ},
        {.addr=0x5199, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0319) {
    const struct CPU_State initial_cpu = {.pc=0x3fa2, .a=0x6a, .x=0xd1, .y=0x84, .sp=0x96, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3fa3, .a=0xd4, .x=0xd1, .y=0x84, .sp=0x96, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3fa2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3fa2, .value=0x3c, .type=IO_READ},
        {.addr=0x3fa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031A) {
    const struct CPU_State initial_cpu = {.pc=0xd918, .a=0x74, .x=0x60, .y=0x97, .sp=0xa0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd918, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd919, .a=0xe9, .x=0x60, .y=0x97, .sp=0xa0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd918, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd918, .value=0x3c, .type=IO_READ},
        {.addr=0xd919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031B) {
    const struct CPU_State initial_cpu = {.pc=0x5456, .a=0xe4, .x=0x60, .y=0xca, .sp=0xfa, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5456, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5457, .a=0xc8, .x=0x60, .y=0xca, .sp=0xfa, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5456, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5456, .value=0x3c, .type=IO_READ},
        {.addr=0x5457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031C) {
    const struct CPU_State initial_cpu = {.pc=0x4f97, .a=0x55, .x=0x47, .y=0x98, .sp=0x82, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4f97, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4f98, .a=0xaa, .x=0x47, .y=0x98, .sp=0x82, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4f97, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4f97, .value=0x3c, .type=IO_READ},
        {.addr=0x4f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa6c8, .a=0x0b, .x=0x7d, .y=0xfe, .sp=0xad, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa6c8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa6c9, .a=0x16, .x=0x7d, .y=0xfe, .sp=0xad, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa6c8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa6c8, .value=0x3c, .type=IO_READ},
        {.addr=0xa6c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031E) {
    const struct CPU_State initial_cpu = {.pc=0x9da5, .a=0x54, .x=0x15, .y=0x00, .sp=0x09, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9da5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9da6, .a=0xa8, .x=0x15, .y=0x00, .sp=0x09, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9da5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9da5, .value=0x3c, .type=IO_READ},
        {.addr=0x9da6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_031F) {
    const struct CPU_State initial_cpu = {.pc=0xc8a7, .a=0xcf, .x=0xaa, .y=0xae, .sp=0xbf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc8a8, .a=0x9f, .x=0xaa, .y=0xae, .sp=0xbf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc8a7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc8a7, .value=0x3c, .type=IO_READ},
        {.addr=0xc8a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0320) {
    const struct CPU_State initial_cpu = {.pc=0x6d64, .a=0x38, .x=0xb8, .y=0x9e, .sp=0x79, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x6d64, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d65, .a=0x70, .x=0xb8, .y=0x9e, .sp=0x79, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6d64, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d64, .value=0x3c, .type=IO_READ},
        {.addr=0x6d65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0251, .a=0xdd, .x=0x4b, .y=0xf4, .sp=0xbc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0251, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0252, .a=0xba, .x=0x4b, .y=0xf4, .sp=0xbc, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0251, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0251, .value=0x3c, .type=IO_READ},
        {.addr=0x0252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0322) {
    const struct CPU_State initial_cpu = {.pc=0x832a, .a=0xa5, .x=0xbf, .y=0x22, .sp=0x05, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x832a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x832b, .a=0x4b, .x=0xbf, .y=0x22, .sp=0x05, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x832a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x832a, .value=0x3c, .type=IO_READ},
        {.addr=0x832b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0323) {
    const struct CPU_State initial_cpu = {.pc=0x805e, .a=0xc6, .x=0xc0, .y=0x9f, .sp=0x40, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x805e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x805f, .a=0x8c, .x=0xc0, .y=0x9f, .sp=0x40, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x805e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x805e, .value=0x3c, .type=IO_READ},
        {.addr=0x805f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0324) {
    const struct CPU_State initial_cpu = {.pc=0xb7cf, .a=0x8a, .x=0x05, .y=0x97, .sp=0xfe, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb7cf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb7d0, .a=0x14, .x=0x05, .y=0x97, .sp=0xfe, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb7cf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb7cf, .value=0x3c, .type=IO_READ},
        {.addr=0xb7d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0325) {
    const struct CPU_State initial_cpu = {.pc=0xbc94, .a=0x59, .x=0xcb, .y=0xae, .sp=0xa9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbc94, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbc95, .a=0xb3, .x=0xcb, .y=0xae, .sp=0xa9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbc94, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbc94, .value=0x3c, .type=IO_READ},
        {.addr=0xbc95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0326) {
    const struct CPU_State initial_cpu = {.pc=0xb5d9, .a=0x99, .x=0xcd, .y=0x29, .sp=0xcc, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb5da, .a=0x32, .x=0xcd, .y=0x29, .sp=0xcc, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb5d9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb5d9, .value=0x3c, .type=IO_READ},
        {.addr=0xb5da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0327) {
    const struct CPU_State initial_cpu = {.pc=0x713f, .a=0x40, .x=0x0e, .y=0xdf, .sp=0xb5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x713f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7140, .a=0x81, .x=0x0e, .y=0xdf, .sp=0xb5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x713f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x713f, .value=0x3c, .type=IO_READ},
        {.addr=0x7140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3b8c, .a=0xbd, .x=0x98, .y=0x75, .sp=0xa0, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3b8c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3b8d, .a=0x7a, .x=0x98, .y=0x75, .sp=0xa0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3b8c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3b8c, .value=0x3c, .type=IO_READ},
        {.addr=0x3b8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0329) {
    const struct CPU_State initial_cpu = {.pc=0xe1a4, .a=0x44, .x=0x60, .y=0xc1, .sp=0x01, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe1a5, .a=0x88, .x=0x60, .y=0xc1, .sp=0x01, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe1a4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe1a4, .value=0x3c, .type=IO_READ},
        {.addr=0xe1a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032A) {
    const struct CPU_State initial_cpu = {.pc=0x8b59, .a=0x1c, .x=0xce, .y=0x01, .sp=0x38, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8b59, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8b5a, .a=0x38, .x=0xce, .y=0x01, .sp=0x38, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8b59, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8b59, .value=0x3c, .type=IO_READ},
        {.addr=0x8b5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032B) {
    const struct CPU_State initial_cpu = {.pc=0x17d0, .a=0x84, .x=0x12, .y=0xff, .sp=0xd6, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x17d0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x17d1, .a=0x08, .x=0x12, .y=0xff, .sp=0xd6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x17d0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x17d0, .value=0x3c, .type=IO_READ},
        {.addr=0x17d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032C) {
    const struct CPU_State initial_cpu = {.pc=0xf09a, .a=0x55, .x=0x08, .y=0x53, .sp=0xd2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xf09a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf09b, .a=0xab, .x=0x08, .y=0x53, .sp=0xd2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf09a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf09a, .value=0x3c, .type=IO_READ},
        {.addr=0xf09b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032D) {
    const struct CPU_State initial_cpu = {.pc=0x2bc2, .a=0x23, .x=0x9e, .y=0x6f, .sp=0xb7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2bc2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2bc3, .a=0x46, .x=0x9e, .y=0x6f, .sp=0xb7, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2bc2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2bc2, .value=0x3c, .type=IO_READ},
        {.addr=0x2bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032E) {
    const struct CPU_State initial_cpu = {.pc=0xc8ec, .a=0xf7, .x=0x67, .y=0x02, .sp=0x91, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ec, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc8ed, .a=0xee, .x=0x67, .y=0x02, .sp=0x91, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc8ec, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc8ec, .value=0x3c, .type=IO_READ},
        {.addr=0xc8ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_032F) {
    const struct CPU_State initial_cpu = {.pc=0x71eb, .a=0x88, .x=0x16, .y=0x0d, .sp=0xbe, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x71eb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x71ec, .a=0x11, .x=0x16, .y=0x0d, .sp=0xbe, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x71eb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x71eb, .value=0x3c, .type=IO_READ},
        {.addr=0x71ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0330) {
    const struct CPU_State initial_cpu = {.pc=0xa7ae, .a=0x79, .x=0x62, .y=0x10, .sp=0xc7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa7af, .a=0xf3, .x=0x62, .y=0x10, .sp=0xc7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa7ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa7ae, .value=0x3c, .type=IO_READ},
        {.addr=0xa7af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0331) {
    const struct CPU_State initial_cpu = {.pc=0x4825, .a=0xe0, .x=0xd8, .y=0xa6, .sp=0x84, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4825, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4826, .a=0xc0, .x=0xd8, .y=0xa6, .sp=0x84, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4825, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4825, .value=0x3c, .type=IO_READ},
        {.addr=0x4826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0332) {
    const struct CPU_State initial_cpu = {.pc=0xafd7, .a=0x1d, .x=0xc2, .y=0xaf, .sp=0xe7, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xafd7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xafd8, .a=0x3a, .x=0xc2, .y=0xaf, .sp=0xe7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xafd7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xafd7, .value=0x3c, .type=IO_READ},
        {.addr=0xafd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0333) {
    const struct CPU_State initial_cpu = {.pc=0x8a48, .a=0x31, .x=0x36, .y=0x55, .sp=0xc3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8a48, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8a49, .a=0x63, .x=0x36, .y=0x55, .sp=0xc3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8a48, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8a48, .value=0x3c, .type=IO_READ},
        {.addr=0x8a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9bc1, .a=0xc1, .x=0x82, .y=0x5e, .sp=0x5a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9bc2, .a=0x82, .x=0x82, .y=0x5e, .sp=0x5a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9bc1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9bc1, .value=0x3c, .type=IO_READ},
        {.addr=0x9bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0335) {
    const struct CPU_State initial_cpu = {.pc=0x1129, .a=0x4c, .x=0x67, .y=0xfc, .sp=0x12, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1129, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x112a, .a=0x98, .x=0x67, .y=0xfc, .sp=0x12, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1129, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1129, .value=0x3c, .type=IO_READ},
        {.addr=0x112a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0336) {
    const struct CPU_State initial_cpu = {.pc=0x81c7, .a=0x91, .x=0xaa, .y=0xca, .sp=0xa2, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x81c7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x81c8, .a=0x23, .x=0xaa, .y=0xca, .sp=0xa2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x81c7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x81c7, .value=0x3c, .type=IO_READ},
        {.addr=0x81c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0337) {
    const struct CPU_State initial_cpu = {.pc=0xa4d4, .a=0x33, .x=0xf5, .y=0x0f, .sp=0x48, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa4d5, .a=0x67, .x=0xf5, .y=0x0f, .sp=0x48, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa4d4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa4d4, .value=0x3c, .type=IO_READ},
        {.addr=0xa4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0338) {
    const struct CPU_State initial_cpu = {.pc=0x25a1, .a=0xed, .x=0x5f, .y=0x8f, .sp=0xc7, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x25a1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x25a2, .a=0xda, .x=0x5f, .y=0x8f, .sp=0xc7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x25a1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x25a1, .value=0x3c, .type=IO_READ},
        {.addr=0x25a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0339) {
    const struct CPU_State initial_cpu = {.pc=0xec54, .a=0x5b, .x=0xca, .y=0x85, .sp=0xca, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xec54, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xec55, .a=0xb6, .x=0xca, .y=0x85, .sp=0xca, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xec54, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xec54, .value=0x3c, .type=IO_READ},
        {.addr=0xec55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033A) {
    const struct CPU_State initial_cpu = {.pc=0x1cc5, .a=0xeb, .x=0x30, .y=0xc1, .sp=0x1f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1cc6, .a=0xd7, .x=0x30, .y=0xc1, .sp=0x1f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1cc5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1cc5, .value=0x3c, .type=IO_READ},
        {.addr=0x1cc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033B) {
    const struct CPU_State initial_cpu = {.pc=0xf2fb, .a=0x02, .x=0xc3, .y=0x04, .sp=0x2c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf2fb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf2fc, .a=0x05, .x=0xc3, .y=0x04, .sp=0x2c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf2fb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf2fb, .value=0x3c, .type=IO_READ},
        {.addr=0xf2fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033C) {
    const struct CPU_State initial_cpu = {.pc=0x7944, .a=0x2e, .x=0x4d, .y=0x46, .sp=0xd6, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7944, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7945, .a=0x5c, .x=0x4d, .y=0x46, .sp=0xd6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7944, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7944, .value=0x3c, .type=IO_READ},
        {.addr=0x7945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033D) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x5a, .x=0x07, .y=0x74, .sp=0x02, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x352b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x352c, .a=0xb4, .x=0x07, .y=0x74, .sp=0x02, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x352b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0x3c, .type=IO_READ},
        {.addr=0x352c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033E) {
    const struct CPU_State initial_cpu = {.pc=0x2ba8, .a=0xf3, .x=0x42, .y=0x82, .sp=0x12, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2ba9, .a=0xe7, .x=0x42, .y=0x82, .sp=0x12, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2ba8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2ba8, .value=0x3c, .type=IO_READ},
        {.addr=0x2ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_033F) {
    const struct CPU_State initial_cpu = {.pc=0xe7d9, .a=0x42, .x=0x97, .y=0x6f, .sp=0x9e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe7da, .a=0x84, .x=0x97, .y=0x6f, .sp=0x9e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe7d9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe7d9, .value=0x3c, .type=IO_READ},
        {.addr=0xe7da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0340) {
    const struct CPU_State initial_cpu = {.pc=0xdaf1, .a=0xb6, .x=0x1b, .y=0x0d, .sp=0x91, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdaf2, .a=0x6c, .x=0x1b, .y=0x0d, .sp=0x91, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdaf1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdaf1, .value=0x3c, .type=IO_READ},
        {.addr=0xdaf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7344, .a=0x18, .x=0x2c, .y=0x62, .sp=0xe9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7344, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7345, .a=0x31, .x=0x2c, .y=0x62, .sp=0xe9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7344, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7344, .value=0x3c, .type=IO_READ},
        {.addr=0x7345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0342) {
    const struct CPU_State initial_cpu = {.pc=0x02ae, .a=0xd5, .x=0xe6, .y=0xbe, .sp=0xa8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x02ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x02af, .a=0xab, .x=0xe6, .y=0xbe, .sp=0xa8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x02ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x02ae, .value=0x3c, .type=IO_READ},
        {.addr=0x02af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa246, .a=0x31, .x=0x0f, .y=0xb3, .sp=0x95, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa246, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa247, .a=0x63, .x=0x0f, .y=0xb3, .sp=0x95, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa246, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa246, .value=0x3c, .type=IO_READ},
        {.addr=0xa247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0344) {
    const struct CPU_State initial_cpu = {.pc=0x237f, .a=0xd2, .x=0x73, .y=0xa9, .sp=0x88, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x237f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2380, .a=0xa5, .x=0x73, .y=0xa9, .sp=0x88, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x237f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x237f, .value=0x3c, .type=IO_READ},
        {.addr=0x2380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0345) {
    const struct CPU_State initial_cpu = {.pc=0x115d, .a=0x8b, .x=0x66, .y=0xf2, .sp=0x87, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x115d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x115e, .a=0x17, .x=0x66, .y=0xf2, .sp=0x87, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x115d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x115d, .value=0x3c, .type=IO_READ},
        {.addr=0x115e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6ad8, .a=0x38, .x=0xf5, .y=0x6d, .sp=0xf4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6ad9, .a=0x70, .x=0xf5, .y=0x6d, .sp=0xf4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6ad8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6ad8, .value=0x3c, .type=IO_READ},
        {.addr=0x6ad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0347) {
    const struct CPU_State initial_cpu = {.pc=0x03ff, .a=0x98, .x=0xcd, .y=0x58, .sp=0xab, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x03ff, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0400, .a=0x31, .x=0xcd, .y=0x58, .sp=0xab, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x03ff, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x03ff, .value=0x3c, .type=IO_READ},
        {.addr=0x0400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0348) {
    const struct CPU_State initial_cpu = {.pc=0x00ae, .a=0x7f, .x=0x3d, .y=0xc1, .sp=0xcf, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x00af, .a=0xfe, .x=0x3d, .y=0xc1, .sp=0xcf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x00ae, .value=0x3c, .type=IO_READ},
        {.addr=0x00af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0349) {
    const struct CPU_State initial_cpu = {.pc=0x5dd6, .a=0x61, .x=0x7e, .y=0x2e, .sp=0x56, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5dd7, .a=0xc3, .x=0x7e, .y=0x2e, .sp=0x56, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5dd6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5dd6, .value=0x3c, .type=IO_READ},
        {.addr=0x5dd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034A) {
    const struct CPU_State initial_cpu = {.pc=0xff27, .a=0x0c, .x=0x5e, .y=0x88, .sp=0xcd, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xff27, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xff28, .a=0x19, .x=0x5e, .y=0x88, .sp=0xcd, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xff27, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xff27, .value=0x3c, .type=IO_READ},
        {.addr=0xff28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034B) {
    const struct CPU_State initial_cpu = {.pc=0xcf02, .a=0xa0, .x=0x78, .y=0x88, .sp=0xae, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf02, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcf03, .a=0x40, .x=0x78, .y=0x88, .sp=0xae, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xcf02, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcf02, .value=0x3c, .type=IO_READ},
        {.addr=0xcf03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034C) {
    const struct CPU_State initial_cpu = {.pc=0x92a3, .a=0x8f, .x=0x71, .y=0x47, .sp=0x0b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x92a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x92a4, .a=0x1e, .x=0x71, .y=0x47, .sp=0x0b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x92a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x92a3, .value=0x3c, .type=IO_READ},
        {.addr=0x92a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034D) {
    const struct CPU_State initial_cpu = {.pc=0xbb53, .a=0xbf, .x=0x1d, .y=0xbf, .sp=0x3e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbb53, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbb54, .a=0x7f, .x=0x1d, .y=0xbf, .sp=0x3e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xbb53, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbb53, .value=0x3c, .type=IO_READ},
        {.addr=0xbb54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034E) {
    const struct CPU_State initial_cpu = {.pc=0x031e, .a=0xa2, .x=0x72, .y=0x83, .sp=0xce, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x031e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x031f, .a=0x44, .x=0x72, .y=0x83, .sp=0xce, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x031e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x031e, .value=0x3c, .type=IO_READ},
        {.addr=0x031f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_034F) {
    const struct CPU_State initial_cpu = {.pc=0xb022, .a=0x27, .x=0x0f, .y=0xc5, .sp=0xff, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb022, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb023, .a=0x4e, .x=0x0f, .y=0xc5, .sp=0xff, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb022, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb022, .value=0x3c, .type=IO_READ},
        {.addr=0xb023, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0350) {
    const struct CPU_State initial_cpu = {.pc=0xfcc2, .a=0x18, .x=0x15, .y=0x87, .sp=0x1b, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfcc3, .a=0x31, .x=0x15, .y=0x87, .sp=0x1b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xfcc2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfcc2, .value=0x3c, .type=IO_READ},
        {.addr=0xfcc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0351) {
    const struct CPU_State initial_cpu = {.pc=0x94f9, .a=0xe6, .x=0x8c, .y=0x23, .sp=0x7e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x94f9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x94fa, .a=0xcd, .x=0x8c, .y=0x23, .sp=0x7e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x94f9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x94f9, .value=0x3c, .type=IO_READ},
        {.addr=0x94fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0352) {
    const struct CPU_State initial_cpu = {.pc=0xa861, .a=0x1a, .x=0x87, .y=0x28, .sp=0x56, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa861, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa862, .a=0x34, .x=0x87, .y=0x28, .sp=0x56, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xa861, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa861, .value=0x3c, .type=IO_READ},
        {.addr=0xa862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0353) {
    const struct CPU_State initial_cpu = {.pc=0x0a12, .a=0xb7, .x=0x80, .y=0x9c, .sp=0x45, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0a12, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0a13, .a=0x6e, .x=0x80, .y=0x9c, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0a12, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0a12, .value=0x3c, .type=IO_READ},
        {.addr=0x0a13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0354) {
    const struct CPU_State initial_cpu = {.pc=0x0c04, .a=0x91, .x=0xb7, .y=0x0d, .sp=0xda, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0c04, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0c05, .a=0x22, .x=0xb7, .y=0x0d, .sp=0xda, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0c04, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0c04, .value=0x3c, .type=IO_READ},
        {.addr=0x0c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0355) {
    const struct CPU_State initial_cpu = {.pc=0x1c8d, .a=0xa3, .x=0x7c, .y=0x11, .sp=0x68, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1c8e, .a=0x46, .x=0x7c, .y=0x11, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1c8d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1c8d, .value=0x3c, .type=IO_READ},
        {.addr=0x1c8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0356) {
    const struct CPU_State initial_cpu = {.pc=0xb286, .a=0xeb, .x=0xaf, .y=0x1d, .sp=0x62, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb286, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb287, .a=0xd6, .x=0xaf, .y=0x1d, .sp=0x62, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb286, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb286, .value=0x3c, .type=IO_READ},
        {.addr=0xb287, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0357) {
    const struct CPU_State initial_cpu = {.pc=0xabbe, .a=0x85, .x=0x82, .y=0xa1, .sp=0xe1, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xabbe, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xabbf, .a=0x0a, .x=0x82, .y=0xa1, .sp=0xe1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xabbe, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xabbe, .value=0x3c, .type=IO_READ},
        {.addr=0xabbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0358) {
    const struct CPU_State initial_cpu = {.pc=0x0f23, .a=0x4d, .x=0xfd, .y=0xaf, .sp=0xb9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f23, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0f24, .a=0x9a, .x=0xfd, .y=0xaf, .sp=0xb9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0f23, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0f23, .value=0x3c, .type=IO_READ},
        {.addr=0x0f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0359) {
    const struct CPU_State initial_cpu = {.pc=0x8668, .a=0x73, .x=0xe0, .y=0xa1, .sp=0x57, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8668, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8669, .a=0xe6, .x=0xe0, .y=0xa1, .sp=0x57, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8668, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8668, .value=0x3c, .type=IO_READ},
        {.addr=0x8669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035A) {
    const struct CPU_State initial_cpu = {.pc=0x1d9f, .a=0x38, .x=0xb8, .y=0x7e, .sp=0x30, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1da0, .a=0x70, .x=0xb8, .y=0x7e, .sp=0x30, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1d9f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1d9f, .value=0x3c, .type=IO_READ},
        {.addr=0x1da0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035B) {
    const struct CPU_State initial_cpu = {.pc=0x365f, .a=0xc9, .x=0xb3, .y=0x3e, .sp=0x13, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x365f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3660, .a=0x92, .x=0xb3, .y=0x3e, .sp=0x13, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x365f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x365f, .value=0x3c, .type=IO_READ},
        {.addr=0x3660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035C) {
    const struct CPU_State initial_cpu = {.pc=0x2819, .a=0x06, .x=0xef, .y=0x23, .sp=0x06, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2819, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x281a, .a=0x0c, .x=0xef, .y=0x23, .sp=0x06, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2819, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2819, .value=0x3c, .type=IO_READ},
        {.addr=0x281a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035D) {
    const struct CPU_State initial_cpu = {.pc=0xd5a3, .a=0xd4, .x=0xf6, .y=0xe5, .sp=0xf5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd5a4, .a=0xa8, .x=0xf6, .y=0xe5, .sp=0xf5, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd5a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd5a3, .value=0x3c, .type=IO_READ},
        {.addr=0xd5a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035E) {
    const struct CPU_State initial_cpu = {.pc=0xded6, .a=0x9c, .x=0xd5, .y=0xae, .sp=0x85, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xded6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xded7, .a=0x39, .x=0xd5, .y=0xae, .sp=0x85, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xded6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xded6, .value=0x3c, .type=IO_READ},
        {.addr=0xded7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_035F) {
    const struct CPU_State initial_cpu = {.pc=0x3853, .a=0x97, .x=0x51, .y=0x88, .sp=0xe1, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3853, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3854, .a=0x2e, .x=0x51, .y=0x88, .sp=0xe1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3853, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3853, .value=0x3c, .type=IO_READ},
        {.addr=0x3854, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc702, .a=0xbc, .x=0xa3, .y=0x39, .sp=0xa5, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc702, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc703, .a=0x78, .x=0xa3, .y=0x39, .sp=0xa5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc702, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc702, .value=0x3c, .type=IO_READ},
        {.addr=0xc703, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0361) {
    const struct CPU_State initial_cpu = {.pc=0x9a21, .a=0xb4, .x=0x77, .y=0xe8, .sp=0x72, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a21, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9a22, .a=0x68, .x=0x77, .y=0xe8, .sp=0x72, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9a21, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9a21, .value=0x3c, .type=IO_READ},
        {.addr=0x9a22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0362) {
    const struct CPU_State initial_cpu = {.pc=0x7d03, .a=0x68, .x=0xbb, .y=0x4c, .sp=0x60, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x7d03, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7d04, .a=0xd1, .x=0xbb, .y=0x4c, .sp=0x60, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7d03, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7d03, .value=0x3c, .type=IO_READ},
        {.addr=0x7d04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0363) {
    const struct CPU_State initial_cpu = {.pc=0x8d2e, .a=0x10, .x=0x68, .y=0x91, .sp=0x2d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d2f, .a=0x20, .x=0x68, .y=0x91, .sp=0x2d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8d2e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d2e, .value=0x3c, .type=IO_READ},
        {.addr=0x8d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8b4c, .a=0xd6, .x=0xf1, .y=0x5f, .sp=0x15, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b4c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8b4d, .a=0xad, .x=0xf1, .y=0x5f, .sp=0x15, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8b4c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8b4c, .value=0x3c, .type=IO_READ},
        {.addr=0x8b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0365) {
    const struct CPU_State initial_cpu = {.pc=0xd539, .a=0x0c, .x=0x75, .y=0xfc, .sp=0xdd, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd539, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd53a, .a=0x18, .x=0x75, .y=0xfc, .sp=0xdd, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd539, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd539, .value=0x3c, .type=IO_READ},
        {.addr=0xd53a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0366) {
    const struct CPU_State initial_cpu = {.pc=0x1d82, .a=0x30, .x=0xfc, .y=0xa1, .sp=0xdc, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d82, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1d83, .a=0x60, .x=0xfc, .y=0xa1, .sp=0xdc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1d82, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1d82, .value=0x3c, .type=IO_READ},
        {.addr=0x1d83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0367) {
    const struct CPU_State initial_cpu = {.pc=0x5691, .a=0x83, .x=0xdb, .y=0xbc, .sp=0x82, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x5691, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5692, .a=0x06, .x=0xdb, .y=0xbc, .sp=0x82, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5691, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5691, .value=0x3c, .type=IO_READ},
        {.addr=0x5692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6e82, .a=0xee, .x=0x98, .y=0x9b, .sp=0x8a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6e82, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6e83, .a=0xdc, .x=0x98, .y=0x9b, .sp=0x8a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6e82, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6e82, .value=0x3c, .type=IO_READ},
        {.addr=0x6e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0369) {
    const struct CPU_State initial_cpu = {.pc=0x037e, .a=0xae, .x=0xf7, .y=0x33, .sp=0x8a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x037e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x037f, .a=0x5d, .x=0xf7, .y=0x33, .sp=0x8a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x037e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x037e, .value=0x3c, .type=IO_READ},
        {.addr=0x037f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036A) {
    const struct CPU_State initial_cpu = {.pc=0xb33c, .a=0x27, .x=0x18, .y=0x6e, .sp=0x28, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xb33c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb33d, .a=0x4f, .x=0x18, .y=0x6e, .sp=0x28, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb33c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb33c, .value=0x3c, .type=IO_READ},
        {.addr=0xb33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036B) {
    const struct CPU_State initial_cpu = {.pc=0xf883, .a=0x69, .x=0x30, .y=0xc2, .sp=0xb7, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf883, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf884, .a=0xd2, .x=0x30, .y=0xc2, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf883, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf883, .value=0x3c, .type=IO_READ},
        {.addr=0xf884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036C) {
    const struct CPU_State initial_cpu = {.pc=0xcc80, .a=0xdc, .x=0x7c, .y=0xa8, .sp=0x6d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc80, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcc81, .a=0xb8, .x=0x7c, .y=0xa8, .sp=0x6d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xcc80, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcc80, .value=0x3c, .type=IO_READ},
        {.addr=0xcc81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036D) {
    const struct CPU_State initial_cpu = {.pc=0xa408, .a=0xc1, .x=0x07, .y=0xc6, .sp=0x54, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa408, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa409, .a=0x83, .x=0x07, .y=0xc6, .sp=0x54, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa408, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa408, .value=0x3c, .type=IO_READ},
        {.addr=0xa409, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036E) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0x90, .x=0xd9, .y=0xb5, .sp=0x02, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0x20, .x=0xd9, .y=0xb5, .sp=0x02, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0x3c, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_036F) {
    const struct CPU_State initial_cpu = {.pc=0x4580, .a=0x2a, .x=0xd3, .y=0xdb, .sp=0xa1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4580, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4581, .a=0x55, .x=0xd3, .y=0xdb, .sp=0xa1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4580, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4580, .value=0x3c, .type=IO_READ},
        {.addr=0x4581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0370) {
    const struct CPU_State initial_cpu = {.pc=0x93a3, .a=0xf5, .x=0xc3, .y=0x3d, .sp=0xde, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x93a3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x93a4, .a=0xea, .x=0xc3, .y=0x3d, .sp=0xde, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x93a3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x93a3, .value=0x3c, .type=IO_READ},
        {.addr=0x93a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0371) {
    const struct CPU_State initial_cpu = {.pc=0xdcdd, .a=0x9d, .x=0x75, .y=0x2d, .sp=0xa5, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xdcdd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdcde, .a=0x3b, .x=0x75, .y=0x2d, .sp=0xa5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdcdd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdcdd, .value=0x3c, .type=IO_READ},
        {.addr=0xdcde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0372) {
    const struct CPU_State initial_cpu = {.pc=0xa36b, .a=0xce, .x=0x58, .y=0xc5, .sp=0xdc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa36b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa36c, .a=0x9c, .x=0x58, .y=0xc5, .sp=0xdc, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa36b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa36b, .value=0x3c, .type=IO_READ},
        {.addr=0xa36c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0373) {
    const struct CPU_State initial_cpu = {.pc=0x870a, .a=0x4d, .x=0xe1, .y=0x63, .sp=0x1a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x870a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x870b, .a=0x9a, .x=0xe1, .y=0x63, .sp=0x1a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x870a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x870a, .value=0x3c, .type=IO_READ},
        {.addr=0x870b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0374) {
    const struct CPU_State initial_cpu = {.pc=0xbd3b, .a=0xbd, .x=0xdb, .y=0x67, .sp=0x9f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbd3c, .a=0x7a, .x=0xdb, .y=0x67, .sp=0x9f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbd3b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbd3b, .value=0x3c, .type=IO_READ},
        {.addr=0xbd3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0375) {
    const struct CPU_State initial_cpu = {.pc=0x0b6f, .a=0x58, .x=0x20, .y=0xc5, .sp=0x0f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0b70, .a=0xb0, .x=0x20, .y=0xc5, .sp=0x0f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0b6f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0b6f, .value=0x3c, .type=IO_READ},
        {.addr=0x0b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0376) {
    const struct CPU_State initial_cpu = {.pc=0xda69, .a=0xac, .x=0x3b, .y=0x0a, .sp=0x16, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xda69, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xda6a, .a=0x58, .x=0x3b, .y=0x0a, .sp=0x16, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xda69, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xda69, .value=0x3c, .type=IO_READ},
        {.addr=0xda6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0377) {
    const struct CPU_State initial_cpu = {.pc=0x347a, .a=0x1f, .x=0x2c, .y=0xc9, .sp=0x2c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x347a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x347b, .a=0x3e, .x=0x2c, .y=0xc9, .sp=0x2c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x347a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x347a, .value=0x3c, .type=IO_READ},
        {.addr=0x347b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0378) {
    const struct CPU_State initial_cpu = {.pc=0x71ba, .a=0xc5, .x=0x75, .y=0xf2, .sp=0x40, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x71ba, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x71bb, .a=0x8b, .x=0x75, .y=0xf2, .sp=0x40, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x71ba, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x71ba, .value=0x3c, .type=IO_READ},
        {.addr=0x71bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0379) {
    const struct CPU_State initial_cpu = {.pc=0x0ee3, .a=0xe9, .x=0x6a, .y=0x5b, .sp=0x4e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0ee4, .a=0xd3, .x=0x6a, .y=0x5b, .sp=0x4e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0ee3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0ee3, .value=0x3c, .type=IO_READ},
        {.addr=0x0ee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037A) {
    const struct CPU_State initial_cpu = {.pc=0x5520, .a=0xe4, .x=0xc1, .y=0x1f, .sp=0xf7, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5520, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5521, .a=0xc9, .x=0xc1, .y=0x1f, .sp=0xf7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5520, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5520, .value=0x3c, .type=IO_READ},
        {.addr=0x5521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037B) {
    const struct CPU_State initial_cpu = {.pc=0xeff6, .a=0x86, .x=0xc9, .y=0x36, .sp=0x22, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xeff6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xeff7, .a=0x0d, .x=0xc9, .y=0x36, .sp=0x22, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xeff6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xeff6, .value=0x3c, .type=IO_READ},
        {.addr=0xeff7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037C) {
    const struct CPU_State initial_cpu = {.pc=0xaf2e, .a=0x3f, .x=0xaf, .y=0xfb, .sp=0xf8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaf2f, .a=0x7e, .x=0xaf, .y=0xfb, .sp=0xf8, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xaf2e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaf2e, .value=0x3c, .type=IO_READ},
        {.addr=0xaf2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037D) {
    const struct CPU_State initial_cpu = {.pc=0xc159, .a=0x4c, .x=0xea, .y=0x4a, .sp=0xe3, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc159, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc15a, .a=0x98, .x=0xea, .y=0x4a, .sp=0xe3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc159, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc159, .value=0x3c, .type=IO_READ},
        {.addr=0xc15a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037E) {
    const struct CPU_State initial_cpu = {.pc=0xb40e, .a=0xe8, .x=0x6f, .y=0xe2, .sp=0xc5, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb40e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb40f, .a=0xd1, .x=0x6f, .y=0xe2, .sp=0xc5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb40e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb40e, .value=0x3c, .type=IO_READ},
        {.addr=0xb40f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_037F) {
    const struct CPU_State initial_cpu = {.pc=0xa941, .a=0x78, .x=0xe6, .y=0xfa, .sp=0xcf, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa941, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa942, .a=0xf0, .x=0xe6, .y=0xfa, .sp=0xcf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa941, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa941, .value=0x3c, .type=IO_READ},
        {.addr=0xa942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0380) {
    const struct CPU_State initial_cpu = {.pc=0xa21c, .a=0xe8, .x=0xe1, .y=0x08, .sp=0xc7, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa21c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa21d, .a=0xd0, .x=0xe1, .y=0x08, .sp=0xc7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa21c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa21c, .value=0x3c, .type=IO_READ},
        {.addr=0xa21d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0381) {
    const struct CPU_State initial_cpu = {.pc=0x6822, .a=0xd2, .x=0x35, .y=0x77, .sp=0x1b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x6822, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6823, .a=0xa4, .x=0x35, .y=0x77, .sp=0x1b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6822, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6822, .value=0x3c, .type=IO_READ},
        {.addr=0x6823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0382) {
    const struct CPU_State initial_cpu = {.pc=0xa0b9, .a=0x87, .x=0xa7, .y=0x3e, .sp=0xce, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa0ba, .a=0x0e, .x=0xa7, .y=0x3e, .sp=0xce, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa0b9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa0b9, .value=0x3c, .type=IO_READ},
        {.addr=0xa0ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0383) {
    const struct CPU_State initial_cpu = {.pc=0x51d0, .a=0x55, .x=0xba, .y=0xcb, .sp=0xc9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x51d0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x51d1, .a=0xaa, .x=0xba, .y=0xcb, .sp=0xc9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x51d0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x51d0, .value=0x3c, .type=IO_READ},
        {.addr=0x51d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0384) {
    const struct CPU_State initial_cpu = {.pc=0xa05f, .a=0x9f, .x=0xd1, .y=0xc3, .sp=0xec, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa05f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa060, .a=0x3f, .x=0xd1, .y=0xc3, .sp=0xec, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa05f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa05f, .value=0x3c, .type=IO_READ},
        {.addr=0xa060, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0385) {
    const struct CPU_State initial_cpu = {.pc=0xb312, .a=0xe6, .x=0x23, .y=0xd0, .sp=0x77, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb312, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb313, .a=0xcd, .x=0x23, .y=0xd0, .sp=0x77, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb312, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb312, .value=0x3c, .type=IO_READ},
        {.addr=0xb313, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0386) {
    const struct CPU_State initial_cpu = {.pc=0x2b81, .a=0x88, .x=0x6f, .y=0xd1, .sp=0x95, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2b81, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2b82, .a=0x10, .x=0x6f, .y=0xd1, .sp=0x95, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2b81, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2b81, .value=0x3c, .type=IO_READ},
        {.addr=0x2b82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0387) {
    const struct CPU_State initial_cpu = {.pc=0xec49, .a=0x7c, .x=0xfb, .y=0xfd, .sp=0x9b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xec49, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xec4a, .a=0xf9, .x=0xfb, .y=0xfd, .sp=0x9b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xec49, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xec49, .value=0x3c, .type=IO_READ},
        {.addr=0xec4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0388) {
    const struct CPU_State initial_cpu = {.pc=0x7cc9, .a=0x1c, .x=0xaf, .y=0x14, .sp=0x40, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7cca, .a=0x38, .x=0xaf, .y=0x14, .sp=0x40, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7cc9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7cc9, .value=0x3c, .type=IO_READ},
        {.addr=0x7cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5f07, .a=0x64, .x=0x3c, .y=0x21, .sp=0xa3, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f07, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f08, .a=0xc9, .x=0x3c, .y=0x21, .sp=0xa3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5f07, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f07, .value=0x3c, .type=IO_READ},
        {.addr=0x5f08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038A) {
    const struct CPU_State initial_cpu = {.pc=0x5bdb, .a=0xfb, .x=0x7c, .y=0xe8, .sp=0xa7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5bdb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5bdc, .a=0xf6, .x=0x7c, .y=0xe8, .sp=0xa7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5bdb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5bdb, .value=0x3c, .type=IO_READ},
        {.addr=0x5bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038B) {
    const struct CPU_State initial_cpu = {.pc=0x41ba, .a=0xf1, .x=0x07, .y=0x09, .sp=0x79, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x41ba, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x41bb, .a=0xe3, .x=0x07, .y=0x09, .sp=0x79, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x41ba, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x41ba, .value=0x3c, .type=IO_READ},
        {.addr=0x41bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038C) {
    const struct CPU_State initial_cpu = {.pc=0x8d1e, .a=0x1f, .x=0x4a, .y=0x08, .sp=0x30, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8d1e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d1f, .a=0x3f, .x=0x4a, .y=0x08, .sp=0x30, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8d1e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d1e, .value=0x3c, .type=IO_READ},
        {.addr=0x8d1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038D) {
    const struct CPU_State initial_cpu = {.pc=0x658c, .a=0xdc, .x=0x76, .y=0x27, .sp=0x9e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x658c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x658d, .a=0xb9, .x=0x76, .y=0x27, .sp=0x9e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x658c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x658c, .value=0x3c, .type=IO_READ},
        {.addr=0x658d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038E) {
    const struct CPU_State initial_cpu = {.pc=0xc9b9, .a=0xdf, .x=0xcc, .y=0x1c, .sp=0xfa, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc9ba, .a=0xbe, .x=0xcc, .y=0x1c, .sp=0xfa, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc9b9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc9b9, .value=0x3c, .type=IO_READ},
        {.addr=0xc9ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_038F) {
    const struct CPU_State initial_cpu = {.pc=0xf388, .a=0x33, .x=0xc8, .y=0xa8, .sp=0x36, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf388, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf389, .a=0x66, .x=0xc8, .y=0xa8, .sp=0x36, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf388, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf388, .value=0x3c, .type=IO_READ},
        {.addr=0xf389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0390) {
    const struct CPU_State initial_cpu = {.pc=0x6d35, .a=0xc3, .x=0xc3, .y=0xbe, .sp=0x4c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d35, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d36, .a=0x87, .x=0xc3, .y=0xbe, .sp=0x4c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6d35, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d35, .value=0x3c, .type=IO_READ},
        {.addr=0x6d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0391) {
    const struct CPU_State initial_cpu = {.pc=0x05fc, .a=0xd2, .x=0xfc, .y=0x42, .sp=0x93, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x05fc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x05fd, .a=0xa5, .x=0xfc, .y=0x42, .sp=0x93, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x05fc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x05fc, .value=0x3c, .type=IO_READ},
        {.addr=0x05fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0392) {
    const struct CPU_State initial_cpu = {.pc=0x06cc, .a=0x8a, .x=0xfe, .y=0x3c, .sp=0x14, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x06cc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x06cd, .a=0x14, .x=0xfe, .y=0x3c, .sp=0x14, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x06cc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x06cc, .value=0x3c, .type=IO_READ},
        {.addr=0x06cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4f2f, .a=0xa8, .x=0x06, .y=0xf7, .sp=0xdf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4f2f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4f30, .a=0x51, .x=0x06, .y=0xf7, .sp=0xdf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4f2f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4f2f, .value=0x3c, .type=IO_READ},
        {.addr=0x4f30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0394) {
    const struct CPU_State initial_cpu = {.pc=0x2f92, .a=0x9d, .x=0xd0, .y=0x1a, .sp=0x1b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2f92, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2f93, .a=0x3b, .x=0xd0, .y=0x1a, .sp=0x1b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2f92, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2f92, .value=0x3c, .type=IO_READ},
        {.addr=0x2f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0395) {
    const struct CPU_State initial_cpu = {.pc=0x362b, .a=0xf8, .x=0xe3, .y=0x2f, .sp=0x30, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x362b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x362c, .a=0xf1, .x=0xe3, .y=0x2f, .sp=0x30, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x362b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x362b, .value=0x3c, .type=IO_READ},
        {.addr=0x362c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0396) {
    const struct CPU_State initial_cpu = {.pc=0xce8c, .a=0x80, .x=0xd6, .y=0x7e, .sp=0x96, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xce8c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xce8d, .a=0x00, .x=0xd6, .y=0x7e, .sp=0x96, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xce8c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xce8c, .value=0x3c, .type=IO_READ},
        {.addr=0xce8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0397) {
    const struct CPU_State initial_cpu = {.pc=0xe973, .a=0x96, .x=0xee, .y=0x61, .sp=0xe4, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe973, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe974, .a=0x2c, .x=0xee, .y=0x61, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe973, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe973, .value=0x3c, .type=IO_READ},
        {.addr=0xe974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8f4c, .a=0x4a, .x=0x79, .y=0xad, .sp=0x76, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8f4c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8f4d, .a=0x94, .x=0x79, .y=0xad, .sp=0x76, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8f4c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8f4c, .value=0x3c, .type=IO_READ},
        {.addr=0x8f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_0399) {
    const struct CPU_State initial_cpu = {.pc=0xa646, .a=0x1d, .x=0x9b, .y=0x25, .sp=0x36, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xa646, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa647, .a=0x3b, .x=0x9b, .y=0x25, .sp=0x36, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa646, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa646, .value=0x3c, .type=IO_READ},
        {.addr=0xa647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd0aa, .a=0x5f, .x=0x4e, .y=0x95, .sp=0xac, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd0aa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd0ab, .a=0xbe, .x=0x4e, .y=0x95, .sp=0xac, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd0aa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd0aa, .value=0x3c, .type=IO_READ},
        {.addr=0xd0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039B) {
    const struct CPU_State initial_cpu = {.pc=0xe45d, .a=0xfe, .x=0x24, .y=0xc3, .sp=0xca, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe45d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe45e, .a=0xfd, .x=0x24, .y=0xc3, .sp=0xca, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe45d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe45d, .value=0x3c, .type=IO_READ},
        {.addr=0xe45e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039C) {
    const struct CPU_State initial_cpu = {.pc=0x9ce7, .a=0xdb, .x=0xd9, .y=0x91, .sp=0xff, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9ce8, .a=0xb7, .x=0xd9, .y=0x91, .sp=0xff, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9ce7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9ce7, .value=0x3c, .type=IO_READ},
        {.addr=0x9ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039D) {
    const struct CPU_State initial_cpu = {.pc=0x0afd, .a=0xe1, .x=0xf5, .y=0x33, .sp=0x8d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0afd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0afe, .a=0xc3, .x=0xf5, .y=0x33, .sp=0x8d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0afd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0afd, .value=0x3c, .type=IO_READ},
        {.addr=0x0afe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039E) {
    const struct CPU_State initial_cpu = {.pc=0xca19, .a=0xad, .x=0x1e, .y=0x83, .sp=0x22, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xca19, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xca1a, .a=0x5b, .x=0x1e, .y=0x83, .sp=0x22, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xca19, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xca19, .value=0x3c, .type=IO_READ},
        {.addr=0xca1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_039F) {
    const struct CPU_State initial_cpu = {.pc=0x126b, .a=0x83, .x=0x2b, .y=0x8f, .sp=0xd0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x126b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x126c, .a=0x06, .x=0x2b, .y=0x8f, .sp=0xd0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x126b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x126b, .value=0x3c, .type=IO_READ},
        {.addr=0x126c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xe1b6, .a=0xf1, .x=0xc2, .y=0x38, .sp=0x34, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe1b7, .a=0xe2, .x=0xc2, .y=0x38, .sp=0x34, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe1b6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe1b6, .value=0x3c, .type=IO_READ},
        {.addr=0xe1b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xcdec, .a=0x89, .x=0x33, .y=0xe6, .sp=0xb8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xcdec, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcded, .a=0x12, .x=0x33, .y=0xe6, .sp=0xb8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcdec, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcdec, .value=0x3c, .type=IO_READ},
        {.addr=0xcded, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x73d7, .a=0x76, .x=0x19, .y=0x55, .sp=0x15, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x73d7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x73d8, .a=0xec, .x=0x19, .y=0x55, .sp=0x15, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x73d7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x73d7, .value=0x3c, .type=IO_READ},
        {.addr=0x73d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x5a6a, .a=0xd4, .x=0xca, .y=0xbc, .sp=0xf5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5a6b, .a=0xa9, .x=0xca, .y=0xbc, .sp=0xf5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5a6a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5a6a, .value=0x3c, .type=IO_READ},
        {.addr=0x5a6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0350, .a=0x78, .x=0x5b, .y=0x80, .sp=0x9e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0350, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0351, .a=0xf1, .x=0x5b, .y=0x80, .sp=0x9e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0350, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0350, .value=0x3c, .type=IO_READ},
        {.addr=0x0351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x598b, .a=0xe3, .x=0xe6, .y=0xe3, .sp=0xb2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x598b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x598c, .a=0xc7, .x=0xe6, .y=0xe3, .sp=0xb2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x598b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x598b, .value=0x3c, .type=IO_READ},
        {.addr=0x598c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x94f5, .a=0xaa, .x=0xe2, .y=0x77, .sp=0xe3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x94f5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x94f6, .a=0x54, .x=0xe2, .y=0x77, .sp=0xe3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x94f5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x94f5, .value=0x3c, .type=IO_READ},
        {.addr=0x94f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x87a9, .a=0xb8, .x=0x31, .y=0xa9, .sp=0x7b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x87a9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x87aa, .a=0x70, .x=0x31, .y=0xa9, .sp=0x7b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x87a9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x87a9, .value=0x3c, .type=IO_READ},
        {.addr=0x87aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xdba2, .a=0xca, .x=0x28, .y=0x78, .sp=0x32, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xdba2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdba3, .a=0x95, .x=0x28, .y=0x78, .sp=0x32, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xdba2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdba2, .value=0x3c, .type=IO_READ},
        {.addr=0xdba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x477c, .a=0xb9, .x=0x1f, .y=0xe9, .sp=0xb2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x477c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x477d, .a=0x73, .x=0x1f, .y=0xe9, .sp=0xb2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x477c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x477c, .value=0x3c, .type=IO_READ},
        {.addr=0x477d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5fa4, .a=0xe4, .x=0x7f, .y=0x4e, .sp=0x31, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5fa5, .a=0xc9, .x=0x7f, .y=0x4e, .sp=0x31, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5fa4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5fa4, .value=0x3c, .type=IO_READ},
        {.addr=0x5fa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x815e, .a=0x1e, .x=0x7a, .y=0xb2, .sp=0x8e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x815e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x815f, .a=0x3c, .x=0x7a, .y=0xb2, .sp=0x8e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x815e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x815e, .value=0x3c, .type=IO_READ},
        {.addr=0x815f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x0349, .a=0x10, .x=0x6f, .y=0x09, .sp=0xad, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0349, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x034a, .a=0x21, .x=0x6f, .y=0x09, .sp=0xad, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0349, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0349, .value=0x3c, .type=IO_READ},
        {.addr=0x034a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x70cf, .a=0xd6, .x=0x8d, .y=0xa4, .sp=0xa2, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x70cf, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x70d0, .a=0xac, .x=0x8d, .y=0xa4, .sp=0xa2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x70cf, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x70cf, .value=0x3c, .type=IO_READ},
        {.addr=0x70d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xaf2f, .a=0x18, .x=0xe7, .y=0xda, .sp=0x99, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xaf30, .a=0x30, .x=0xe7, .y=0xda, .sp=0x99, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xaf2f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xaf2f, .value=0x3c, .type=IO_READ},
        {.addr=0xaf30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x89d5, .a=0xf2, .x=0xc5, .y=0x64, .sp=0xd5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x89d5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x89d6, .a=0xe5, .x=0xc5, .y=0x64, .sp=0xd5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x89d5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x89d5, .value=0x3c, .type=IO_READ},
        {.addr=0x89d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x939e, .a=0x26, .x=0xa0, .y=0x19, .sp=0x66, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x939e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x939f, .a=0x4c, .x=0xa0, .y=0x19, .sp=0x66, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x939e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x939e, .value=0x3c, .type=IO_READ},
        {.addr=0x939f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xf496, .a=0x9b, .x=0x2b, .y=0xea, .sp=0xc4, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf496, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf497, .a=0x37, .x=0x2b, .y=0xea, .sp=0xc4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf496, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf496, .value=0x3c, .type=IO_READ},
        {.addr=0xf497, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xc045, .a=0x1f, .x=0xde, .y=0xf1, .sp=0x33, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc045, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc046, .a=0x3e, .x=0xde, .y=0xf1, .sp=0x33, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc045, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc045, .value=0x3c, .type=IO_READ},
        {.addr=0xc046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd7ef, .a=0xc2, .x=0xb4, .y=0xb3, .sp=0x64, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ef, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7f0, .a=0x84, .x=0xb4, .y=0xb3, .sp=0x64, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd7ef, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7ef, .value=0x3c, .type=IO_READ},
        {.addr=0xd7f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3862, .a=0xbc, .x=0xd3, .y=0xb6, .sp=0xf7, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x3862, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3863, .a=0x79, .x=0xd3, .y=0xb6, .sp=0xf7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3862, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3862, .value=0x3c, .type=IO_READ},
        {.addr=0x3863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x0718, .a=0xab, .x=0x02, .y=0x05, .sp=0x5a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0718, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0719, .a=0x56, .x=0x02, .y=0x05, .sp=0x5a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0718, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0718, .value=0x3c, .type=IO_READ},
        {.addr=0x0719, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xadb0, .a=0x78, .x=0x0e, .y=0xb5, .sp=0x98, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xadb0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xadb1, .a=0xf0, .x=0x0e, .y=0xb5, .sp=0x98, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xadb0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xadb0, .value=0x3c, .type=IO_READ},
        {.addr=0xadb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x4bee, .a=0xaf, .x=0xba, .y=0x97, .sp=0x98, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4bee, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4bef, .a=0x5e, .x=0xba, .y=0x97, .sp=0x98, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4bee, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4bee, .value=0x3c, .type=IO_READ},
        {.addr=0x4bef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xf9fb, .a=0x0d, .x=0x94, .y=0xc2, .sp=0x49, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf9fb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf9fc, .a=0x1b, .x=0x94, .y=0xc2, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf9fb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf9fb, .value=0x3c, .type=IO_READ},
        {.addr=0xf9fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x3bad, .a=0xc8, .x=0xff, .y=0xcb, .sp=0x14, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x3bad, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3bae, .a=0x91, .x=0xff, .y=0xcb, .sp=0x14, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3bad, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3bad, .value=0x3c, .type=IO_READ},
        {.addr=0x3bae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x6d95, .a=0xbc, .x=0x89, .y=0x41, .sp=0x9c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d95, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6d96, .a=0x79, .x=0x89, .y=0x41, .sp=0x9c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6d95, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6d95, .value=0x3c, .type=IO_READ},
        {.addr=0x6d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x58d2, .a=0x97, .x=0xef, .y=0x21, .sp=0xf8, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x58d2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x58d3, .a=0x2e, .x=0xef, .y=0x21, .sp=0xf8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x58d2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x58d2, .value=0x3c, .type=IO_READ},
        {.addr=0x58d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x862e, .a=0x28, .x=0x96, .y=0x10, .sp=0x52, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x862e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x862f, .a=0x50, .x=0x96, .y=0x10, .sp=0x52, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x862e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x862e, .value=0x3c, .type=IO_READ},
        {.addr=0x862f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x6ff8, .a=0x03, .x=0xf3, .y=0x66, .sp=0x59, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6ff8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6ff9, .a=0x07, .x=0xf3, .y=0x66, .sp=0x59, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6ff8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6ff8, .value=0x3c, .type=IO_READ},
        {.addr=0x6ff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x1842, .a=0xa6, .x=0xa5, .y=0xce, .sp=0x6e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1842, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1843, .a=0x4c, .x=0xa5, .y=0xce, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1842, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1842, .value=0x3c, .type=IO_READ},
        {.addr=0x1843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb482, .a=0xeb, .x=0x37, .y=0x60, .sp=0x00, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xb482, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb483, .a=0xd6, .x=0x37, .y=0x60, .sp=0x00, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb482, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb482, .value=0x3c, .type=IO_READ},
        {.addr=0xb483, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x5290, .a=0xd0, .x=0xac, .y=0x28, .sp=0xcd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5290, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5291, .a=0xa0, .x=0xac, .y=0x28, .sp=0xcd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5290, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5290, .value=0x3c, .type=IO_READ},
        {.addr=0x5291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x2b5f, .a=0x82, .x=0x41, .y=0x52, .sp=0xea, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2b60, .a=0x04, .x=0x41, .y=0x52, .sp=0xea, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2b5f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2b5f, .value=0x3c, .type=IO_READ},
        {.addr=0x2b60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xba05, .a=0x92, .x=0xce, .y=0x41, .sp=0x96, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xba05, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xba06, .a=0x25, .x=0xce, .y=0x41, .sp=0x96, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xba05, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xba05, .value=0x3c, .type=IO_READ},
        {.addr=0xba06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x85a8, .a=0x38, .x=0x68, .y=0x38, .sp=0xd9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x85a8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85a9, .a=0x71, .x=0x68, .y=0x38, .sp=0xd9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x85a8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85a8, .value=0x3c, .type=IO_READ},
        {.addr=0x85a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xb7aa, .a=0x92, .x=0x42, .y=0xab, .sp=0xed, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb7aa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb7ab, .a=0x25, .x=0x42, .y=0xab, .sp=0xed, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb7aa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb7aa, .value=0x3c, .type=IO_READ},
        {.addr=0xb7ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x8b37, .a=0x92, .x=0x7c, .y=0xd1, .sp=0x49, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8b37, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8b38, .a=0x25, .x=0x7c, .y=0xd1, .sp=0x49, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8b37, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8b37, .value=0x3c, .type=IO_READ},
        {.addr=0x8b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf838, .a=0x56, .x=0xbe, .y=0xc9, .sp=0x85, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf838, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf839, .a=0xac, .x=0xbe, .y=0xc9, .sp=0x85, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf838, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf838, .value=0x3c, .type=IO_READ},
        {.addr=0xf839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x8d8c, .a=0x06, .x=0x82, .y=0xc7, .sp=0x3e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d8d, .a=0x0c, .x=0x82, .y=0xc7, .sp=0x3e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8d8c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d8c, .value=0x3c, .type=IO_READ},
        {.addr=0x8d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0f92, .a=0x1a, .x=0xab, .y=0x19, .sp=0xba, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0f92, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0f93, .a=0x35, .x=0xab, .y=0x19, .sp=0xba, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0f92, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0f92, .value=0x3c, .type=IO_READ},
        {.addr=0x0f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4b81, .a=0x41, .x=0x87, .y=0x2e, .sp=0xb8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4b81, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4b82, .a=0x82, .x=0x87, .y=0x2e, .sp=0xb8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4b81, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4b81, .value=0x3c, .type=IO_READ},
        {.addr=0x4b82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xcadc, .a=0x4e, .x=0x1c, .y=0xc7, .sp=0x2c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xcadc, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcadd, .a=0x9d, .x=0x1c, .y=0xc7, .sp=0x2c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcadc, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcadc, .value=0x3c, .type=IO_READ},
        {.addr=0xcadd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3c64, .a=0x72, .x=0x8b, .y=0x75, .sp=0xa9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3c64, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x3c65, .a=0xe4, .x=0x8b, .y=0x75, .sp=0xa9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3c64, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x3c64, .value=0x3c, .type=IO_READ},
        {.addr=0x3c65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xfeb8, .a=0x74, .x=0x9f, .y=0x76, .sp=0x03, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfeb8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfeb9, .a=0xe9, .x=0x9f, .y=0x76, .sp=0x03, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfeb8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfeb8, .value=0x3c, .type=IO_READ},
        {.addr=0xfeb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xf77a, .a=0xb3, .x=0x35, .y=0x45, .sp=0xbf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf77a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf77b, .a=0x66, .x=0x35, .y=0x45, .sp=0xbf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf77a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf77a, .value=0x3c, .type=IO_READ},
        {.addr=0xf77b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x6087, .a=0x2a, .x=0xb3, .y=0x75, .sp=0x6d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6087, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6088, .a=0x54, .x=0xb3, .y=0x75, .sp=0x6d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6087, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6087, .value=0x3c, .type=IO_READ},
        {.addr=0x6088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xb4b1, .a=0x49, .x=0xb9, .y=0x81, .sp=0xaf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb4b2, .a=0x92, .x=0xb9, .y=0x81, .sp=0xaf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb4b1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb4b1, .value=0x3c, .type=IO_READ},
        {.addr=0xb4b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x8d5b, .a=0x20, .x=0xd0, .y=0x72, .sp=0xd6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x8d5c, .a=0x40, .x=0xd0, .y=0x72, .sp=0xd6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x8d5b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x8d5b, .value=0x3c, .type=IO_READ},
        {.addr=0x8d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf60c, .a=0x84, .x=0x1e, .y=0x41, .sp=0x53, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf60c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf60d, .a=0x09, .x=0x1e, .y=0x41, .sp=0x53, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf60c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf60c, .value=0x3c, .type=IO_READ},
        {.addr=0xf60d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xfae9, .a=0xae, .x=0x54, .y=0x01, .sp=0x05, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xfae9, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfaea, .a=0x5c, .x=0x54, .y=0x01, .sp=0x05, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfae9, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfae9, .value=0x3c, .type=IO_READ},
        {.addr=0xfaea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x309c, .a=0xc7, .x=0xc3, .y=0x23, .sp=0xd9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x309c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x309d, .a=0x8e, .x=0xc3, .y=0x23, .sp=0xd9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x309c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x309c, .value=0x3c, .type=IO_READ},
        {.addr=0x309d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x5034, .a=0x21, .x=0x0b, .y=0xe9, .sp=0x46, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5034, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5035, .a=0x43, .x=0x0b, .y=0xe9, .sp=0x46, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5034, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5034, .value=0x3c, .type=IO_READ},
        {.addr=0x5035, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xea84, .a=0xe4, .x=0xc5, .y=0xdf, .sp=0x25, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xea84, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xea85, .a=0xc9, .x=0xc5, .y=0xdf, .sp=0x25, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xea84, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xea84, .value=0x3c, .type=IO_READ},
        {.addr=0xea85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xad8b, .a=0x7e, .x=0x3d, .y=0x69, .sp=0xa0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xad8b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xad8c, .a=0xfd, .x=0x3d, .y=0x69, .sp=0xa0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xad8b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xad8b, .value=0x3c, .type=IO_READ},
        {.addr=0xad8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xbaee, .a=0x1b, .x=0x80, .y=0xa4, .sp=0x28, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbaee, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xbaef, .a=0x36, .x=0x80, .y=0xa4, .sp=0x28, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbaee, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xbaee, .value=0x3c, .type=IO_READ},
        {.addr=0xbaef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xccbb, .a=0x14, .x=0x26, .y=0xeb, .sp=0x93, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xccbb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xccbc, .a=0x29, .x=0x26, .y=0xeb, .sp=0x93, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xccbb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xccbb, .value=0x3c, .type=IO_READ},
        {.addr=0xccbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xa378, .a=0xc2, .x=0xf1, .y=0x32, .sp=0xab, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa378, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa379, .a=0x85, .x=0xf1, .y=0x32, .sp=0xab, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa378, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa378, .value=0x3c, .type=IO_READ},
        {.addr=0xa379, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x5545, .a=0x63, .x=0x9a, .y=0xbb, .sp=0xea, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x5545, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5546, .a=0xc7, .x=0x9a, .y=0xbb, .sp=0xea, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5545, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5545, .value=0x3c, .type=IO_READ},
        {.addr=0x5546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x1bd1, .a=0xb1, .x=0xc2, .y=0xb6, .sp=0x39, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1bd2, .a=0x62, .x=0xc2, .y=0xb6, .sp=0x39, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1bd1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1bd1, .value=0x3c, .type=IO_READ},
        {.addr=0x1bd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x2f41, .a=0x5c, .x=0x96, .y=0x4b, .sp=0x2c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2f41, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2f42, .a=0xb8, .x=0x96, .y=0x4b, .sp=0x2c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2f41, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2f41, .value=0x3c, .type=IO_READ},
        {.addr=0x2f42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xb58a, .a=0xed, .x=0xe2, .y=0x8e, .sp=0xff, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb58a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb58b, .a=0xda, .x=0xe2, .y=0x8e, .sp=0xff, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb58a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb58a, .value=0x3c, .type=IO_READ},
        {.addr=0xb58b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xda35, .a=0xeb, .x=0x5a, .y=0x2d, .sp=0x06, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xda35, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xda36, .a=0xd7, .x=0x5a, .y=0x2d, .sp=0x06, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xda35, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xda35, .value=0x3c, .type=IO_READ},
        {.addr=0xda36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x74c3, .a=0xab, .x=0x70, .y=0x09, .sp=0x18, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x74c3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x74c4, .a=0x56, .x=0x70, .y=0x09, .sp=0x18, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x74c3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x74c3, .value=0x3c, .type=IO_READ},
        {.addr=0x74c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x0267, .a=0xac, .x=0xd7, .y=0xfd, .sp=0x0f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0267, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0268, .a=0x59, .x=0xd7, .y=0xfd, .sp=0x0f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0267, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0267, .value=0x3c, .type=IO_READ},
        {.addr=0x0268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb78c, .a=0xd0, .x=0xf0, .y=0x15, .sp=0x99, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb78c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb78d, .a=0xa1, .x=0xf0, .y=0x15, .sp=0x99, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb78c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb78c, .value=0x3c, .type=IO_READ},
        {.addr=0xb78d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x44c0, .a=0x3d, .x=0x32, .y=0xb6, .sp=0xfc, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x44c0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x44c1, .a=0x7b, .x=0x32, .y=0xb6, .sp=0xfc, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x44c0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x44c0, .value=0x3c, .type=IO_READ},
        {.addr=0x44c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x1786, .a=0xb9, .x=0x80, .y=0xf0, .sp=0x7d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1786, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1787, .a=0x73, .x=0x80, .y=0xf0, .sp=0x7d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1786, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1786, .value=0x3c, .type=IO_READ},
        {.addr=0x1787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xcfa8, .a=0x51, .x=0x9d, .y=0x1d, .sp=0xa2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcfa9, .a=0xa2, .x=0x9d, .y=0x1d, .sp=0xa2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcfa8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcfa8, .value=0x3c, .type=IO_READ},
        {.addr=0xcfa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xb227, .a=0xde, .x=0xc2, .y=0x55, .sp=0xdd, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb227, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb228, .a=0xbd, .x=0xc2, .y=0x55, .sp=0xdd, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb227, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb227, .value=0x3c, .type=IO_READ},
        {.addr=0xb228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xe454, .a=0x45, .x=0xa8, .y=0x94, .sp=0x1c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xe454, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe455, .a=0x8b, .x=0xa8, .y=0x94, .sp=0x1c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe454, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe454, .value=0x3c, .type=IO_READ},
        {.addr=0xe455, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3C, _3C_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x2105, .a=0xe6, .x=0x4e, .y=0xb5, .sp=0xa2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2105, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2106, .a=0xcd, .x=0x4e, .y=0xb5, .sp=0xa2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2105, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2105, .value=0x3c, .type=IO_READ},
        {.addr=0x2106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3C 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
