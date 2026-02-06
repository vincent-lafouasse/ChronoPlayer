#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_3D, _3D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x535b, .a=0x91, .x=0x50, .y=0xda, .sp=0xfa, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x535b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x535c, .a=0x91, .x=0x51, .y=0xda, .sp=0xfa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x535b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x535b, .value=0x3d, .type=IO_READ},
        {.addr=0x535c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x664f, .a=0x0e, .x=0x13, .y=0xc8, .sp=0x1e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x664f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6650, .a=0x0e, .x=0x14, .y=0xc8, .sp=0x1e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x664f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x664f, .value=0x3d, .type=IO_READ},
        {.addr=0x6650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0002) {
    const struct CPU_State initial_cpu = {.pc=0xb5c1, .a=0x33, .x=0x32, .y=0x23, .sp=0x72, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb5c2, .a=0x33, .x=0x33, .y=0x23, .sp=0x72, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb5c1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb5c1, .value=0x3d, .type=IO_READ},
        {.addr=0xb5c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x59b3, .a=0x3c, .x=0x31, .y=0x05, .sp=0xfa, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x59b3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x59b4, .a=0x3c, .x=0x32, .y=0x05, .sp=0xfa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x59b3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x59b3, .value=0x3d, .type=IO_READ},
        {.addr=0x59b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xcc1d, .a=0xea, .x=0x7f, .y=0x44, .sp=0xda, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcc1e, .a=0xea, .x=0x80, .y=0x44, .sp=0xda, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xcc1d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcc1d, .value=0x3d, .type=IO_READ},
        {.addr=0xcc1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0005) {
    const struct CPU_State initial_cpu = {.pc=0x554b, .a=0x3c, .x=0x8f, .y=0x3c, .sp=0x05, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x554b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x554c, .a=0x3c, .x=0x90, .y=0x3c, .sp=0x05, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x554b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x554b, .value=0x3d, .type=IO_READ},
        {.addr=0x554c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x0626, .a=0xfb, .x=0xf4, .y=0xa8, .sp=0x52, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0626, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0627, .a=0xfb, .x=0xf5, .y=0xa8, .sp=0x52, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0626, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0626, .value=0x3d, .type=IO_READ},
        {.addr=0x0627, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x0b83, .a=0x2a, .x=0x77, .y=0x5c, .sp=0x49, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b83, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0b84, .a=0x2a, .x=0x78, .y=0x5c, .sp=0x49, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0b83, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0b83, .value=0x3d, .type=IO_READ},
        {.addr=0x0b84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0008) {
    const struct CPU_State initial_cpu = {.pc=0xc1dd, .a=0x15, .x=0xa6, .y=0x4b, .sp=0x09, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc1dd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc1de, .a=0x15, .x=0xa7, .y=0x4b, .sp=0x09, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc1dd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc1dd, .value=0x3d, .type=IO_READ},
        {.addr=0xc1de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xc4b7, .a=0xa6, .x=0x40, .y=0xc9, .sp=0xf8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xc4b7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc4b8, .a=0xa6, .x=0x41, .y=0xc9, .sp=0xf8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc4b7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc4b7, .value=0x3d, .type=IO_READ},
        {.addr=0xc4b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x7a13, .a=0x43, .x=0x58, .y=0x7e, .sp=0x71, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7a13, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a14, .a=0x43, .x=0x59, .y=0x7e, .sp=0x71, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7a13, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a13, .value=0x3d, .type=IO_READ},
        {.addr=0x7a14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x590b, .a=0x90, .x=0x27, .y=0x0f, .sp=0x16, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x590b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x590c, .a=0x90, .x=0x28, .y=0x0f, .sp=0x16, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x590b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x590b, .value=0x3d, .type=IO_READ},
        {.addr=0x590c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x0328, .a=0x60, .x=0xff, .y=0x5e, .sp=0xce, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0328, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0329, .a=0x60, .x=0x00, .y=0x5e, .sp=0xce, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0328, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0328, .value=0x3d, .type=IO_READ},
        {.addr=0x0329, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4fe2, .a=0x65, .x=0xcb, .y=0x62, .sp=0xf0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4fe3, .a=0x65, .x=0xcc, .y=0x62, .sp=0xf0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4fe2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4fe2, .value=0x3d, .type=IO_READ},
        {.addr=0x4fe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000E) {
    const struct CPU_State initial_cpu = {.pc=0x87a2, .a=0x6d, .x=0x4b, .y=0xb5, .sp=0x84, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x87a2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x87a3, .a=0x6d, .x=0x4c, .y=0xb5, .sp=0x84, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x87a2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x87a2, .value=0x3d, .type=IO_READ},
        {.addr=0x87a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x4889, .a=0xe8, .x=0x6a, .y=0x7c, .sp=0xfe, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4889, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x488a, .a=0xe8, .x=0x6b, .y=0x7c, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4889, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4889, .value=0x3d, .type=IO_READ},
        {.addr=0x488a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x4e63, .a=0x31, .x=0x9d, .y=0xa4, .sp=0x62, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4e63, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4e64, .a=0x31, .x=0x9e, .y=0xa4, .sp=0x62, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4e63, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4e63, .value=0x3d, .type=IO_READ},
        {.addr=0x4e64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x4165, .a=0x68, .x=0xdd, .y=0x49, .sp=0xb8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4165, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4166, .a=0x68, .x=0xde, .y=0x49, .sp=0xb8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4165, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4165, .value=0x3d, .type=IO_READ},
        {.addr=0x4166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x560a, .a=0xa2, .x=0x3b, .y=0x71, .sp=0x9f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x560a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x560b, .a=0xa2, .x=0x3c, .y=0x71, .sp=0x9f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x560a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x560a, .value=0x3d, .type=IO_READ},
        {.addr=0x560b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0398, .a=0xaa, .x=0x7f, .y=0x2d, .sp=0x5b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0398, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0399, .a=0xaa, .x=0x80, .y=0x2d, .sp=0x5b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0398, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0398, .value=0x3d, .type=IO_READ},
        {.addr=0x0399, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0014) {
    const struct CPU_State initial_cpu = {.pc=0x417f, .a=0x7a, .x=0x9b, .y=0x31, .sp=0xa1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x417f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4180, .a=0x7a, .x=0x9c, .y=0x31, .sp=0xa1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x417f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x417f, .value=0x3d, .type=IO_READ},
        {.addr=0x4180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5c22, .a=0x8f, .x=0xdc, .y=0x1e, .sp=0x0c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5c22, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5c23, .a=0x8f, .x=0xdd, .y=0x1e, .sp=0x0c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5c22, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5c22, .value=0x3d, .type=IO_READ},
        {.addr=0x5c23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7941, .a=0x96, .x=0x1b, .y=0x19, .sp=0xb6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7941, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7942, .a=0x96, .x=0x1c, .y=0x19, .sp=0xb6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7941, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7941, .value=0x3d, .type=IO_READ},
        {.addr=0x7942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x0f4c, .a=0x0d, .x=0xfa, .y=0xe8, .sp=0xc7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0f4d, .a=0x0d, .x=0xfb, .y=0xe8, .sp=0xc7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0f4c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0f4c, .value=0x3d, .type=IO_READ},
        {.addr=0x0f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0018) {
    const struct CPU_State initial_cpu = {.pc=0xac81, .a=0x7a, .x=0x17, .y=0xe2, .sp=0x74, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xac81, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xac82, .a=0x7a, .x=0x18, .y=0xe2, .sp=0x74, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xac81, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xac81, .value=0x3d, .type=IO_READ},
        {.addr=0xac82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x7605, .a=0xb2, .x=0xa2, .y=0xe4, .sp=0x3a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7605, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7606, .a=0xb2, .x=0xa3, .y=0xe4, .sp=0x3a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7605, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7605, .value=0x3d, .type=IO_READ},
        {.addr=0x7606, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001A) {
    const struct CPU_State initial_cpu = {.pc=0xb2ef, .a=0x7b, .x=0x24, .y=0xce, .sp=0x5a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb2f0, .a=0x7b, .x=0x25, .y=0xce, .sp=0x5a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb2ef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb2ef, .value=0x3d, .type=IO_READ},
        {.addr=0xb2f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001B) {
    const struct CPU_State initial_cpu = {.pc=0xdddf, .a=0x89, .x=0x1a, .y=0x99, .sp=0xc9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdddf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdde0, .a=0x89, .x=0x1b, .y=0x99, .sp=0xc9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xdddf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdddf, .value=0x3d, .type=IO_READ},
        {.addr=0xdde0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001C) {
    const struct CPU_State initial_cpu = {.pc=0xcc20, .a=0x4c, .x=0x5a, .y=0xcc, .sp=0xf7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xcc20, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcc21, .a=0x4c, .x=0x5b, .y=0xcc, .sp=0xf7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcc20, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcc20, .value=0x3d, .type=IO_READ},
        {.addr=0xcc21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5519, .a=0xdc, .x=0xe8, .y=0xc7, .sp=0xcd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5519, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x551a, .a=0xdc, .x=0xe9, .y=0xc7, .sp=0xcd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5519, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5519, .value=0x3d, .type=IO_READ},
        {.addr=0x551a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x4a58, .a=0x27, .x=0x4c, .y=0x85, .sp=0x97, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4a58, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4a59, .a=0x27, .x=0x4d, .y=0x85, .sp=0x97, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4a58, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4a58, .value=0x3d, .type=IO_READ},
        {.addr=0x4a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xcad4, .a=0xfa, .x=0x8d, .y=0xd5, .sp=0x25, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xcad4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcad5, .a=0xfa, .x=0x8e, .y=0xd5, .sp=0x25, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcad4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcad4, .value=0x3d, .type=IO_READ},
        {.addr=0xcad5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x9840, .a=0x46, .x=0x19, .y=0x8f, .sp=0x73, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9840, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9841, .a=0x46, .x=0x1a, .y=0x8f, .sp=0x73, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9840, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9840, .value=0x3d, .type=IO_READ},
        {.addr=0x9841, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x9671, .a=0x20, .x=0xe7, .y=0x92, .sp=0xc6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9671, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9672, .a=0x20, .x=0xe8, .y=0x92, .sp=0xc6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9671, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9671, .value=0x3d, .type=IO_READ},
        {.addr=0x9672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0022) {
    const struct CPU_State initial_cpu = {.pc=0xdcfa, .a=0x41, .x=0x9f, .y=0x1b, .sp=0x57, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xdcfa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdcfb, .a=0x41, .x=0xa0, .y=0x1b, .sp=0x57, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdcfa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdcfa, .value=0x3d, .type=IO_READ},
        {.addr=0xdcfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x643a, .a=0x8f, .x=0x24, .y=0x50, .sp=0x03, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x643a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x643b, .a=0x8f, .x=0x25, .y=0x50, .sp=0x03, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x643a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x643a, .value=0x3d, .type=IO_READ},
        {.addr=0x643b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x010d, .a=0xa0, .x=0xa4, .y=0x84, .sp=0x2c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x010e, .a=0xa0, .x=0xa5, .y=0x84, .sp=0x2c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x010d, .value=0x3d, .type=IO_READ},
        {.addr=0x010e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x5d46, .a=0x52, .x=0x23, .y=0xfa, .sp=0xbf, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5d46, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5d47, .a=0x52, .x=0x24, .y=0xfa, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5d46, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5d46, .value=0x3d, .type=IO_READ},
        {.addr=0x5d47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0026) {
    const struct CPU_State initial_cpu = {.pc=0xea3f, .a=0x52, .x=0xda, .y=0xa6, .sp=0xc7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xea3f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xea40, .a=0x52, .x=0xdb, .y=0xa6, .sp=0xc7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xea3f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xea3f, .value=0x3d, .type=IO_READ},
        {.addr=0xea40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x8ce5, .a=0xf1, .x=0x60, .y=0xd0, .sp=0x43, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8ce6, .a=0xf1, .x=0x61, .y=0xd0, .sp=0x43, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8ce5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce5, .value=0x3d, .type=IO_READ},
        {.addr=0x8ce6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0028) {
    const struct CPU_State initial_cpu = {.pc=0x6f99, .a=0x2b, .x=0xb0, .y=0x1b, .sp=0x39, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6f99, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6f9a, .a=0x2b, .x=0xb1, .y=0x1b, .sp=0x39, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6f99, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6f99, .value=0x3d, .type=IO_READ},
        {.addr=0x6f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0029) {
    const struct CPU_State initial_cpu = {.pc=0xb580, .a=0xd6, .x=0x4f, .y=0x3c, .sp=0xbd, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xb580, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb581, .a=0xd6, .x=0x50, .y=0x3c, .sp=0xbd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb580, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb580, .value=0x3d, .type=IO_READ},
        {.addr=0xb581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x58a9, .a=0xe9, .x=0x9b, .y=0x30, .sp=0xfc, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x58a9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x58aa, .a=0xe9, .x=0x9c, .y=0x30, .sp=0xfc, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x58a9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x58a9, .value=0x3d, .type=IO_READ},
        {.addr=0x58aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xb8de, .a=0xee, .x=0x66, .y=0x7d, .sp=0xca, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb8de, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb8df, .a=0xee, .x=0x67, .y=0x7d, .sp=0xca, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb8de, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb8de, .value=0x3d, .type=IO_READ},
        {.addr=0xb8df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x306f, .a=0xee, .x=0xdc, .y=0x7b, .sp=0x61, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x306f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3070, .a=0xee, .x=0xdd, .y=0x7b, .sp=0x61, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x306f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x306f, .value=0x3d, .type=IO_READ},
        {.addr=0x3070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3e2b, .a=0x77, .x=0xa5, .y=0x47, .sp=0xed, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3e2b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3e2c, .a=0x77, .x=0xa6, .y=0x47, .sp=0xed, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3e2b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3e2b, .value=0x3d, .type=IO_READ},
        {.addr=0x3e2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x59e3, .a=0x7e, .x=0x02, .y=0x34, .sp=0x43, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x59e3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x59e4, .a=0x7e, .x=0x03, .y=0x34, .sp=0x43, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x59e3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x59e3, .value=0x3d, .type=IO_READ},
        {.addr=0x59e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x55ec, .a=0x80, .x=0x63, .y=0x3e, .sp=0xe1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x55ec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x55ed, .a=0x80, .x=0x64, .y=0x3e, .sp=0xe1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x55ec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x55ec, .value=0x3d, .type=IO_READ},
        {.addr=0x55ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x50f6, .a=0xbb, .x=0x5a, .y=0x10, .sp=0x08, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x50f6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x50f7, .a=0xbb, .x=0x5b, .y=0x10, .sp=0x08, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x50f6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x50f6, .value=0x3d, .type=IO_READ},
        {.addr=0x50f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0031) {
    const struct CPU_State initial_cpu = {.pc=0xe1fc, .a=0xdb, .x=0xc2, .y=0xe9, .sp=0xb1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe1fc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe1fd, .a=0xdb, .x=0xc3, .y=0xe9, .sp=0xb1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe1fc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe1fc, .value=0x3d, .type=IO_READ},
        {.addr=0xe1fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x65d1, .a=0xa3, .x=0x86, .y=0xc3, .sp=0xda, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x65d1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x65d2, .a=0xa3, .x=0x87, .y=0xc3, .sp=0xda, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x65d1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x65d1, .value=0x3d, .type=IO_READ},
        {.addr=0x65d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0033) {
    const struct CPU_State initial_cpu = {.pc=0xbee3, .a=0xd8, .x=0xe7, .y=0xc5, .sp=0xa3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xbee3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbee4, .a=0xd8, .x=0xe8, .y=0xc5, .sp=0xa3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbee3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbee3, .value=0x3d, .type=IO_READ},
        {.addr=0xbee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa6b4, .a=0x21, .x=0x8c, .y=0x71, .sp=0x54, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa6b5, .a=0x21, .x=0x8d, .y=0x71, .sp=0x54, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa6b4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa6b4, .value=0x3d, .type=IO_READ},
        {.addr=0xa6b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x1b2b, .a=0x14, .x=0x74, .y=0x63, .sp=0x84, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1b2b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1b2c, .a=0x14, .x=0x75, .y=0x63, .sp=0x84, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1b2b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1b2b, .value=0x3d, .type=IO_READ},
        {.addr=0x1b2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x0c98, .a=0xb0, .x=0x62, .y=0x86, .sp=0x19, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0c98, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0c99, .a=0xb0, .x=0x63, .y=0x86, .sp=0x19, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0c98, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0c98, .value=0x3d, .type=IO_READ},
        {.addr=0x0c99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xfb5c, .a=0xb1, .x=0x18, .y=0x90, .sp=0x53, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xfb5c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfb5d, .a=0xb1, .x=0x19, .y=0x90, .sp=0x53, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfb5c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfb5c, .value=0x3d, .type=IO_READ},
        {.addr=0xfb5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3bbd, .a=0x77, .x=0x6c, .y=0x45, .sp=0xc9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x3bbd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3bbe, .a=0x77, .x=0x6d, .y=0x45, .sp=0xc9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3bbd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3bbd, .value=0x3d, .type=IO_READ},
        {.addr=0x3bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x596a, .a=0x27, .x=0x30, .y=0x9d, .sp=0x88, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x596a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x596b, .a=0x27, .x=0x31, .y=0x9d, .sp=0x88, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x596a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x596a, .value=0x3d, .type=IO_READ},
        {.addr=0x596b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003A) {
    const struct CPU_State initial_cpu = {.pc=0x6f45, .a=0x7b, .x=0x2d, .y=0x31, .sp=0x38, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f45, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6f46, .a=0x7b, .x=0x2e, .y=0x31, .sp=0x38, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6f45, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6f45, .value=0x3d, .type=IO_READ},
        {.addr=0x6f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003B) {
    const struct CPU_State initial_cpu = {.pc=0xa712, .a=0x4b, .x=0x25, .y=0xc0, .sp=0x9c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa712, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa713, .a=0x4b, .x=0x26, .y=0xc0, .sp=0x9c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa712, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa712, .value=0x3d, .type=IO_READ},
        {.addr=0xa713, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003C) {
    const struct CPU_State initial_cpu = {.pc=0xaaa8, .a=0xd9, .x=0x30, .y=0xff, .sp=0x8e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xaaa9, .a=0xd9, .x=0x31, .y=0xff, .sp=0x8e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xaaa8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xaaa8, .value=0x3d, .type=IO_READ},
        {.addr=0xaaa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x7c03, .a=0x3f, .x=0x94, .y=0x04, .sp=0x80, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7c03, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7c04, .a=0x3f, .x=0x95, .y=0x04, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7c03, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7c03, .value=0x3d, .type=IO_READ},
        {.addr=0x7c04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x4710, .a=0xd1, .x=0x6e, .y=0x21, .sp=0x23, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4710, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4711, .a=0xd1, .x=0x6f, .y=0x21, .sp=0x23, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4710, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4710, .value=0x3d, .type=IO_READ},
        {.addr=0x4711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x63d4, .a=0xf5, .x=0xd5, .y=0x73, .sp=0xa0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x63d4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x63d5, .a=0xf5, .x=0xd6, .y=0x73, .sp=0xa0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x63d4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x63d4, .value=0x3d, .type=IO_READ},
        {.addr=0x63d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x3d91, .a=0x5f, .x=0x3d, .y=0x4d, .sp=0xa1, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3d91, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3d92, .a=0x5f, .x=0x3e, .y=0x4d, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3d91, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3d91, .value=0x3d, .type=IO_READ},
        {.addr=0x3d92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0041) {
    const struct CPU_State initial_cpu = {.pc=0xbee0, .a=0xb2, .x=0xed, .y=0xc5, .sp=0x75, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xbee0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbee1, .a=0xb2, .x=0xee, .y=0xc5, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbee0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbee0, .value=0x3d, .type=IO_READ},
        {.addr=0xbee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x3010, .a=0x1d, .x=0x4e, .y=0x4a, .sp=0x67, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3010, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3011, .a=0x1d, .x=0x4f, .y=0x4a, .sp=0x67, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3010, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3010, .value=0x3d, .type=IO_READ},
        {.addr=0x3011, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0043) {
    const struct CPU_State initial_cpu = {.pc=0x2e26, .a=0x61, .x=0xbb, .y=0xb9, .sp=0xdd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x2e26, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2e27, .a=0x61, .x=0xbc, .y=0xb9, .sp=0xdd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2e26, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2e26, .value=0x3d, .type=IO_READ},
        {.addr=0x2e27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0044) {
    const struct CPU_State initial_cpu = {.pc=0xe9b6, .a=0xf5, .x=0x4a, .y=0xd4, .sp=0xb4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe9b7, .a=0xf5, .x=0x4b, .y=0xd4, .sp=0xb4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe9b6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe9b6, .value=0x3d, .type=IO_READ},
        {.addr=0xe9b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x9be9, .a=0xc6, .x=0x4c, .y=0x5f, .sp=0xbb, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9be9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9bea, .a=0xc6, .x=0x4d, .y=0x5f, .sp=0xbb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9be9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9be9, .value=0x3d, .type=IO_READ},
        {.addr=0x9bea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x1a71, .a=0x31, .x=0x36, .y=0x23, .sp=0x0d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1a71, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1a72, .a=0x31, .x=0x37, .y=0x23, .sp=0x0d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1a71, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1a71, .value=0x3d, .type=IO_READ},
        {.addr=0x1a72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0047) {
    const struct CPU_State initial_cpu = {.pc=0x0d7c, .a=0x61, .x=0x6b, .y=0xf2, .sp=0x53, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0d7c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0d7d, .a=0x61, .x=0x6c, .y=0xf2, .sp=0x53, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0d7c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0d7c, .value=0x3d, .type=IO_READ},
        {.addr=0x0d7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x3954, .a=0x07, .x=0x26, .y=0x2e, .sp=0x1c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x3954, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3955, .a=0x07, .x=0x27, .y=0x2e, .sp=0x1c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3954, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3954, .value=0x3d, .type=IO_READ},
        {.addr=0x3955, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0049) {
    const struct CPU_State initial_cpu = {.pc=0xfac0, .a=0x7d, .x=0x1f, .y=0xdc, .sp=0x78, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xfac0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfac1, .a=0x7d, .x=0x20, .y=0xdc, .sp=0x78, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xfac0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfac0, .value=0x3d, .type=IO_READ},
        {.addr=0xfac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf9e8, .a=0xe6, .x=0x5f, .y=0x13, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf9e9, .a=0xe6, .x=0x60, .y=0x13, .sp=0xb6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf9e8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf9e8, .value=0x3d, .type=IO_READ},
        {.addr=0xf9e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004B) {
    const struct CPU_State initial_cpu = {.pc=0xb708, .a=0xac, .x=0x54, .y=0x36, .sp=0x56, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb708, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb709, .a=0xac, .x=0x55, .y=0x36, .sp=0x56, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb708, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb708, .value=0x3d, .type=IO_READ},
        {.addr=0xb709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x1f3b, .a=0xe3, .x=0xa0, .y=0x59, .sp=0xb4, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1f3b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1f3c, .a=0xe3, .x=0xa1, .y=0x59, .sp=0xb4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1f3b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1f3b, .value=0x3d, .type=IO_READ},
        {.addr=0x1f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004D) {
    const struct CPU_State initial_cpu = {.pc=0xfd5e, .a=0x21, .x=0x74, .y=0x24, .sp=0x4f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfd5f, .a=0x21, .x=0x75, .y=0x24, .sp=0x4f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfd5e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfd5e, .value=0x3d, .type=IO_READ},
        {.addr=0xfd5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x076e, .a=0x9d, .x=0xd1, .y=0x7b, .sp=0x93, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x076e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x076f, .a=0x9d, .x=0xd2, .y=0x7b, .sp=0x93, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x076e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x076e, .value=0x3d, .type=IO_READ},
        {.addr=0x076f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_004F) {
    const struct CPU_State initial_cpu = {.pc=0xfd2b, .a=0x74, .x=0x8a, .y=0xfb, .sp=0xc4, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfd2c, .a=0x74, .x=0x8b, .y=0xfb, .sp=0xc4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfd2b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfd2b, .value=0x3d, .type=IO_READ},
        {.addr=0xfd2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0050) {
    const struct CPU_State initial_cpu = {.pc=0xf95a, .a=0x46, .x=0xb0, .y=0x55, .sp=0x48, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf95a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf95b, .a=0x46, .x=0xb1, .y=0x55, .sp=0x48, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf95a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf95a, .value=0x3d, .type=IO_READ},
        {.addr=0xf95b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x41aa, .a=0xc5, .x=0xc7, .y=0x8d, .sp=0x1f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x41aa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0xc5, .x=0xc8, .y=0x8d, .sp=0x1f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x41aa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x41aa, .value=0x3d, .type=IO_READ},
        {.addr=0x41ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x02ab, .a=0xfc, .x=0x00, .y=0xf3, .sp=0x6d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x02ab, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x02ac, .a=0xfc, .x=0x01, .y=0xf3, .sp=0x6d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x02ab, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x02ab, .value=0x3d, .type=IO_READ},
        {.addr=0x02ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x4a0d, .a=0xb3, .x=0xe8, .y=0x4c, .sp=0x9d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4a0d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4a0e, .a=0xb3, .x=0xe9, .y=0x4c, .sp=0x9d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4a0d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4a0d, .value=0x3d, .type=IO_READ},
        {.addr=0x4a0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x0e57, .a=0x37, .x=0x80, .y=0x77, .sp=0xda, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0e57, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0e58, .a=0x37, .x=0x81, .y=0x77, .sp=0xda, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0e57, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0e57, .value=0x3d, .type=IO_READ},
        {.addr=0x0e58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0055) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0x11, .x=0x6a, .y=0x24, .sp=0x2a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa973, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0x11, .x=0x6b, .y=0x24, .sp=0x2a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa973, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0x3d, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x83c1, .a=0x8e, .x=0x3f, .y=0xa3, .sp=0xae, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x83c1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x83c2, .a=0x8e, .x=0x40, .y=0xa3, .sp=0xae, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x83c1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x83c1, .value=0x3d, .type=IO_READ},
        {.addr=0x83c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x60f7, .a=0xee, .x=0xed, .y=0x19, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x60f7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x60f8, .a=0xee, .x=0xee, .y=0x19, .sp=0xf9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x60f7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x60f7, .value=0x3d, .type=IO_READ},
        {.addr=0x60f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0058) {
    const struct CPU_State initial_cpu = {.pc=0xb95f, .a=0xf8, .x=0x56, .y=0x41, .sp=0xe0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xb95f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb960, .a=0xf8, .x=0x57, .y=0x41, .sp=0xe0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb95f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb95f, .value=0x3d, .type=IO_READ},
        {.addr=0xb960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0059) {
    const struct CPU_State initial_cpu = {.pc=0xf17c, .a=0xb4, .x=0x8d, .y=0xce, .sp=0x1d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf17c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf17d, .a=0xb4, .x=0x8e, .y=0xce, .sp=0x1d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf17c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf17c, .value=0x3d, .type=IO_READ},
        {.addr=0xf17d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005A) {
    const struct CPU_State initial_cpu = {.pc=0x614b, .a=0x54, .x=0x1e, .y=0x65, .sp=0xd5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x614b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x614c, .a=0x54, .x=0x1f, .y=0x65, .sp=0xd5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x614b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x614b, .value=0x3d, .type=IO_READ},
        {.addr=0x614c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x186e, .a=0xa8, .x=0xf5, .y=0xc5, .sp=0x23, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x186e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x186f, .a=0xa8, .x=0xf6, .y=0xc5, .sp=0x23, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x186e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x186e, .value=0x3d, .type=IO_READ},
        {.addr=0x186f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x3111, .a=0x59, .x=0xf3, .y=0xb2, .sp=0x64, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3111, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3112, .a=0x59, .x=0xf4, .y=0xb2, .sp=0x64, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3111, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3111, .value=0x3d, .type=IO_READ},
        {.addr=0x3112, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x5865, .a=0x9b, .x=0xff, .y=0x10, .sp=0x47, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5865, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5866, .a=0x9b, .x=0x00, .y=0x10, .sp=0x47, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x5865, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5865, .value=0x3d, .type=IO_READ},
        {.addr=0x5866, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x4591, .a=0xe9, .x=0x7f, .y=0x56, .sp=0x66, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4591, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4592, .a=0xe9, .x=0x80, .y=0x56, .sp=0x66, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4591, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4591, .value=0x3d, .type=IO_READ},
        {.addr=0x4592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_005F) {
    const struct CPU_State initial_cpu = {.pc=0xf160, .a=0x5d, .x=0xcc, .y=0xf5, .sp=0x6c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf160, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf161, .a=0x5d, .x=0xcd, .y=0xf5, .sp=0x6c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf160, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf160, .value=0x3d, .type=IO_READ},
        {.addr=0xf161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x7a4c, .a=0x5c, .x=0x32, .y=0x17, .sp=0x8f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7a4c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a4d, .a=0x5c, .x=0x33, .y=0x17, .sp=0x8f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7a4c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a4c, .value=0x3d, .type=IO_READ},
        {.addr=0x7a4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x8d24, .a=0xb7, .x=0xc6, .y=0x0c, .sp=0x9d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8d24, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8d25, .a=0xb7, .x=0xc7, .y=0x0c, .sp=0x9d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8d24, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8d24, .value=0x3d, .type=IO_READ},
        {.addr=0x8d25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3dd3, .a=0x82, .x=0x76, .y=0x52, .sp=0x10, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3dd4, .a=0x82, .x=0x77, .y=0x52, .sp=0x10, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3dd3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3dd3, .value=0x3d, .type=IO_READ},
        {.addr=0x3dd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x8de7, .a=0x90, .x=0xef, .y=0x46, .sp=0x82, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8de7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8de8, .a=0x90, .x=0xf0, .y=0x46, .sp=0x82, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8de7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8de7, .value=0x3d, .type=IO_READ},
        {.addr=0x8de8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb875, .a=0x37, .x=0xd2, .y=0x63, .sp=0xd5, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb875, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb876, .a=0x37, .x=0xd3, .y=0x63, .sp=0xd5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb875, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb875, .value=0x3d, .type=IO_READ},
        {.addr=0xb876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xf22e, .a=0xcc, .x=0xf0, .y=0x9d, .sp=0x1f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf22e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf22f, .a=0xcc, .x=0xf1, .y=0x9d, .sp=0x1f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf22e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf22e, .value=0x3d, .type=IO_READ},
        {.addr=0xf22f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x54d1, .a=0x78, .x=0x67, .y=0xac, .sp=0xce, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x54d1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x54d2, .a=0x78, .x=0x68, .y=0xac, .sp=0xce, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x54d1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x54d1, .value=0x3d, .type=IO_READ},
        {.addr=0x54d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0067) {
    const struct CPU_State initial_cpu = {.pc=0xdf04, .a=0xaf, .x=0x91, .y=0xa7, .sp=0x48, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdf04, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdf05, .a=0xaf, .x=0x92, .y=0xa7, .sp=0x48, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xdf04, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdf04, .value=0x3d, .type=IO_READ},
        {.addr=0xdf05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0068) {
    const struct CPU_State initial_cpu = {.pc=0xedf9, .a=0x6a, .x=0x95, .y=0x9a, .sp=0x2f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xedf9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xedfa, .a=0x6a, .x=0x96, .y=0x9a, .sp=0x2f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xedf9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xedf9, .value=0x3d, .type=IO_READ},
        {.addr=0xedfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7e86, .a=0x87, .x=0x6a, .y=0xdb, .sp=0x4e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7e86, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7e87, .a=0x87, .x=0x6b, .y=0xdb, .sp=0x4e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7e86, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7e86, .value=0x3d, .type=IO_READ},
        {.addr=0x7e87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x217c, .a=0x25, .x=0x31, .y=0xf1, .sp=0xb4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x217c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x217d, .a=0x25, .x=0x32, .y=0xf1, .sp=0xb4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x217c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x217c, .value=0x3d, .type=IO_READ},
        {.addr=0x217d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x428e, .a=0xe8, .x=0x19, .y=0x5e, .sp=0xa7, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x428e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x428f, .a=0xe8, .x=0x1a, .y=0x5e, .sp=0xa7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x428e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x428e, .value=0x3d, .type=IO_READ},
        {.addr=0x428f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006C) {
    const struct CPU_State initial_cpu = {.pc=0xfdd9, .a=0x43, .x=0xf6, .y=0xd2, .sp=0xc4, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfdda, .a=0x43, .x=0xf7, .y=0xd2, .sp=0xc4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfdd9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfdd9, .value=0x3d, .type=IO_READ},
        {.addr=0xfdda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x1f23, .a=0xf9, .x=0x0e, .y=0x65, .sp=0x17, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1f23, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1f24, .a=0xf9, .x=0x0f, .y=0x65, .sp=0x17, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1f23, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1f23, .value=0x3d, .type=IO_READ},
        {.addr=0x1f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006E) {
    const struct CPU_State initial_cpu = {.pc=0x9ad0, .a=0x4f, .x=0xac, .y=0xc8, .sp=0xb3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9ad1, .a=0x4f, .x=0xad, .y=0xc8, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9ad0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ad0, .value=0x3d, .type=IO_READ},
        {.addr=0x9ad1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x75ff, .a=0x70, .x=0x21, .y=0x25, .sp=0x35, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x75ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7600, .a=0x70, .x=0x22, .y=0x25, .sp=0x35, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x75ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x75ff, .value=0x3d, .type=IO_READ},
        {.addr=0x7600, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x4155, .a=0xb2, .x=0x98, .y=0x88, .sp=0x90, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4155, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4156, .a=0xb2, .x=0x99, .y=0x88, .sp=0x90, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4155, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4155, .value=0x3d, .type=IO_READ},
        {.addr=0x4156, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0071) {
    const struct CPU_State initial_cpu = {.pc=0xa145, .a=0xa0, .x=0xce, .y=0x0f, .sp=0x61, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa145, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa146, .a=0xa0, .x=0xcf, .y=0x0f, .sp=0x61, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa145, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa145, .value=0x3d, .type=IO_READ},
        {.addr=0xa146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x54cf, .a=0x3c, .x=0x80, .y=0x0c, .sp=0xab, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x54cf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x54d0, .a=0x3c, .x=0x81, .y=0x0c, .sp=0xab, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x54cf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x54cf, .value=0x3d, .type=IO_READ},
        {.addr=0x54d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1eb9, .a=0x21, .x=0x6f, .y=0xba, .sp=0x64, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0x21, .x=0x70, .y=0xba, .sp=0x64, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1eb9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1eb9, .value=0x3d, .type=IO_READ},
        {.addr=0x1eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0074) {
    const struct CPU_State initial_cpu = {.pc=0xa14e, .a=0x3f, .x=0xa1, .y=0xae, .sp=0xdc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa14e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa14f, .a=0x3f, .x=0xa2, .y=0xae, .sp=0xdc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa14e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa14e, .value=0x3d, .type=IO_READ},
        {.addr=0xa14f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xca0d, .a=0x2f, .x=0x12, .y=0x1d, .sp=0x22, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xca0d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xca0e, .a=0x2f, .x=0x13, .y=0x1d, .sp=0x22, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xca0d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xca0d, .value=0x3d, .type=IO_READ},
        {.addr=0xca0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0076) {
    const struct CPU_State initial_cpu = {.pc=0xebca, .a=0xdc, .x=0x85, .y=0x53, .sp=0x72, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xebca, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xebcb, .a=0xdc, .x=0x86, .y=0x53, .sp=0x72, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xebca, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xebca, .value=0x3d, .type=IO_READ},
        {.addr=0xebcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x9e2c, .a=0x35, .x=0x4b, .y=0x97, .sp=0x88, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9e2c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9e2d, .a=0x35, .x=0x4c, .y=0x97, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9e2c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9e2c, .value=0x3d, .type=IO_READ},
        {.addr=0x9e2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x7b32, .a=0x56, .x=0x31, .y=0xfa, .sp=0xd4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7b32, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b33, .a=0x56, .x=0x32, .y=0xfa, .sp=0xd4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7b32, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b32, .value=0x3d, .type=IO_READ},
        {.addr=0x7b33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0079) {
    const struct CPU_State initial_cpu = {.pc=0x07dc, .a=0x40, .x=0x45, .y=0xf7, .sp=0xc5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x07dc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x07dd, .a=0x40, .x=0x46, .y=0xf7, .sp=0xc5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x07dc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x07dc, .value=0x3d, .type=IO_READ},
        {.addr=0x07dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007A) {
    const struct CPU_State initial_cpu = {.pc=0xb00f, .a=0x46, .x=0x9d, .y=0xf0, .sp=0x83, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xb00f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb010, .a=0x46, .x=0x9e, .y=0xf0, .sp=0x83, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb00f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb00f, .value=0x3d, .type=IO_READ},
        {.addr=0xb010, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007B) {
    const struct CPU_State initial_cpu = {.pc=0xb987, .a=0x3a, .x=0xa2, .y=0x48, .sp=0x95, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb987, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb988, .a=0x3a, .x=0xa3, .y=0x48, .sp=0x95, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb987, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb987, .value=0x3d, .type=IO_READ},
        {.addr=0xb988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x73bc, .a=0x4a, .x=0x69, .y=0x02, .sp=0x97, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x73bc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x73bd, .a=0x4a, .x=0x6a, .y=0x02, .sp=0x97, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x73bc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x73bc, .value=0x3d, .type=IO_READ},
        {.addr=0x73bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007D) {
    const struct CPU_State initial_cpu = {.pc=0xef80, .a=0x9d, .x=0x63, .y=0xcb, .sp=0x49, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xef80, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xef81, .a=0x9d, .x=0x64, .y=0xcb, .sp=0x49, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xef80, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xef80, .value=0x3d, .type=IO_READ},
        {.addr=0xef81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x0ff4, .a=0xea, .x=0x0b, .y=0x59, .sp=0xa1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0ff5, .a=0xea, .x=0x0c, .y=0x59, .sp=0xa1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0ff4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0ff4, .value=0x3d, .type=IO_READ},
        {.addr=0x0ff5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3191, .a=0x95, .x=0xf4, .y=0x0f, .sp=0xeb, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3191, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3192, .a=0x95, .x=0xf5, .y=0x0f, .sp=0xeb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3191, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3191, .value=0x3d, .type=IO_READ},
        {.addr=0x3192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x8001, .a=0x9a, .x=0x6f, .y=0xa3, .sp=0xdd, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8001, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8002, .a=0x9a, .x=0x70, .y=0xa3, .sp=0xdd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8001, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8001, .value=0x3d, .type=IO_READ},
        {.addr=0x8002, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x7af1, .a=0x7f, .x=0xde, .y=0x8d, .sp=0x5e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7af1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7af2, .a=0x7f, .x=0xdf, .y=0x8d, .sp=0x5e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7af1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7af1, .value=0x3d, .type=IO_READ},
        {.addr=0x7af2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x47fc, .a=0x09, .x=0x07, .y=0xf6, .sp=0xca, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x47fc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x47fd, .a=0x09, .x=0x08, .y=0xf6, .sp=0xca, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x47fc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x47fc, .value=0x3d, .type=IO_READ},
        {.addr=0x47fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0083) {
    const struct CPU_State initial_cpu = {.pc=0xa160, .a=0x25, .x=0x5d, .y=0x27, .sp=0x3f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa160, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa161, .a=0x25, .x=0x5e, .y=0x27, .sp=0x3f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa160, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa160, .value=0x3d, .type=IO_READ},
        {.addr=0xa161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x4009, .a=0xaf, .x=0xcd, .y=0x77, .sp=0xd7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4009, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x400a, .a=0xaf, .x=0xce, .y=0x77, .sp=0xd7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4009, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4009, .value=0x3d, .type=IO_READ},
        {.addr=0x400a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x49f3, .a=0x5b, .x=0xa4, .y=0x05, .sp=0x15, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x49f3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x49f4, .a=0x5b, .x=0xa5, .y=0x05, .sp=0x15, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x49f3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x49f3, .value=0x3d, .type=IO_READ},
        {.addr=0x49f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0086) {
    const struct CPU_State initial_cpu = {.pc=0xb5ff, .a=0xb0, .x=0xed, .y=0x72, .sp=0xe2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb600, .a=0xb0, .x=0xee, .y=0x72, .sp=0xe2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb5ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb5ff, .value=0x3d, .type=IO_READ},
        {.addr=0xb600, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x960e, .a=0x55, .x=0xf1, .y=0x90, .sp=0x47, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x960e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x960f, .a=0x55, .x=0xf2, .y=0x90, .sp=0x47, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x960e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x960e, .value=0x3d, .type=IO_READ},
        {.addr=0x960f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x8f1d, .a=0xcc, .x=0xb5, .y=0x08, .sp=0x64, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8f1d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f1e, .a=0xcc, .x=0xb6, .y=0x08, .sp=0x64, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8f1d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f1d, .value=0x3d, .type=IO_READ},
        {.addr=0x8f1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0089) {
    const struct CPU_State initial_cpu = {.pc=0xae60, .a=0x67, .x=0x95, .y=0x1a, .sp=0x17, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xae60, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xae61, .a=0x67, .x=0x96, .y=0x1a, .sp=0x17, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xae60, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xae60, .value=0x3d, .type=IO_READ},
        {.addr=0xae61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x2b3e, .a=0x9d, .x=0xe4, .y=0x8c, .sp=0xab, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2b3f, .a=0x9d, .x=0xe5, .y=0x8c, .sp=0xab, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2b3e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2b3e, .value=0x3d, .type=IO_READ},
        {.addr=0x2b3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xc469, .a=0xbb, .x=0x71, .y=0x8b, .sp=0x19, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc469, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc46a, .a=0xbb, .x=0x72, .y=0x8b, .sp=0x19, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc469, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc469, .value=0x3d, .type=IO_READ},
        {.addr=0xc46a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x21da, .a=0x9d, .x=0xe3, .y=0x2f, .sp=0x32, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x21da, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x21db, .a=0x9d, .x=0xe4, .y=0x2f, .sp=0x32, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x21da, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x21da, .value=0x3d, .type=IO_READ},
        {.addr=0x21db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x20a1, .a=0x37, .x=0xfd, .y=0xe1, .sp=0x60, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x20a1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x20a2, .a=0x37, .x=0xfe, .y=0xe1, .sp=0x60, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x20a1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x20a1, .value=0x3d, .type=IO_READ},
        {.addr=0x20a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x00cd, .a=0xf9, .x=0xc8, .y=0x02, .sp=0xcb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x00ce, .a=0xf9, .x=0xc9, .y=0x02, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x00cd, .value=0x3d, .type=IO_READ},
        {.addr=0x00ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdf66, .a=0xf6, .x=0xb0, .y=0x39, .sp=0x20, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf66, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdf67, .a=0xf6, .x=0xb1, .y=0x39, .sp=0x20, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdf66, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdf66, .value=0x3d, .type=IO_READ},
        {.addr=0xdf67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0a8e, .a=0x66, .x=0xa9, .y=0xb2, .sp=0xca, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0a8e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0a8f, .a=0x66, .x=0xaa, .y=0xb2, .sp=0xca, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0a8e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0a8e, .value=0x3d, .type=IO_READ},
        {.addr=0x0a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0091) {
    const struct CPU_State initial_cpu = {.pc=0xb16e, .a=0xf0, .x=0xb3, .y=0xb7, .sp=0x2a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb16e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb16f, .a=0xf0, .x=0xb4, .y=0xb7, .sp=0x2a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb16e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb16e, .value=0x3d, .type=IO_READ},
        {.addr=0xb16f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0092) {
    const struct CPU_State initial_cpu = {.pc=0xee67, .a=0x22, .x=0x27, .y=0x77, .sp=0x21, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xee67, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xee68, .a=0x22, .x=0x28, .y=0x77, .sp=0x21, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xee67, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xee67, .value=0x3d, .type=IO_READ},
        {.addr=0xee68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x466e, .a=0x4f, .x=0x44, .y=0x40, .sp=0xa4, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x466e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x466f, .a=0x4f, .x=0x45, .y=0x40, .sp=0xa4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x466e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x466e, .value=0x3d, .type=IO_READ},
        {.addr=0x466f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0094) {
    const struct CPU_State initial_cpu = {.pc=0xb944, .a=0x58, .x=0xfe, .y=0xc0, .sp=0x45, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb944, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb945, .a=0x58, .x=0xff, .y=0xc0, .sp=0x45, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb944, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb944, .value=0x3d, .type=IO_READ},
        {.addr=0xb945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x3167, .a=0xc8, .x=0x16, .y=0xaa, .sp=0x83, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3167, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3168, .a=0xc8, .x=0x17, .y=0xaa, .sp=0x83, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3167, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3167, .value=0x3d, .type=IO_READ},
        {.addr=0x3168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x27db, .a=0x6a, .x=0x83, .y=0x7e, .sp=0xb5, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x27db, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x27dc, .a=0x6a, .x=0x84, .y=0x7e, .sp=0xb5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x27db, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x27db, .value=0x3d, .type=IO_READ},
        {.addr=0x27dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x236c, .a=0xa7, .x=0xa3, .y=0xab, .sp=0x68, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x236c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x236d, .a=0xa7, .x=0xa4, .y=0xab, .sp=0x68, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x236c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x236c, .value=0x3d, .type=IO_READ},
        {.addr=0x236d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0098) {
    const struct CPU_State initial_cpu = {.pc=0xd182, .a=0xb0, .x=0x82, .y=0x37, .sp=0x7f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd182, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd183, .a=0xb0, .x=0x83, .y=0x37, .sp=0x7f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd182, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd182, .value=0x3d, .type=IO_READ},
        {.addr=0xd183, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x3cb2, .a=0x8e, .x=0xe6, .y=0x4c, .sp=0xcb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3cb3, .a=0x8e, .x=0xe7, .y=0x4c, .sp=0xcb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3cb2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3cb2, .value=0x3d, .type=IO_READ},
        {.addr=0x3cb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009A) {
    const struct CPU_State initial_cpu = {.pc=0xf3da, .a=0x5c, .x=0xea, .y=0x75, .sp=0x0a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf3da, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf3db, .a=0x5c, .x=0xeb, .y=0x75, .sp=0x0a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf3da, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf3da, .value=0x3d, .type=IO_READ},
        {.addr=0xf3db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009B) {
    const struct CPU_State initial_cpu = {.pc=0x7fce, .a=0xd0, .x=0x48, .y=0x5c, .sp=0x5f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7fce, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7fcf, .a=0xd0, .x=0x49, .y=0x5c, .sp=0x5f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7fce, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7fce, .value=0x3d, .type=IO_READ},
        {.addr=0x7fcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x83fb, .a=0x48, .x=0x3e, .y=0x66, .sp=0x82, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x83fb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x83fc, .a=0x48, .x=0x3f, .y=0x66, .sp=0x82, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x83fb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x83fb, .value=0x3d, .type=IO_READ},
        {.addr=0x83fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xc4ec, .a=0xa7, .x=0x89, .y=0x6d, .sp=0x9e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc4ed, .a=0xa7, .x=0x8a, .y=0x6d, .sp=0x9e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc4ec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc4ec, .value=0x3d, .type=IO_READ},
        {.addr=0xc4ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009E) {
    const struct CPU_State initial_cpu = {.pc=0xd2ab, .a=0xd6, .x=0x6c, .y=0x84, .sp=0x3a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ab, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd2ac, .a=0xd6, .x=0x6d, .y=0x84, .sp=0x3a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd2ab, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd2ab, .value=0x3d, .type=IO_READ},
        {.addr=0xd2ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x06b1, .a=0x14, .x=0xa4, .y=0x48, .sp=0x3d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x06b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x06b2, .a=0x14, .x=0xa5, .y=0x48, .sp=0x3d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x06b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x06b1, .value=0x3d, .type=IO_READ},
        {.addr=0x06b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x5513, .a=0xe1, .x=0x6b, .y=0x99, .sp=0x61, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5513, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5514, .a=0xe1, .x=0x6c, .y=0x99, .sp=0x61, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5513, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5513, .value=0x3d, .type=IO_READ},
        {.addr=0x5514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x792e, .a=0xc7, .x=0xc0, .y=0xa8, .sp=0xf6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x792e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x792f, .a=0xc7, .x=0xc1, .y=0xa8, .sp=0xf6, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x792e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x792e, .value=0x3d, .type=IO_READ},
        {.addr=0x792f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x4660, .a=0x57, .x=0x7c, .y=0x02, .sp=0x31, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x4660, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4661, .a=0x57, .x=0x7d, .y=0x02, .sp=0x31, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4660, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4660, .value=0x3d, .type=IO_READ},
        {.addr=0x4661, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x77f5, .a=0x39, .x=0xb1, .y=0xb6, .sp=0x9a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x77f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x77f6, .a=0x39, .x=0xb2, .y=0xb6, .sp=0x9a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x77f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x77f5, .value=0x3d, .type=IO_READ},
        {.addr=0x77f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xef17, .a=0x59, .x=0xf3, .y=0xca, .sp=0x52, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xef17, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xef18, .a=0x59, .x=0xf4, .y=0xca, .sp=0x52, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xef17, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xef17, .value=0x3d, .type=IO_READ},
        {.addr=0xef18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xa113, .a=0x84, .x=0x20, .y=0xbf, .sp=0xfd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa113, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa114, .a=0x84, .x=0x21, .y=0xbf, .sp=0xfd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa113, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa113, .value=0x3d, .type=IO_READ},
        {.addr=0xa114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x3199, .a=0x5d, .x=0x1d, .y=0xb1, .sp=0x7f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3199, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x319a, .a=0x5d, .x=0x1e, .y=0xb1, .sp=0x7f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3199, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3199, .value=0x3d, .type=IO_READ},
        {.addr=0x319a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xc5cb, .a=0xc9, .x=0x9d, .y=0x3e, .sp=0x4f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc5cb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc5cc, .a=0xc9, .x=0x9e, .y=0x3e, .sp=0x4f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc5cb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc5cb, .value=0x3d, .type=IO_READ},
        {.addr=0xc5cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6d84, .a=0x02, .x=0x78, .y=0x20, .sp=0xf5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6d84, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6d85, .a=0x02, .x=0x79, .y=0x20, .sp=0xf5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6d84, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6d84, .value=0x3d, .type=IO_READ},
        {.addr=0x6d85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9f85, .a=0x26, .x=0x38, .y=0x36, .sp=0x2a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9f85, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9f86, .a=0x26, .x=0x39, .y=0x36, .sp=0x2a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9f85, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9f85, .value=0x3d, .type=IO_READ},
        {.addr=0x9f86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x9ec9, .a=0x93, .x=0xdf, .y=0xa6, .sp=0x22, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9eca, .a=0x93, .x=0xe0, .y=0xa6, .sp=0x22, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9ec9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ec9, .value=0x3d, .type=IO_READ},
        {.addr=0x9eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x5c90, .a=0xa2, .x=0x77, .y=0xd8, .sp=0x76, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5c90, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5c91, .a=0xa2, .x=0x78, .y=0xd8, .sp=0x76, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5c90, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5c90, .value=0x3d, .type=IO_READ},
        {.addr=0x5c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xd069, .a=0x19, .x=0x44, .y=0x4f, .sp=0x87, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd069, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd06a, .a=0x19, .x=0x45, .y=0x4f, .sp=0x87, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd069, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd069, .value=0x3d, .type=IO_READ},
        {.addr=0xd06a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x673e, .a=0x04, .x=0xfb, .y=0x9d, .sp=0xcd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x673e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x673f, .a=0x04, .x=0xfc, .y=0x9d, .sp=0xcd, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x673e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x673e, .value=0x3d, .type=IO_READ},
        {.addr=0x673f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x072a, .a=0x82, .x=0x09, .y=0x34, .sp=0x2a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x072a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x072b, .a=0x82, .x=0x0a, .y=0x34, .sp=0x2a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x072a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x072a, .value=0x3d, .type=IO_READ},
        {.addr=0x072b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x7062, .a=0xe2, .x=0xdd, .y=0x1f, .sp=0x80, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7062, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7063, .a=0xe2, .x=0xde, .y=0x1f, .sp=0x80, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7062, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7062, .value=0x3d, .type=IO_READ},
        {.addr=0x7063, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xc330, .a=0xce, .x=0xce, .y=0xe0, .sp=0x02, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc330, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc331, .a=0xce, .x=0xcf, .y=0xe0, .sp=0x02, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc330, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc330, .value=0x3d, .type=IO_READ},
        {.addr=0xc331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xfa07, .a=0xe7, .x=0x4a, .y=0x36, .sp=0x06, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xfa07, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfa08, .a=0xe7, .x=0x4b, .y=0x36, .sp=0x06, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xfa07, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfa07, .value=0x3d, .type=IO_READ},
        {.addr=0xfa08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xe812, .a=0x17, .x=0x39, .y=0x82, .sp=0x1c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xe812, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe813, .a=0x17, .x=0x3a, .y=0x82, .sp=0x1c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe812, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe812, .value=0x3d, .type=IO_READ},
        {.addr=0xe813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xbaa4, .a=0x14, .x=0xe4, .y=0xe5, .sp=0x70, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbaa5, .a=0x14, .x=0xe5, .y=0xe5, .sp=0x70, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbaa4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbaa4, .value=0x3d, .type=IO_READ},
        {.addr=0xbaa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x6e0e, .a=0x72, .x=0xef, .y=0x7e, .sp=0x64, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6e0e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6e0f, .a=0x72, .x=0xf0, .y=0x7e, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6e0e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6e0e, .value=0x3d, .type=IO_READ},
        {.addr=0x6e0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xba4b, .a=0xc3, .x=0x55, .y=0x51, .sp=0xfa, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xba4b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xba4c, .a=0xc3, .x=0x56, .y=0x51, .sp=0xfa, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xba4b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xba4b, .value=0x3d, .type=IO_READ},
        {.addr=0xba4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xe1c5, .a=0xd7, .x=0x71, .y=0x72, .sp=0x3c, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe1c6, .a=0xd7, .x=0x72, .y=0x72, .sp=0x3c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe1c5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe1c5, .value=0x3d, .type=IO_READ},
        {.addr=0xe1c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x8bf0, .a=0xe6, .x=0x45, .y=0x9a, .sp=0x4b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8bf1, .a=0xe6, .x=0x46, .y=0x9a, .sp=0x4b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8bf0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8bf0, .value=0x3d, .type=IO_READ},
        {.addr=0x8bf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x77c3, .a=0x9e, .x=0xa9, .y=0xd0, .sp=0x3e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x77c3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x77c4, .a=0x9e, .x=0xaa, .y=0xd0, .sp=0x3e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x77c3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x77c3, .value=0x3d, .type=IO_READ},
        {.addr=0x77c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x306a, .a=0x78, .x=0xd3, .y=0xcf, .sp=0x70, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x306a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x306b, .a=0x78, .x=0xd4, .y=0xcf, .sp=0x70, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x306a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x306a, .value=0x3d, .type=IO_READ},
        {.addr=0x306b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x168c, .a=0x15, .x=0xe2, .y=0xc8, .sp=0x6b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x168c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x168d, .a=0x15, .x=0xe3, .y=0xc8, .sp=0x6b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x168c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x168c, .value=0x3d, .type=IO_READ},
        {.addr=0x168d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x4c26, .a=0x5a, .x=0x73, .y=0x4c, .sp=0xac, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4c26, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4c27, .a=0x5a, .x=0x74, .y=0x4c, .sp=0xac, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4c26, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4c26, .value=0x3d, .type=IO_READ},
        {.addr=0x4c27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xbe98, .a=0x5e, .x=0x2d, .y=0x22, .sp=0x8a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xbe98, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbe99, .a=0x5e, .x=0x2e, .y=0x22, .sp=0x8a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbe98, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbe98, .value=0x3d, .type=IO_READ},
        {.addr=0xbe99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xf3f5, .a=0x50, .x=0x70, .y=0xa4, .sp=0xaa, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf3f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf3f6, .a=0x50, .x=0x71, .y=0xa4, .sp=0xaa, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf3f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf3f5, .value=0x3d, .type=IO_READ},
        {.addr=0xf3f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0xcb, .x=0x1b, .y=0x70, .sp=0x9a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0xcb, .x=0x1c, .y=0x70, .sp=0x9a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0x3d, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x9ea9, .a=0x74, .x=0xd0, .y=0x28, .sp=0xf1, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9eaa, .a=0x74, .x=0xd1, .y=0x28, .sp=0xf1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9ea9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ea9, .value=0x3d, .type=IO_READ},
        {.addr=0x9eaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x9ace, .a=0xcf, .x=0xc7, .y=0xf8, .sp=0x1e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9ace, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9acf, .a=0xcf, .x=0xc8, .y=0xf8, .sp=0x1e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9ace, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ace, .value=0x3d, .type=IO_READ},
        {.addr=0x9acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x1027, .a=0xc8, .x=0x84, .y=0x96, .sp=0xd7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1027, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1028, .a=0xc8, .x=0x85, .y=0x96, .sp=0xd7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x1027, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1027, .value=0x3d, .type=IO_READ},
        {.addr=0x1028, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x233a, .a=0xdf, .x=0x37, .y=0xa2, .sp=0x60, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x233a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x233b, .a=0xdf, .x=0x38, .y=0xa2, .sp=0x60, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x233a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x233a, .value=0x3d, .type=IO_READ},
        {.addr=0x233b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x1b43, .a=0x08, .x=0x30, .y=0xbc, .sp=0x7c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1b43, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1b44, .a=0x08, .x=0x31, .y=0xbc, .sp=0x7c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1b43, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1b43, .value=0x3d, .type=IO_READ},
        {.addr=0x1b44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x82ad, .a=0x96, .x=0xde, .y=0x71, .sp=0xa6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x82ad, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x82ae, .a=0x96, .x=0xdf, .y=0x71, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x82ad, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x82ad, .value=0x3d, .type=IO_READ},
        {.addr=0x82ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9c73, .a=0x42, .x=0xfe, .y=0x7f, .sp=0x86, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x9c73, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9c74, .a=0x42, .x=0xff, .y=0x7f, .sp=0x86, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9c73, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9c73, .value=0x3d, .type=IO_READ},
        {.addr=0x9c74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xc812, .a=0x1f, .x=0xe0, .y=0x6f, .sp=0x4e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xc812, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc813, .a=0x1f, .x=0xe1, .y=0x6f, .sp=0x4e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc812, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc812, .value=0x3d, .type=IO_READ},
        {.addr=0xc813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x2aff, .a=0x2f, .x=0x64, .y=0x71, .sp=0xb6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2aff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2b00, .a=0x2f, .x=0x65, .y=0x71, .sp=0xb6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2aff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2aff, .value=0x3d, .type=IO_READ},
        {.addr=0x2b00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xa6a0, .a=0x6b, .x=0xf6, .y=0x29, .sp=0x31, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa6a1, .a=0x6b, .x=0xf7, .y=0x29, .sp=0x31, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa6a0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa6a0, .value=0x3d, .type=IO_READ},
        {.addr=0xa6a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x4f9b, .a=0x2a, .x=0x84, .y=0xd4, .sp=0x4f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4f9b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4f9c, .a=0x2a, .x=0x85, .y=0xd4, .sp=0x4f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4f9b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4f9b, .value=0x3d, .type=IO_READ},
        {.addr=0x4f9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x481c, .a=0x00, .x=0xdc, .y=0xb8, .sp=0xce, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x481c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x481d, .a=0x00, .x=0xdd, .y=0xb8, .sp=0xce, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x481c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x481c, .value=0x3d, .type=IO_READ},
        {.addr=0x481d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xf3e8, .a=0x3a, .x=0x1a, .y=0x2e, .sp=0xab, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf3e9, .a=0x3a, .x=0x1b, .y=0x2e, .sp=0xab, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf3e8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf3e8, .value=0x3d, .type=IO_READ},
        {.addr=0xf3e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x91da, .a=0x0e, .x=0xc0, .y=0x6b, .sp=0x0c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x91da, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x91db, .a=0x0e, .x=0xc1, .y=0x6b, .sp=0x0c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x91da, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x91da, .value=0x3d, .type=IO_READ},
        {.addr=0x91db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x08f7, .a=0x86, .x=0xfb, .y=0xaa, .sp=0x3f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x08f7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x08f8, .a=0x86, .x=0xfc, .y=0xaa, .sp=0x3f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x08f7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x08f7, .value=0x3d, .type=IO_READ},
        {.addr=0x08f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x2b76, .a=0x30, .x=0x85, .y=0xcd, .sp=0xb8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x2b76, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2b77, .a=0x30, .x=0x86, .y=0xcd, .sp=0xb8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2b76, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2b76, .value=0x3d, .type=IO_READ},
        {.addr=0x2b77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9fa3, .a=0xee, .x=0x3d, .y=0x7b, .sp=0x15, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9fa4, .a=0xee, .x=0x3e, .y=0x7b, .sp=0x15, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9fa3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa3, .value=0x3d, .type=IO_READ},
        {.addr=0x9fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x2887, .a=0x1f, .x=0x44, .y=0x8a, .sp=0x09, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x2887, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2888, .a=0x1f, .x=0x45, .y=0x8a, .sp=0x09, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2887, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2887, .value=0x3d, .type=IO_READ},
        {.addr=0x2888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x615c, .a=0x31, .x=0x38, .y=0x6d, .sp=0x62, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x615c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x615d, .a=0x31, .x=0x39, .y=0x6d, .sp=0x62, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x615c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x615c, .value=0x3d, .type=IO_READ},
        {.addr=0x615d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xa6ae, .a=0x0f, .x=0xda, .y=0x24, .sp=0x5d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa6af, .a=0x0f, .x=0xdb, .y=0x24, .sp=0x5d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa6ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa6ae, .value=0x3d, .type=IO_READ},
        {.addr=0xa6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x57bb, .a=0x2c, .x=0x7e, .y=0xb5, .sp=0xf6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x57bb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x57bc, .a=0x2c, .x=0x7f, .y=0xb5, .sp=0xf6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x57bb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x57bb, .value=0x3d, .type=IO_READ},
        {.addr=0x57bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xbdb2, .a=0x8e, .x=0x1e, .y=0xa7, .sp=0x38, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbdb3, .a=0x8e, .x=0x1f, .y=0xa7, .sp=0x38, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbdb2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbdb2, .value=0x3d, .type=IO_READ},
        {.addr=0xbdb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x1a63, .a=0x53, .x=0xb5, .y=0xa6, .sp=0xef, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1a63, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1a64, .a=0x53, .x=0xb6, .y=0xa6, .sp=0xef, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1a63, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1a63, .value=0x3d, .type=IO_READ},
        {.addr=0x1a64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xbf4c, .a=0xc7, .x=0xda, .y=0xf6, .sp=0x42, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbf4d, .a=0xc7, .x=0xdb, .y=0xf6, .sp=0x42, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbf4c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbf4c, .value=0x3d, .type=IO_READ},
        {.addr=0xbf4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x121f, .a=0x49, .x=0x84, .y=0x1f, .sp=0x77, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x121f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1220, .a=0x49, .x=0x85, .y=0x1f, .sp=0x77, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x121f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x121f, .value=0x3d, .type=IO_READ},
        {.addr=0x1220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x2d98, .a=0x3f, .x=0xaf, .y=0xdc, .sp=0x2e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2d98, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2d99, .a=0x3f, .x=0xb0, .y=0xdc, .sp=0x2e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2d98, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2d98, .value=0x3d, .type=IO_READ},
        {.addr=0x2d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x4ca9, .a=0x53, .x=0x2f, .y=0x3c, .sp=0xef, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4caa, .a=0x53, .x=0x30, .y=0x3c, .sp=0xef, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4ca9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca9, .value=0x3d, .type=IO_READ},
        {.addr=0x4caa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xc9c1, .a=0x3b, .x=0xcf, .y=0x28, .sp=0xcc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc9c2, .a=0x3b, .x=0xd0, .y=0x28, .sp=0xcc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc9c1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc9c1, .value=0x3d, .type=IO_READ},
        {.addr=0xc9c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x138a, .a=0x5c, .x=0x12, .y=0x22, .sp=0xa4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x138a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x138b, .a=0x5c, .x=0x13, .y=0x22, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x138a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x138a, .value=0x3d, .type=IO_READ},
        {.addr=0x138b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xc361, .a=0x87, .x=0x2f, .y=0x22, .sp=0xf4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc361, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc362, .a=0x87, .x=0x30, .y=0x22, .sp=0xf4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc361, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc361, .value=0x3d, .type=IO_READ},
        {.addr=0xc362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x1f96, .a=0x44, .x=0x66, .y=0xd6, .sp=0x81, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1f96, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1f97, .a=0x44, .x=0x67, .y=0xd6, .sp=0x81, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1f96, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1f96, .value=0x3d, .type=IO_READ},
        {.addr=0x1f97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x5a77, .a=0xeb, .x=0x69, .y=0x66, .sp=0x2c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a77, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5a78, .a=0xeb, .x=0x6a, .y=0x66, .sp=0x2c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5a77, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5a77, .value=0x3d, .type=IO_READ},
        {.addr=0x5a78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x58af, .a=0xdc, .x=0xca, .y=0x31, .sp=0x1f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x58af, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x58b0, .a=0xdc, .x=0xcb, .y=0x31, .sp=0x1f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x58af, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x58af, .value=0x3d, .type=IO_READ},
        {.addr=0x58b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x45b0, .a=0x8b, .x=0xe5, .y=0x2d, .sp=0x3d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x45b0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x45b1, .a=0x8b, .x=0xe6, .y=0x2d, .sp=0x3d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x45b0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x45b0, .value=0x3d, .type=IO_READ},
        {.addr=0x45b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x1fe1, .a=0x5f, .x=0xad, .y=0x87, .sp=0xa3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1fe2, .a=0x5f, .x=0xae, .y=0x87, .sp=0xa3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1fe1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1fe1, .value=0x3d, .type=IO_READ},
        {.addr=0x1fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x1edd, .a=0xd3, .x=0xf4, .y=0xa6, .sp=0xd2, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1edd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1ede, .a=0xd3, .x=0xf5, .y=0xa6, .sp=0xd2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1edd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1edd, .value=0x3d, .type=IO_READ},
        {.addr=0x1ede, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb4af, .a=0x02, .x=0x01, .y=0xc3, .sp=0x64, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb4af, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb4b0, .a=0x02, .x=0x02, .y=0xc3, .sp=0x64, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb4af, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb4af, .value=0x3d, .type=IO_READ},
        {.addr=0xb4b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9719, .a=0x30, .x=0x32, .y=0xd8, .sp=0x1f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9719, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x971a, .a=0x30, .x=0x33, .y=0xd8, .sp=0x1f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9719, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9719, .value=0x3d, .type=IO_READ},
        {.addr=0x971a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x1657, .a=0xdc, .x=0xcc, .y=0x36, .sp=0x33, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1657, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1658, .a=0xdc, .x=0xcd, .y=0x36, .sp=0x33, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1657, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1657, .value=0x3d, .type=IO_READ},
        {.addr=0x1658, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x424c, .a=0x14, .x=0x90, .y=0xb3, .sp=0xfa, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x424c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x424d, .a=0x14, .x=0x91, .y=0xb3, .sp=0xfa, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x424c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x424c, .value=0x3d, .type=IO_READ},
        {.addr=0x424d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xf82d, .a=0x35, .x=0x03, .y=0x7f, .sp=0x22, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf82d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf82e, .a=0x35, .x=0x04, .y=0x7f, .sp=0x22, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf82d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf82d, .value=0x3d, .type=IO_READ},
        {.addr=0xf82e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xa445, .a=0x64, .x=0x88, .y=0x1d, .sp=0x94, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa445, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa446, .a=0x64, .x=0x89, .y=0x1d, .sp=0x94, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa445, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa445, .value=0x3d, .type=IO_READ},
        {.addr=0xa446, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x4609, .a=0x82, .x=0x01, .y=0xc2, .sp=0xfe, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4609, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x460a, .a=0x82, .x=0x02, .y=0xc2, .sp=0xfe, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4609, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4609, .value=0x3d, .type=IO_READ},
        {.addr=0x460a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7ecb, .a=0x11, .x=0xdf, .y=0xb6, .sp=0x6d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7ecb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7ecc, .a=0x11, .x=0xe0, .y=0xb6, .sp=0x6d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7ecb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7ecb, .value=0x3d, .type=IO_READ},
        {.addr=0x7ecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xd4ae, .a=0xf1, .x=0xbf, .y=0xb7, .sp=0x42, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd4af, .a=0xf1, .x=0xc0, .y=0xb7, .sp=0x42, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd4ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd4ae, .value=0x3d, .type=IO_READ},
        {.addr=0xd4af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xe134, .a=0x58, .x=0xed, .y=0x56, .sp=0x79, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe134, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe135, .a=0x58, .x=0xee, .y=0x56, .sp=0x79, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe134, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe134, .value=0x3d, .type=IO_READ},
        {.addr=0xe135, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xe68c, .a=0xfc, .x=0x8a, .y=0x7e, .sp=0xa9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe68c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe68d, .a=0xfc, .x=0x8b, .y=0x7e, .sp=0xa9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe68c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe68c, .value=0x3d, .type=IO_READ},
        {.addr=0xe68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x7c1d, .a=0x1b, .x=0x85, .y=0x49, .sp=0x9e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7c1d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7c1e, .a=0x1b, .x=0x86, .y=0x49, .sp=0x9e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7c1d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7c1d, .value=0x3d, .type=IO_READ},
        {.addr=0x7c1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xe9bd, .a=0x34, .x=0x4e, .y=0x06, .sp=0x30, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe9bd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe9be, .a=0x34, .x=0x4f, .y=0x06, .sp=0x30, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe9bd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe9bd, .value=0x3d, .type=IO_READ},
        {.addr=0xe9be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xdb19, .a=0xe4, .x=0x9a, .y=0xce, .sp=0xae, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xdb19, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdb1a, .a=0xe4, .x=0x9b, .y=0xce, .sp=0xae, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdb19, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdb19, .value=0x3d, .type=IO_READ},
        {.addr=0xdb1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xe5db, .a=0x67, .x=0x85, .y=0xc4, .sp=0xc5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe5db, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe5dc, .a=0x67, .x=0x86, .y=0xc4, .sp=0xc5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe5db, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe5db, .value=0x3d, .type=IO_READ},
        {.addr=0xe5dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x920d, .a=0x6b, .x=0x08, .y=0xb8, .sp=0x58, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x920d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x920e, .a=0x6b, .x=0x09, .y=0xb8, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x920d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x920d, .value=0x3d, .type=IO_READ},
        {.addr=0x920e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x9ed0, .a=0x23, .x=0xb3, .y=0x6e, .sp=0x87, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9ed0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9ed1, .a=0x23, .x=0xb4, .y=0x6e, .sp=0x87, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9ed0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ed0, .value=0x3d, .type=IO_READ},
        {.addr=0x9ed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x249e, .a=0x08, .x=0xc9, .y=0xdd, .sp=0x5d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x249e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x249f, .a=0x08, .x=0xca, .y=0xdd, .sp=0x5d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x249e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x249e, .value=0x3d, .type=IO_READ},
        {.addr=0x249f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x3de9, .a=0xd1, .x=0x3e, .y=0xac, .sp=0x64, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3de9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3dea, .a=0xd1, .x=0x3f, .y=0xac, .sp=0x64, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x3de9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3de9, .value=0x3d, .type=IO_READ},
        {.addr=0x3dea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x04d8, .a=0xbf, .x=0x9d, .y=0x50, .sp=0xcb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x04d8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x04d9, .a=0xbf, .x=0x9e, .y=0x50, .sp=0xcb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x04d8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x04d8, .value=0x3d, .type=IO_READ},
        {.addr=0x04d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x694f, .a=0xbc, .x=0xb1, .y=0x54, .sp=0xab, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x694f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6950, .a=0xbc, .x=0xb2, .y=0x54, .sp=0xab, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x694f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x694f, .value=0x3d, .type=IO_READ},
        {.addr=0x6950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x48b5, .a=0x42, .x=0x34, .y=0x07, .sp=0xfd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x48b5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x48b6, .a=0x42, .x=0x35, .y=0x07, .sp=0xfd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x48b5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x48b5, .value=0x3d, .type=IO_READ},
        {.addr=0x48b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x0086, .a=0x01, .x=0xa6, .y=0xba, .sp=0xbd, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0087, .a=0x01, .x=0xa7, .y=0xba, .sp=0xbd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0086, .value=0x3d, .type=IO_READ},
        {.addr=0x0087, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x6584, .a=0xa5, .x=0x4c, .y=0x86, .sp=0x78, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6584, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6585, .a=0xa5, .x=0x4d, .y=0x86, .sp=0x78, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6584, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6584, .value=0x3d, .type=IO_READ},
        {.addr=0x6585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x4ebf, .a=0x7e, .x=0xa7, .y=0xc8, .sp=0xb9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4ebf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4ec0, .a=0x7e, .x=0xa8, .y=0xc8, .sp=0xb9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4ebf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4ebf, .value=0x3d, .type=IO_READ},
        {.addr=0x4ec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x3486, .a=0x7d, .x=0x20, .y=0x48, .sp=0x8a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x3486, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3487, .a=0x7d, .x=0x21, .y=0x48, .sp=0x8a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3486, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3486, .value=0x3d, .type=IO_READ},
        {.addr=0x3487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x037d, .a=0x8c, .x=0xfc, .y=0x27, .sp=0x07, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x037d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x037e, .a=0x8c, .x=0xfd, .y=0x27, .sp=0x07, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x037d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x037d, .value=0x3d, .type=IO_READ},
        {.addr=0x037e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x3107, .a=0x67, .x=0xd2, .y=0x45, .sp=0x53, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3107, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3108, .a=0x67, .x=0xd3, .y=0x45, .sp=0x53, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x3107, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3107, .value=0x3d, .type=IO_READ},
        {.addr=0x3108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x9cf1, .a=0xf9, .x=0x01, .y=0x26, .sp=0x08, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9cf2, .a=0xf9, .x=0x02, .y=0x26, .sp=0x08, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9cf1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9cf1, .value=0x3d, .type=IO_READ},
        {.addr=0x9cf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x5f49, .a=0xef, .x=0xc8, .y=0xfe, .sp=0x34, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x5f49, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5f4a, .a=0xef, .x=0xc9, .y=0xfe, .sp=0x34, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5f49, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5f49, .value=0x3d, .type=IO_READ},
        {.addr=0x5f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0101) {
    const struct CPU_State initial_cpu = {.pc=0x67eb, .a=0xf0, .x=0xd8, .y=0x55, .sp=0x67, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x67eb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x67ec, .a=0xf0, .x=0xd9, .y=0x55, .sp=0x67, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x67eb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x67eb, .value=0x3d, .type=IO_READ},
        {.addr=0x67ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0246, .a=0x28, .x=0x25, .y=0xb9, .sp=0x07, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0246, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0247, .a=0x28, .x=0x26, .y=0xb9, .sp=0x07, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0246, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0246, .value=0x3d, .type=IO_READ},
        {.addr=0x0247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0103) {
    const struct CPU_State initial_cpu = {.pc=0x69b1, .a=0xfe, .x=0x3b, .y=0xd8, .sp=0x7d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x69b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x69b2, .a=0xfe, .x=0x3c, .y=0xd8, .sp=0x7d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x69b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x69b1, .value=0x3d, .type=IO_READ},
        {.addr=0x69b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0104) {
    const struct CPU_State initial_cpu = {.pc=0x701b, .a=0x28, .x=0x1a, .y=0xfd, .sp=0x5a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x701b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x701c, .a=0x28, .x=0x1b, .y=0xfd, .sp=0x5a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x701b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x701b, .value=0x3d, .type=IO_READ},
        {.addr=0x701c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x7b6e, .a=0xb8, .x=0x28, .y=0xce, .sp=0x3e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b6f, .a=0xb8, .x=0x29, .y=0xce, .sp=0x3e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7b6e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b6e, .value=0x3d, .type=IO_READ},
        {.addr=0x7b6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0106) {
    const struct CPU_State initial_cpu = {.pc=0x975e, .a=0xb5, .x=0x97, .y=0xa8, .sp=0x18, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x975e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x975f, .a=0xb5, .x=0x98, .y=0xa8, .sp=0x18, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x975e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x975e, .value=0x3d, .type=IO_READ},
        {.addr=0x975f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0107) {
    const struct CPU_State initial_cpu = {.pc=0xf6f5, .a=0xc9, .x=0xac, .y=0xcf, .sp=0x27, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf6f6, .a=0xc9, .x=0xad, .y=0xcf, .sp=0x27, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf6f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf6f5, .value=0x3d, .type=IO_READ},
        {.addr=0xf6f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf6b2, .a=0x5f, .x=0x91, .y=0xe2, .sp=0xe4, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf6b3, .a=0x5f, .x=0x92, .y=0xe2, .sp=0xe4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf6b2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf6b2, .value=0x3d, .type=IO_READ},
        {.addr=0xf6b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0109) {
    const struct CPU_State initial_cpu = {.pc=0xb2ae, .a=0xb5, .x=0xdb, .y=0x88, .sp=0xc8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb2af, .a=0xb5, .x=0xdc, .y=0x88, .sp=0xc8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb2ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb2ae, .value=0x3d, .type=IO_READ},
        {.addr=0xb2af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x827e, .a=0x59, .x=0x33, .y=0x28, .sp=0x40, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x827e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x827f, .a=0x59, .x=0x34, .y=0x28, .sp=0x40, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x827e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x827e, .value=0x3d, .type=IO_READ},
        {.addr=0x827f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010B) {
    const struct CPU_State initial_cpu = {.pc=0x280f, .a=0xc2, .x=0x0a, .y=0x8d, .sp=0xed, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x280f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2810, .a=0xc2, .x=0x0b, .y=0x8d, .sp=0xed, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x280f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x280f, .value=0x3d, .type=IO_READ},
        {.addr=0x2810, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x3ed4, .a=0xa6, .x=0x60, .y=0x1b, .sp=0xc8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3ed5, .a=0xa6, .x=0x61, .y=0x1b, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3ed4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3ed4, .value=0x3d, .type=IO_READ},
        {.addr=0x3ed5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010D) {
    const struct CPU_State initial_cpu = {.pc=0x204e, .a=0x94, .x=0x54, .y=0xde, .sp=0xf8, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x204e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x204f, .a=0x94, .x=0x55, .y=0xde, .sp=0xf8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x204e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x204e, .value=0x3d, .type=IO_READ},
        {.addr=0x204f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010E) {
    const struct CPU_State initial_cpu = {.pc=0x7fe3, .a=0x3e, .x=0xc6, .y=0x11, .sp=0xcb, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7fe4, .a=0x3e, .x=0xc7, .y=0x11, .sp=0xcb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7fe3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7fe3, .value=0x3d, .type=IO_READ},
        {.addr=0x7fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x4d95, .a=0x94, .x=0x8b, .y=0x04, .sp=0xa7, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4d95, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4d96, .a=0x94, .x=0x8c, .y=0x04, .sp=0xa7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4d95, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4d95, .value=0x3d, .type=IO_READ},
        {.addr=0x4d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x86fa, .a=0xfb, .x=0xee, .y=0x79, .sp=0xcc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x86fa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x86fb, .a=0xfb, .x=0xef, .y=0x79, .sp=0xcc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x86fa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x86fa, .value=0x3d, .type=IO_READ},
        {.addr=0x86fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x09f0, .a=0x75, .x=0xb6, .y=0x68, .sp=0x79, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x09f0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x09f1, .a=0x75, .x=0xb7, .y=0x68, .sp=0x79, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x09f0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x09f0, .value=0x3d, .type=IO_READ},
        {.addr=0x09f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0112) {
    const struct CPU_State initial_cpu = {.pc=0xa05a, .a=0x0b, .x=0x63, .y=0x95, .sp=0x57, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa05a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa05b, .a=0x0b, .x=0x64, .y=0x95, .sp=0x57, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa05a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa05a, .value=0x3d, .type=IO_READ},
        {.addr=0xa05b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xefbf, .a=0x4a, .x=0x87, .y=0x73, .sp=0xf2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xefbf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xefc0, .a=0x4a, .x=0x88, .y=0x73, .sp=0xf2, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xefbf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xefbf, .value=0x3d, .type=IO_READ},
        {.addr=0xefc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf7d7, .a=0x70, .x=0x6f, .y=0xf6, .sp=0xd1, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xf7d7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf7d8, .a=0x70, .x=0x70, .y=0xf6, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf7d7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf7d7, .value=0x3d, .type=IO_READ},
        {.addr=0xf7d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xd130, .a=0xff, .x=0x0e, .y=0xa9, .sp=0x2a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd130, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd131, .a=0xff, .x=0x0f, .y=0xa9, .sp=0x2a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd130, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd130, .value=0x3d, .type=IO_READ},
        {.addr=0xd131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x24ec, .a=0x3e, .x=0xbc, .y=0xc4, .sp=0x00, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x24ec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x24ed, .a=0x3e, .x=0xbd, .y=0xc4, .sp=0x00, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x24ec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x24ec, .value=0x3d, .type=IO_READ},
        {.addr=0x24ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb04f, .a=0x86, .x=0x1c, .y=0x7a, .sp=0xaf, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xb04f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb050, .a=0x86, .x=0x1d, .y=0x7a, .sp=0xaf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb04f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb04f, .value=0x3d, .type=IO_READ},
        {.addr=0xb050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x25f4, .a=0xaa, .x=0x24, .y=0x4d, .sp=0xb8, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x25f4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x25f5, .a=0xaa, .x=0x25, .y=0x4d, .sp=0xb8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x25f4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x25f4, .value=0x3d, .type=IO_READ},
        {.addr=0x25f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x2301, .a=0x1d, .x=0xd3, .y=0x22, .sp=0xef, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2301, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2302, .a=0x1d, .x=0xd4, .y=0x22, .sp=0xef, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2301, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2301, .value=0x3d, .type=IO_READ},
        {.addr=0x2302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x05ce, .a=0xa5, .x=0x96, .y=0x15, .sp=0x95, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x05ce, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x05cf, .a=0xa5, .x=0x97, .y=0x15, .sp=0x95, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x05ce, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x05ce, .value=0x3d, .type=IO_READ},
        {.addr=0x05cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011B) {
    const struct CPU_State initial_cpu = {.pc=0xf87e, .a=0xca, .x=0xe3, .y=0xb3, .sp=0xbc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf87e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf87f, .a=0xca, .x=0xe4, .y=0xb3, .sp=0xbc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf87e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf87e, .value=0x3d, .type=IO_READ},
        {.addr=0xf87f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x1a9b, .a=0x34, .x=0x33, .y=0x52, .sp=0x1c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x1a9b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1a9c, .a=0x34, .x=0x34, .y=0x52, .sp=0x1c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1a9b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1a9b, .value=0x3d, .type=IO_READ},
        {.addr=0x1a9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd475, .a=0xff, .x=0x86, .y=0xc1, .sp=0x2a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd475, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd476, .a=0xff, .x=0x87, .y=0xc1, .sp=0x2a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd475, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd475, .value=0x3d, .type=IO_READ},
        {.addr=0xd476, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x5835, .a=0xbb, .x=0xb3, .y=0xc9, .sp=0x4e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5835, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5836, .a=0xbb, .x=0xb4, .y=0xc9, .sp=0x4e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5835, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5835, .value=0x3d, .type=IO_READ},
        {.addr=0x5836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x791f, .a=0xb2, .x=0x91, .y=0x25, .sp=0x81, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x791f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7920, .a=0xb2, .x=0x92, .y=0x25, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x791f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x791f, .value=0x3d, .type=IO_READ},
        {.addr=0x7920, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x7770, .a=0x0e, .x=0x1c, .y=0xba, .sp=0xa9, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7770, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7771, .a=0x0e, .x=0x1d, .y=0xba, .sp=0xa9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7770, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7770, .value=0x3d, .type=IO_READ},
        {.addr=0x7771, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0121) {
    const struct CPU_State initial_cpu = {.pc=0xca0b, .a=0xb3, .x=0xba, .y=0x7f, .sp=0x62, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xca0b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xca0c, .a=0xb3, .x=0xbb, .y=0x7f, .sp=0x62, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xca0b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xca0b, .value=0x3d, .type=IO_READ},
        {.addr=0xca0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x25b8, .a=0x5d, .x=0x98, .y=0xc1, .sp=0x2e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x25b8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x25b9, .a=0x5d, .x=0x99, .y=0xc1, .sp=0x2e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x25b8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x25b8, .value=0x3d, .type=IO_READ},
        {.addr=0x25b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x7a51, .a=0x2a, .x=0x6e, .y=0xc6, .sp=0x5d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7a51, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a52, .a=0x2a, .x=0x6f, .y=0xc6, .sp=0x5d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7a51, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a51, .value=0x3d, .type=IO_READ},
        {.addr=0x7a52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0124) {
    const struct CPU_State initial_cpu = {.pc=0x371b, .a=0x5b, .x=0xf3, .y=0x87, .sp=0x70, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x371b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x371c, .a=0x5b, .x=0xf4, .y=0x87, .sp=0x70, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x371b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x371b, .value=0x3d, .type=IO_READ},
        {.addr=0x371c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0125) {
    const struct CPU_State initial_cpu = {.pc=0xfe4f, .a=0x1f, .x=0x63, .y=0x7f, .sp=0x28, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfe50, .a=0x1f, .x=0x64, .y=0x7f, .sp=0x28, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfe4f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfe4f, .value=0x3d, .type=IO_READ},
        {.addr=0xfe50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x8ab9, .a=0xb3, .x=0x9b, .y=0x4f, .sp=0x8a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8aba, .a=0xb3, .x=0x9c, .y=0x4f, .sp=0x8a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8ab9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ab9, .value=0x3d, .type=IO_READ},
        {.addr=0x8aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x10a8, .a=0x16, .x=0x21, .y=0xe8, .sp=0x50, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x10a8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x10a9, .a=0x16, .x=0x22, .y=0xe8, .sp=0x50, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x10a8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x10a8, .value=0x3d, .type=IO_READ},
        {.addr=0x10a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x21d5, .a=0x2e, .x=0xff, .y=0xa0, .sp=0xae, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x21d5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x21d6, .a=0x2e, .x=0x00, .y=0xa0, .sp=0xae, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x21d5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x21d5, .value=0x3d, .type=IO_READ},
        {.addr=0x21d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0129) {
    const struct CPU_State initial_cpu = {.pc=0x2ea8, .a=0x0c, .x=0x01, .y=0xf1, .sp=0xeb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2ea9, .a=0x0c, .x=0x02, .y=0xf1, .sp=0xeb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2ea8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2ea8, .value=0x3d, .type=IO_READ},
        {.addr=0x2ea9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8064, .a=0x2d, .x=0xc5, .y=0x05, .sp=0x9d, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8064, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8065, .a=0x2d, .x=0xc6, .y=0x05, .sp=0x9d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8064, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8064, .value=0x3d, .type=IO_READ},
        {.addr=0x8065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xedf3, .a=0x87, .x=0x36, .y=0xb2, .sp=0xd5, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xedf3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xedf4, .a=0x87, .x=0x37, .y=0xb2, .sp=0xd5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xedf3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xedf3, .value=0x3d, .type=IO_READ},
        {.addr=0xedf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x7551, .a=0x34, .x=0xf7, .y=0x7d, .sp=0x6f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7551, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7552, .a=0x34, .x=0xf8, .y=0x7d, .sp=0x6f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7551, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7551, .value=0x3d, .type=IO_READ},
        {.addr=0x7552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012D) {
    const struct CPU_State initial_cpu = {.pc=0x9b3b, .a=0xf3, .x=0x99, .y=0xec, .sp=0xf9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9b3b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9b3c, .a=0xf3, .x=0x9a, .y=0xec, .sp=0xf9, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9b3b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9b3b, .value=0x3d, .type=IO_READ},
        {.addr=0x9b3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012E) {
    const struct CPU_State initial_cpu = {.pc=0xa050, .a=0x86, .x=0xf4, .y=0x8a, .sp=0x99, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa050, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa051, .a=0x86, .x=0xf5, .y=0x8a, .sp=0x99, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa050, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa050, .value=0x3d, .type=IO_READ},
        {.addr=0xa051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2ec4, .a=0xd1, .x=0xb7, .y=0x74, .sp=0x09, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x2ec4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2ec5, .a=0xd1, .x=0xb8, .y=0x74, .sp=0x09, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2ec4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2ec4, .value=0x3d, .type=IO_READ},
        {.addr=0x2ec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x9e32, .a=0x15, .x=0xfb, .y=0xa4, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9e32, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9e33, .a=0x15, .x=0xfc, .y=0xa4, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9e32, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9e32, .value=0x3d, .type=IO_READ},
        {.addr=0x9e33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xea96, .a=0xb1, .x=0xcb, .y=0x17, .sp=0xcb, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xea96, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xea97, .a=0xb1, .x=0xcc, .y=0x17, .sp=0xcb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xea96, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xea96, .value=0x3d, .type=IO_READ},
        {.addr=0xea97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x10ec, .a=0x65, .x=0xd2, .y=0x01, .sp=0x29, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x10ec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0x65, .x=0xd3, .y=0x01, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x10ec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x10ec, .value=0x3d, .type=IO_READ},
        {.addr=0x10ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0133) {
    const struct CPU_State initial_cpu = {.pc=0xf4af, .a=0x98, .x=0x17, .y=0x61, .sp=0x11, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf4af, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf4b0, .a=0x98, .x=0x18, .y=0x61, .sp=0x11, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf4af, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf4af, .value=0x3d, .type=IO_READ},
        {.addr=0xf4b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0462, .a=0x7a, .x=0x0d, .y=0x2e, .sp=0x01, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0462, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0463, .a=0x7a, .x=0x0e, .y=0x2e, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0462, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0462, .value=0x3d, .type=IO_READ},
        {.addr=0x0463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0135) {
    const struct CPU_State initial_cpu = {.pc=0xf54c, .a=0x29, .x=0x7f, .y=0x4c, .sp=0xab, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf54c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf54d, .a=0x29, .x=0x80, .y=0x4c, .sp=0xab, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf54c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf54c, .value=0x3d, .type=IO_READ},
        {.addr=0xf54d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xdd71, .a=0x1c, .x=0xc9, .y=0x65, .sp=0xb4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xdd71, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdd72, .a=0x1c, .x=0xca, .y=0x65, .sp=0xb4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdd71, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdd71, .value=0x3d, .type=IO_READ},
        {.addr=0xdd72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x1dee, .a=0x62, .x=0x3a, .y=0xd4, .sp=0x7c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1dee, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1def, .a=0x62, .x=0x3b, .y=0xd4, .sp=0x7c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1dee, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1dee, .value=0x3d, .type=IO_READ},
        {.addr=0x1def, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0138) {
    const struct CPU_State initial_cpu = {.pc=0xa0eb, .a=0xd1, .x=0x44, .y=0x76, .sp=0xdf, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa0eb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa0ec, .a=0xd1, .x=0x45, .y=0x76, .sp=0xdf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa0eb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa0eb, .value=0x3d, .type=IO_READ},
        {.addr=0xa0ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0139) {
    const struct CPU_State initial_cpu = {.pc=0xd102, .a=0x81, .x=0x84, .y=0x4b, .sp=0x87, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd102, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd103, .a=0x81, .x=0x85, .y=0x4b, .sp=0x87, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd102, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd102, .value=0x3d, .type=IO_READ},
        {.addr=0xd103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013A) {
    const struct CPU_State initial_cpu = {.pc=0x071a, .a=0x4d, .x=0x6d, .y=0xa4, .sp=0x6f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x071a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x071b, .a=0x4d, .x=0x6e, .y=0xa4, .sp=0x6f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x071a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x071a, .value=0x3d, .type=IO_READ},
        {.addr=0x071b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013B) {
    const struct CPU_State initial_cpu = {.pc=0xd185, .a=0x56, .x=0xba, .y=0x8a, .sp=0xe9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd185, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd186, .a=0x56, .x=0xbb, .y=0x8a, .sp=0xe9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd185, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd185, .value=0x3d, .type=IO_READ},
        {.addr=0xd186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x7413, .a=0x1c, .x=0xfe, .y=0x57, .sp=0x9d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7413, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7414, .a=0x1c, .x=0xff, .y=0x57, .sp=0x9d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7413, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7413, .value=0x3d, .type=IO_READ},
        {.addr=0x7414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013D) {
    const struct CPU_State initial_cpu = {.pc=0x1b21, .a=0x35, .x=0x40, .y=0x92, .sp=0x0b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1b21, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1b22, .a=0x35, .x=0x41, .y=0x92, .sp=0x0b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1b21, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1b21, .value=0x3d, .type=IO_READ},
        {.addr=0x1b22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xcf0f, .a=0xe9, .x=0x83, .y=0xed, .sp=0xca, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcf0f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcf10, .a=0xe9, .x=0x84, .y=0xed, .sp=0xca, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcf0f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcf0f, .value=0x3d, .type=IO_READ},
        {.addr=0xcf10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x5240, .a=0xb8, .x=0x6a, .y=0x05, .sp=0x37, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x5240, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5241, .a=0xb8, .x=0x6b, .y=0x05, .sp=0x37, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5240, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5240, .value=0x3d, .type=IO_READ},
        {.addr=0x5241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x6d00, .a=0x0b, .x=0x35, .y=0xcb, .sp=0x74, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6d00, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6d01, .a=0x0b, .x=0x36, .y=0xcb, .sp=0x74, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6d00, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6d00, .value=0x3d, .type=IO_READ},
        {.addr=0x6d01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0141) {
    const struct CPU_State initial_cpu = {.pc=0x75bb, .a=0xb5, .x=0xc4, .y=0xc8, .sp=0xe7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x75bb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x75bc, .a=0xb5, .x=0xc5, .y=0xc8, .sp=0xe7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x75bb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x75bb, .value=0x3d, .type=IO_READ},
        {.addr=0x75bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x1f20, .a=0xac, .x=0x41, .y=0x3b, .sp=0x1b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1f20, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1f21, .a=0xac, .x=0x42, .y=0x3b, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1f20, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1f20, .value=0x3d, .type=IO_READ},
        {.addr=0x1f21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0143) {
    const struct CPU_State initial_cpu = {.pc=0x896f, .a=0xf6, .x=0x00, .y=0x87, .sp=0x3b, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x896f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8970, .a=0xf6, .x=0x01, .y=0x87, .sp=0x3b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x896f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x896f, .value=0x3d, .type=IO_READ},
        {.addr=0x8970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0144) {
    const struct CPU_State initial_cpu = {.pc=0xda76, .a=0xe3, .x=0x65, .y=0x89, .sp=0x51, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xda76, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xda77, .a=0xe3, .x=0x66, .y=0x89, .sp=0x51, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xda76, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xda76, .value=0x3d, .type=IO_READ},
        {.addr=0xda77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x5d75, .a=0x64, .x=0x0f, .y=0x24, .sp=0xe2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5d75, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5d76, .a=0x64, .x=0x10, .y=0x24, .sp=0xe2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5d75, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5d75, .value=0x3d, .type=IO_READ},
        {.addr=0x5d76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x4da2, .a=0x79, .x=0xc4, .y=0x29, .sp=0x26, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4da2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4da3, .a=0x79, .x=0xc5, .y=0x29, .sp=0x26, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4da2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4da2, .value=0x3d, .type=IO_READ},
        {.addr=0x4da3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x5695, .a=0x01, .x=0x0a, .y=0x93, .sp=0xaa, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5695, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5696, .a=0x01, .x=0x0b, .y=0x93, .sp=0xaa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5695, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5695, .value=0x3d, .type=IO_READ},
        {.addr=0x5696, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x4387, .a=0x52, .x=0xe3, .y=0x06, .sp=0xd3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4387, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4388, .a=0x52, .x=0xe4, .y=0x06, .sp=0xd3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4387, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4387, .value=0x3d, .type=IO_READ},
        {.addr=0x4388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0149) {
    const struct CPU_State initial_cpu = {.pc=0xcaa4, .a=0x94, .x=0x9b, .y=0x46, .sp=0x8d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcaa5, .a=0x94, .x=0x9c, .y=0x46, .sp=0x8d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcaa4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcaa4, .value=0x3d, .type=IO_READ},
        {.addr=0xcaa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x4a53, .a=0x1d, .x=0x8f, .y=0x8d, .sp=0x66, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4a53, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4a54, .a=0x1d, .x=0x90, .y=0x8d, .sp=0x66, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4a53, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4a53, .value=0x3d, .type=IO_READ},
        {.addr=0x4a54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xa436, .a=0xb9, .x=0xb5, .y=0x48, .sp=0x27, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa436, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa437, .a=0xb9, .x=0xb6, .y=0x48, .sp=0x27, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa436, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa436, .value=0x3d, .type=IO_READ},
        {.addr=0xa437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x4727, .a=0xc9, .x=0x8e, .y=0x16, .sp=0xc8, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4727, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4728, .a=0xc9, .x=0x8f, .y=0x16, .sp=0xc8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4727, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4727, .value=0x3d, .type=IO_READ},
        {.addr=0x4728, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014D) {
    const struct CPU_State initial_cpu = {.pc=0x8aac, .a=0x49, .x=0xb3, .y=0x81, .sp=0x77, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8aac, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8aad, .a=0x49, .x=0xb4, .y=0x81, .sp=0x77, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8aac, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8aac, .value=0x3d, .type=IO_READ},
        {.addr=0x8aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x2489, .a=0x44, .x=0x00, .y=0xa8, .sp=0x7d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2489, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x248a, .a=0x44, .x=0x01, .y=0xa8, .sp=0x7d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2489, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2489, .value=0x3d, .type=IO_READ},
        {.addr=0x248a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_014F) {
    const struct CPU_State initial_cpu = {.pc=0xffa3, .a=0x98, .x=0x9d, .y=0x57, .sp=0xe5, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xffa3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xffa4, .a=0x98, .x=0x9e, .y=0x57, .sp=0xe5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xffa3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xffa3, .value=0x3d, .type=IO_READ},
        {.addr=0xffa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0150) {
    const struct CPU_State initial_cpu = {.pc=0xf534, .a=0x19, .x=0xe3, .y=0x0d, .sp=0xc0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf534, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf535, .a=0x19, .x=0xe4, .y=0x0d, .sp=0xc0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf534, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf534, .value=0x3d, .type=IO_READ},
        {.addr=0xf535, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0151) {
    const struct CPU_State initial_cpu = {.pc=0xbc61, .a=0x58, .x=0x09, .y=0xef, .sp=0x0b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xbc61, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbc62, .a=0x58, .x=0x0a, .y=0xef, .sp=0x0b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbc61, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbc61, .value=0x3d, .type=IO_READ},
        {.addr=0xbc62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0152) {
    const struct CPU_State initial_cpu = {.pc=0xc65e, .a=0x0d, .x=0x97, .y=0x3f, .sp=0xb9, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xc65e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc65f, .a=0x0d, .x=0x98, .y=0x3f, .sp=0xb9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc65e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc65e, .value=0x3d, .type=IO_READ},
        {.addr=0xc65f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0153) {
    const struct CPU_State initial_cpu = {.pc=0xecdd, .a=0x21, .x=0x6e, .y=0x84, .sp=0xe9, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xecdd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xecde, .a=0x21, .x=0x6f, .y=0x84, .sp=0xe9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xecdd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xecdd, .value=0x3d, .type=IO_READ},
        {.addr=0xecde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0154) {
    const struct CPU_State initial_cpu = {.pc=0x7234, .a=0x95, .x=0x0c, .y=0x5a, .sp=0x72, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7234, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7235, .a=0x95, .x=0x0d, .y=0x5a, .sp=0x72, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7234, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7234, .value=0x3d, .type=IO_READ},
        {.addr=0x7235, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4242, .a=0xb4, .x=0xc9, .y=0x88, .sp=0xda, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4242, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4243, .a=0xb4, .x=0xca, .y=0x88, .sp=0xda, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4242, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4242, .value=0x3d, .type=IO_READ},
        {.addr=0x4243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0156) {
    const struct CPU_State initial_cpu = {.pc=0xb16f, .a=0x4d, .x=0x48, .y=0x0c, .sp=0x20, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb16f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb170, .a=0x4d, .x=0x49, .y=0x0c, .sp=0x20, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb16f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb16f, .value=0x3d, .type=IO_READ},
        {.addr=0xb170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x568d, .a=0xb0, .x=0xf1, .y=0x98, .sp=0xd9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x568d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x568e, .a=0xb0, .x=0xf2, .y=0x98, .sp=0xd9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x568d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x568d, .value=0x3d, .type=IO_READ},
        {.addr=0x568e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x1906, .a=0x44, .x=0xa6, .y=0x4f, .sp=0x20, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1906, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1907, .a=0x44, .x=0xa7, .y=0x4f, .sp=0x20, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1906, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1906, .value=0x3d, .type=IO_READ},
        {.addr=0x1907, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x21be, .a=0xf0, .x=0x4e, .y=0x9d, .sp=0x5a, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x21be, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x21bf, .a=0xf0, .x=0x4f, .y=0x9d, .sp=0x5a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x21be, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x21be, .value=0x3d, .type=IO_READ},
        {.addr=0x21bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x31e9, .a=0xb7, .x=0x1b, .y=0xe2, .sp=0x7e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x31e9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x31ea, .a=0xb7, .x=0x1c, .y=0xe2, .sp=0x7e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x31e9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x31e9, .value=0x3d, .type=IO_READ},
        {.addr=0x31ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x8e5e, .a=0xe7, .x=0xd2, .y=0xfa, .sp=0x2a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8e5e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8e5f, .a=0xe7, .x=0xd3, .y=0xfa, .sp=0x2a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8e5e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8e5e, .value=0x3d, .type=IO_READ},
        {.addr=0x8e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4276, .a=0x97, .x=0x72, .y=0x06, .sp=0x6f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4276, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4277, .a=0x97, .x=0x73, .y=0x06, .sp=0x6f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4276, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4276, .value=0x3d, .type=IO_READ},
        {.addr=0x4277, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd07e, .a=0xc0, .x=0x2f, .y=0x0b, .sp=0xd7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd07e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd07f, .a=0xc0, .x=0x30, .y=0x0b, .sp=0xd7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd07e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd07e, .value=0x3d, .type=IO_READ},
        {.addr=0xd07f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015E) {
    const struct CPU_State initial_cpu = {.pc=0x8cb0, .a=0xa4, .x=0xfe, .y=0xd9, .sp=0x8a, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8cb1, .a=0xa4, .x=0xff, .y=0xd9, .sp=0x8a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8cb0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8cb0, .value=0x3d, .type=IO_READ},
        {.addr=0x8cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x29e2, .a=0x7e, .x=0x42, .y=0x82, .sp=0x76, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x29e2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x29e3, .a=0x7e, .x=0x43, .y=0x82, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x29e2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x29e2, .value=0x3d, .type=IO_READ},
        {.addr=0x29e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0160) {
    const struct CPU_State initial_cpu = {.pc=0xdbbf, .a=0x9d, .x=0xb6, .y=0xc5, .sp=0xa8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xdbbf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdbc0, .a=0x9d, .x=0xb7, .y=0xc5, .sp=0xa8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdbbf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdbbf, .value=0x3d, .type=IO_READ},
        {.addr=0xdbc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0161) {
    const struct CPU_State initial_cpu = {.pc=0x970b, .a=0x7a, .x=0x6d, .y=0x74, .sp=0x14, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x970b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x970c, .a=0x7a, .x=0x6e, .y=0x74, .sp=0x14, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x970b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x970b, .value=0x3d, .type=IO_READ},
        {.addr=0x970c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0162) {
    const struct CPU_State initial_cpu = {.pc=0xe366, .a=0x2e, .x=0x22, .y=0x78, .sp=0x63, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xe366, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe367, .a=0x2e, .x=0x23, .y=0x78, .sp=0x63, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe366, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe366, .value=0x3d, .type=IO_READ},
        {.addr=0xe367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0163) {
    const struct CPU_State initial_cpu = {.pc=0xff8c, .a=0xaa, .x=0x16, .y=0x77, .sp=0x56, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xff8c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xff8d, .a=0xaa, .x=0x17, .y=0x77, .sp=0x56, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xff8c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xff8c, .value=0x3d, .type=IO_READ},
        {.addr=0xff8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x6f92, .a=0xab, .x=0x2c, .y=0x1a, .sp=0xfa, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f92, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6f93, .a=0xab, .x=0x2d, .y=0x1a, .sp=0xfa, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6f92, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6f92, .value=0x3d, .type=IO_READ},
        {.addr=0x6f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x5b3e, .a=0x45, .x=0x2d, .y=0xcc, .sp=0x69, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5b3f, .a=0x45, .x=0x2e, .y=0xcc, .sp=0x69, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5b3e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5b3e, .value=0x3d, .type=IO_READ},
        {.addr=0x5b3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x84e0, .a=0x66, .x=0x5a, .y=0x44, .sp=0x11, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x84e0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x84e1, .a=0x66, .x=0x5b, .y=0x44, .sp=0x11, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x84e0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x84e0, .value=0x3d, .type=IO_READ},
        {.addr=0x84e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa81d, .a=0x10, .x=0x3b, .y=0xb2, .sp=0x25, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa81d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa81e, .a=0x10, .x=0x3c, .y=0xb2, .sp=0x25, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa81d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa81d, .value=0x3d, .type=IO_READ},
        {.addr=0xa81e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0168) {
    const struct CPU_State initial_cpu = {.pc=0xc204, .a=0x5e, .x=0x37, .y=0x70, .sp=0xe5, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc204, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc205, .a=0x5e, .x=0x38, .y=0x70, .sp=0xe5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc204, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc204, .value=0x3d, .type=IO_READ},
        {.addr=0xc205, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0169) {
    const struct CPU_State initial_cpu = {.pc=0xb167, .a=0xc0, .x=0x2d, .y=0xa7, .sp=0x76, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb167, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb168, .a=0xc0, .x=0x2e, .y=0xa7, .sp=0x76, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb167, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb167, .value=0x3d, .type=IO_READ},
        {.addr=0xb168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x8f23, .a=0x8a, .x=0xfd, .y=0xde, .sp=0x8f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8f23, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f24, .a=0x8a, .x=0xfe, .y=0xde, .sp=0x8f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8f23, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f23, .value=0x3d, .type=IO_READ},
        {.addr=0x8f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x2021, .a=0x48, .x=0x46, .y=0x27, .sp=0x10, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2021, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2022, .a=0x48, .x=0x47, .y=0x27, .sp=0x10, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2021, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2021, .value=0x3d, .type=IO_READ},
        {.addr=0x2022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x6021, .a=0x5c, .x=0xbf, .y=0xe4, .sp=0x1f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x6021, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6022, .a=0x5c, .x=0xc0, .y=0xe4, .sp=0x1f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6021, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6021, .value=0x3d, .type=IO_READ},
        {.addr=0x6022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016D) {
    const struct CPU_State initial_cpu = {.pc=0xb9bf, .a=0xa1, .x=0x25, .y=0x33, .sp=0x29, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb9bf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb9c0, .a=0xa1, .x=0x26, .y=0x33, .sp=0x29, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb9bf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb9bf, .value=0x3d, .type=IO_READ},
        {.addr=0xb9c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x086c, .a=0x3b, .x=0x36, .y=0x87, .sp=0xe8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x086c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x086d, .a=0x3b, .x=0x37, .y=0x87, .sp=0xe8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x086c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x086c, .value=0x3d, .type=IO_READ},
        {.addr=0x086d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa4e4, .a=0x59, .x=0x82, .y=0x84, .sp=0x1e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa4e5, .a=0x59, .x=0x83, .y=0x84, .sp=0x1e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa4e4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa4e4, .value=0x3d, .type=IO_READ},
        {.addr=0xa4e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x37cf, .a=0xd4, .x=0xaf, .y=0x39, .sp=0x84, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x37cf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x37d0, .a=0xd4, .x=0xb0, .y=0x39, .sp=0x84, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x37cf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x37cf, .value=0x3d, .type=IO_READ},
        {.addr=0x37d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0171) {
    const struct CPU_State initial_cpu = {.pc=0x8008, .a=0x95, .x=0xac, .y=0xea, .sp=0xc7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8008, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8009, .a=0x95, .x=0xad, .y=0xea, .sp=0xc7, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8008, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8008, .value=0x3d, .type=IO_READ},
        {.addr=0x8009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x7b11, .a=0x53, .x=0xed, .y=0xf3, .sp=0x25, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b11, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b12, .a=0x53, .x=0xee, .y=0xf3, .sp=0x25, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7b11, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b11, .value=0x3d, .type=IO_READ},
        {.addr=0x7b12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3597, .a=0x3d, .x=0xd7, .y=0x8f, .sp=0x00, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x3597, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3598, .a=0x3d, .x=0xd8, .y=0x8f, .sp=0x00, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3597, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3597, .value=0x3d, .type=IO_READ},
        {.addr=0x3598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0174) {
    const struct CPU_State initial_cpu = {.pc=0xd02a, .a=0x15, .x=0xeb, .y=0xd9, .sp=0xe4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd02a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd02b, .a=0x15, .x=0xec, .y=0xd9, .sp=0xe4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd02a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd02a, .value=0x3d, .type=IO_READ},
        {.addr=0xd02b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0175) {
    const struct CPU_State initial_cpu = {.pc=0x5e08, .a=0x36, .x=0x01, .y=0x5d, .sp=0x25, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5e08, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5e09, .a=0x36, .x=0x02, .y=0x5d, .sp=0x25, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5e08, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5e08, .value=0x3d, .type=IO_READ},
        {.addr=0x5e09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0176) {
    const struct CPU_State initial_cpu = {.pc=0xac23, .a=0xbb, .x=0xdc, .y=0xde, .sp=0xc8, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xac23, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xac24, .a=0xbb, .x=0xdd, .y=0xde, .sp=0xc8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xac23, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xac23, .value=0x3d, .type=IO_READ},
        {.addr=0xac24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xf23e, .a=0x5b, .x=0xe8, .y=0x81, .sp=0x67, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf23e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf23f, .a=0x5b, .x=0xe9, .y=0x81, .sp=0x67, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf23e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf23e, .value=0x3d, .type=IO_READ},
        {.addr=0xf23f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0178) {
    const struct CPU_State initial_cpu = {.pc=0xba2e, .a=0x6d, .x=0x81, .y=0xca, .sp=0x3e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xba2e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xba2f, .a=0x6d, .x=0x82, .y=0xca, .sp=0x3e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xba2e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xba2e, .value=0x3d, .type=IO_READ},
        {.addr=0xba2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x4f4f, .a=0x85, .x=0x01, .y=0xee, .sp=0x61, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4f4f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4f50, .a=0x85, .x=0x02, .y=0xee, .sp=0x61, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x4f4f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4f4f, .value=0x3d, .type=IO_READ},
        {.addr=0x4f50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x530e, .a=0xf4, .x=0x1e, .y=0x8d, .sp=0x37, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x530e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x530f, .a=0xf4, .x=0x1f, .y=0x8d, .sp=0x37, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x530e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x530e, .value=0x3d, .type=IO_READ},
        {.addr=0x530f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x0341, .a=0x78, .x=0x7e, .y=0x5c, .sp=0x2f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0341, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0342, .a=0x78, .x=0x7f, .y=0x5c, .sp=0x2f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0341, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0341, .value=0x3d, .type=IO_READ},
        {.addr=0x0342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf7f5, .a=0xfe, .x=0x7a, .y=0x51, .sp=0x5d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf7f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf7f6, .a=0xfe, .x=0x7b, .y=0x51, .sp=0x5d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf7f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf7f5, .value=0x3d, .type=IO_READ},
        {.addr=0xf7f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x0e22, .a=0x8a, .x=0x4a, .y=0x11, .sp=0xee, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0e22, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0e23, .a=0x8a, .x=0x4b, .y=0x11, .sp=0xee, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0e22, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0e22, .value=0x3d, .type=IO_READ},
        {.addr=0x0e23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9908, .a=0xe3, .x=0x45, .y=0x3c, .sp=0x87, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9908, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9909, .a=0xe3, .x=0x46, .y=0x3c, .sp=0x87, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9908, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9908, .value=0x3d, .type=IO_READ},
        {.addr=0x9909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x8005, .a=0x4b, .x=0x1d, .y=0xa7, .sp=0x76, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8005, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8006, .a=0x4b, .x=0x1e, .y=0xa7, .sp=0x76, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8005, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8005, .value=0x3d, .type=IO_READ},
        {.addr=0x8006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x8ee8, .a=0x5d, .x=0xd4, .y=0x93, .sp=0xa2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ee8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8ee9, .a=0x5d, .x=0xd5, .y=0x93, .sp=0xa2, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8ee8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ee8, .value=0x3d, .type=IO_READ},
        {.addr=0x8ee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x5e30, .a=0x96, .x=0x17, .y=0x59, .sp=0xda, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5e30, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5e31, .a=0x96, .x=0x18, .y=0x59, .sp=0xda, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5e30, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5e30, .value=0x3d, .type=IO_READ},
        {.addr=0x5e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0182) {
    const struct CPU_State initial_cpu = {.pc=0xf93c, .a=0x33, .x=0xfe, .y=0x95, .sp=0xa8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xf93c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf93d, .a=0x33, .x=0xff, .y=0x95, .sp=0xa8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf93c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf93c, .value=0x3d, .type=IO_READ},
        {.addr=0xf93d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xd36d, .a=0x37, .x=0x47, .y=0x13, .sp=0x1f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd36d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd36e, .a=0x37, .x=0x48, .y=0x13, .sp=0x1f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd36d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd36d, .value=0x3d, .type=IO_READ},
        {.addr=0xd36e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0184) {
    const struct CPU_State initial_cpu = {.pc=0x605b, .a=0x1e, .x=0x87, .y=0x1e, .sp=0x33, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x605b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x605c, .a=0x1e, .x=0x88, .y=0x1e, .sp=0x33, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x605b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x605b, .value=0x3d, .type=IO_READ},
        {.addr=0x605c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x73da, .a=0x7e, .x=0x4d, .y=0xa5, .sp=0x1f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x73da, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x73db, .a=0x7e, .x=0x4e, .y=0xa5, .sp=0x1f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x73da, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x73da, .value=0x3d, .type=IO_READ},
        {.addr=0x73db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xd3f3, .a=0xec, .x=0xcc, .y=0x5f, .sp=0xf2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd3f4, .a=0xec, .x=0xcd, .y=0x5f, .sp=0xf2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd3f3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd3f3, .value=0x3d, .type=IO_READ},
        {.addr=0xd3f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0187) {
    const struct CPU_State initial_cpu = {.pc=0x8ed2, .a=0x97, .x=0xe8, .y=0x82, .sp=0xff, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8ed3, .a=0x97, .x=0xe9, .y=0x82, .sp=0xff, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8ed2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ed2, .value=0x3d, .type=IO_READ},
        {.addr=0x8ed3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0188) {
    const struct CPU_State initial_cpu = {.pc=0xd712, .a=0x90, .x=0xc8, .y=0x79, .sp=0xce, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd712, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd713, .a=0x90, .x=0xc9, .y=0x79, .sp=0xce, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd712, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd712, .value=0x3d, .type=IO_READ},
        {.addr=0xd713, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4e04, .a=0x87, .x=0x11, .y=0x01, .sp=0xdd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x4e04, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4e05, .a=0x87, .x=0x12, .y=0x01, .sp=0xdd, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4e04, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4e04, .value=0x3d, .type=IO_READ},
        {.addr=0x4e05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x3842, .a=0x4f, .x=0xfc, .y=0x30, .sp=0x1a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x3842, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3843, .a=0x4f, .x=0xfd, .y=0x30, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3842, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3842, .value=0x3d, .type=IO_READ},
        {.addr=0x3843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xfebd, .a=0x4d, .x=0x28, .y=0xbb, .sp=0x41, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfebd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfebe, .a=0x4d, .x=0x29, .y=0xbb, .sp=0x41, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfebd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfebd, .value=0x3d, .type=IO_READ},
        {.addr=0xfebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x65ef, .a=0x7d, .x=0x2a, .y=0xe3, .sp=0x5d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x65ef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x65f0, .a=0x7d, .x=0x2b, .y=0xe3, .sp=0x5d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x65ef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x65ef, .value=0x3d, .type=IO_READ},
        {.addr=0x65f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018D) {
    const struct CPU_State initial_cpu = {.pc=0xf1c8, .a=0xc9, .x=0x4a, .y=0xd3, .sp=0x0c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf1c9, .a=0xc9, .x=0x4b, .y=0xd3, .sp=0x0c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf1c8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf1c8, .value=0x3d, .type=IO_READ},
        {.addr=0xf1c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf795, .a=0x90, .x=0x95, .y=0x50, .sp=0xe3, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf795, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf796, .a=0x90, .x=0x96, .y=0x50, .sp=0xe3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf795, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf795, .value=0x3d, .type=IO_READ},
        {.addr=0xf796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5e81, .a=0x65, .x=0xa9, .y=0xf6, .sp=0x71, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5e81, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5e82, .a=0x65, .x=0xaa, .y=0xf6, .sp=0x71, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5e81, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5e81, .value=0x3d, .type=IO_READ},
        {.addr=0x5e82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xe642, .a=0xe4, .x=0xaa, .y=0x83, .sp=0xbe, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe642, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe643, .a=0xe4, .x=0xab, .y=0x83, .sp=0xbe, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe642, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe642, .value=0x3d, .type=IO_READ},
        {.addr=0xe643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x005d, .a=0xd4, .x=0xd9, .y=0x1f, .sp=0xce, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x005e, .a=0xd4, .x=0xda, .y=0x1f, .sp=0xce, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x005d, .value=0x3d, .type=IO_READ},
        {.addr=0x005e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x166e, .a=0x64, .x=0x80, .y=0x9d, .sp=0x85, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x166e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x166f, .a=0x64, .x=0x81, .y=0x9d, .sp=0x85, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x166e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x166e, .value=0x3d, .type=IO_READ},
        {.addr=0x166f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x8a82, .a=0xf0, .x=0xdf, .y=0x5f, .sp=0x33, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8a82, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8a83, .a=0xf0, .x=0xe0, .y=0x5f, .sp=0x33, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8a82, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8a82, .value=0x3d, .type=IO_READ},
        {.addr=0x8a83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x1c11, .a=0xab, .x=0x54, .y=0x9c, .sp=0x28, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1c11, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1c12, .a=0xab, .x=0x55, .y=0x9c, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1c11, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1c11, .value=0x3d, .type=IO_READ},
        {.addr=0x1c12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x9fe2, .a=0x98, .x=0xc0, .y=0x58, .sp=0x41, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9fe3, .a=0x98, .x=0xc1, .y=0x58, .sp=0x41, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9fe2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9fe2, .value=0x3d, .type=IO_READ},
        {.addr=0x9fe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0196) {
    const struct CPU_State initial_cpu = {.pc=0xf7e5, .a=0xdd, .x=0x74, .y=0x8a, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf7e6, .a=0xdd, .x=0x75, .y=0x8a, .sp=0xfe, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf7e5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf7e5, .value=0x3d, .type=IO_READ},
        {.addr=0xf7e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x342b, .a=0x84, .x=0xe1, .y=0xd1, .sp=0x59, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x342b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x342c, .a=0x84, .x=0xe2, .y=0xd1, .sp=0x59, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x342b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x342b, .value=0x3d, .type=IO_READ},
        {.addr=0x342c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x60d6, .a=0x40, .x=0x75, .y=0x4c, .sp=0x15, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x60d6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x60d7, .a=0x40, .x=0x76, .y=0x4c, .sp=0x15, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x60d6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x60d6, .value=0x3d, .type=IO_READ},
        {.addr=0x60d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7913, .a=0x02, .x=0xe2, .y=0x92, .sp=0xe7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x7913, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7914, .a=0x02, .x=0xe3, .y=0x92, .sp=0xe7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7913, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7913, .value=0x3d, .type=IO_READ},
        {.addr=0x7914, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x17de, .a=0x37, .x=0x04, .y=0x38, .sp=0x81, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x17de, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x17df, .a=0x37, .x=0x05, .y=0x38, .sp=0x81, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x17de, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x17de, .value=0x3d, .type=IO_READ},
        {.addr=0x17df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019B) {
    const struct CPU_State initial_cpu = {.pc=0xc078, .a=0x8b, .x=0x36, .y=0x42, .sp=0x08, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc078, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc079, .a=0x8b, .x=0x37, .y=0x42, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc078, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc078, .value=0x3d, .type=IO_READ},
        {.addr=0xc079, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x78ef, .a=0x64, .x=0x4b, .y=0x24, .sp=0x90, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x78ef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x78f0, .a=0x64, .x=0x4c, .y=0x24, .sp=0x90, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x78ef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x78ef, .value=0x3d, .type=IO_READ},
        {.addr=0x78f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x44ff, .a=0x5b, .x=0x4d, .y=0xcb, .sp=0x4e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x44ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4500, .a=0x5b, .x=0x4e, .y=0xcb, .sp=0x4e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x44ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x44ff, .value=0x3d, .type=IO_READ},
        {.addr=0x4500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7ea7, .a=0xc2, .x=0x64, .y=0xa8, .sp=0x76, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7ea8, .a=0xc2, .x=0x65, .y=0xa8, .sp=0x76, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7ea7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7ea7, .value=0x3d, .type=IO_READ},
        {.addr=0x7ea8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_019F) {
    const struct CPU_State initial_cpu = {.pc=0x3756, .a=0x3c, .x=0xf3, .y=0xfa, .sp=0xc7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3756, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3757, .a=0x3c, .x=0xf4, .y=0xfa, .sp=0xc7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3756, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3756, .value=0x3d, .type=IO_READ},
        {.addr=0x3757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x115d, .a=0x2d, .x=0xa7, .y=0x7d, .sp=0x26, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x115d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x115e, .a=0x2d, .x=0xa8, .y=0x7d, .sp=0x26, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x115d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x115d, .value=0x3d, .type=IO_READ},
        {.addr=0x115e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x75fe, .a=0x48, .x=0x37, .y=0x03, .sp=0x84, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x75fe, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x75ff, .a=0x48, .x=0x38, .y=0x03, .sp=0x84, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x75fe, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x75fe, .value=0x3d, .type=IO_READ},
        {.addr=0x75ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x1d20, .a=0x92, .x=0x38, .y=0x03, .sp=0x0c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d20, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1d21, .a=0x92, .x=0x39, .y=0x03, .sp=0x0c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1d20, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1d20, .value=0x3d, .type=IO_READ},
        {.addr=0x1d21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xbcc9, .a=0x28, .x=0xd0, .y=0x66, .sp=0x85, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xbcc9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbcca, .a=0x28, .x=0xd1, .y=0x66, .sp=0x85, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xbcc9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbcc9, .value=0x3d, .type=IO_READ},
        {.addr=0xbcca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xbbed, .a=0x2f, .x=0x89, .y=0x69, .sp=0xc5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbbed, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbbee, .a=0x2f, .x=0x8a, .y=0x69, .sp=0xc5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbbed, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbbed, .value=0x3d, .type=IO_READ},
        {.addr=0xbbee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0x58, .x=0x38, .y=0xf7, .sp=0x66, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x4341, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4342, .a=0x58, .x=0x39, .y=0xf7, .sp=0x66, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4341, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0x3d, .type=IO_READ},
        {.addr=0x4342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x2f33, .a=0xb8, .x=0x8b, .y=0x87, .sp=0x66, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2f33, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2f34, .a=0xb8, .x=0x8c, .y=0x87, .sp=0x66, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2f33, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2f33, .value=0x3d, .type=IO_READ},
        {.addr=0x2f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0e7a, .a=0x09, .x=0xff, .y=0x64, .sp=0xbc, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0e7b, .a=0x09, .x=0x00, .y=0x64, .sp=0xbc, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0e7a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0e7a, .value=0x3d, .type=IO_READ},
        {.addr=0x0e7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xb1b3, .a=0xdc, .x=0xcf, .y=0x18, .sp=0x22, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb1b3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb1b4, .a=0xdc, .x=0xd0, .y=0x18, .sp=0x22, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb1b3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb1b3, .value=0x3d, .type=IO_READ},
        {.addr=0xb1b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0c21, .a=0x64, .x=0x79, .y=0x9a, .sp=0x4e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0c21, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0c22, .a=0x64, .x=0x7a, .y=0x9a, .sp=0x4e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0c21, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0c21, .value=0x3d, .type=IO_READ},
        {.addr=0x0c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xe282, .a=0xa6, .x=0x7d, .y=0x33, .sp=0x38, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe282, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe283, .a=0xa6, .x=0x7e, .y=0x33, .sp=0x38, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe282, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe282, .value=0x3d, .type=IO_READ},
        {.addr=0xe283, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x5390, .a=0x8f, .x=0x61, .y=0x08, .sp=0xb0, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5390, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5391, .a=0x8f, .x=0x62, .y=0x08, .sp=0xb0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5390, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5390, .value=0x3d, .type=IO_READ},
        {.addr=0x5391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xa69c, .a=0x3a, .x=0x9d, .y=0x72, .sp=0x22, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa69c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa69d, .a=0x3a, .x=0x9e, .y=0x72, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa69c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa69c, .value=0x3d, .type=IO_READ},
        {.addr=0xa69d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x660f, .a=0x7b, .x=0x90, .y=0x37, .sp=0xcd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x660f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6610, .a=0x7b, .x=0x91, .y=0x37, .sp=0xcd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x660f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x660f, .value=0x3d, .type=IO_READ},
        {.addr=0x6610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xeab6, .a=0x28, .x=0xfd, .y=0x70, .sp=0xde, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xeab6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xeab7, .a=0x28, .x=0xfe, .y=0x70, .sp=0xde, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xeab6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xeab6, .value=0x3d, .type=IO_READ},
        {.addr=0xeab7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xdb52, .a=0xa1, .x=0x3a, .y=0xe1, .sp=0x76, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdb52, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdb53, .a=0xa1, .x=0x3b, .y=0xe1, .sp=0x76, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xdb52, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdb52, .value=0x3d, .type=IO_READ},
        {.addr=0xdb53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6e98, .a=0x83, .x=0xf3, .y=0x4f, .sp=0x83, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6e98, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6e99, .a=0x83, .x=0xf4, .y=0x4f, .sp=0x83, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6e98, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6e98, .value=0x3d, .type=IO_READ},
        {.addr=0x6e99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf925, .a=0xe9, .x=0x10, .y=0x36, .sp=0xcd, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xf925, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf926, .a=0xe9, .x=0x11, .y=0x36, .sp=0xcd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf925, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf925, .value=0x3d, .type=IO_READ},
        {.addr=0xf926, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8f77, .a=0x6e, .x=0xf0, .y=0x0b, .sp=0xd6, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8f77, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f78, .a=0x6e, .x=0xf1, .y=0x0b, .sp=0xd6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8f77, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f77, .value=0x3d, .type=IO_READ},
        {.addr=0x8f78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xdd6a, .a=0x2b, .x=0x65, .y=0xd4, .sp=0x60, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdd6a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdd6b, .a=0x2b, .x=0x66, .y=0xd4, .sp=0x60, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdd6a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdd6a, .value=0x3d, .type=IO_READ},
        {.addr=0xdd6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xc2eb, .a=0x8b, .x=0xf5, .y=0xfc, .sp=0x02, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc2eb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0x8b, .x=0xf6, .y=0xfc, .sp=0x02, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc2eb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc2eb, .value=0x3d, .type=IO_READ},
        {.addr=0xc2ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x4bcb, .a=0x8d, .x=0x37, .y=0x69, .sp=0x8a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4bcb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4bcc, .a=0x8d, .x=0x38, .y=0x69, .sp=0x8a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4bcb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4bcb, .value=0x3d, .type=IO_READ},
        {.addr=0x4bcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xab85, .a=0x21, .x=0xd8, .y=0x61, .sp=0x41, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xab85, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xab86, .a=0x21, .x=0xd9, .y=0x61, .sp=0x41, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xab85, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xab85, .value=0x3d, .type=IO_READ},
        {.addr=0xab86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x0eec, .a=0xcf, .x=0xb2, .y=0xd2, .sp=0x74, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0eec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0eed, .a=0xcf, .x=0xb3, .y=0xd2, .sp=0x74, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0eec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0eec, .value=0x3d, .type=IO_READ},
        {.addr=0x0eed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xa21d, .a=0xf4, .x=0xff, .y=0xbc, .sp=0xa2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa21d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa21e, .a=0xf4, .x=0x00, .y=0xbc, .sp=0xa2, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xa21d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa21d, .value=0x3d, .type=IO_READ},
        {.addr=0xa21e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x36b1, .a=0x03, .x=0x42, .y=0x38, .sp=0xd2, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x36b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x36b2, .a=0x03, .x=0x43, .y=0x38, .sp=0xd2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x36b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x36b1, .value=0x3d, .type=IO_READ},
        {.addr=0x36b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xc784, .a=0x0a, .x=0x7a, .y=0xe3, .sp=0xe7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc784, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc785, .a=0x0a, .x=0x7b, .y=0xe3, .sp=0xe7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xc784, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc784, .value=0x3d, .type=IO_READ},
        {.addr=0xc785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xd894, .a=0x2c, .x=0xde, .y=0x63, .sp=0x5b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd894, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd895, .a=0x2c, .x=0xdf, .y=0x63, .sp=0x5b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd894, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd894, .value=0x3d, .type=IO_READ},
        {.addr=0xd895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xa0f8, .a=0x93, .x=0x49, .y=0x86, .sp=0xb8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa0f9, .a=0x93, .x=0x4a, .y=0x86, .sp=0xb8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa0f8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa0f8, .value=0x3d, .type=IO_READ},
        {.addr=0xa0f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xc371, .a=0x37, .x=0x11, .y=0x7f, .sp=0x52, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc371, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc372, .a=0x37, .x=0x12, .y=0x7f, .sp=0x52, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc371, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc371, .value=0x3d, .type=IO_READ},
        {.addr=0xc372, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xd1b1, .a=0x40, .x=0xec, .y=0xba, .sp=0xf7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd1b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd1b2, .a=0x40, .x=0xed, .y=0xba, .sp=0xf7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd1b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd1b1, .value=0x3d, .type=IO_READ},
        {.addr=0xd1b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x056e, .a=0x30, .x=0x71, .y=0xa5, .sp=0xd5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x056e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x056f, .a=0x30, .x=0x72, .y=0xa5, .sp=0xd5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x056e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x056e, .value=0x3d, .type=IO_READ},
        {.addr=0x056f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x70ac, .a=0xd5, .x=0x08, .y=0x50, .sp=0x69, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x70ac, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x70ad, .a=0xd5, .x=0x09, .y=0x50, .sp=0x69, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x70ac, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x70ac, .value=0x3d, .type=IO_READ},
        {.addr=0x70ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xabe4, .a=0xc0, .x=0x5e, .y=0x63, .sp=0x46, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xabe4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xabe5, .a=0xc0, .x=0x5f, .y=0x63, .sp=0x46, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xabe4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xabe4, .value=0x3d, .type=IO_READ},
        {.addr=0xabe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xc70f, .a=0x56, .x=0x07, .y=0xfa, .sp=0xc0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc70f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc710, .a=0x56, .x=0x08, .y=0xfa, .sp=0xc0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc70f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc70f, .value=0x3d, .type=IO_READ},
        {.addr=0xc710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x4121, .a=0x4c, .x=0xca, .y=0xd6, .sp=0x0f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4121, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4122, .a=0x4c, .x=0xcb, .y=0xd6, .sp=0x0f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4121, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4121, .value=0x3d, .type=IO_READ},
        {.addr=0x4122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9dda, .a=0xd9, .x=0xad, .y=0xf4, .sp=0x88, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9dda, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9ddb, .a=0xd9, .x=0xae, .y=0xf4, .sp=0x88, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9dda, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9dda, .value=0x3d, .type=IO_READ},
        {.addr=0x9ddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xcf3c, .a=0xe6, .x=0xbe, .y=0x53, .sp=0xa7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xcf3c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcf3d, .a=0xe6, .x=0xbf, .y=0x53, .sp=0xa7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xcf3c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcf3c, .value=0x3d, .type=IO_READ},
        {.addr=0xcf3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x5a03, .a=0x50, .x=0xd0, .y=0x9e, .sp=0x8a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5a03, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5a04, .a=0x50, .x=0xd1, .y=0x9e, .sp=0x8a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5a03, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5a03, .value=0x3d, .type=IO_READ},
        {.addr=0x5a04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xc79d, .a=0x95, .x=0x44, .y=0x47, .sp=0x9b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc79d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc79e, .a=0x95, .x=0x45, .y=0x47, .sp=0x9b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc79d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc79d, .value=0x3d, .type=IO_READ},
        {.addr=0xc79e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x70d9, .a=0x06, .x=0x58, .y=0x89, .sp=0xd4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x70d9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x70da, .a=0x06, .x=0x59, .y=0x89, .sp=0xd4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x70d9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x70d9, .value=0x3d, .type=IO_READ},
        {.addr=0x70da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x6c79, .a=0x3a, .x=0xdf, .y=0x59, .sp=0x78, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6c79, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6c7a, .a=0x3a, .x=0xe0, .y=0x59, .sp=0x78, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6c79, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6c79, .value=0x3d, .type=IO_READ},
        {.addr=0x6c7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x68e6, .a=0xed, .x=0x4c, .y=0xd8, .sp=0xac, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x68e6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x68e7, .a=0xed, .x=0x4d, .y=0xd8, .sp=0xac, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x68e6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x68e6, .value=0x3d, .type=IO_READ},
        {.addr=0x68e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x34d2, .a=0xc6, .x=0xce, .y=0xad, .sp=0x37, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x34d2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x34d3, .a=0xc6, .x=0xcf, .y=0xad, .sp=0x37, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x34d2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x34d2, .value=0x3d, .type=IO_READ},
        {.addr=0x34d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x067e, .a=0x5d, .x=0x8b, .y=0xdc, .sp=0x4b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x067e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x067f, .a=0x5d, .x=0x8c, .y=0xdc, .sp=0x4b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x067e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x067e, .value=0x3d, .type=IO_READ},
        {.addr=0x067f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xcb0a, .a=0xcf, .x=0xa2, .y=0x97, .sp=0x49, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xcb0a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcb0b, .a=0xcf, .x=0xa3, .y=0x97, .sp=0x49, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcb0a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcb0a, .value=0x3d, .type=IO_READ},
        {.addr=0xcb0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xadb1, .a=0xbb, .x=0x14, .y=0x52, .sp=0x20, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xadb1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xadb2, .a=0xbb, .x=0x15, .y=0x52, .sp=0x20, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xadb1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xadb1, .value=0x3d, .type=IO_READ},
        {.addr=0xadb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x378a, .a=0x10, .x=0xca, .y=0x6f, .sp=0x2e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x378a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x378b, .a=0x10, .x=0xcb, .y=0x6f, .sp=0x2e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x378a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x378a, .value=0x3d, .type=IO_READ},
        {.addr=0x378b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xdafe, .a=0x64, .x=0x3d, .y=0xa5, .sp=0xdb, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xdafe, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdaff, .a=0x64, .x=0x3e, .y=0xa5, .sp=0xdb, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdafe, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdafe, .value=0x3d, .type=IO_READ},
        {.addr=0xdaff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x6176, .a=0x0e, .x=0xe8, .y=0x5e, .sp=0xdc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6176, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6177, .a=0x0e, .x=0xe9, .y=0x5e, .sp=0xdc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6176, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6176, .value=0x3d, .type=IO_READ},
        {.addr=0x6177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x02fd, .a=0x42, .x=0xad, .y=0x76, .sp=0x4c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x02fd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x02fe, .a=0x42, .x=0xae, .y=0x76, .sp=0x4c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x02fd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x02fd, .value=0x3d, .type=IO_READ},
        {.addr=0x02fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x59d1, .a=0x84, .x=0x2d, .y=0x07, .sp=0xe9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x59d1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x59d2, .a=0x84, .x=0x2e, .y=0x07, .sp=0xe9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x59d1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x59d1, .value=0x3d, .type=IO_READ},
        {.addr=0x59d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x29fd, .a=0x4c, .x=0xc5, .y=0x97, .sp=0xa1, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x29fd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x29fe, .a=0x4c, .x=0xc6, .y=0x97, .sp=0xa1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x29fd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x29fd, .value=0x3d, .type=IO_READ},
        {.addr=0x29fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb014, .a=0xf2, .x=0x7a, .y=0xb9, .sp=0x57, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb014, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb015, .a=0xf2, .x=0x7b, .y=0xb9, .sp=0x57, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb014, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb014, .value=0x3d, .type=IO_READ},
        {.addr=0xb015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x2a85, .a=0xb9, .x=0x04, .y=0x98, .sp=0xf8, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2a85, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2a86, .a=0xb9, .x=0x05, .y=0x98, .sp=0xf8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2a85, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2a85, .value=0x3d, .type=IO_READ},
        {.addr=0x2a86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x79a4, .a=0x96, .x=0x46, .y=0x2c, .sp=0x83, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x79a4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x79a5, .a=0x96, .x=0x47, .y=0x2c, .sp=0x83, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x79a4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x79a4, .value=0x3d, .type=IO_READ},
        {.addr=0x79a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x59c7, .a=0x9e, .x=0x26, .y=0x63, .sp=0xe5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x59c7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x59c8, .a=0x9e, .x=0x27, .y=0x63, .sp=0xe5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x59c7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x59c7, .value=0x3d, .type=IO_READ},
        {.addr=0x59c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xbd82, .a=0x6b, .x=0x03, .y=0x6f, .sp=0x84, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xbd82, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbd83, .a=0x6b, .x=0x04, .y=0x6f, .sp=0x84, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbd82, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbd82, .value=0x3d, .type=IO_READ},
        {.addr=0xbd83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x610d, .a=0xad, .x=0xf0, .y=0xbb, .sp=0x12, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x610d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x610e, .a=0xad, .x=0xf1, .y=0xbb, .sp=0x12, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x610d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x610d, .value=0x3d, .type=IO_READ},
        {.addr=0x610e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xfaea, .a=0xe2, .x=0x69, .y=0x56, .sp=0xc9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xfaea, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfaeb, .a=0xe2, .x=0x6a, .y=0x56, .sp=0xc9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfaea, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfaea, .value=0x3d, .type=IO_READ},
        {.addr=0xfaeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x4de7, .a=0x2e, .x=0xe3, .y=0x6b, .sp=0x43, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4de7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4de8, .a=0x2e, .x=0xe4, .y=0x6b, .sp=0x43, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4de7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4de7, .value=0x3d, .type=IO_READ},
        {.addr=0x4de8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x5b56, .a=0xbd, .x=0x4b, .y=0x85, .sp=0xb5, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5b56, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0xbd, .x=0x4c, .y=0x85, .sp=0xb5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5b56, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5b56, .value=0x3d, .type=IO_READ},
        {.addr=0x5b57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8f3f, .a=0x92, .x=0x11, .y=0x68, .sp=0xbb, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8f3f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f40, .a=0x92, .x=0x12, .y=0x68, .sp=0xbb, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8f3f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f3f, .value=0x3d, .type=IO_READ},
        {.addr=0x8f40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xe07a, .a=0x19, .x=0x76, .y=0xd4, .sp=0x27, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe07a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe07b, .a=0x19, .x=0x77, .y=0xd4, .sp=0x27, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe07a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe07a, .value=0x3d, .type=IO_READ},
        {.addr=0xe07b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x3f52, .a=0xf3, .x=0x76, .y=0xda, .sp=0x42, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3f52, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3f53, .a=0xf3, .x=0x77, .y=0xda, .sp=0x42, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3f52, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3f52, .value=0x3d, .type=IO_READ},
        {.addr=0x3f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x6492, .a=0x90, .x=0x45, .y=0xd7, .sp=0x19, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6492, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6493, .a=0x90, .x=0x46, .y=0xd7, .sp=0x19, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6492, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6492, .value=0x3d, .type=IO_READ},
        {.addr=0x6493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x78a2, .a=0x01, .x=0xeb, .y=0x61, .sp=0xe4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x78a2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x78a3, .a=0x01, .x=0xec, .y=0x61, .sp=0xe4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x78a2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x78a2, .value=0x3d, .type=IO_READ},
        {.addr=0x78a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xa8b5, .a=0xaa, .x=0xf7, .y=0x5d, .sp=0x56, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa8b6, .a=0xaa, .x=0xf8, .y=0x5d, .sp=0x56, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa8b5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa8b5, .value=0x3d, .type=IO_READ},
        {.addr=0xa8b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x0ad3, .a=0x9d, .x=0x41, .y=0x5b, .sp=0x2d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0ad4, .a=0x9d, .x=0x42, .y=0x5b, .sp=0x2d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0ad3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0ad3, .value=0x3d, .type=IO_READ},
        {.addr=0x0ad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x63fa, .a=0xda, .x=0x59, .y=0xe4, .sp=0x6d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x63fa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x63fb, .a=0xda, .x=0x5a, .y=0xe4, .sp=0x6d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x63fa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x63fa, .value=0x3d, .type=IO_READ},
        {.addr=0x63fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x6d73, .a=0xe8, .x=0x62, .y=0x3f, .sp=0x93, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6d73, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6d74, .a=0xe8, .x=0x63, .y=0x3f, .sp=0x93, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6d73, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6d73, .value=0x3d, .type=IO_READ},
        {.addr=0x6d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xe5b6, .a=0x7f, .x=0x17, .y=0xf0, .sp=0xd7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe5b7, .a=0x7f, .x=0x18, .y=0xf0, .sp=0xd7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe5b6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe5b6, .value=0x3d, .type=IO_READ},
        {.addr=0xe5b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x0144, .a=0x7a, .x=0x1c, .y=0x85, .sp=0xb9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0145, .a=0x7a, .x=0x1d, .y=0x85, .sp=0xb9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0144, .value=0x3d, .type=IO_READ},
        {.addr=0x0145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x212e, .a=0xa4, .x=0xdc, .y=0xe8, .sp=0x20, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x212e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x212f, .a=0xa4, .x=0xdd, .y=0xe8, .sp=0x20, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x212e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x212e, .value=0x3d, .type=IO_READ},
        {.addr=0x212f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x9504, .a=0x7e, .x=0x96, .y=0x1d, .sp=0x26, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9504, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9505, .a=0x7e, .x=0x97, .y=0x1d, .sp=0x26, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9504, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9504, .value=0x3d, .type=IO_READ},
        {.addr=0x9505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xabc5, .a=0xa1, .x=0x6a, .y=0x15, .sp=0x8e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xabc5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xabc6, .a=0xa1, .x=0x6b, .y=0x15, .sp=0x8e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xabc5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xabc5, .value=0x3d, .type=IO_READ},
        {.addr=0xabc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x85c9, .a=0xf3, .x=0x83, .y=0x97, .sp=0xae, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x85c9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x85ca, .a=0xf3, .x=0x84, .y=0x97, .sp=0xae, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x85c9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x85c9, .value=0x3d, .type=IO_READ},
        {.addr=0x85ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xaa4b, .a=0xfe, .x=0x9a, .y=0xc9, .sp=0x5c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xaa4b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xaa4c, .a=0xfe, .x=0x9b, .y=0xc9, .sp=0x5c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xaa4b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xaa4b, .value=0x3d, .type=IO_READ},
        {.addr=0xaa4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x8f30, .a=0x93, .x=0x87, .y=0xae, .sp=0x18, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8f30, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f31, .a=0x93, .x=0x88, .y=0xae, .sp=0x18, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8f30, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f30, .value=0x3d, .type=IO_READ},
        {.addr=0x8f31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe253, .a=0x63, .x=0xfd, .y=0x0a, .sp=0x76, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe253, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe254, .a=0x63, .x=0xfe, .y=0x0a, .sp=0x76, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe253, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe253, .value=0x3d, .type=IO_READ},
        {.addr=0xe254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x1224, .a=0x35, .x=0xf0, .y=0xcf, .sp=0x6e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1224, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1225, .a=0x35, .x=0xf1, .y=0xcf, .sp=0x6e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1224, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1224, .value=0x3d, .type=IO_READ},
        {.addr=0x1225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xb02b, .a=0xe5, .x=0x46, .y=0xd1, .sp=0xf1, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb02b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb02c, .a=0xe5, .x=0x47, .y=0xd1, .sp=0xf1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb02b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb02b, .value=0x3d, .type=IO_READ},
        {.addr=0xb02c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9a6b, .a=0x9d, .x=0x0e, .y=0x19, .sp=0xec, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x9a6b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9a6c, .a=0x9d, .x=0x0f, .y=0x19, .sp=0xec, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9a6b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9a6b, .value=0x3d, .type=IO_READ},
        {.addr=0x9a6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2772, .a=0x58, .x=0x25, .y=0x8d, .sp=0xa2, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2772, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2773, .a=0x58, .x=0x26, .y=0x8d, .sp=0xa2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2772, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2772, .value=0x3d, .type=IO_READ},
        {.addr=0x2773, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc546, .a=0xb8, .x=0x95, .y=0xb1, .sp=0xd0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xc546, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc547, .a=0xb8, .x=0x96, .y=0xb1, .sp=0xd0, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc546, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc546, .value=0x3d, .type=IO_READ},
        {.addr=0xc547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x9c1c, .a=0xe1, .x=0x42, .y=0x14, .sp=0x86, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9c1c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9c1d, .a=0xe1, .x=0x43, .y=0x14, .sp=0x86, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9c1c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9c1c, .value=0x3d, .type=IO_READ},
        {.addr=0x9c1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x85e8, .a=0x26, .x=0xa0, .y=0x49, .sp=0x42, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x85e8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x85e9, .a=0x26, .x=0xa1, .y=0x49, .sp=0x42, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x85e8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x85e8, .value=0x3d, .type=IO_READ},
        {.addr=0x85e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x5dea, .a=0x75, .x=0x5f, .y=0x40, .sp=0xef, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5dea, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5deb, .a=0x75, .x=0x60, .y=0x40, .sp=0xef, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5dea, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5dea, .value=0x3d, .type=IO_READ},
        {.addr=0x5deb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xf658, .a=0xb4, .x=0x1c, .y=0x42, .sp=0x62, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xf658, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf659, .a=0xb4, .x=0x1d, .y=0x42, .sp=0x62, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf658, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf658, .value=0x3d, .type=IO_READ},
        {.addr=0xf659, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2b05, .a=0xe3, .x=0x55, .y=0x44, .sp=0x7e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2b05, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2b06, .a=0xe3, .x=0x56, .y=0x44, .sp=0x7e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b05, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2b05, .value=0x3d, .type=IO_READ},
        {.addr=0x2b06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x88e6, .a=0x2d, .x=0x65, .y=0x7a, .sp=0xed, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x88e6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x88e7, .a=0x2d, .x=0x66, .y=0x7a, .sp=0xed, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x88e6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x88e6, .value=0x3d, .type=IO_READ},
        {.addr=0x88e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xba82, .a=0x2d, .x=0x79, .y=0x24, .sp=0x6d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xba82, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xba83, .a=0x2d, .x=0x7a, .y=0x24, .sp=0x6d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xba82, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xba82, .value=0x3d, .type=IO_READ},
        {.addr=0xba83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xc893, .a=0x63, .x=0x23, .y=0x89, .sp=0xb7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc893, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc894, .a=0x63, .x=0x24, .y=0x89, .sp=0xb7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc893, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc893, .value=0x3d, .type=IO_READ},
        {.addr=0xc894, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x8947, .a=0x04, .x=0xf3, .y=0xcf, .sp=0x2b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8947, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8948, .a=0x04, .x=0xf4, .y=0xcf, .sp=0x2b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8947, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8947, .value=0x3d, .type=IO_READ},
        {.addr=0x8948, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x0733, .a=0xfb, .x=0x6f, .y=0x3b, .sp=0xd8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0733, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0734, .a=0xfb, .x=0x70, .y=0x3b, .sp=0xd8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0733, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0733, .value=0x3d, .type=IO_READ},
        {.addr=0x0734, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x2ecf, .a=0xeb, .x=0xd3, .y=0xbb, .sp=0x34, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x2ecf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2ed0, .a=0xeb, .x=0xd4, .y=0xbb, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2ecf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2ecf, .value=0x3d, .type=IO_READ},
        {.addr=0x2ed0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x9397, .a=0xd7, .x=0x3b, .y=0x82, .sp=0x14, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9397, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9398, .a=0xd7, .x=0x3c, .y=0x82, .sp=0x14, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9397, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9397, .value=0x3d, .type=IO_READ},
        {.addr=0x9398, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0201) {
    const struct CPU_State initial_cpu = {.pc=0xb2d5, .a=0x1a, .x=0x97, .y=0xd4, .sp=0x50, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb2d6, .a=0x1a, .x=0x98, .y=0xd4, .sp=0x50, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb2d5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb2d5, .value=0x3d, .type=IO_READ},
        {.addr=0xb2d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3e8c, .a=0xf5, .x=0x47, .y=0x3b, .sp=0x16, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3e8d, .a=0xf5, .x=0x48, .y=0x3b, .sp=0x16, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3e8c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3e8c, .value=0x3d, .type=IO_READ},
        {.addr=0x3e8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x0449, .a=0xcd, .x=0x15, .y=0x0f, .sp=0x59, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0449, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x044a, .a=0xcd, .x=0x16, .y=0x0f, .sp=0x59, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0449, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0449, .value=0x3d, .type=IO_READ},
        {.addr=0x044a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x1f8d, .a=0x5b, .x=0x36, .y=0xc2, .sp=0x0a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1f8e, .a=0x5b, .x=0x37, .y=0xc2, .sp=0x0a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1f8d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1f8d, .value=0x3d, .type=IO_READ},
        {.addr=0x1f8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0205) {
    const struct CPU_State initial_cpu = {.pc=0xfa8e, .a=0xb4, .x=0x3b, .y=0xf3, .sp=0xcd, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xfa8e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfa8f, .a=0xb4, .x=0x3c, .y=0xf3, .sp=0xcd, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfa8e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfa8e, .value=0x3d, .type=IO_READ},
        {.addr=0xfa8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x0fcd, .a=0x0e, .x=0x84, .y=0xcc, .sp=0x9c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0fcd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0fce, .a=0x0e, .x=0x85, .y=0xcc, .sp=0x9c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0fcd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0fcd, .value=0x3d, .type=IO_READ},
        {.addr=0x0fce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x3372, .a=0x03, .x=0xb3, .y=0xb3, .sp=0xdf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3372, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3373, .a=0x03, .x=0xb4, .y=0xb3, .sp=0xdf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3372, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3372, .value=0x3d, .type=IO_READ},
        {.addr=0x3373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6ffd, .a=0xc7, .x=0x05, .y=0x53, .sp=0x25, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6ffe, .a=0xc7, .x=0x06, .y=0x53, .sp=0x25, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6ffd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6ffd, .value=0x3d, .type=IO_READ},
        {.addr=0x6ffe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0209) {
    const struct CPU_State initial_cpu = {.pc=0xf91d, .a=0x0a, .x=0xf9, .y=0x8b, .sp=0x82, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xf91d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf91e, .a=0x0a, .x=0xfa, .y=0x8b, .sp=0x82, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xf91d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf91d, .value=0x3d, .type=IO_READ},
        {.addr=0xf91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xa399, .a=0xe9, .x=0xd0, .y=0x51, .sp=0x3a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa399, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa39a, .a=0xe9, .x=0xd1, .y=0x51, .sp=0x3a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa399, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa399, .value=0x3d, .type=IO_READ},
        {.addr=0xa39a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x8d00, .a=0xf7, .x=0x32, .y=0xf9, .sp=0x83, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8d00, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8d01, .a=0xf7, .x=0x33, .y=0xf9, .sp=0x83, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8d00, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8d00, .value=0x3d, .type=IO_READ},
        {.addr=0x8d01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020C) {
    const struct CPU_State initial_cpu = {.pc=0xad8d, .a=0x68, .x=0xf0, .y=0x3b, .sp=0xa9, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xad8d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xad8e, .a=0x68, .x=0xf1, .y=0x3b, .sp=0xa9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xad8d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xad8d, .value=0x3d, .type=IO_READ},
        {.addr=0xad8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x7b2e, .a=0x92, .x=0xc8, .y=0x3d, .sp=0x63, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b2e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b2f, .a=0x92, .x=0xc9, .y=0x3d, .sp=0x63, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7b2e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b2e, .value=0x3d, .type=IO_READ},
        {.addr=0x7b2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8d12, .a=0x37, .x=0x42, .y=0x56, .sp=0xa6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d12, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8d13, .a=0x37, .x=0x43, .y=0x56, .sp=0xa6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8d12, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8d12, .value=0x3d, .type=IO_READ},
        {.addr=0x8d13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x324f, .a=0xc6, .x=0xdc, .y=0xd5, .sp=0xbb, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x324f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3250, .a=0xc6, .x=0xdd, .y=0xd5, .sp=0xbb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x324f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x324f, .value=0x3d, .type=IO_READ},
        {.addr=0x3250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0210) {
    const struct CPU_State initial_cpu = {.pc=0xef12, .a=0x5f, .x=0xc4, .y=0x5f, .sp=0x84, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xef12, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xef13, .a=0x5f, .x=0xc5, .y=0x5f, .sp=0x84, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xef12, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xef12, .value=0x3d, .type=IO_READ},
        {.addr=0xef13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xa7aa, .a=0x99, .x=0x4d, .y=0x12, .sp=0x60, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xa7aa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa7ab, .a=0x99, .x=0x4e, .y=0x12, .sp=0x60, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa7aa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa7aa, .value=0x3d, .type=IO_READ},
        {.addr=0xa7ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0212) {
    const struct CPU_State initial_cpu = {.pc=0xbb9a, .a=0x18, .x=0x72, .y=0xc4, .sp=0x6a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbb9b, .a=0x18, .x=0x73, .y=0xc4, .sp=0x6a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbb9a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbb9a, .value=0x3d, .type=IO_READ},
        {.addr=0xbb9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x787a, .a=0x8f, .x=0xcf, .y=0xf6, .sp=0x55, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x787a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x787b, .a=0x8f, .x=0xd0, .y=0xf6, .sp=0x55, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x787a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x787a, .value=0x3d, .type=IO_READ},
        {.addr=0x787b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x06a9, .a=0xab, .x=0xbc, .y=0x1d, .sp=0x3e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x06a9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x06aa, .a=0xab, .x=0xbd, .y=0x1d, .sp=0x3e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x06a9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x06a9, .value=0x3d, .type=IO_READ},
        {.addr=0x06aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0215) {
    const struct CPU_State initial_cpu = {.pc=0xfe94, .a=0x0d, .x=0x05, .y=0x11, .sp=0x4f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe94, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfe95, .a=0x0d, .x=0x06, .y=0x11, .sp=0x4f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfe94, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfe94, .value=0x3d, .type=IO_READ},
        {.addr=0xfe95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0216) {
    const struct CPU_State initial_cpu = {.pc=0xc38d, .a=0xec, .x=0xd5, .y=0xfe, .sp=0x66, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc38d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc38e, .a=0xec, .x=0xd6, .y=0xfe, .sp=0x66, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc38d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc38d, .value=0x3d, .type=IO_READ},
        {.addr=0xc38e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xb846, .a=0x47, .x=0x42, .y=0x51, .sp=0x35, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb846, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb847, .a=0x47, .x=0x43, .y=0x51, .sp=0x35, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb846, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb846, .value=0x3d, .type=IO_READ},
        {.addr=0xb847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xbc92, .a=0xa7, .x=0x55, .y=0xd5, .sp=0xb7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbc92, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbc93, .a=0xa7, .x=0x56, .y=0xd5, .sp=0xb7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbc92, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbc92, .value=0x3d, .type=IO_READ},
        {.addr=0xbc93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0219) {
    const struct CPU_State initial_cpu = {.pc=0xa20a, .a=0xa0, .x=0x54, .y=0x8c, .sp=0x57, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa20a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa20b, .a=0xa0, .x=0x55, .y=0x8c, .sp=0x57, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa20a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa20a, .value=0x3d, .type=IO_READ},
        {.addr=0xa20b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x79e8, .a=0xfa, .x=0x80, .y=0xdd, .sp=0xea, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x79e8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x79e9, .a=0xfa, .x=0x81, .y=0xdd, .sp=0xea, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x79e8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x79e8, .value=0x3d, .type=IO_READ},
        {.addr=0x79e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x31d2, .a=0x32, .x=0xd7, .y=0x5c, .sp=0x75, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x31d2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x31d3, .a=0x32, .x=0xd8, .y=0x5c, .sp=0x75, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x31d2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x31d2, .value=0x3d, .type=IO_READ},
        {.addr=0x31d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x552f, .a=0xad, .x=0x0d, .y=0x57, .sp=0x8e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x552f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5530, .a=0xad, .x=0x0e, .y=0x57, .sp=0x8e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x552f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x552f, .value=0x3d, .type=IO_READ},
        {.addr=0x5530, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0xc8, .x=0xb6, .y=0x61, .sp=0x2f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7a67, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a68, .a=0xc8, .x=0xb7, .y=0x61, .sp=0x2f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7a67, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0x3d, .type=IO_READ},
        {.addr=0x7a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x004e, .a=0xd6, .x=0x03, .y=0xce, .sp=0xe2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x004f, .a=0xd6, .x=0x04, .y=0xce, .sp=0xe2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x004e, .value=0x3d, .type=IO_READ},
        {.addr=0x004f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_021F) {
    const struct CPU_State initial_cpu = {.pc=0xc13e, .a=0x16, .x=0xa1, .y=0x76, .sp=0xa1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc13e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc13f, .a=0x16, .x=0xa2, .y=0x76, .sp=0xa1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc13e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc13e, .value=0x3d, .type=IO_READ},
        {.addr=0xc13f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x409e, .a=0x49, .x=0xfa, .y=0x64, .sp=0xbc, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x409e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x409f, .a=0x49, .x=0xfb, .y=0x64, .sp=0xbc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x409e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x409e, .value=0x3d, .type=IO_READ},
        {.addr=0x409f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0221) {
    const struct CPU_State initial_cpu = {.pc=0x5c5d, .a=0xa7, .x=0xd8, .y=0xe1, .sp=0x60, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5c5d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5c5e, .a=0xa7, .x=0xd9, .y=0xe1, .sp=0x60, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5c5d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5c5d, .value=0x3d, .type=IO_READ},
        {.addr=0x5c5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0222) {
    const struct CPU_State initial_cpu = {.pc=0x4bd4, .a=0xa2, .x=0x4c, .y=0xe8, .sp=0xc3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4bd5, .a=0xa2, .x=0x4d, .y=0xe8, .sp=0xc3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4bd4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4bd4, .value=0x3d, .type=IO_READ},
        {.addr=0x4bd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0223) {
    const struct CPU_State initial_cpu = {.pc=0x95a1, .a=0xb3, .x=0x24, .y=0x11, .sp=0x55, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x95a1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x95a2, .a=0xb3, .x=0x25, .y=0x11, .sp=0x55, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x95a1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x95a1, .value=0x3d, .type=IO_READ},
        {.addr=0x95a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x65c8, .a=0x8b, .x=0x70, .y=0x67, .sp=0xdd, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x65c8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x65c9, .a=0x8b, .x=0x71, .y=0x67, .sp=0xdd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x65c8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x65c8, .value=0x3d, .type=IO_READ},
        {.addr=0x65c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x6446, .a=0xbf, .x=0xfe, .y=0x4c, .sp=0x80, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6446, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6447, .a=0xbf, .x=0xff, .y=0x4c, .sp=0x80, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6446, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6446, .value=0x3d, .type=IO_READ},
        {.addr=0x6447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb09e, .a=0x6a, .x=0x3c, .y=0xb3, .sp=0xf1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb09e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb09f, .a=0x6a, .x=0x3d, .y=0xb3, .sp=0xf1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb09e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb09e, .value=0x3d, .type=IO_READ},
        {.addr=0xb09f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0227) {
    const struct CPU_State initial_cpu = {.pc=0xc6ae, .a=0x17, .x=0xd4, .y=0x4d, .sp=0x3b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc6af, .a=0x17, .x=0xd5, .y=0x4d, .sp=0x3b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc6ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc6ae, .value=0x3d, .type=IO_READ},
        {.addr=0xc6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa615, .a=0x12, .x=0x80, .y=0x99, .sp=0x6c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa615, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa616, .a=0x12, .x=0x81, .y=0x99, .sp=0x6c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa615, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa615, .value=0x3d, .type=IO_READ},
        {.addr=0xa616, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x9af2, .a=0x78, .x=0xa0, .y=0x36, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9af2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9af3, .a=0x78, .x=0xa1, .y=0x36, .sp=0x2a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9af2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9af2, .value=0x3d, .type=IO_READ},
        {.addr=0x9af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x74bf, .a=0x9c, .x=0x47, .y=0x45, .sp=0x41, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x74bf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x74c0, .a=0x9c, .x=0x48, .y=0x45, .sp=0x41, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x74bf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x74bf, .value=0x3d, .type=IO_READ},
        {.addr=0x74c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022B) {
    const struct CPU_State initial_cpu = {.pc=0xac53, .a=0xa1, .x=0x05, .y=0xe0, .sp=0x3f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xac53, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xac54, .a=0xa1, .x=0x06, .y=0xe0, .sp=0x3f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xac53, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xac53, .value=0x3d, .type=IO_READ},
        {.addr=0xac54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022C) {
    const struct CPU_State initial_cpu = {.pc=0xea9c, .a=0x68, .x=0x96, .y=0xb5, .sp=0x5a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xea9c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xea9d, .a=0x68, .x=0x97, .y=0xb5, .sp=0x5a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xea9c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xea9c, .value=0x3d, .type=IO_READ},
        {.addr=0xea9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022D) {
    const struct CPU_State initial_cpu = {.pc=0xad82, .a=0x50, .x=0x7d, .y=0x58, .sp=0xaa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xad82, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xad83, .a=0x50, .x=0x7e, .y=0x58, .sp=0xaa, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xad82, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xad82, .value=0x3d, .type=IO_READ},
        {.addr=0xad83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x4749, .a=0x55, .x=0x6e, .y=0x42, .sp=0xf7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4749, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x474a, .a=0x55, .x=0x6f, .y=0x42, .sp=0xf7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4749, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4749, .value=0x3d, .type=IO_READ},
        {.addr=0x474a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x6227, .a=0x7c, .x=0x4e, .y=0x40, .sp=0x68, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6227, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6228, .a=0x7c, .x=0x4f, .y=0x40, .sp=0x68, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6227, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6227, .value=0x3d, .type=IO_READ},
        {.addr=0x6228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x5f0f, .a=0xf5, .x=0xbd, .y=0x09, .sp=0x3f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5f10, .a=0xf5, .x=0xbe, .y=0x09, .sp=0x3f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5f0f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5f0f, .value=0x3d, .type=IO_READ},
        {.addr=0x5f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x245a, .a=0x35, .x=0x34, .y=0xd6, .sp=0xec, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x245a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x245b, .a=0x35, .x=0x35, .y=0xd6, .sp=0xec, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x245a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x245a, .value=0x3d, .type=IO_READ},
        {.addr=0x245b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0232) {
    const struct CPU_State initial_cpu = {.pc=0xe6ae, .a=0xb8, .x=0xaa, .y=0xf3, .sp=0xc2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe6ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe6af, .a=0xb8, .x=0xab, .y=0xf3, .sp=0xc2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe6ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe6ae, .value=0x3d, .type=IO_READ},
        {.addr=0xe6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0233) {
    const struct CPU_State initial_cpu = {.pc=0xba2a, .a=0xcb, .x=0xfc, .y=0x8b, .sp=0x31, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xba2a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xba2b, .a=0xcb, .x=0xfd, .y=0x8b, .sp=0x31, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xba2a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xba2a, .value=0x3d, .type=IO_READ},
        {.addr=0xba2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x582c, .a=0x5b, .x=0x7b, .y=0xdb, .sp=0xd8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x582c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x582d, .a=0x5b, .x=0x7c, .y=0xdb, .sp=0xd8, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x582c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x582c, .value=0x3d, .type=IO_READ},
        {.addr=0x582d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0235) {
    const struct CPU_State initial_cpu = {.pc=0x055e, .a=0x0a, .x=0xa6, .y=0x9a, .sp=0x74, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x055e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x055f, .a=0x0a, .x=0xa7, .y=0x9a, .sp=0x74, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x055e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x055e, .value=0x3d, .type=IO_READ},
        {.addr=0x055f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0662, .a=0xa6, .x=0xd2, .y=0x43, .sp=0xd9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0662, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0663, .a=0xa6, .x=0xd3, .y=0x43, .sp=0xd9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0662, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0662, .value=0x3d, .type=IO_READ},
        {.addr=0x0663, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0237) {
    const struct CPU_State initial_cpu = {.pc=0xc846, .a=0xdf, .x=0x7e, .y=0x22, .sp=0xe5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc846, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc847, .a=0xdf, .x=0x7f, .y=0x22, .sp=0xe5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc846, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc846, .value=0x3d, .type=IO_READ},
        {.addr=0xc847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x795c, .a=0xc3, .x=0x2d, .y=0xf2, .sp=0x7d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x795c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x795d, .a=0xc3, .x=0x2e, .y=0xf2, .sp=0x7d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x795c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x795c, .value=0x3d, .type=IO_READ},
        {.addr=0x795d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0239) {
    const struct CPU_State initial_cpu = {.pc=0x4c04, .a=0xfa, .x=0xb5, .y=0x6e, .sp=0x0a, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4c04, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4c05, .a=0xfa, .x=0xb6, .y=0x6e, .sp=0x0a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4c04, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4c04, .value=0x3d, .type=IO_READ},
        {.addr=0x4c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x717e, .a=0x3c, .x=0xd5, .y=0x81, .sp=0x3e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x717e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x717f, .a=0x3c, .x=0xd6, .y=0x81, .sp=0x3e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x717e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x717e, .value=0x3d, .type=IO_READ},
        {.addr=0x717f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023B) {
    const struct CPU_State initial_cpu = {.pc=0xe173, .a=0x8c, .x=0xe0, .y=0x80, .sp=0x0b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe173, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe174, .a=0x8c, .x=0xe1, .y=0x80, .sp=0x0b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe173, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe173, .value=0x3d, .type=IO_READ},
        {.addr=0xe174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x912b, .a=0xf2, .x=0x48, .y=0x33, .sp=0x6e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x912b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x912c, .a=0xf2, .x=0x49, .y=0x33, .sp=0x6e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x912b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x912b, .value=0x3d, .type=IO_READ},
        {.addr=0x912c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x1a3f, .a=0xd8, .x=0x86, .y=0x3d, .sp=0x51, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1a40, .a=0xd8, .x=0x87, .y=0x3d, .sp=0x51, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1a3f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1a3f, .value=0x3d, .type=IO_READ},
        {.addr=0x1a40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x723d, .a=0x5e, .x=0x29, .y=0x00, .sp=0x68, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x723d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x723e, .a=0x5e, .x=0x2a, .y=0x00, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x723d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x723d, .value=0x3d, .type=IO_READ},
        {.addr=0x723e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa918, .a=0x2f, .x=0x7e, .y=0x6f, .sp=0x65, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa918, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa919, .a=0x2f, .x=0x7f, .y=0x6f, .sp=0x65, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa918, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa918, .value=0x3d, .type=IO_READ},
        {.addr=0xa919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xd317, .a=0x94, .x=0x8f, .y=0x3b, .sp=0xfa, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd317, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd318, .a=0x94, .x=0x90, .y=0x3b, .sp=0xfa, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd317, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd317, .value=0x3d, .type=IO_READ},
        {.addr=0xd318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4321, .a=0x97, .x=0x70, .y=0xc3, .sp=0x43, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4321, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4322, .a=0x97, .x=0x71, .y=0xc3, .sp=0x43, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4321, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4321, .value=0x3d, .type=IO_READ},
        {.addr=0x4322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x40e2, .a=0x29, .x=0x22, .y=0x97, .sp=0xb5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x40e2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x40e3, .a=0x29, .x=0x23, .y=0x97, .sp=0xb5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x40e2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x40e2, .value=0x3d, .type=IO_READ},
        {.addr=0x40e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x208e, .a=0xb7, .x=0x45, .y=0x67, .sp=0x42, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x208e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x208f, .a=0xb7, .x=0x46, .y=0x67, .sp=0x42, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x208e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x208e, .value=0x3d, .type=IO_READ},
        {.addr=0x208f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x507e, .a=0x9e, .x=0x12, .y=0x2b, .sp=0xeb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x507e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x507f, .a=0x9e, .x=0x13, .y=0x2b, .sp=0xeb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x507e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x507e, .value=0x3d, .type=IO_READ},
        {.addr=0x507f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x8ad4, .a=0x57, .x=0x3f, .y=0x6c, .sp=0x08, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8ad5, .a=0x57, .x=0x40, .y=0x6c, .sp=0x08, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8ad4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ad4, .value=0x3d, .type=IO_READ},
        {.addr=0x8ad5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x1d15, .a=0x3d, .x=0x49, .y=0x94, .sp=0x2b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x1d15, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1d16, .a=0x3d, .x=0x4a, .y=0x94, .sp=0x2b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1d15, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1d15, .value=0x3d, .type=IO_READ},
        {.addr=0x1d16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x97ac, .a=0x99, .x=0xba, .y=0x5e, .sp=0xe0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x97ac, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x97ad, .a=0x99, .x=0xbb, .y=0x5e, .sp=0xe0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x97ac, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x97ac, .value=0x3d, .type=IO_READ},
        {.addr=0x97ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8213, .a=0xd2, .x=0x01, .y=0x37, .sp=0x37, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x8213, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8214, .a=0xd2, .x=0x02, .y=0x37, .sp=0x37, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8213, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8213, .value=0x3d, .type=IO_READ},
        {.addr=0x8214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0249) {
    const struct CPU_State initial_cpu = {.pc=0xb78a, .a=0xe0, .x=0x07, .y=0x89, .sp=0x27, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb78a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb78b, .a=0xe0, .x=0x08, .y=0x89, .sp=0x27, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb78a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb78a, .value=0x3d, .type=IO_READ},
        {.addr=0xb78b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024A) {
    const struct CPU_State initial_cpu = {.pc=0x03ae, .a=0xec, .x=0xcf, .y=0x55, .sp=0x84, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x03ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x03af, .a=0xec, .x=0xd0, .y=0x55, .sp=0x84, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x03ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x03ae, .value=0x3d, .type=IO_READ},
        {.addr=0x03af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024B) {
    const struct CPU_State initial_cpu = {.pc=0x467f, .a=0xa0, .x=0xcc, .y=0xce, .sp=0x69, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x467f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4680, .a=0xa0, .x=0xcd, .y=0xce, .sp=0x69, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x467f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x467f, .value=0x3d, .type=IO_READ},
        {.addr=0x4680, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024C) {
    const struct CPU_State initial_cpu = {.pc=0x0d3f, .a=0x06, .x=0xe9, .y=0xbf, .sp=0x5d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0d3f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0d40, .a=0x06, .x=0xea, .y=0xbf, .sp=0x5d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0d3f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0d3f, .value=0x3d, .type=IO_READ},
        {.addr=0x0d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x11dd, .a=0x31, .x=0xc3, .y=0xe4, .sp=0xe8, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x11dd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x11de, .a=0x31, .x=0xc4, .y=0xe4, .sp=0xe8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x11dd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x11dd, .value=0x3d, .type=IO_READ},
        {.addr=0x11de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x283b, .a=0xed, .x=0x6e, .y=0xb0, .sp=0x81, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x283b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x283c, .a=0xed, .x=0x6f, .y=0xb0, .sp=0x81, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x283b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x283b, .value=0x3d, .type=IO_READ},
        {.addr=0x283c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_024F) {
    const struct CPU_State initial_cpu = {.pc=0xd105, .a=0xe5, .x=0xf0, .y=0x26, .sp=0x28, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd105, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd106, .a=0xe5, .x=0xf1, .y=0x26, .sp=0x28, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd105, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd105, .value=0x3d, .type=IO_READ},
        {.addr=0xd106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc620, .a=0x7e, .x=0x0e, .y=0x79, .sp=0xc9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc620, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc621, .a=0x7e, .x=0x0f, .y=0x79, .sp=0xc9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc620, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc620, .value=0x3d, .type=IO_READ},
        {.addr=0xc621, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x32c0, .a=0x4e, .x=0x07, .y=0xc1, .sp=0xde, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x32c0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x32c1, .a=0x4e, .x=0x08, .y=0xc1, .sp=0xde, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x32c0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x32c0, .value=0x3d, .type=IO_READ},
        {.addr=0x32c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x491c, .a=0x02, .x=0x11, .y=0x5d, .sp=0x8e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x491c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x491d, .a=0x02, .x=0x12, .y=0x5d, .sp=0x8e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x491c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x491c, .value=0x3d, .type=IO_READ},
        {.addr=0x491d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe8de, .a=0x7b, .x=0xa9, .y=0x01, .sp=0x6e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe8de, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe8df, .a=0x7b, .x=0xaa, .y=0x01, .sp=0x6e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe8de, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe8de, .value=0x3d, .type=IO_READ},
        {.addr=0xe8df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0254) {
    const struct CPU_State initial_cpu = {.pc=0xd5f9, .a=0x75, .x=0xdf, .y=0x5d, .sp=0xa0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd5fa, .a=0x75, .x=0xe0, .y=0x5d, .sp=0xa0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd5f9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd5f9, .value=0x3d, .type=IO_READ},
        {.addr=0xd5fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x5838, .a=0x75, .x=0x30, .y=0x3d, .sp=0xd0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5838, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5839, .a=0x75, .x=0x31, .y=0x3d, .sp=0xd0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5838, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5838, .value=0x3d, .type=IO_READ},
        {.addr=0x5839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xdea0, .a=0xee, .x=0xae, .y=0x4c, .sp=0xe1, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xdea0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdea1, .a=0xee, .x=0xaf, .y=0x4c, .sp=0xe1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xdea0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdea0, .value=0x3d, .type=IO_READ},
        {.addr=0xdea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x31c1, .a=0xae, .x=0x3a, .y=0xcf, .sp=0x71, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x31c1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x31c2, .a=0xae, .x=0x3b, .y=0xcf, .sp=0x71, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x31c1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x31c1, .value=0x3d, .type=IO_READ},
        {.addr=0x31c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x8398, .a=0x6e, .x=0xed, .y=0xca, .sp=0x60, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x8398, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8399, .a=0x6e, .x=0xee, .y=0xca, .sp=0x60, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8398, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8398, .value=0x3d, .type=IO_READ},
        {.addr=0x8399, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x0ad3, .a=0xa7, .x=0x4d, .y=0x8e, .sp=0xda, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0ad4, .a=0xa7, .x=0x4e, .y=0x8e, .sp=0xda, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0ad3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0ad3, .value=0x3d, .type=IO_READ},
        {.addr=0x0ad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xc72b, .a=0x2f, .x=0xd4, .y=0x4c, .sp=0xe1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc72b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc72c, .a=0x2f, .x=0xd5, .y=0x4c, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc72b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc72b, .value=0x3d, .type=IO_READ},
        {.addr=0xc72c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4bef, .a=0xff, .x=0x48, .y=0x81, .sp=0xb5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x4bef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4bf0, .a=0xff, .x=0x49, .y=0x81, .sp=0xb5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4bef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4bef, .value=0x3d, .type=IO_READ},
        {.addr=0x4bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x1e0e, .a=0xd2, .x=0x51, .y=0x1f, .sp=0x92, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1e0f, .a=0xd2, .x=0x52, .y=0x1f, .sp=0x92, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1e0e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1e0e, .value=0x3d, .type=IO_READ},
        {.addr=0x1e0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025D) {
    const struct CPU_State initial_cpu = {.pc=0x05ac, .a=0xea, .x=0x1f, .y=0xdf, .sp=0x80, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x05ac, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x05ad, .a=0xea, .x=0x20, .y=0xdf, .sp=0x80, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x05ac, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x05ac, .value=0x3d, .type=IO_READ},
        {.addr=0x05ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x5ed1, .a=0xdd, .x=0x6b, .y=0x5f, .sp=0x20, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5ed2, .a=0xdd, .x=0x6c, .y=0x5f, .sp=0x20, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5ed1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5ed1, .value=0x3d, .type=IO_READ},
        {.addr=0x5ed2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x420c, .a=0x44, .x=0x98, .y=0x03, .sp=0x61, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x420c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x420d, .a=0x44, .x=0x99, .y=0x03, .sp=0x61, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x420c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x420c, .value=0x3d, .type=IO_READ},
        {.addr=0x420d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x118e, .a=0xc2, .x=0x64, .y=0x66, .sp=0x66, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x118e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x118f, .a=0xc2, .x=0x65, .y=0x66, .sp=0x66, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x118e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x118e, .value=0x3d, .type=IO_READ},
        {.addr=0x118f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0261) {
    const struct CPU_State initial_cpu = {.pc=0xfaea, .a=0xf0, .x=0x8e, .y=0x49, .sp=0x74, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xfaea, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfaeb, .a=0xf0, .x=0x8f, .y=0x49, .sp=0x74, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfaea, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfaea, .value=0x3d, .type=IO_READ},
        {.addr=0xfaeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0262) {
    const struct CPU_State initial_cpu = {.pc=0x8516, .a=0x63, .x=0x9b, .y=0xde, .sp=0x11, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8516, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8517, .a=0x63, .x=0x9c, .y=0xde, .sp=0x11, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8516, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8516, .value=0x3d, .type=IO_READ},
        {.addr=0x8517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3e7b, .a=0x98, .x=0xf2, .y=0x7c, .sp=0x1f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3e7b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3e7c, .a=0x98, .x=0xf3, .y=0x7c, .sp=0x1f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3e7b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3e7b, .value=0x3d, .type=IO_READ},
        {.addr=0x3e7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x0a19, .a=0x45, .x=0xe5, .y=0x66, .sp=0x50, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0a19, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0a1a, .a=0x45, .x=0xe6, .y=0x66, .sp=0x50, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0a19, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0a19, .value=0x3d, .type=IO_READ},
        {.addr=0x0a1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0265) {
    const struct CPU_State initial_cpu = {.pc=0x49ba, .a=0x7e, .x=0x5d, .y=0x32, .sp=0xbf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x49ba, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x49bb, .a=0x7e, .x=0x5e, .y=0x32, .sp=0xbf, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x49ba, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x49ba, .value=0x3d, .type=IO_READ},
        {.addr=0x49bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0266) {
    const struct CPU_State initial_cpu = {.pc=0xd590, .a=0xac, .x=0x79, .y=0xec, .sp=0xf2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd590, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd591, .a=0xac, .x=0x7a, .y=0xec, .sp=0xf2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd590, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd590, .value=0x3d, .type=IO_READ},
        {.addr=0xd591, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x1af7, .a=0x3a, .x=0x1d, .y=0x17, .sp=0x9e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x1af7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1af8, .a=0x3a, .x=0x1e, .y=0x17, .sp=0x9e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1af7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1af7, .value=0x3d, .type=IO_READ},
        {.addr=0x1af8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x33d6, .a=0x61, .x=0xd7, .y=0x84, .sp=0xc5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x33d6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x33d7, .a=0x61, .x=0xd8, .y=0x84, .sp=0xc5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x33d6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x33d6, .value=0x3d, .type=IO_READ},
        {.addr=0x33d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0269) {
    const struct CPU_State initial_cpu = {.pc=0xdb85, .a=0x56, .x=0x02, .y=0xe2, .sp=0x58, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xdb85, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdb86, .a=0x56, .x=0x03, .y=0xe2, .sp=0x58, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xdb85, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdb85, .value=0x3d, .type=IO_READ},
        {.addr=0xdb86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xc94a, .a=0xf9, .x=0x46, .y=0xba, .sp=0x5f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc94a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc94b, .a=0xf9, .x=0x47, .y=0xba, .sp=0x5f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc94a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc94a, .value=0x3d, .type=IO_READ},
        {.addr=0xc94b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5fda, .a=0xef, .x=0x04, .y=0x64, .sp=0x0a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x5fda, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5fdb, .a=0xef, .x=0x05, .y=0x64, .sp=0x0a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5fda, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5fda, .value=0x3d, .type=IO_READ},
        {.addr=0x5fdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026C) {
    const struct CPU_State initial_cpu = {.pc=0xb596, .a=0x79, .x=0x78, .y=0xd7, .sp=0x97, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb596, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb597, .a=0x79, .x=0x79, .y=0xd7, .sp=0x97, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb596, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb596, .value=0x3d, .type=IO_READ},
        {.addr=0xb597, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x2126, .a=0x28, .x=0x48, .y=0x4b, .sp=0x78, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2126, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2127, .a=0x28, .x=0x49, .y=0x4b, .sp=0x78, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2126, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2126, .value=0x3d, .type=IO_READ},
        {.addr=0x2127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x4136, .a=0x55, .x=0xb4, .y=0xc4, .sp=0xa2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x4136, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4137, .a=0x55, .x=0xb5, .y=0xc4, .sp=0xa2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4136, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4136, .value=0x3d, .type=IO_READ},
        {.addr=0x4137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x898e, .a=0x67, .x=0x8d, .y=0x1d, .sp=0x91, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x898e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x898f, .a=0x67, .x=0x8e, .y=0x1d, .sp=0x91, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x898e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x898e, .value=0x3d, .type=IO_READ},
        {.addr=0x898f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x76a3, .a=0xf7, .x=0x37, .y=0x2f, .sp=0x01, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x76a3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x76a4, .a=0xf7, .x=0x38, .y=0x2f, .sp=0x01, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x76a3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x76a3, .value=0x3d, .type=IO_READ},
        {.addr=0x76a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0271) {
    const struct CPU_State initial_cpu = {.pc=0xe6cb, .a=0x0d, .x=0x59, .y=0x34, .sp=0x3f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe6cb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe6cc, .a=0x0d, .x=0x5a, .y=0x34, .sp=0x3f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe6cb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe6cb, .value=0x3d, .type=IO_READ},
        {.addr=0xe6cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0272) {
    const struct CPU_State initial_cpu = {.pc=0xc9b5, .a=0xa1, .x=0x71, .y=0x00, .sp=0x8f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc9b6, .a=0xa1, .x=0x72, .y=0x00, .sp=0x8f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc9b5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc9b5, .value=0x3d, .type=IO_READ},
        {.addr=0xc9b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0273) {
    const struct CPU_State initial_cpu = {.pc=0xc42e, .a=0x92, .x=0xfe, .y=0x16, .sp=0x67, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc42e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc42f, .a=0x92, .x=0xff, .y=0x16, .sp=0x67, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc42e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc42e, .value=0x3d, .type=IO_READ},
        {.addr=0xc42f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xbc1a, .a=0x5b, .x=0x23, .y=0x67, .sp=0xb3, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbc1b, .a=0x5b, .x=0x24, .y=0x67, .sp=0xb3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbc1a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbc1a, .value=0x3d, .type=IO_READ},
        {.addr=0xbc1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x9d55, .a=0xaa, .x=0xa1, .y=0x13, .sp=0x43, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9d55, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9d56, .a=0xaa, .x=0xa2, .y=0x13, .sp=0x43, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9d55, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9d55, .value=0x3d, .type=IO_READ},
        {.addr=0x9d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0276) {
    const struct CPU_State initial_cpu = {.pc=0xd4ff, .a=0x59, .x=0x66, .y=0xee, .sp=0x73, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd500, .a=0x59, .x=0x67, .y=0xee, .sp=0x73, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd4ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd4ff, .value=0x3d, .type=IO_READ},
        {.addr=0xd500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x0584, .a=0x8e, .x=0xff, .y=0x63, .sp=0xaf, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0584, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0585, .a=0x8e, .x=0x00, .y=0x63, .sp=0xaf, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0584, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0584, .value=0x3d, .type=IO_READ},
        {.addr=0x0585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xc1c2, .a=0x99, .x=0x79, .y=0xf4, .sp=0xdc, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc1c3, .a=0x99, .x=0x7a, .y=0xf4, .sp=0xdc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc1c2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc1c2, .value=0x3d, .type=IO_READ},
        {.addr=0xc1c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0279) {
    const struct CPU_State initial_cpu = {.pc=0x3419, .a=0xb1, .x=0xcb, .y=0xf2, .sp=0xc2, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3419, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x341a, .a=0xb1, .x=0xcc, .y=0xf2, .sp=0xc2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3419, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3419, .value=0x3d, .type=IO_READ},
        {.addr=0x341a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x69c8, .a=0xae, .x=0x0d, .y=0x9c, .sp=0xd7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x69c8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x69c9, .a=0xae, .x=0x0e, .y=0x9c, .sp=0xd7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x69c8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x69c8, .value=0x3d, .type=IO_READ},
        {.addr=0x69c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027B) {
    const struct CPU_State initial_cpu = {.pc=0xdd4d, .a=0xb4, .x=0xd8, .y=0x58, .sp=0x82, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdd4e, .a=0xb4, .x=0xd9, .y=0x58, .sp=0x82, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdd4d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdd4d, .value=0x3d, .type=IO_READ},
        {.addr=0xdd4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027C) {
    const struct CPU_State initial_cpu = {.pc=0x5539, .a=0x37, .x=0xf8, .y=0xa0, .sp=0xcd, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5539, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x553a, .a=0x37, .x=0xf9, .y=0xa0, .sp=0xcd, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5539, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5539, .value=0x3d, .type=IO_READ},
        {.addr=0x553a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x89fa, .a=0x69, .x=0x08, .y=0x0d, .sp=0x03, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x89fa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x89fb, .a=0x69, .x=0x09, .y=0x0d, .sp=0x03, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x89fa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x89fa, .value=0x3d, .type=IO_READ},
        {.addr=0x89fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x99a7, .a=0x64, .x=0xf1, .y=0xa0, .sp=0x90, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x99a7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x99a8, .a=0x64, .x=0xf2, .y=0xa0, .sp=0x90, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x99a7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x99a7, .value=0x3d, .type=IO_READ},
        {.addr=0x99a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_027F) {
    const struct CPU_State initial_cpu = {.pc=0xe7d3, .a=0x36, .x=0x3c, .y=0x55, .sp=0xe6, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe7d4, .a=0x36, .x=0x3d, .y=0x55, .sp=0xe6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe7d3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe7d3, .value=0x3d, .type=IO_READ},
        {.addr=0xe7d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x5e92, .a=0x31, .x=0x8b, .y=0x22, .sp=0x29, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5e92, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5e93, .a=0x31, .x=0x8c, .y=0x22, .sp=0x29, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5e92, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5e92, .value=0x3d, .type=IO_READ},
        {.addr=0x5e93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0x39, .x=0x1e, .y=0xb4, .sp=0x5d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x699c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x699d, .a=0x39, .x=0x1f, .y=0xb4, .sp=0x5d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x699c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0x3d, .type=IO_READ},
        {.addr=0x699d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0282) {
    const struct CPU_State initial_cpu = {.pc=0xf13b, .a=0x88, .x=0x2c, .y=0x4e, .sp=0x6e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf13b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf13c, .a=0x88, .x=0x2d, .y=0x4e, .sp=0x6e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf13b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf13b, .value=0x3d, .type=IO_READ},
        {.addr=0xf13c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0283) {
    const struct CPU_State initial_cpu = {.pc=0x4b0f, .a=0xd3, .x=0x2b, .y=0x5e, .sp=0xff, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4b10, .a=0xd3, .x=0x2c, .y=0x5e, .sp=0xff, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4b0f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4b0f, .value=0x3d, .type=IO_READ},
        {.addr=0x4b10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0284) {
    const struct CPU_State initial_cpu = {.pc=0xf59a, .a=0x5d, .x=0xd9, .y=0x67, .sp=0x8c, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf59a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf59b, .a=0x5d, .x=0xda, .y=0x67, .sp=0x8c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf59a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf59a, .value=0x3d, .type=IO_READ},
        {.addr=0xf59b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x4da3, .a=0x01, .x=0x90, .y=0x77, .sp=0x0e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4da3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4da4, .a=0x01, .x=0x91, .y=0x77, .sp=0x0e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4da3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4da3, .value=0x3d, .type=IO_READ},
        {.addr=0x4da4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0286) {
    const struct CPU_State initial_cpu = {.pc=0x3a64, .a=0x60, .x=0x37, .y=0x88, .sp=0xe1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3a64, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3a65, .a=0x60, .x=0x38, .y=0x88, .sp=0xe1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3a64, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3a64, .value=0x3d, .type=IO_READ},
        {.addr=0x3a65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x2ccc, .a=0x36, .x=0x82, .y=0xdc, .sp=0x72, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x2ccc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2ccd, .a=0x36, .x=0x83, .y=0xdc, .sp=0x72, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2ccc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2ccc, .value=0x3d, .type=IO_READ},
        {.addr=0x2ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0288) {
    const struct CPU_State initial_cpu = {.pc=0x9c72, .a=0xfa, .x=0x7c, .y=0xe9, .sp=0x82, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9c72, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9c73, .a=0xfa, .x=0x7d, .y=0xe9, .sp=0x82, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9c72, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9c72, .value=0x3d, .type=IO_READ},
        {.addr=0x9c73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0289) {
    const struct CPU_State initial_cpu = {.pc=0xd63c, .a=0xb0, .x=0xc1, .y=0xcd, .sp=0x65, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd63c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd63d, .a=0xb0, .x=0xc2, .y=0xcd, .sp=0x65, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd63c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd63c, .value=0x3d, .type=IO_READ},
        {.addr=0xd63d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028A) {
    const struct CPU_State initial_cpu = {.pc=0x2bee, .a=0x35, .x=0x04, .y=0x57, .sp=0x59, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2bee, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2bef, .a=0x35, .x=0x05, .y=0x57, .sp=0x59, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2bee, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2bee, .value=0x3d, .type=IO_READ},
        {.addr=0x2bef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x5c57, .a=0x6f, .x=0xd5, .y=0x76, .sp=0x74, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5c57, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5c58, .a=0x6f, .x=0xd6, .y=0x76, .sp=0x74, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5c57, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5c57, .value=0x3d, .type=IO_READ},
        {.addr=0x5c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x7a97, .a=0x83, .x=0x10, .y=0xe1, .sp=0xb8, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x7a97, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a98, .a=0x83, .x=0x11, .y=0xe1, .sp=0xb8, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7a97, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a97, .value=0x3d, .type=IO_READ},
        {.addr=0x7a98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xa238, .a=0xb9, .x=0xd3, .y=0xc6, .sp=0x35, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa238, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa239, .a=0xb9, .x=0xd4, .y=0xc6, .sp=0x35, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa238, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa238, .value=0x3d, .type=IO_READ},
        {.addr=0xa239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2d12, .a=0x50, .x=0xb6, .y=0x4a, .sp=0xe9, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d12, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2d13, .a=0x50, .x=0xb7, .y=0x4a, .sp=0xe9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2d12, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2d12, .value=0x3d, .type=IO_READ},
        {.addr=0x2d13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_028F) {
    const struct CPU_State initial_cpu = {.pc=0xd7de, .a=0x17, .x=0xea, .y=0x34, .sp=0x41, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd7de, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd7df, .a=0x17, .x=0xeb, .y=0x34, .sp=0x41, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd7de, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd7de, .value=0x3d, .type=IO_READ},
        {.addr=0xd7df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0290) {
    const struct CPU_State initial_cpu = {.pc=0xeaad, .a=0x90, .x=0xb1, .y=0x26, .sp=0xd2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xeaad, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xeaae, .a=0x90, .x=0xb2, .y=0x26, .sp=0xd2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xeaad, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xeaad, .value=0x3d, .type=IO_READ},
        {.addr=0xeaae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x963b, .a=0xea, .x=0x26, .y=0x54, .sp=0xac, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x963b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x963c, .a=0xea, .x=0x27, .y=0x54, .sp=0xac, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x963b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x963b, .value=0x3d, .type=IO_READ},
        {.addr=0x963c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x1fa2, .a=0x90, .x=0xc3, .y=0x45, .sp=0x66, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1fa3, .a=0x90, .x=0xc4, .y=0x45, .sp=0x66, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1fa2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1fa2, .value=0x3d, .type=IO_READ},
        {.addr=0x1fa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf85e, .a=0x14, .x=0x6a, .y=0x4d, .sp=0xc4, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf85e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf85f, .a=0x14, .x=0x6b, .y=0x4d, .sp=0xc4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf85e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf85e, .value=0x3d, .type=IO_READ},
        {.addr=0xf85f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x91e8, .a=0x9a, .x=0x59, .y=0x0b, .sp=0xca, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x91e8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x91e9, .a=0x9a, .x=0x5a, .y=0x0b, .sp=0xca, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x91e8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x91e8, .value=0x3d, .type=IO_READ},
        {.addr=0x91e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x0239, .a=0x20, .x=0x11, .y=0xa3, .sp=0x83, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0239, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x023a, .a=0x20, .x=0x12, .y=0xa3, .sp=0x83, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0239, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0239, .value=0x3d, .type=IO_READ},
        {.addr=0x023a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x108f, .a=0xed, .x=0x40, .y=0xd5, .sp=0x3d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x108f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1090, .a=0xed, .x=0x41, .y=0xd5, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x108f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x108f, .value=0x3d, .type=IO_READ},
        {.addr=0x1090, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x99ad, .a=0x75, .x=0x1c, .y=0x69, .sp=0xea, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x99ad, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x99ae, .a=0x75, .x=0x1d, .y=0x69, .sp=0xea, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x99ad, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x99ad, .value=0x3d, .type=IO_READ},
        {.addr=0x99ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x6e8b, .a=0xba, .x=0x16, .y=0x92, .sp=0x53, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e8b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6e8c, .a=0xba, .x=0x17, .y=0x92, .sp=0x53, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6e8b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6e8b, .value=0x3d, .type=IO_READ},
        {.addr=0x6e8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x4e88, .a=0x90, .x=0xfd, .y=0x2b, .sp=0x6e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e88, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4e89, .a=0x90, .x=0xfe, .y=0x2b, .sp=0x6e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4e88, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4e88, .value=0x3d, .type=IO_READ},
        {.addr=0x4e89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029A) {
    const struct CPU_State initial_cpu = {.pc=0xcaf0, .a=0x93, .x=0x16, .y=0x0a, .sp=0x06, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcaf1, .a=0x93, .x=0x17, .y=0x0a, .sp=0x06, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xcaf0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcaf0, .value=0x3d, .type=IO_READ},
        {.addr=0xcaf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x8b7f, .a=0xbf, .x=0x9e, .y=0xd1, .sp=0x52, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8b7f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8b80, .a=0xbf, .x=0x9f, .y=0xd1, .sp=0x52, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8b7f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8b7f, .value=0x3d, .type=IO_READ},
        {.addr=0x8b80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xbb81, .a=0xbc, .x=0xfd, .y=0x8e, .sp=0x2f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb81, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbb82, .a=0xbc, .x=0xfe, .y=0x8e, .sp=0x2f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbb81, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbb81, .value=0x3d, .type=IO_READ},
        {.addr=0xbb82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x7084, .a=0x11, .x=0x95, .y=0x5c, .sp=0xdc, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7084, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7085, .a=0x11, .x=0x96, .y=0x5c, .sp=0xdc, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7084, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7084, .value=0x3d, .type=IO_READ},
        {.addr=0x7085, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x2c5a, .a=0x2e, .x=0xfd, .y=0xec, .sp=0x0a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2c5b, .a=0x2e, .x=0xfe, .y=0xec, .sp=0x0a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2c5a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2c5a, .value=0x3d, .type=IO_READ},
        {.addr=0x2c5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x1334, .a=0xa8, .x=0xea, .y=0x2e, .sp=0xf0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1334, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1335, .a=0xa8, .x=0xeb, .y=0x2e, .sp=0xf0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1334, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1334, .value=0x3d, .type=IO_READ},
        {.addr=0x1335, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x44bb, .a=0x7d, .x=0x2b, .y=0xe7, .sp=0x7b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x44bb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x44bc, .a=0x7d, .x=0x2c, .y=0xe7, .sp=0x7b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x44bb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x44bb, .value=0x3d, .type=IO_READ},
        {.addr=0x44bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xfb10, .a=0x9a, .x=0x90, .y=0x9a, .sp=0x6e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfb10, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfb11, .a=0x9a, .x=0x91, .y=0x9a, .sp=0x6e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfb10, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfb10, .value=0x3d, .type=IO_READ},
        {.addr=0xfb11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x8f8c, .a=0x66, .x=0x3c, .y=0xbe, .sp=0xb0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8f8c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8f8d, .a=0x66, .x=0x3d, .y=0xbe, .sp=0xb0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8f8c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8f8c, .value=0x3d, .type=IO_READ},
        {.addr=0x8f8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xac8f, .a=0x13, .x=0xfd, .y=0x1d, .sp=0xab, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xac8f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xac90, .a=0x13, .x=0xfe, .y=0x1d, .sp=0xab, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xac8f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xac8f, .value=0x3d, .type=IO_READ},
        {.addr=0xac90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xe311, .a=0xf4, .x=0x94, .y=0x6a, .sp=0x90, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe311, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe312, .a=0xf4, .x=0x95, .y=0x6a, .sp=0x90, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe311, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe311, .value=0x3d, .type=IO_READ},
        {.addr=0xe312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x075d, .a=0x86, .x=0x6b, .y=0xf3, .sp=0x23, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x075d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x075e, .a=0x86, .x=0x6c, .y=0xf3, .sp=0x23, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x075d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x075d, .value=0x3d, .type=IO_READ},
        {.addr=0x075e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x7219, .a=0x04, .x=0x1c, .y=0x30, .sp=0x6a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x7219, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x721a, .a=0x04, .x=0x1d, .y=0x30, .sp=0x6a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7219, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7219, .value=0x3d, .type=IO_READ},
        {.addr=0x721a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x96c3, .a=0x6d, .x=0xbc, .y=0xd5, .sp=0xb0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x96c3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x96c4, .a=0x6d, .x=0xbd, .y=0xd5, .sp=0xb0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x96c3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x96c3, .value=0x3d, .type=IO_READ},
        {.addr=0x96c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xbd19, .a=0x3b, .x=0xba, .y=0x1f, .sp=0x1f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbd19, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbd1a, .a=0x3b, .x=0xbb, .y=0x1f, .sp=0x1f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xbd19, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbd19, .value=0x3d, .type=IO_READ},
        {.addr=0xbd1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xd25b, .a=0x77, .x=0x16, .y=0x3c, .sp=0xfa, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd25b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd25c, .a=0x77, .x=0x17, .y=0x3c, .sp=0xfa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd25b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd25b, .value=0x3d, .type=IO_READ},
        {.addr=0xd25c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb481, .a=0xc7, .x=0x99, .y=0xe7, .sp=0xe0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb481, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb482, .a=0xc7, .x=0x9a, .y=0xe7, .sp=0xe0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb481, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb481, .value=0x3d, .type=IO_READ},
        {.addr=0xb482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xbd56, .a=0x58, .x=0x67, .y=0xa3, .sp=0xc0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xbd56, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbd57, .a=0x58, .x=0x68, .y=0xa3, .sp=0xc0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbd56, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbd56, .value=0x3d, .type=IO_READ},
        {.addr=0xbd57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x217d, .a=0xc7, .x=0xcb, .y=0xec, .sp=0x90, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x217d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x217e, .a=0xc7, .x=0xcc, .y=0xec, .sp=0x90, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x217d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x217d, .value=0x3d, .type=IO_READ},
        {.addr=0x217e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb9f5, .a=0x79, .x=0x99, .y=0x9e, .sp=0x9a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb9f6, .a=0x79, .x=0x9a, .y=0x9e, .sp=0x9a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb9f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb9f5, .value=0x3d, .type=IO_READ},
        {.addr=0xb9f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x2058, .a=0x9e, .x=0xc2, .y=0xd7, .sp=0x48, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x2058, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2059, .a=0x9e, .x=0xc3, .y=0xd7, .sp=0x48, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2058, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2058, .value=0x3d, .type=IO_READ},
        {.addr=0x2059, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x0165, .a=0x4d, .x=0x28, .y=0xc6, .sp=0x2b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0166, .a=0x4d, .x=0x29, .y=0xc6, .sp=0x2b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0165, .value=0x3d, .type=IO_READ},
        {.addr=0x0166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xce71, .a=0xc7, .x=0x1b, .y=0x1e, .sp=0xee, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xce71, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xce72, .a=0xc7, .x=0x1c, .y=0x1e, .sp=0xee, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xce71, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xce71, .value=0x3d, .type=IO_READ},
        {.addr=0xce72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x91f8, .a=0xba, .x=0x86, .y=0x5a, .sp=0x6f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x91f8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x91f9, .a=0xba, .x=0x87, .y=0x5a, .sp=0x6f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x91f8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x91f8, .value=0x3d, .type=IO_READ},
        {.addr=0x91f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xcf37, .a=0x26, .x=0x1f, .y=0x83, .sp=0x49, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xcf37, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcf38, .a=0x26, .x=0x20, .y=0x83, .sp=0x49, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcf37, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcf37, .value=0x3d, .type=IO_READ},
        {.addr=0xcf38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x53f1, .a=0xf8, .x=0x6f, .y=0xa8, .sp=0x5b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x53f1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x53f2, .a=0xf8, .x=0x70, .y=0xa8, .sp=0x5b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x53f1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x53f1, .value=0x3d, .type=IO_READ},
        {.addr=0x53f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x5abe, .a=0xe1, .x=0xa8, .y=0x3c, .sp=0x08, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5abe, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5abf, .a=0xe1, .x=0xa9, .y=0x3c, .sp=0x08, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5abe, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5abe, .value=0x3d, .type=IO_READ},
        {.addr=0x5abf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x0649, .a=0x6c, .x=0xa9, .y=0x2b, .sp=0xce, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0649, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x064a, .a=0x6c, .x=0xaa, .y=0x2b, .sp=0xce, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0649, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0649, .value=0x3d, .type=IO_READ},
        {.addr=0x064a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x6b5e, .a=0x2e, .x=0xca, .y=0xd9, .sp=0x48, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6b5f, .a=0x2e, .x=0xcb, .y=0xd9, .sp=0x48, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6b5e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6b5e, .value=0x3d, .type=IO_READ},
        {.addr=0x6b5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x305a, .a=0x52, .x=0x82, .y=0xd5, .sp=0x52, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x305a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x305b, .a=0x52, .x=0x83, .y=0xd5, .sp=0x52, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x305a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x305a, .value=0x3d, .type=IO_READ},
        {.addr=0x305b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x8504, .a=0x37, .x=0xf3, .y=0x97, .sp=0x1d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8504, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8505, .a=0x37, .x=0xf4, .y=0x97, .sp=0x1d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8504, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8504, .value=0x3d, .type=IO_READ},
        {.addr=0x8505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x8fc2, .a=0x15, .x=0x78, .y=0x58, .sp=0xac, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8fc3, .a=0x15, .x=0x79, .y=0x58, .sp=0xac, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8fc2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8fc2, .value=0x3d, .type=IO_READ},
        {.addr=0x8fc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x09dd, .a=0x5e, .x=0xdd, .y=0x86, .sp=0xdb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x09dd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x09de, .a=0x5e, .x=0xde, .y=0x86, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x09dd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x09dd, .value=0x3d, .type=IO_READ},
        {.addr=0x09de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x4309, .a=0xe9, .x=0x10, .y=0x23, .sp=0x0b, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x4309, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x430a, .a=0xe9, .x=0x11, .y=0x23, .sp=0x0b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4309, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4309, .value=0x3d, .type=IO_READ},
        {.addr=0x430a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x37f5, .a=0x38, .x=0x85, .y=0xca, .sp=0x28, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x37f5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x37f6, .a=0x38, .x=0x86, .y=0xca, .sp=0x28, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x37f5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x37f5, .value=0x3d, .type=IO_READ},
        {.addr=0x37f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xe496, .a=0x7c, .x=0x43, .y=0xfc, .sp=0x1f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe496, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe497, .a=0x7c, .x=0x44, .y=0xfc, .sp=0x1f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe496, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe496, .value=0x3d, .type=IO_READ},
        {.addr=0xe497, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xef3a, .a=0xed, .x=0xb6, .y=0xfd, .sp=0xd3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xef3a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xef3b, .a=0xed, .x=0xb7, .y=0xfd, .sp=0xd3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xef3a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xef3a, .value=0x3d, .type=IO_READ},
        {.addr=0xef3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x220b, .a=0x8f, .x=0xa6, .y=0x70, .sp=0xa7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x220b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x220c, .a=0x8f, .x=0xa7, .y=0x70, .sp=0xa7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x220b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x220b, .value=0x3d, .type=IO_READ},
        {.addr=0x220c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x8c47, .a=0xc3, .x=0x11, .y=0x80, .sp=0x8e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8c47, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8c48, .a=0xc3, .x=0x12, .y=0x80, .sp=0x8e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8c47, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8c47, .value=0x3d, .type=IO_READ},
        {.addr=0x8c48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2e31, .a=0xcc, .x=0xef, .y=0x74, .sp=0xd3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2e31, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2e32, .a=0xcc, .x=0xf0, .y=0x74, .sp=0xd3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2e31, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2e31, .value=0x3d, .type=IO_READ},
        {.addr=0x2e32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x28da, .a=0x93, .x=0x03, .y=0x2f, .sp=0xcd, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x28da, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x28db, .a=0x93, .x=0x04, .y=0x2f, .sp=0xcd, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x28da, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x28da, .value=0x3d, .type=IO_READ},
        {.addr=0x28db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xbed3, .a=0x4b, .x=0x14, .y=0xf5, .sp=0x82, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xbed3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbed4, .a=0x4b, .x=0x15, .y=0xf5, .sp=0x82, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbed3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbed3, .value=0x3d, .type=IO_READ},
        {.addr=0xbed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x5f4d, .a=0x77, .x=0x85, .y=0x75, .sp=0xfb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f4d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5f4e, .a=0x77, .x=0x86, .y=0x75, .sp=0xfb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5f4d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5f4d, .value=0x3d, .type=IO_READ},
        {.addr=0x5f4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x9635, .a=0xe8, .x=0x98, .y=0x39, .sp=0xbf, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9635, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9636, .a=0xe8, .x=0x99, .y=0x39, .sp=0xbf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9635, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9635, .value=0x3d, .type=IO_READ},
        {.addr=0x9636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xe20a, .a=0xd2, .x=0xc0, .y=0x34, .sp=0x7d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe20a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe20b, .a=0xd2, .x=0xc1, .y=0x34, .sp=0x7d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe20a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe20a, .value=0x3d, .type=IO_READ},
        {.addr=0xe20b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x39bf, .a=0x25, .x=0x85, .y=0xb7, .sp=0x8b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x39bf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x39c0, .a=0x25, .x=0x86, .y=0xb7, .sp=0x8b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x39bf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x39bf, .value=0x3d, .type=IO_READ},
        {.addr=0x39c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xccc5, .a=0x74, .x=0xd5, .y=0x71, .sp=0x42, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xccc5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xccc6, .a=0x74, .x=0xd6, .y=0x71, .sp=0x42, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xccc5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xccc5, .value=0x3d, .type=IO_READ},
        {.addr=0xccc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x83b2, .a=0xbd, .x=0x6e, .y=0x19, .sp=0xed, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x83b2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x83b3, .a=0xbd, .x=0x6f, .y=0x19, .sp=0xed, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x83b2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x83b2, .value=0x3d, .type=IO_READ},
        {.addr=0x83b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x1bec, .a=0x6d, .x=0x34, .y=0x00, .sp=0x6c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1bec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1bed, .a=0x6d, .x=0x35, .y=0x00, .sp=0x6c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1bec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1bec, .value=0x3d, .type=IO_READ},
        {.addr=0x1bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x88ce, .a=0xb3, .x=0x54, .y=0xfa, .sp=0xd0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x88ce, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x88cf, .a=0xb3, .x=0x55, .y=0xfa, .sp=0xd0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x88ce, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x88ce, .value=0x3d, .type=IO_READ},
        {.addr=0x88cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xd77a, .a=0x15, .x=0x52, .y=0x56, .sp=0xa7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd77a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd77b, .a=0x15, .x=0x53, .y=0x56, .sp=0xa7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd77a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd77a, .value=0x3d, .type=IO_READ},
        {.addr=0xd77b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xfe02, .a=0xcd, .x=0xff, .y=0x4b, .sp=0xd8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xfe02, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfe03, .a=0xcd, .x=0x00, .y=0x4b, .sp=0xd8, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xfe02, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfe02, .value=0x3d, .type=IO_READ},
        {.addr=0xfe03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x6c2d, .a=0xb7, .x=0xf9, .y=0x75, .sp=0xd1, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6c2e, .a=0xb7, .x=0xfa, .y=0x75, .sp=0xd1, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6c2d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6c2d, .value=0x3d, .type=IO_READ},
        {.addr=0x6c2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x3495, .a=0x7d, .x=0x8e, .y=0xf3, .sp=0x35, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3495, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3496, .a=0x7d, .x=0x8f, .y=0xf3, .sp=0x35, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3495, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3495, .value=0x3d, .type=IO_READ},
        {.addr=0x3496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xabb6, .a=0x7e, .x=0xbf, .y=0x21, .sp=0x85, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xabb6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xabb7, .a=0x7e, .x=0xc0, .y=0x21, .sp=0x85, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xabb6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xabb6, .value=0x3d, .type=IO_READ},
        {.addr=0xabb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x8b36, .a=0xe5, .x=0x84, .y=0x98, .sp=0x7a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8b36, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8b37, .a=0xe5, .x=0x85, .y=0x98, .sp=0x7a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8b36, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8b36, .value=0x3d, .type=IO_READ},
        {.addr=0x8b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xe84d, .a=0x86, .x=0xfa, .y=0xcf, .sp=0x2b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe84d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe84e, .a=0x86, .x=0xfb, .y=0xcf, .sp=0x2b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe84d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe84d, .value=0x3d, .type=IO_READ},
        {.addr=0xe84e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x2783, .a=0xe4, .x=0x92, .y=0x50, .sp=0xa9, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2783, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2784, .a=0xe4, .x=0x93, .y=0x50, .sp=0xa9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2783, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2783, .value=0x3d, .type=IO_READ},
        {.addr=0x2784, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xf583, .a=0x1a, .x=0xa6, .y=0x95, .sp=0x35, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf583, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf584, .a=0x1a, .x=0xa7, .y=0x95, .sp=0x35, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf583, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf583, .value=0x3d, .type=IO_READ},
        {.addr=0xf584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x381c, .a=0x22, .x=0xe2, .y=0xce, .sp=0x0e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x381c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x381d, .a=0x22, .x=0xe3, .y=0xce, .sp=0x0e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x381c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x381c, .value=0x3d, .type=IO_READ},
        {.addr=0x381d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x1553, .a=0x6b, .x=0x37, .y=0x8a, .sp=0x2c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1553, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1554, .a=0x6b, .x=0x38, .y=0x8a, .sp=0x2c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1553, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1553, .value=0x3d, .type=IO_READ},
        {.addr=0x1554, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xf4a7, .a=0xa4, .x=0xaa, .y=0x31, .sp=0xc1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf4a8, .a=0xa4, .x=0xab, .y=0x31, .sp=0xc1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf4a7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf4a7, .value=0x3d, .type=IO_READ},
        {.addr=0xf4a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xa3fb, .a=0x40, .x=0x94, .y=0x91, .sp=0xdf, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa3fc, .a=0x40, .x=0x95, .y=0x91, .sp=0xdf, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa3fb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa3fb, .value=0x3d, .type=IO_READ},
        {.addr=0xa3fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x7b50, .a=0x50, .x=0x9b, .y=0xdf, .sp=0x3c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7b50, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b51, .a=0x50, .x=0x9c, .y=0xdf, .sp=0x3c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7b50, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b50, .value=0x3d, .type=IO_READ},
        {.addr=0x7b51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7123, .a=0xfe, .x=0x33, .y=0xf6, .sp=0xb5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x7123, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7124, .a=0xfe, .x=0x34, .y=0xf6, .sp=0xb5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7123, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7123, .value=0x3d, .type=IO_READ},
        {.addr=0x7124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xf56f, .a=0x38, .x=0xc5, .y=0x56, .sp=0x64, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf56f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf570, .a=0x38, .x=0xc6, .y=0x56, .sp=0x64, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf56f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf56f, .value=0x3d, .type=IO_READ},
        {.addr=0xf570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x24a0, .a=0x1d, .x=0xf1, .y=0xcb, .sp=0xff, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x24a0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x24a1, .a=0x1d, .x=0xf2, .y=0xcb, .sp=0xff, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x24a0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x24a0, .value=0x3d, .type=IO_READ},
        {.addr=0x24a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x54cb, .a=0x61, .x=0xa1, .y=0xf3, .sp=0x55, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x54cb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x54cc, .a=0x61, .x=0xa2, .y=0xf3, .sp=0x55, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x54cb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x54cb, .value=0x3d, .type=IO_READ},
        {.addr=0x54cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xca7f, .a=0xb0, .x=0x42, .y=0xf3, .sp=0xe5, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xca7f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xca80, .a=0xb0, .x=0x43, .y=0xf3, .sp=0xe5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xca7f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xca7f, .value=0x3d, .type=IO_READ},
        {.addr=0xca80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xa033, .a=0x68, .x=0xf1, .y=0x31, .sp=0x01, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xa033, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa034, .a=0x68, .x=0xf2, .y=0x31, .sp=0x01, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa033, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa033, .value=0x3d, .type=IO_READ},
        {.addr=0xa034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xd10d, .a=0x26, .x=0xc6, .y=0xc2, .sp=0xa8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd10d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd10e, .a=0x26, .x=0xc7, .y=0xc2, .sp=0xa8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd10d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd10d, .value=0x3d, .type=IO_READ},
        {.addr=0xd10e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x56d6, .a=0x60, .x=0x3a, .y=0x65, .sp=0xf0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x56d6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x56d7, .a=0x60, .x=0x3b, .y=0x65, .sp=0xf0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x56d6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x56d6, .value=0x3d, .type=IO_READ},
        {.addr=0x56d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x5d7e, .a=0x1e, .x=0x26, .y=0x21, .sp=0x01, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5d7e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5d7f, .a=0x1e, .x=0x27, .y=0x21, .sp=0x01, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5d7e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5d7e, .value=0x3d, .type=IO_READ},
        {.addr=0x5d7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xf4ff, .a=0x66, .x=0x71, .y=0x20, .sp=0x97, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf500, .a=0x66, .x=0x72, .y=0x20, .sp=0x97, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf4ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf4ff, .value=0x3d, .type=IO_READ},
        {.addr=0xf500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x705a, .a=0x34, .x=0xc9, .y=0xb0, .sp=0x52, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x705a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x705b, .a=0x34, .x=0xca, .y=0xb0, .sp=0x52, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x705a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x705a, .value=0x3d, .type=IO_READ},
        {.addr=0x705b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xf2fd, .a=0xfc, .x=0x6c, .y=0x82, .sp=0x31, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf2fd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf2fe, .a=0xfc, .x=0x6d, .y=0x82, .sp=0x31, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf2fd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf2fd, .value=0x3d, .type=IO_READ},
        {.addr=0xf2fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x751a, .a=0x2b, .x=0x46, .y=0x2a, .sp=0x33, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x751a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x751b, .a=0x2b, .x=0x47, .y=0x2a, .sp=0x33, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x751a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x751a, .value=0x3d, .type=IO_READ},
        {.addr=0x751b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xfb3f, .a=0x95, .x=0x24, .y=0xd2, .sp=0xb7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xfb3f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfb40, .a=0x95, .x=0x25, .y=0xd2, .sp=0xb7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfb3f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfb3f, .value=0x3d, .type=IO_READ},
        {.addr=0xfb40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xa280, .a=0xa5, .x=0xe2, .y=0x8f, .sp=0xd8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa280, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa281, .a=0xa5, .x=0xe3, .y=0x8f, .sp=0xd8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa280, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa280, .value=0x3d, .type=IO_READ},
        {.addr=0xa281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xa14e, .a=0xc1, .x=0x9a, .y=0x2c, .sp=0x14, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa14e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa14f, .a=0xc1, .x=0x9b, .y=0x2c, .sp=0x14, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa14e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa14e, .value=0x3d, .type=IO_READ},
        {.addr=0xa14f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x7f39, .a=0x88, .x=0x5f, .y=0xfb, .sp=0x64, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7f39, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7f3a, .a=0x88, .x=0x60, .y=0xfb, .sp=0x64, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7f39, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7f39, .value=0x3d, .type=IO_READ},
        {.addr=0x7f3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7111, .a=0x39, .x=0xb2, .y=0x3c, .sp=0xe0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7111, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7112, .a=0x39, .x=0xb3, .y=0x3c, .sp=0xe0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7111, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7111, .value=0x3d, .type=IO_READ},
        {.addr=0x7112, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x772a, .a=0xa4, .x=0x76, .y=0x95, .sp=0xb7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x772a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x772b, .a=0xa4, .x=0x77, .y=0x95, .sp=0xb7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x772a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x772a, .value=0x3d, .type=IO_READ},
        {.addr=0x772b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xb1a1, .a=0x53, .x=0x07, .y=0x38, .sp=0xfc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb1a2, .a=0x53, .x=0x08, .y=0x38, .sp=0xfc, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb1a1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb1a1, .value=0x3d, .type=IO_READ},
        {.addr=0xb1a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x74ee, .a=0xae, .x=0x9d, .y=0x1b, .sp=0xc2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x74ee, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x74ef, .a=0xae, .x=0x9e, .y=0x1b, .sp=0xc2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x74ee, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x74ee, .value=0x3d, .type=IO_READ},
        {.addr=0x74ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xed2b, .a=0x36, .x=0x15, .y=0xe0, .sp=0xaf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xed2b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xed2c, .a=0x36, .x=0x16, .y=0xe0, .sp=0xaf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xed2b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xed2b, .value=0x3d, .type=IO_READ},
        {.addr=0xed2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x039c, .a=0x71, .x=0x02, .y=0x70, .sp=0xbc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x039c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x039d, .a=0x71, .x=0x03, .y=0x70, .sp=0xbc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x039c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x039c, .value=0x3d, .type=IO_READ},
        {.addr=0x039d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x7449, .a=0x78, .x=0x3d, .y=0xc9, .sp=0x7b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x7449, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x744a, .a=0x78, .x=0x3e, .y=0xc9, .sp=0x7b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x7449, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7449, .value=0x3d, .type=IO_READ},
        {.addr=0x744a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x46b6, .a=0x4f, .x=0xe8, .y=0x89, .sp=0x91, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x46b6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x46b7, .a=0x4f, .x=0xe9, .y=0x89, .sp=0x91, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x46b6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x46b6, .value=0x3d, .type=IO_READ},
        {.addr=0x46b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xa9b4, .a=0xc5, .x=0x2c, .y=0xd6, .sp=0xba, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa9b5, .a=0xc5, .x=0x2d, .y=0xd6, .sp=0xba, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa9b4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b4, .value=0x3d, .type=IO_READ},
        {.addr=0xa9b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x1194, .a=0x4e, .x=0xc3, .y=0xb7, .sp=0xb8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1194, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1195, .a=0x4e, .x=0xc4, .y=0xb7, .sp=0xb8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1194, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1194, .value=0x3d, .type=IO_READ},
        {.addr=0x1195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x93ef, .a=0xf5, .x=0xdd, .y=0x1f, .sp=0x0d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x93ef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x93f0, .a=0xf5, .x=0xde, .y=0x1f, .sp=0x0d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x93ef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x93ef, .value=0x3d, .type=IO_READ},
        {.addr=0x93f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x7bf7, .a=0x25, .x=0x56, .y=0x14, .sp=0xa0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7bf8, .a=0x25, .x=0x57, .y=0x14, .sp=0xa0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7bf7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7bf7, .value=0x3d, .type=IO_READ},
        {.addr=0x7bf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x88b1, .a=0xb2, .x=0xd2, .y=0x75, .sp=0xd1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x88b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x88b2, .a=0xb2, .x=0xd3, .y=0x75, .sp=0xd1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x88b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x88b1, .value=0x3d, .type=IO_READ},
        {.addr=0x88b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa0aa, .a=0x96, .x=0xbd, .y=0x87, .sp=0x19, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa0aa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa0ab, .a=0x96, .x=0xbe, .y=0x87, .sp=0x19, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa0aa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa0aa, .value=0x3d, .type=IO_READ},
        {.addr=0xa0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xf8ea, .a=0x4a, .x=0xd2, .y=0x92, .sp=0x8c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ea, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf8eb, .a=0x4a, .x=0xd3, .y=0x92, .sp=0x8c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf8ea, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf8ea, .value=0x3d, .type=IO_READ},
        {.addr=0xf8eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8650, .a=0xb5, .x=0xc1, .y=0x18, .sp=0xb3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8650, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8651, .a=0xb5, .x=0xc2, .y=0x18, .sp=0xb3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8650, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8650, .value=0x3d, .type=IO_READ},
        {.addr=0x8651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x7cc4, .a=0x99, .x=0xa2, .y=0x93, .sp=0xb4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7cc5, .a=0x99, .x=0xa3, .y=0x93, .sp=0xb4, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7cc4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7cc4, .value=0x3d, .type=IO_READ},
        {.addr=0x7cc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0f00, .a=0x25, .x=0xd2, .y=0x44, .sp=0x34, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0f00, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0f01, .a=0x25, .x=0xd3, .y=0x44, .sp=0x34, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0f00, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0f00, .value=0x3d, .type=IO_READ},
        {.addr=0x0f01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe522, .a=0x6f, .x=0x9c, .y=0xff, .sp=0x11, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe522, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe523, .a=0x6f, .x=0x9d, .y=0xff, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe522, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe522, .value=0x3d, .type=IO_READ},
        {.addr=0xe523, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x54a2, .a=0xc9, .x=0x9b, .y=0xf6, .sp=0x5e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x54a2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x54a3, .a=0xc9, .x=0x9c, .y=0xf6, .sp=0x5e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x54a2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x54a2, .value=0x3d, .type=IO_READ},
        {.addr=0x54a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8c86, .a=0xa6, .x=0x04, .y=0xdb, .sp=0x21, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8c86, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8c87, .a=0xa6, .x=0x05, .y=0xdb, .sp=0x21, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8c86, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8c86, .value=0x3d, .type=IO_READ},
        {.addr=0x8c87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xa7c7, .a=0xe7, .x=0xfb, .y=0x4e, .sp=0xda, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa7c8, .a=0xe7, .x=0xfc, .y=0x4e, .sp=0xda, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa7c7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa7c7, .value=0x3d, .type=IO_READ},
        {.addr=0xa7c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x4185, .a=0xa4, .x=0xbb, .y=0x1e, .sp=0xa9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4185, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4186, .a=0xa4, .x=0xbc, .y=0x1e, .sp=0xa9, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4185, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4185, .value=0x3d, .type=IO_READ},
        {.addr=0x4186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0302) {
    const struct CPU_State initial_cpu = {.pc=0xa2f1, .a=0x81, .x=0x28, .y=0xb8, .sp=0xe1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa2f2, .a=0x81, .x=0x29, .y=0xb8, .sp=0xe1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa2f1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa2f1, .value=0x3d, .type=IO_READ},
        {.addr=0xa2f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0303) {
    const struct CPU_State initial_cpu = {.pc=0xfc6c, .a=0xdd, .x=0x4a, .y=0x3a, .sp=0x45, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xfc6c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfc6d, .a=0xdd, .x=0x4b, .y=0x3a, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfc6c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfc6c, .value=0x3d, .type=IO_READ},
        {.addr=0xfc6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x7842, .a=0xca, .x=0x07, .y=0xb3, .sp=0x04, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x7842, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7843, .a=0xca, .x=0x08, .y=0xb3, .sp=0x04, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7842, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7842, .value=0x3d, .type=IO_READ},
        {.addr=0x7843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x697d, .a=0x19, .x=0xe7, .y=0xa2, .sp=0x95, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x697d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x697e, .a=0x19, .x=0xe8, .y=0xa2, .sp=0x95, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x697d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x697d, .value=0x3d, .type=IO_READ},
        {.addr=0x697e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0306) {
    const struct CPU_State initial_cpu = {.pc=0xd6d7, .a=0x73, .x=0x93, .y=0xdb, .sp=0xf7, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd6d8, .a=0x73, .x=0x94, .y=0xdb, .sp=0xf7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd6d7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd6d7, .value=0x3d, .type=IO_READ},
        {.addr=0xd6d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xc21a, .a=0xc5, .x=0xf7, .y=0xfc, .sp=0x81, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xc21a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc21b, .a=0xc5, .x=0xf8, .y=0xfc, .sp=0x81, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc21a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc21a, .value=0x3d, .type=IO_READ},
        {.addr=0xc21b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x388d, .a=0x1b, .x=0x32, .y=0xe2, .sp=0x1c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x388d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x388e, .a=0x1b, .x=0x33, .y=0xe2, .sp=0x1c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x388d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x388d, .value=0x3d, .type=IO_READ},
        {.addr=0x388e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe279, .a=0x68, .x=0x31, .y=0x5d, .sp=0xb9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe279, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe27a, .a=0x68, .x=0x32, .y=0x5d, .sp=0xb9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe279, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe279, .value=0x3d, .type=IO_READ},
        {.addr=0xe27a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xd42a, .a=0x63, .x=0x19, .y=0x66, .sp=0xb9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xd42a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd42b, .a=0x63, .x=0x1a, .y=0x66, .sp=0xb9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd42a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd42a, .value=0x3d, .type=IO_READ},
        {.addr=0xd42b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x940f, .a=0xaa, .x=0x7b, .y=0xf0, .sp=0x13, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x940f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9410, .a=0xaa, .x=0x7c, .y=0xf0, .sp=0x13, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x940f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x940f, .value=0x3d, .type=IO_READ},
        {.addr=0x9410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030C) {
    const struct CPU_State initial_cpu = {.pc=0xb8f8, .a=0xb6, .x=0x03, .y=0x85, .sp=0x74, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb8f9, .a=0xb6, .x=0x04, .y=0x85, .sp=0x74, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb8f8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb8f8, .value=0x3d, .type=IO_READ},
        {.addr=0xb8f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030D) {
    const struct CPU_State initial_cpu = {.pc=0xc415, .a=0x70, .x=0xa8, .y=0x63, .sp=0x4d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc415, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc416, .a=0x70, .x=0xa9, .y=0x63, .sp=0x4d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc415, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc415, .value=0x3d, .type=IO_READ},
        {.addr=0xc416, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030E) {
    const struct CPU_State initial_cpu = {.pc=0x91bc, .a=0x82, .x=0x43, .y=0xc8, .sp=0x05, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x91bc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x91bd, .a=0x82, .x=0x44, .y=0xc8, .sp=0x05, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x91bc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x91bc, .value=0x3d, .type=IO_READ},
        {.addr=0x91bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_030F) {
    const struct CPU_State initial_cpu = {.pc=0xc2d3, .a=0x14, .x=0xa3, .y=0xed, .sp=0xd4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xc2d3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc2d4, .a=0x14, .x=0xa4, .y=0xed, .sp=0xd4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc2d3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc2d3, .value=0x3d, .type=IO_READ},
        {.addr=0xc2d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0310) {
    const struct CPU_State initial_cpu = {.pc=0xa505, .a=0x8f, .x=0x97, .y=0x62, .sp=0xff, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa505, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa506, .a=0x8f, .x=0x98, .y=0x62, .sp=0xff, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa505, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa505, .value=0x3d, .type=IO_READ},
        {.addr=0xa506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x6bf3, .a=0x46, .x=0x8f, .y=0xe9, .sp=0xf7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6bf4, .a=0x46, .x=0x90, .y=0xe9, .sp=0xf7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6bf3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6bf3, .value=0x3d, .type=IO_READ},
        {.addr=0x6bf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0312) {
    const struct CPU_State initial_cpu = {.pc=0x18a6, .a=0xbb, .x=0xe6, .y=0x0f, .sp=0x93, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x18a6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x18a7, .a=0xbb, .x=0xe7, .y=0x0f, .sp=0x93, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x18a6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x18a6, .value=0x3d, .type=IO_READ},
        {.addr=0x18a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0313) {
    const struct CPU_State initial_cpu = {.pc=0x9c59, .a=0x78, .x=0x5a, .y=0xd2, .sp=0x15, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9c59, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9c5a, .a=0x78, .x=0x5b, .y=0xd2, .sp=0x15, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9c59, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9c59, .value=0x3d, .type=IO_READ},
        {.addr=0x9c5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0314) {
    const struct CPU_State initial_cpu = {.pc=0x6013, .a=0x23, .x=0x28, .y=0x6e, .sp=0xba, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6013, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6014, .a=0x23, .x=0x29, .y=0x6e, .sp=0xba, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6013, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6013, .value=0x3d, .type=IO_READ},
        {.addr=0x6014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0315) {
    const struct CPU_State initial_cpu = {.pc=0xa2cf, .a=0x9f, .x=0xeb, .y=0x91, .sp=0x2b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa2cf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa2d0, .a=0x9f, .x=0xec, .y=0x91, .sp=0x2b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa2cf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa2cf, .value=0x3d, .type=IO_READ},
        {.addr=0xa2d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x1b82, .a=0xd4, .x=0xf9, .y=0xf2, .sp=0x5d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x1b82, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1b83, .a=0xd4, .x=0xfa, .y=0xf2, .sp=0x5d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1b82, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1b82, .value=0x3d, .type=IO_READ},
        {.addr=0x1b83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x10db, .a=0x17, .x=0x06, .y=0xdd, .sp=0x74, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x10db, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x10dc, .a=0x17, .x=0x07, .y=0xdd, .sp=0x74, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x10db, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x10db, .value=0x3d, .type=IO_READ},
        {.addr=0x10dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x4458, .a=0x67, .x=0x30, .y=0x94, .sp=0x47, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4458, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4459, .a=0x67, .x=0x31, .y=0x94, .sp=0x47, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4458, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4458, .value=0x3d, .type=IO_READ},
        {.addr=0x4459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2684, .a=0xab, .x=0xf5, .y=0xc1, .sp=0x60, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2684, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2685, .a=0xab, .x=0xf6, .y=0xc1, .sp=0x60, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2684, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2684, .value=0x3d, .type=IO_READ},
        {.addr=0x2685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x6d0a, .a=0x77, .x=0x71, .y=0xb6, .sp=0x79, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6d0b, .a=0x77, .x=0x72, .y=0xb6, .sp=0x79, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6d0a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6d0a, .value=0x3d, .type=IO_READ},
        {.addr=0x6d0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8ce2, .a=0x01, .x=0xaf, .y=0x5c, .sp=0x84, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8ce3, .a=0x01, .x=0xb0, .y=0x5c, .sp=0x84, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x8ce2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce2, .value=0x3d, .type=IO_READ},
        {.addr=0x8ce3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x814a, .a=0xa7, .x=0x45, .y=0x2b, .sp=0x58, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x814a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x814b, .a=0xa7, .x=0x46, .y=0x2b, .sp=0x58, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x814a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x814a, .value=0x3d, .type=IO_READ},
        {.addr=0x814b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031D) {
    const struct CPU_State initial_cpu = {.pc=0xc1ca, .a=0x99, .x=0x3b, .y=0xec, .sp=0x30, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ca, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc1cb, .a=0x99, .x=0x3c, .y=0xec, .sp=0x30, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc1ca, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc1ca, .value=0x3d, .type=IO_READ},
        {.addr=0xc1cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031E) {
    const struct CPU_State initial_cpu = {.pc=0x5607, .a=0x1b, .x=0x82, .y=0x28, .sp=0x47, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5607, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5608, .a=0x1b, .x=0x83, .y=0x28, .sp=0x47, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5607, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5607, .value=0x3d, .type=IO_READ},
        {.addr=0x5608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x9abe, .a=0xe1, .x=0x02, .y=0xbe, .sp=0xba, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9abe, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9abf, .a=0xe1, .x=0x03, .y=0xbe, .sp=0xba, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9abe, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9abe, .value=0x3d, .type=IO_READ},
        {.addr=0x9abf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0320) {
    const struct CPU_State initial_cpu = {.pc=0xafc7, .a=0x43, .x=0x9a, .y=0x7e, .sp=0x39, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xafc7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xafc8, .a=0x43, .x=0x9b, .y=0x7e, .sp=0x39, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xafc7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xafc7, .value=0x3d, .type=IO_READ},
        {.addr=0xafc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x126c, .a=0xfb, .x=0x6f, .y=0x6c, .sp=0xa8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x126c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x126d, .a=0xfb, .x=0x70, .y=0x6c, .sp=0xa8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x126c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x126c, .value=0x3d, .type=IO_READ},
        {.addr=0x126d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0322) {
    const struct CPU_State initial_cpu = {.pc=0xb9c2, .a=0x8f, .x=0x0a, .y=0xd0, .sp=0x7a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb9c3, .a=0x8f, .x=0x0b, .y=0xd0, .sp=0x7a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb9c2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb9c2, .value=0x3d, .type=IO_READ},
        {.addr=0xb9c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x0bab, .a=0x27, .x=0x2f, .y=0xda, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0bab, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0bac, .a=0x27, .x=0x30, .y=0xda, .sp=0xef, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0bab, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0bab, .value=0x3d, .type=IO_READ},
        {.addr=0x0bac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0324) {
    const struct CPU_State initial_cpu = {.pc=0xd6a6, .a=0x10, .x=0xad, .y=0xf0, .sp=0xb4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xd6a6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd6a7, .a=0x10, .x=0xae, .y=0xf0, .sp=0xb4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd6a6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd6a6, .value=0x3d, .type=IO_READ},
        {.addr=0xd6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0325) {
    const struct CPU_State initial_cpu = {.pc=0xc466, .a=0xfb, .x=0x64, .y=0x06, .sp=0x7a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc466, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc467, .a=0xfb, .x=0x65, .y=0x06, .sp=0x7a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc466, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc466, .value=0x3d, .type=IO_READ},
        {.addr=0xc467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x010a, .a=0x74, .x=0x9e, .y=0xfd, .sp=0x71, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x010b, .a=0x74, .x=0x9f, .y=0xfd, .sp=0x71, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x010a, .value=0x3d, .type=IO_READ},
        {.addr=0x010b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0327) {
    const struct CPU_State initial_cpu = {.pc=0xd028, .a=0x44, .x=0x27, .y=0xce, .sp=0xdc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd028, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd029, .a=0x44, .x=0x28, .y=0xce, .sp=0xdc, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd028, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd028, .value=0x3d, .type=IO_READ},
        {.addr=0xd029, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0328) {
    const struct CPU_State initial_cpu = {.pc=0xe335, .a=0xf5, .x=0xe3, .y=0x01, .sp=0xba, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe335, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe336, .a=0xf5, .x=0xe4, .y=0x01, .sp=0xba, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe335, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe335, .value=0x3d, .type=IO_READ},
        {.addr=0xe336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x7b67, .a=0x52, .x=0x34, .y=0x49, .sp=0xac, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b67, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b68, .a=0x52, .x=0x35, .y=0x49, .sp=0xac, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7b67, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b67, .value=0x3d, .type=IO_READ},
        {.addr=0x7b68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032A) {
    const struct CPU_State initial_cpu = {.pc=0xceae, .a=0xa5, .x=0xaf, .y=0x1c, .sp=0xe3, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xceae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xceaf, .a=0xa5, .x=0xb0, .y=0x1c, .sp=0xe3, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xceae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xceae, .value=0x3d, .type=IO_READ},
        {.addr=0xceaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032B) {
    const struct CPU_State initial_cpu = {.pc=0xf259, .a=0xa2, .x=0xf1, .y=0x40, .sp=0xb6, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf259, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf25a, .a=0xa2, .x=0xf2, .y=0x40, .sp=0xb6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf259, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf259, .value=0x3d, .type=IO_READ},
        {.addr=0xf25a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x47c8, .a=0x81, .x=0x2a, .y=0x62, .sp=0x4e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x47c8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x47c9, .a=0x81, .x=0x2b, .y=0x62, .sp=0x4e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x47c8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x47c8, .value=0x3d, .type=IO_READ},
        {.addr=0x47c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x8d91, .a=0x2c, .x=0xa3, .y=0x48, .sp=0x97, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8d91, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8d92, .a=0x2c, .x=0xa4, .y=0x48, .sp=0x97, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8d91, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8d91, .value=0x3d, .type=IO_READ},
        {.addr=0x8d92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032E) {
    const struct CPU_State initial_cpu = {.pc=0xbcdb, .a=0x2a, .x=0x08, .y=0xd3, .sp=0x9c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xbcdb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbcdc, .a=0x2a, .x=0x09, .y=0xd3, .sp=0x9c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbcdb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbcdb, .value=0x3d, .type=IO_READ},
        {.addr=0xbcdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_032F) {
    const struct CPU_State initial_cpu = {.pc=0x670f, .a=0x67, .x=0x3c, .y=0xd6, .sp=0xc8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x670f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6710, .a=0x67, .x=0x3d, .y=0xd6, .sp=0xc8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x670f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x670f, .value=0x3d, .type=IO_READ},
        {.addr=0x6710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x3d67, .a=0x04, .x=0x26, .y=0x94, .sp=0x5d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3d67, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3d68, .a=0x04, .x=0x27, .y=0x94, .sp=0x5d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3d67, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3d67, .value=0x3d, .type=IO_READ},
        {.addr=0x3d68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0331) {
    const struct CPU_State initial_cpu = {.pc=0xdfaa, .a=0x89, .x=0xf8, .y=0x25, .sp=0xb7, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdfaa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdfab, .a=0x89, .x=0xf9, .y=0x25, .sp=0xb7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xdfaa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdfaa, .value=0x3d, .type=IO_READ},
        {.addr=0xdfab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x6cb7, .a=0xa2, .x=0x38, .y=0xdc, .sp=0xa1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6cb8, .a=0xa2, .x=0x39, .y=0xdc, .sp=0xa1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6cb7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6cb7, .value=0x3d, .type=IO_READ},
        {.addr=0x6cb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0333) {
    const struct CPU_State initial_cpu = {.pc=0xe5ef, .a=0xeb, .x=0x94, .y=0xf0, .sp=0x49, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe5f0, .a=0xeb, .x=0x95, .y=0xf0, .sp=0x49, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe5ef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe5ef, .value=0x3d, .type=IO_READ},
        {.addr=0xe5f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x7d1c, .a=0x08, .x=0x28, .y=0x89, .sp=0x5f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7d1c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7d1d, .a=0x08, .x=0x29, .y=0x89, .sp=0x5f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7d1c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7d1c, .value=0x3d, .type=IO_READ},
        {.addr=0x7d1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x134a, .a=0x49, .x=0xb2, .y=0x1e, .sp=0x41, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x134a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x134b, .a=0x49, .x=0xb3, .y=0x1e, .sp=0x41, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x134a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x134a, .value=0x3d, .type=IO_READ},
        {.addr=0x134b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0336) {
    const struct CPU_State initial_cpu = {.pc=0xc809, .a=0xce, .x=0x93, .y=0x64, .sp=0x72, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc809, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc80a, .a=0xce, .x=0x94, .y=0x64, .sp=0x72, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc809, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc809, .value=0x3d, .type=IO_READ},
        {.addr=0xc80a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0337) {
    const struct CPU_State initial_cpu = {.pc=0xc7b1, .a=0x9d, .x=0x2c, .y=0x4f, .sp=0x29, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc7b2, .a=0x9d, .x=0x2d, .y=0x4f, .sp=0x29, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc7b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc7b1, .value=0x3d, .type=IO_READ},
        {.addr=0xc7b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x9ca3, .a=0x7d, .x=0xff, .y=0x37, .sp=0x1b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9ca3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9ca4, .a=0x7d, .x=0x00, .y=0x37, .sp=0x1b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x9ca3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9ca3, .value=0x3d, .type=IO_READ},
        {.addr=0x9ca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd020, .a=0xb4, .x=0xfc, .y=0x89, .sp=0xc4, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xd020, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd021, .a=0xb4, .x=0xfd, .y=0x89, .sp=0xc4, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd020, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd020, .value=0x3d, .type=IO_READ},
        {.addr=0xd021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9332, .a=0xd3, .x=0x7c, .y=0xce, .sp=0x72, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9332, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9333, .a=0xd3, .x=0x7d, .y=0xce, .sp=0x72, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9332, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9332, .value=0x3d, .type=IO_READ},
        {.addr=0x9333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x089b, .a=0x5b, .x=0xf5, .y=0x40, .sp=0x80, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x089b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x089c, .a=0x5b, .x=0xf6, .y=0x40, .sp=0x80, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x089b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x089b, .value=0x3d, .type=IO_READ},
        {.addr=0x089c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x96a0, .a=0xb1, .x=0x61, .y=0xc1, .sp=0x1d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x96a0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x96a1, .a=0xb1, .x=0x62, .y=0xc1, .sp=0x1d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x96a0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x96a0, .value=0x3d, .type=IO_READ},
        {.addr=0x96a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x0e95, .a=0xda, .x=0x94, .y=0x26, .sp=0x76, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0e95, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0e96, .a=0xda, .x=0x95, .y=0x26, .sp=0x76, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0e95, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0e95, .value=0x3d, .type=IO_READ},
        {.addr=0x0e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x4b57, .a=0xef, .x=0x96, .y=0xac, .sp=0xcf, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4b57, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4b58, .a=0xef, .x=0x97, .y=0xac, .sp=0xcf, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4b57, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4b57, .value=0x3d, .type=IO_READ},
        {.addr=0x4b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_033F) {
    const struct CPU_State initial_cpu = {.pc=0x63a1, .a=0xe1, .x=0x68, .y=0x1d, .sp=0x4f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x63a1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x63a2, .a=0xe1, .x=0x69, .y=0x1d, .sp=0x4f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x63a1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x63a1, .value=0x3d, .type=IO_READ},
        {.addr=0x63a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0340) {
    const struct CPU_State initial_cpu = {.pc=0xdbcf, .a=0xd2, .x=0x28, .y=0x2f, .sp=0x62, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdbd0, .a=0xd2, .x=0x29, .y=0x2f, .sp=0x62, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdbcf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xdbcf, .value=0x3d, .type=IO_READ},
        {.addr=0xdbd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0341) {
    const struct CPU_State initial_cpu = {.pc=0x4be7, .a=0xcc, .x=0xf0, .y=0xab, .sp=0xed, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x4be7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4be8, .a=0xcc, .x=0xf1, .y=0xab, .sp=0xed, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4be7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4be7, .value=0x3d, .type=IO_READ},
        {.addr=0x4be8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0342) {
    const struct CPU_State initial_cpu = {.pc=0x501b, .a=0x4d, .x=0x66, .y=0x1f, .sp=0xb1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x501b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x501c, .a=0x4d, .x=0x67, .y=0x1f, .sp=0xb1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x501b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x501b, .value=0x3d, .type=IO_READ},
        {.addr=0x501c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0343) {
    const struct CPU_State initial_cpu = {.pc=0xb38c, .a=0x8a, .x=0xbc, .y=0x09, .sp=0x1e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb38c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb38d, .a=0x8a, .x=0xbd, .y=0x09, .sp=0x1e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb38c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb38c, .value=0x3d, .type=IO_READ},
        {.addr=0xb38d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x1070, .a=0x85, .x=0xff, .y=0x64, .sp=0xce, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1070, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1071, .a=0x85, .x=0x00, .y=0x64, .sp=0xce, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x1070, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1070, .value=0x3d, .type=IO_READ},
        {.addr=0x1071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x316a, .a=0x01, .x=0xa7, .y=0x43, .sp=0xf3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x316a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x316b, .a=0x01, .x=0xa8, .y=0x43, .sp=0xf3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x316a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x316a, .value=0x3d, .type=IO_READ},
        {.addr=0x316b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x47a3, .a=0x53, .x=0xfd, .y=0xb2, .sp=0xf2, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x47a3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x47a4, .a=0x53, .x=0xfe, .y=0xb2, .sp=0xf2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x47a3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x47a3, .value=0x3d, .type=IO_READ},
        {.addr=0x47a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x480e, .a=0xc4, .x=0xff, .y=0xaf, .sp=0x0b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x480e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x480f, .a=0xc4, .x=0x00, .y=0xaf, .sp=0x0b, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x480e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x480e, .value=0x3d, .type=IO_READ},
        {.addr=0x480f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0348) {
    const struct CPU_State initial_cpu = {.pc=0xcba2, .a=0x0e, .x=0x3f, .y=0xbe, .sp=0x34, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcba2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcba3, .a=0x0e, .x=0x40, .y=0xbe, .sp=0x34, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xcba2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcba2, .value=0x3d, .type=IO_READ},
        {.addr=0xcba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0349) {
    const struct CPU_State initial_cpu = {.pc=0xc43c, .a=0x38, .x=0x13, .y=0x35, .sp=0xac, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xc43c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc43d, .a=0x38, .x=0x14, .y=0x35, .sp=0xac, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc43c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc43c, .value=0x3d, .type=IO_READ},
        {.addr=0xc43d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x64ee, .a=0x9e, .x=0xcc, .y=0x10, .sp=0x45, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x64ee, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x64ef, .a=0x9e, .x=0xcd, .y=0x10, .sp=0x45, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x64ee, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x64ee, .value=0x3d, .type=IO_READ},
        {.addr=0x64ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8249, .a=0x8c, .x=0x82, .y=0x07, .sp=0x88, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x8249, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x824a, .a=0x8c, .x=0x83, .y=0x07, .sp=0x88, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8249, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8249, .value=0x3d, .type=IO_READ},
        {.addr=0x824a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x2875, .a=0x5b, .x=0xb6, .y=0x32, .sp=0x25, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2875, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2876, .a=0x5b, .x=0xb7, .y=0x32, .sp=0x25, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2875, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2875, .value=0x3d, .type=IO_READ},
        {.addr=0x2876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x5022, .a=0x5f, .x=0xa8, .y=0x88, .sp=0x11, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5022, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5023, .a=0x5f, .x=0xa9, .y=0x88, .sp=0x11, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5022, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5022, .value=0x3d, .type=IO_READ},
        {.addr=0x5023, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x6695, .a=0x2f, .x=0x44, .y=0xd4, .sp=0xd6, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6695, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6696, .a=0x2f, .x=0x45, .y=0xd4, .sp=0xd6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6695, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6695, .value=0x3d, .type=IO_READ},
        {.addr=0x6696, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x5e03, .a=0x02, .x=0xef, .y=0x26, .sp=0xff, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5e03, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5e04, .a=0x02, .x=0xf0, .y=0x26, .sp=0xff, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5e03, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5e03, .value=0x3d, .type=IO_READ},
        {.addr=0x5e04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa57f, .a=0xd6, .x=0x62, .y=0x9f, .sp=0xec, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa57f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa580, .a=0xd6, .x=0x63, .y=0x9f, .sp=0xec, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa57f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa57f, .value=0x3d, .type=IO_READ},
        {.addr=0xa580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0351) {
    const struct CPU_State initial_cpu = {.pc=0xe69b, .a=0x0b, .x=0x69, .y=0x57, .sp=0x50, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe69b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe69c, .a=0x0b, .x=0x6a, .y=0x57, .sp=0x50, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe69b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe69b, .value=0x3d, .type=IO_READ},
        {.addr=0xe69c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb622, .a=0x1a, .x=0xab, .y=0xda, .sp=0x52, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb622, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb623, .a=0x1a, .x=0xac, .y=0xda, .sp=0x52, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb622, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb622, .value=0x3d, .type=IO_READ},
        {.addr=0xb623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x3858, .a=0x8f, .x=0x22, .y=0x65, .sp=0x65, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3858, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3859, .a=0x8f, .x=0x23, .y=0x65, .sp=0x65, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3858, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3858, .value=0x3d, .type=IO_READ},
        {.addr=0x3859, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0354) {
    const struct CPU_State initial_cpu = {.pc=0x08a7, .a=0x91, .x=0xd2, .y=0x09, .sp=0x7b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x08a7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x08a8, .a=0x91, .x=0xd3, .y=0x09, .sp=0x7b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x08a7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x08a7, .value=0x3d, .type=IO_READ},
        {.addr=0x08a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x6033, .a=0x8e, .x=0x51, .y=0xad, .sp=0x83, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6033, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6034, .a=0x8e, .x=0x52, .y=0xad, .sp=0x83, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6033, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6033, .value=0x3d, .type=IO_READ},
        {.addr=0x6034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x62ff, .a=0x19, .x=0x8c, .y=0x2d, .sp=0xc7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x62ff, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6300, .a=0x19, .x=0x8d, .y=0x2d, .sp=0xc7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x62ff, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x62ff, .value=0x3d, .type=IO_READ},
        {.addr=0x6300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0357) {
    const struct CPU_State initial_cpu = {.pc=0xaefc, .a=0x40, .x=0xea, .y=0xc6, .sp=0xb5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xaefc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xaefd, .a=0x40, .x=0xeb, .y=0xc6, .sp=0xb5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xaefc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xaefc, .value=0x3d, .type=IO_READ},
        {.addr=0xaefd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x3382, .a=0x49, .x=0xa2, .y=0x3d, .sp=0x52, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x3382, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3383, .a=0x49, .x=0xa3, .y=0x3d, .sp=0x52, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3382, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3382, .value=0x3d, .type=IO_READ},
        {.addr=0x3383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0359) {
    const struct CPU_State initial_cpu = {.pc=0x4b02, .a=0x27, .x=0x0a, .y=0x52, .sp=0xdd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4b02, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4b03, .a=0x27, .x=0x0b, .y=0x52, .sp=0xdd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4b02, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4b02, .value=0x3d, .type=IO_READ},
        {.addr=0x4b03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x1721, .a=0xde, .x=0x7a, .y=0x1c, .sp=0x30, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1721, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1722, .a=0xde, .x=0x7b, .y=0x1c, .sp=0x30, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1721, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1721, .value=0x3d, .type=IO_READ},
        {.addr=0x1722, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035B) {
    const struct CPU_State initial_cpu = {.pc=0xa341, .a=0x5a, .x=0x26, .y=0x2b, .sp=0x43, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xa341, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa342, .a=0x5a, .x=0x27, .y=0x2b, .sp=0x43, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa341, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa341, .value=0x3d, .type=IO_READ},
        {.addr=0xa342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x016a, .a=0xe5, .x=0x6d, .y=0x31, .sp=0x74, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x016b, .a=0xe5, .x=0x6e, .y=0x31, .sp=0x74, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x016a, .value=0x3d, .type=IO_READ},
        {.addr=0x016b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x0588, .a=0x6b, .x=0x88, .y=0x28, .sp=0x47, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0588, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0589, .a=0x6b, .x=0x89, .y=0x28, .sp=0x47, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0588, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0588, .value=0x3d, .type=IO_READ},
        {.addr=0x0589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd67d, .a=0x97, .x=0x4e, .y=0x5a, .sp=0xa8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xd67d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd67e, .a=0x97, .x=0x4f, .y=0x5a, .sp=0xa8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd67d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd67d, .value=0x3d, .type=IO_READ},
        {.addr=0xd67e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_035F) {
    const struct CPU_State initial_cpu = {.pc=0x225e, .a=0xd2, .x=0x09, .y=0xac, .sp=0x3a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x225e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x225f, .a=0xd2, .x=0x0a, .y=0xac, .sp=0x3a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x225e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x225e, .value=0x3d, .type=IO_READ},
        {.addr=0x225f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xd47e, .a=0x1a, .x=0x39, .y=0x3f, .sp=0x1b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xd47e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd47f, .a=0x1a, .x=0x3a, .y=0x3f, .sp=0x1b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd47e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd47e, .value=0x3d, .type=IO_READ},
        {.addr=0xd47f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa39b, .a=0x9a, .x=0x17, .y=0x13, .sp=0xae, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa39b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa39c, .a=0x9a, .x=0x18, .y=0x13, .sp=0xae, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa39b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa39b, .value=0x3d, .type=IO_READ},
        {.addr=0xa39c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x0aef, .a=0xb5, .x=0xe3, .y=0x44, .sp=0x15, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0aef, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0af0, .a=0xb5, .x=0xe4, .y=0x44, .sp=0x15, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0aef, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0aef, .value=0x3d, .type=IO_READ},
        {.addr=0x0af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0214, .a=0x41, .x=0xf7, .y=0xc0, .sp=0xf4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0214, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0215, .a=0x41, .x=0xf8, .y=0xc0, .sp=0xf4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0214, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0214, .value=0x3d, .type=IO_READ},
        {.addr=0x0215, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf8fa, .a=0x91, .x=0x28, .y=0x50, .sp=0xb4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf8fa, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf8fb, .a=0x91, .x=0x29, .y=0x50, .sp=0xb4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf8fa, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf8fa, .value=0x3d, .type=IO_READ},
        {.addr=0xf8fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x94b5, .a=0x35, .x=0x9a, .y=0x7d, .sp=0x89, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x94b5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x94b6, .a=0x35, .x=0x9b, .y=0x7d, .sp=0x89, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x94b5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x94b5, .value=0x3d, .type=IO_READ},
        {.addr=0x94b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x2c69, .a=0xe9, .x=0x70, .y=0xfe, .sp=0xc5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2c69, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2c6a, .a=0xe9, .x=0x71, .y=0xfe, .sp=0xc5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2c69, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2c69, .value=0x3d, .type=IO_READ},
        {.addr=0x2c6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0367) {
    const struct CPU_State initial_cpu = {.pc=0xab0f, .a=0x9e, .x=0x32, .y=0x59, .sp=0x57, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xab0f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xab10, .a=0x9e, .x=0x33, .y=0x59, .sp=0x57, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xab0f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xab0f, .value=0x3d, .type=IO_READ},
        {.addr=0xab10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x3ae5, .a=0xd2, .x=0x07, .y=0xcb, .sp=0x42, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3ae6, .a=0xd2, .x=0x08, .y=0xcb, .sp=0x42, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3ae5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae5, .value=0x3d, .type=IO_READ},
        {.addr=0x3ae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0369) {
    const struct CPU_State initial_cpu = {.pc=0xb157, .a=0x1b, .x=0xe2, .y=0x3f, .sp=0xcf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb157, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb158, .a=0x1b, .x=0xe3, .y=0x3f, .sp=0xcf, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb157, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb157, .value=0x3d, .type=IO_READ},
        {.addr=0xb158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x1126, .a=0x95, .x=0x22, .y=0xd5, .sp=0xe3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1126, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1127, .a=0x95, .x=0x23, .y=0xd5, .sp=0xe3, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1126, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1126, .value=0x3d, .type=IO_READ},
        {.addr=0x1127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036B) {
    const struct CPU_State initial_cpu = {.pc=0xb348, .a=0x43, .x=0x7e, .y=0x2b, .sp=0x38, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb348, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb349, .a=0x43, .x=0x7f, .y=0x2b, .sp=0x38, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb348, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb348, .value=0x3d, .type=IO_READ},
        {.addr=0xb349, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x78ad, .a=0x6c, .x=0xac, .y=0x85, .sp=0x7c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x78ad, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x78ae, .a=0x6c, .x=0xad, .y=0x85, .sp=0x7c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x78ad, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x78ad, .value=0x3d, .type=IO_READ},
        {.addr=0x78ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x30d7, .a=0x5a, .x=0xbc, .y=0xc3, .sp=0x90, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x30d7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x30d8, .a=0x5a, .x=0xbd, .y=0xc3, .sp=0x90, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x30d7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x30d7, .value=0x3d, .type=IO_READ},
        {.addr=0x30d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036E) {
    const struct CPU_State initial_cpu = {.pc=0xba04, .a=0x0f, .x=0xfd, .y=0x66, .sp=0xc4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xba04, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xba05, .a=0x0f, .x=0xfe, .y=0x66, .sp=0xc4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xba04, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xba04, .value=0x3d, .type=IO_READ},
        {.addr=0xba05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x2ab8, .a=0xf7, .x=0xd6, .y=0xa6, .sp=0xa9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2ab9, .a=0xf7, .x=0xd7, .y=0xa6, .sp=0xa9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2ab8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2ab8, .value=0x3d, .type=IO_READ},
        {.addr=0x2ab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x7523, .a=0x2a, .x=0x96, .y=0x92, .sp=0x70, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7523, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7524, .a=0x2a, .x=0x97, .y=0x92, .sp=0x70, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7523, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7523, .value=0x3d, .type=IO_READ},
        {.addr=0x7524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0371) {
    const struct CPU_State initial_cpu = {.pc=0x3e19, .a=0xde, .x=0xfa, .y=0x5c, .sp=0x47, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3e19, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3e1a, .a=0xde, .x=0xfb, .y=0x5c, .sp=0x47, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3e19, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3e19, .value=0x3d, .type=IO_READ},
        {.addr=0x3e1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x16c0, .a=0x45, .x=0x20, .y=0x89, .sp=0xe9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x16c0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x16c1, .a=0x45, .x=0x21, .y=0x89, .sp=0xe9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x16c0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x16c0, .value=0x3d, .type=IO_READ},
        {.addr=0x16c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x74a4, .a=0x65, .x=0x46, .y=0x31, .sp=0xdd, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x74a4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x74a5, .a=0x65, .x=0x47, .y=0x31, .sp=0xdd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x74a4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x74a4, .value=0x3d, .type=IO_READ},
        {.addr=0x74a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0374) {
    const struct CPU_State initial_cpu = {.pc=0xe503, .a=0xa2, .x=0xf2, .y=0x3c, .sp=0x42, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe503, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe504, .a=0xa2, .x=0xf3, .y=0x3c, .sp=0x42, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe503, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe503, .value=0x3d, .type=IO_READ},
        {.addr=0xe504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0375) {
    const struct CPU_State initial_cpu = {.pc=0xa20b, .a=0x0a, .x=0x25, .y=0x9d, .sp=0xca, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa20b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa20c, .a=0x0a, .x=0x26, .y=0x9d, .sp=0xca, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa20b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa20b, .value=0x3d, .type=IO_READ},
        {.addr=0xa20c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0376) {
    const struct CPU_State initial_cpu = {.pc=0xa1b1, .a=0x62, .x=0xa4, .y=0xd2, .sp=0x97, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa1b2, .a=0x62, .x=0xa5, .y=0xd2, .sp=0x97, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa1b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa1b1, .value=0x3d, .type=IO_READ},
        {.addr=0xa1b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x498d, .a=0x21, .x=0x1b, .y=0xdf, .sp=0x73, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x498d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x498e, .a=0x21, .x=0x1c, .y=0xdf, .sp=0x73, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x498d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x498d, .value=0x3d, .type=IO_READ},
        {.addr=0x498e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x1fc4, .a=0x36, .x=0x18, .y=0x66, .sp=0x80, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1fc5, .a=0x36, .x=0x19, .y=0x66, .sp=0x80, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1fc4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1fc4, .value=0x3d, .type=IO_READ},
        {.addr=0x1fc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0379) {
    const struct CPU_State initial_cpu = {.pc=0x23e3, .a=0x5f, .x=0x6b, .y=0x57, .sp=0x6e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x23e3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x23e4, .a=0x5f, .x=0x6c, .y=0x57, .sp=0x6e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x23e3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x23e3, .value=0x3d, .type=IO_READ},
        {.addr=0x23e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x2d03, .a=0x06, .x=0x15, .y=0xb2, .sp=0x02, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2d03, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2d04, .a=0x06, .x=0x16, .y=0xb2, .sp=0x02, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2d03, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2d03, .value=0x3d, .type=IO_READ},
        {.addr=0x2d04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe8ae, .a=0xf5, .x=0x3a, .y=0x0d, .sp=0x50, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ae, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe8af, .a=0xf5, .x=0x3b, .y=0x0d, .sp=0x50, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe8ae, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe8ae, .value=0x3d, .type=IO_READ},
        {.addr=0xe8af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x65e9, .a=0x9a, .x=0x44, .y=0xcd, .sp=0x8c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x65e9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x65ea, .a=0x9a, .x=0x45, .y=0xcd, .sp=0x8c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x65e9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x65e9, .value=0x3d, .type=IO_READ},
        {.addr=0x65ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037D) {
    const struct CPU_State initial_cpu = {.pc=0xe226, .a=0x30, .x=0xea, .y=0xab, .sp=0xef, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe226, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe227, .a=0x30, .x=0xeb, .y=0xab, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe226, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe226, .value=0x3d, .type=IO_READ},
        {.addr=0xe227, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6a65, .a=0x00, .x=0xb9, .y=0xa9, .sp=0x11, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6a65, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6a66, .a=0x00, .x=0xba, .y=0xa9, .sp=0x11, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6a65, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6a65, .value=0x3d, .type=IO_READ},
        {.addr=0x6a66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x4e93, .a=0xe3, .x=0xc9, .y=0x89, .sp=0x40, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4e93, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4e94, .a=0xe3, .x=0xca, .y=0x89, .sp=0x40, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4e93, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4e93, .value=0x3d, .type=IO_READ},
        {.addr=0x4e94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x16df, .a=0x3f, .x=0xb7, .y=0x89, .sp=0xec, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x16df, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x16e0, .a=0x3f, .x=0xb8, .y=0x89, .sp=0xec, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x16df, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x16df, .value=0x3d, .type=IO_READ},
        {.addr=0x16e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x2afd, .a=0xa4, .x=0x6f, .y=0x04, .sp=0x81, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x2afd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2afe, .a=0xa4, .x=0x70, .y=0x04, .sp=0x81, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x2afd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2afd, .value=0x3d, .type=IO_READ},
        {.addr=0x2afe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0382) {
    const struct CPU_State initial_cpu = {.pc=0xee4d, .a=0x45, .x=0x92, .y=0xd6, .sp=0x68, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xee4d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xee4e, .a=0x45, .x=0x93, .y=0xd6, .sp=0x68, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xee4d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xee4d, .value=0x3d, .type=IO_READ},
        {.addr=0xee4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0383) {
    const struct CPU_State initial_cpu = {.pc=0xd0cf, .a=0x04, .x=0x46, .y=0xec, .sp=0xdc, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xd0cf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd0d0, .a=0x04, .x=0x47, .y=0xec, .sp=0xdc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd0cf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd0cf, .value=0x3d, .type=IO_READ},
        {.addr=0xd0d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0384) {
    const struct CPU_State initial_cpu = {.pc=0xe173, .a=0x3e, .x=0x09, .y=0x47, .sp=0x54, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe173, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe174, .a=0x3e, .x=0x0a, .y=0x47, .sp=0x54, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe173, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe173, .value=0x3d, .type=IO_READ},
        {.addr=0xe174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x95d4, .a=0x92, .x=0xf8, .y=0x38, .sp=0xfc, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x95d4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x95d5, .a=0x92, .x=0xf9, .y=0x38, .sp=0xfc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x95d4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x95d4, .value=0x3d, .type=IO_READ},
        {.addr=0x95d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x874e, .a=0xd2, .x=0x49, .y=0x28, .sp=0x34, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x874e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x874f, .a=0xd2, .x=0x4a, .y=0x28, .sp=0x34, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x874e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x874e, .value=0x3d, .type=IO_READ},
        {.addr=0x874f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0387) {
    const struct CPU_State initial_cpu = {.pc=0x744f, .a=0xd1, .x=0x40, .y=0xb6, .sp=0xad, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x744f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7450, .a=0xd1, .x=0x41, .y=0xb6, .sp=0xad, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x744f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x744f, .value=0x3d, .type=IO_READ},
        {.addr=0x7450, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0388) {
    const struct CPU_State initial_cpu = {.pc=0xf3b1, .a=0x01, .x=0x11, .y=0x52, .sp=0x1c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf3b1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf3b2, .a=0x01, .x=0x12, .y=0x52, .sp=0x1c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf3b1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf3b1, .value=0x3d, .type=IO_READ},
        {.addr=0xf3b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x4cb8, .a=0x94, .x=0x7d, .y=0xac, .sp=0x8d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4cb8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4cb9, .a=0x94, .x=0x7e, .y=0xac, .sp=0x8d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4cb8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4cb8, .value=0x3d, .type=IO_READ},
        {.addr=0x4cb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6230, .a=0x95, .x=0x0a, .y=0x70, .sp=0xc6, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6230, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6231, .a=0x95, .x=0x0b, .y=0x70, .sp=0xc6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6230, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6230, .value=0x3d, .type=IO_READ},
        {.addr=0x6231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x3436, .a=0x5f, .x=0x3f, .y=0x93, .sp=0x8b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3436, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3437, .a=0x5f, .x=0x40, .y=0x93, .sp=0x8b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3436, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3436, .value=0x3d, .type=IO_READ},
        {.addr=0x3437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x0c3e, .a=0x43, .x=0x51, .y=0x51, .sp=0x10, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0c3e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0c3f, .a=0x43, .x=0x52, .y=0x51, .sp=0x10, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0c3e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0c3e, .value=0x3d, .type=IO_READ},
        {.addr=0x0c3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038D) {
    const struct CPU_State initial_cpu = {.pc=0xebe7, .a=0x75, .x=0x5a, .y=0xa5, .sp=0x7e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xebe7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xebe8, .a=0x75, .x=0x5b, .y=0xa5, .sp=0x7e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xebe7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xebe7, .value=0x3d, .type=IO_READ},
        {.addr=0xebe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038E) {
    const struct CPU_State initial_cpu = {.pc=0xb698, .a=0x9b, .x=0x40, .y=0x91, .sp=0x8c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb698, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb699, .a=0x9b, .x=0x41, .y=0x91, .sp=0x8c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb698, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb698, .value=0x3d, .type=IO_READ},
        {.addr=0xb699, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x9a20, .a=0xef, .x=0xff, .y=0xa0, .sp=0xf9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9a20, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9a21, .a=0xef, .x=0x00, .y=0xa0, .sp=0xf9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9a20, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9a20, .value=0x3d, .type=IO_READ},
        {.addr=0x9a21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0390) {
    const struct CPU_State initial_cpu = {.pc=0x60f9, .a=0x47, .x=0xad, .y=0x9e, .sp=0x1d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x60f9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x60fa, .a=0x47, .x=0xae, .y=0x9e, .sp=0x1d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x60f9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x60f9, .value=0x3d, .type=IO_READ},
        {.addr=0x60fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x3865, .a=0x51, .x=0xf0, .y=0xb7, .sp=0xa4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x3865, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3866, .a=0x51, .x=0xf1, .y=0xb7, .sp=0xa4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3865, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3865, .value=0x3d, .type=IO_READ},
        {.addr=0x3866, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x24a3, .a=0x0b, .x=0x24, .y=0x89, .sp=0x00, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x24a3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x24a4, .a=0x0b, .x=0x25, .y=0x89, .sp=0x00, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x24a3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x24a3, .value=0x3d, .type=IO_READ},
        {.addr=0x24a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0x92, .x=0xdb, .y=0x3d, .sp=0xc5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6e41, .a=0x92, .x=0xdc, .y=0x3d, .sp=0xc5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0x3d, .type=IO_READ},
        {.addr=0x6e41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x4520, .a=0x1a, .x=0x25, .y=0x71, .sp=0x65, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4520, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4521, .a=0x1a, .x=0x26, .y=0x71, .sp=0x65, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4520, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4520, .value=0x3d, .type=IO_READ},
        {.addr=0x4521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x0fd4, .a=0x9f, .x=0xb6, .y=0xe4, .sp=0xe0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0fd4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0fd5, .a=0x9f, .x=0xb7, .y=0xe4, .sp=0xe0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0fd4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0fd4, .value=0x3d, .type=IO_READ},
        {.addr=0x0fd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x30e0, .a=0xc3, .x=0xd5, .y=0x93, .sp=0xe9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x30e0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x30e1, .a=0xc3, .x=0xd6, .y=0x93, .sp=0xe9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x30e0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x30e0, .value=0x3d, .type=IO_READ},
        {.addr=0x30e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4c53, .a=0xee, .x=0x27, .y=0x6a, .sp=0x04, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4c53, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4c54, .a=0xee, .x=0x28, .y=0x6a, .sp=0x04, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4c53, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4c53, .value=0x3d, .type=IO_READ},
        {.addr=0x4c54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x3fbb, .a=0x62, .x=0x0d, .y=0x54, .sp=0x6e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3fbb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3fbc, .a=0x62, .x=0x0e, .y=0x54, .sp=0x6e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3fbb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3fbb, .value=0x3d, .type=IO_READ},
        {.addr=0x3fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x134a, .a=0x2f, .x=0x30, .y=0xdb, .sp=0x67, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x134a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x134b, .a=0x2f, .x=0x31, .y=0xdb, .sp=0x67, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x134a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x134a, .value=0x3d, .type=IO_READ},
        {.addr=0x134b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x7a90, .a=0x3b, .x=0xdc, .y=0x9a, .sp=0x9e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7a90, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7a91, .a=0x3b, .x=0xdd, .y=0x9a, .sp=0x9e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7a90, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7a90, .value=0x3d, .type=IO_READ},
        {.addr=0x7a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x4581, .a=0xc6, .x=0xc9, .y=0x81, .sp=0x55, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4581, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4582, .a=0xc6, .x=0xca, .y=0x81, .sp=0x55, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4581, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4581, .value=0x3d, .type=IO_READ},
        {.addr=0x4582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x1a49, .a=0x2f, .x=0xa8, .y=0x64, .sp=0x93, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x1a49, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1a4a, .a=0x2f, .x=0xa9, .y=0x64, .sp=0x93, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1a49, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1a49, .value=0x3d, .type=IO_READ},
        {.addr=0x1a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039D) {
    const struct CPU_State initial_cpu = {.pc=0x6160, .a=0x20, .x=0xb5, .y=0xa7, .sp=0xe6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6160, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6161, .a=0x20, .x=0xb6, .y=0xa7, .sp=0xe6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6160, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6160, .value=0x3d, .type=IO_READ},
        {.addr=0x6161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x3835, .a=0x6b, .x=0x4b, .y=0x94, .sp=0x15, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3835, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3836, .a=0x6b, .x=0x4c, .y=0x94, .sp=0x15, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3835, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3835, .value=0x3d, .type=IO_READ},
        {.addr=0x3836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x54f0, .a=0x19, .x=0xce, .y=0x57, .sp=0x07, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x54f0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x54f1, .a=0x19, .x=0xcf, .y=0x57, .sp=0x07, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x54f0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x54f0, .value=0x3d, .type=IO_READ},
        {.addr=0x54f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x9f25, .a=0xb2, .x=0xd4, .y=0x1c, .sp=0x8c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9f25, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9f26, .a=0xb2, .x=0xd5, .y=0x1c, .sp=0x8c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9f25, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9f25, .value=0x3d, .type=IO_READ},
        {.addr=0x9f26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x29e1, .a=0x3e, .x=0x5e, .y=0x8f, .sp=0x9b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x29e1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x29e2, .a=0x3e, .x=0x5f, .y=0x8f, .sp=0x9b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x29e1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x29e1, .value=0x3d, .type=IO_READ},
        {.addr=0x29e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xaef5, .a=0xdc, .x=0x51, .y=0x6b, .sp=0x20, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xaef5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xaef6, .a=0xdc, .x=0x52, .y=0x6b, .sp=0x20, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xaef5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xaef5, .value=0x3d, .type=IO_READ},
        {.addr=0xaef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x5d3e, .a=0x9c, .x=0x1c, .y=0xd1, .sp=0xa4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d3e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5d3f, .a=0x9c, .x=0x1d, .y=0xd1, .sp=0xa4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5d3e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5d3e, .value=0x3d, .type=IO_READ},
        {.addr=0x5d3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xbe87, .a=0x8e, .x=0x2e, .y=0x89, .sp=0x3c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xbe87, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbe88, .a=0x8e, .x=0x2f, .y=0x89, .sp=0x3c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbe87, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbe87, .value=0x3d, .type=IO_READ},
        {.addr=0xbe88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xe36f, .a=0x02, .x=0x97, .y=0x21, .sp=0x3a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xe36f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe370, .a=0x02, .x=0x98, .y=0x21, .sp=0x3a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe36f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe36f, .value=0x3d, .type=IO_READ},
        {.addr=0xe370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xbf3e, .a=0x9a, .x=0xb6, .y=0xab, .sp=0x3b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xbf3e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbf3f, .a=0x9a, .x=0xb7, .y=0xab, .sp=0x3b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xbf3e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbf3e, .value=0x3d, .type=IO_READ},
        {.addr=0xbf3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x6d2a, .a=0x36, .x=0x0b, .y=0xef, .sp=0xe8, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6d2a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6d2b, .a=0x36, .x=0x0c, .y=0xef, .sp=0xe8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6d2a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6d2a, .value=0x3d, .type=IO_READ},
        {.addr=0x6d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd33c, .a=0xc6, .x=0x22, .y=0x54, .sp=0x26, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd33c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd33d, .a=0xc6, .x=0x23, .y=0x54, .sp=0x26, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd33c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd33c, .value=0x3d, .type=IO_READ},
        {.addr=0xd33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xfc6c, .a=0x41, .x=0x27, .y=0x2a, .sp=0xbc, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xfc6c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfc6d, .a=0x41, .x=0x28, .y=0x2a, .sp=0xbc, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfc6c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfc6c, .value=0x3d, .type=IO_READ},
        {.addr=0xfc6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x7bf1, .a=0x2e, .x=0xd8, .y=0x89, .sp=0x6e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7bf2, .a=0x2e, .x=0xd9, .y=0x89, .sp=0x6e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7bf1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7bf1, .value=0x3d, .type=IO_READ},
        {.addr=0x7bf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x6b62, .a=0xc3, .x=0x70, .y=0xbc, .sp=0x22, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6b62, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6b63, .a=0xc3, .x=0x71, .y=0xbc, .sp=0x22, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6b62, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6b62, .value=0x3d, .type=IO_READ},
        {.addr=0x6b63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7ce4, .a=0x39, .x=0x4c, .y=0x45, .sp=0x90, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce4, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7ce5, .a=0x39, .x=0x4d, .y=0x45, .sp=0x90, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7ce4, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7ce4, .value=0x3d, .type=IO_READ},
        {.addr=0x7ce5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xd18e, .a=0xe3, .x=0xd4, .y=0xb0, .sp=0xac, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd18e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd18f, .a=0xe3, .x=0xd5, .y=0xb0, .sp=0xac, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd18e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd18e, .value=0x3d, .type=IO_READ},
        {.addr=0xd18f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xa792, .a=0x20, .x=0xf8, .y=0x6b, .sp=0x77, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa792, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa793, .a=0x20, .x=0xf9, .y=0x6b, .sp=0x77, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa792, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa792, .value=0x3d, .type=IO_READ},
        {.addr=0xa793, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7efe, .a=0xc3, .x=0xc2, .y=0x19, .sp=0x69, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7efe, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7eff, .a=0xc3, .x=0xc3, .y=0x19, .sp=0x69, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7efe, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7efe, .value=0x3d, .type=IO_READ},
        {.addr=0x7eff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x41c9, .a=0xc8, .x=0x67, .y=0x50, .sp=0x66, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x41c9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x41ca, .a=0xc8, .x=0x68, .y=0x50, .sp=0x66, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x41c9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x41c9, .value=0x3d, .type=IO_READ},
        {.addr=0x41ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xa53c, .a=0x21, .x=0x88, .y=0xe8, .sp=0x1a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xa53c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa53d, .a=0x21, .x=0x89, .y=0xe8, .sp=0x1a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa53c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa53c, .value=0x3d, .type=IO_READ},
        {.addr=0xa53d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x1aec, .a=0xc8, .x=0x21, .y=0x10, .sp=0x85, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1aec, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1aed, .a=0xc8, .x=0x22, .y=0x10, .sp=0x85, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1aec, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1aec, .value=0x3d, .type=IO_READ},
        {.addr=0x1aed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x0149, .a=0xb8, .x=0xe3, .y=0xa6, .sp=0x41, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x014a, .a=0xb8, .x=0xe4, .y=0xa6, .sp=0x41, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0149, .value=0x3d, .type=IO_READ},
        {.addr=0x014a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x225a, .a=0xfc, .x=0x13, .y=0xde, .sp=0x52, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x225a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x225b, .a=0xfc, .x=0x14, .y=0xde, .sp=0x52, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x225a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x225a, .value=0x3d, .type=IO_READ},
        {.addr=0x225b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xcdfb, .a=0x66, .x=0x41, .y=0x25, .sp=0x57, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xcdfb, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcdfc, .a=0x66, .x=0x42, .y=0x25, .sp=0x57, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xcdfb, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcdfb, .value=0x3d, .type=IO_READ},
        {.addr=0xcdfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x168a, .a=0x8c, .x=0x08, .y=0x8c, .sp=0x6c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x168a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x168b, .a=0x8c, .x=0x09, .y=0x8c, .sp=0x6c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x168a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x168a, .value=0x3d, .type=IO_READ},
        {.addr=0x168b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x25ee, .a=0xdd, .x=0x1b, .y=0xbc, .sp=0xa6, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x25ee, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x25ef, .a=0xdd, .x=0x1c, .y=0xbc, .sp=0xa6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x25ee, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x25ee, .value=0x3d, .type=IO_READ},
        {.addr=0x25ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x4a59, .a=0xef, .x=0xa0, .y=0x3f, .sp=0x0e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4a59, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4a5a, .a=0xef, .x=0xa1, .y=0x3f, .sp=0x0e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4a59, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4a59, .value=0x3d, .type=IO_READ},
        {.addr=0x4a5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xbeed, .a=0xc2, .x=0x84, .y=0xab, .sp=0x89, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbeed, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbeee, .a=0xc2, .x=0x85, .y=0xab, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbeed, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbeed, .value=0x3d, .type=IO_READ},
        {.addr=0xbeee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xfc28, .a=0xbb, .x=0xcc, .y=0x81, .sp=0xca, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xfc28, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfc29, .a=0xbb, .x=0xcd, .y=0x81, .sp=0xca, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfc28, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfc28, .value=0x3d, .type=IO_READ},
        {.addr=0xfc29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x8fb0, .a=0xb0, .x=0x3c, .y=0x34, .sp=0x9c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8fb1, .a=0xb0, .x=0x3d, .y=0x34, .sp=0x9c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8fb0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8fb0, .value=0x3d, .type=IO_READ},
        {.addr=0x8fb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x4857, .a=0x5a, .x=0xeb, .y=0xf4, .sp=0xda, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x4857, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4858, .a=0x5a, .x=0xec, .y=0xf4, .sp=0xda, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4857, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4857, .value=0x3d, .type=IO_READ},
        {.addr=0x4858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x3cc8, .a=0xf7, .x=0x1d, .y=0x40, .sp=0x7b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3cc9, .a=0xf7, .x=0x1e, .y=0x40, .sp=0x7b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3cc8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3cc8, .value=0x3d, .type=IO_READ},
        {.addr=0x3cc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xcc10, .a=0x3b, .x=0x59, .y=0x25, .sp=0x64, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcc10, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcc11, .a=0x3b, .x=0x5a, .y=0x25, .sp=0x64, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcc10, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcc10, .value=0x3d, .type=IO_READ},
        {.addr=0xcc11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xee36, .a=0x22, .x=0x6b, .y=0x17, .sp=0x91, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xee36, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xee37, .a=0x22, .x=0x6c, .y=0x17, .sp=0x91, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xee36, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xee36, .value=0x3d, .type=IO_READ},
        {.addr=0xee37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xcfb6, .a=0x5e, .x=0x8b, .y=0xa0, .sp=0xde, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb6, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcfb7, .a=0x5e, .x=0x8c, .y=0xa0, .sp=0xde, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcfb6, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcfb6, .value=0x3d, .type=IO_READ},
        {.addr=0xcfb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xfb12, .a=0xba, .x=0xea, .y=0x31, .sp=0xb1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xfb12, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfb13, .a=0xba, .x=0xeb, .y=0x31, .sp=0xb1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfb12, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfb12, .value=0x3d, .type=IO_READ},
        {.addr=0xfb13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x611c, .a=0xf8, .x=0xe7, .y=0x18, .sp=0x43, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x611c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x611d, .a=0xf8, .x=0xe8, .y=0x18, .sp=0x43, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x611c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x611c, .value=0x3d, .type=IO_READ},
        {.addr=0x611d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xcc03, .a=0xd2, .x=0xe3, .y=0x87, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xcc03, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xcc04, .a=0xd2, .x=0xe4, .y=0x87, .sp=0xca, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcc03, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xcc03, .value=0x3d, .type=IO_READ},
        {.addr=0xcc04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x6a02, .a=0x82, .x=0x87, .y=0x7d, .sp=0x5c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6a02, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6a03, .a=0x82, .x=0x88, .y=0x7d, .sp=0x5c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6a02, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6a02, .value=0x3d, .type=IO_READ},
        {.addr=0x6a03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xa4f7, .a=0x34, .x=0x6a, .y=0xe1, .sp=0xb7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f7, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa4f8, .a=0x34, .x=0x6b, .y=0xe1, .sp=0xb7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa4f7, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa4f7, .value=0x3d, .type=IO_READ},
        {.addr=0xa4f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x3931, .a=0x00, .x=0xa1, .y=0xfc, .sp=0xc9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3931, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3932, .a=0x00, .x=0xa2, .y=0xfc, .sp=0xc9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3931, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3931, .value=0x3d, .type=IO_READ},
        {.addr=0x3932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xaf52, .a=0x8f, .x=0xfb, .y=0x37, .sp=0x05, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xaf52, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xaf53, .a=0x8f, .x=0xfc, .y=0x37, .sp=0x05, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xaf52, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xaf52, .value=0x3d, .type=IO_READ},
        {.addr=0xaf53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x6ec9, .a=0xc5, .x=0xf8, .y=0x82, .sp=0x31, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6eca, .a=0xc5, .x=0xf9, .y=0x82, .sp=0x31, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6ec9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6ec9, .value=0x3d, .type=IO_READ},
        {.addr=0x6eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xa5ce, .a=0x7f, .x=0x53, .y=0x8f, .sp=0xb8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ce, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa5cf, .a=0x7f, .x=0x54, .y=0x8f, .sp=0xb8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa5ce, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa5ce, .value=0x3d, .type=IO_READ},
        {.addr=0xa5cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x672a, .a=0x94, .x=0xd9, .y=0x34, .sp=0xff, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x672a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x672b, .a=0x94, .x=0xda, .y=0x34, .sp=0xff, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x672a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x672a, .value=0x3d, .type=IO_READ},
        {.addr=0x672b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x84ed, .a=0x08, .x=0x66, .y=0x66, .sp=0x16, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x84ed, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x84ee, .a=0x08, .x=0x67, .y=0x66, .sp=0x16, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x84ed, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x84ed, .value=0x3d, .type=IO_READ},
        {.addr=0x84ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xb626, .a=0x55, .x=0xca, .y=0x4d, .sp=0x18, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb626, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb627, .a=0x55, .x=0xcb, .y=0x4d, .sp=0x18, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb626, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb626, .value=0x3d, .type=IO_READ},
        {.addr=0xb627, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xbf41, .a=0x31, .x=0x9a, .y=0xc9, .sp=0xd7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbf41, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbf42, .a=0x31, .x=0x9b, .y=0xc9, .sp=0xd7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbf41, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbf41, .value=0x3d, .type=IO_READ},
        {.addr=0xbf42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x24cd, .a=0xc8, .x=0xed, .y=0x61, .sp=0x13, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x24cd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x24ce, .a=0xc8, .x=0xee, .y=0x61, .sp=0x13, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x24cd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x24cd, .value=0x3d, .type=IO_READ},
        {.addr=0x24ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xf372, .a=0xd1, .x=0x3f, .y=0x54, .sp=0xc0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf372, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf373, .a=0xd1, .x=0x40, .y=0x54, .sp=0xc0, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf372, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf372, .value=0x3d, .type=IO_READ},
        {.addr=0xf373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xa510, .a=0x0f, .x=0x70, .y=0xc2, .sp=0xa1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa510, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa511, .a=0x0f, .x=0x71, .y=0xc2, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa510, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa510, .value=0x3d, .type=IO_READ},
        {.addr=0xa511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf48c, .a=0x7a, .x=0xf3, .y=0xce, .sp=0xa1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf48c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf48d, .a=0x7a, .x=0xf4, .y=0xce, .sp=0xa1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf48c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf48c, .value=0x3d, .type=IO_READ},
        {.addr=0xf48d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xca2c, .a=0xdb, .x=0x5f, .y=0x35, .sp=0xce, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xca2c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xca2d, .a=0xdb, .x=0x60, .y=0x35, .sp=0xce, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xca2c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xca2c, .value=0x3d, .type=IO_READ},
        {.addr=0xca2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xfd1a, .a=0xac, .x=0x41, .y=0x78, .sp=0x8a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xfd1b, .a=0xac, .x=0x42, .y=0x78, .sp=0x8a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xfd1a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xfd1a, .value=0x3d, .type=IO_READ},
        {.addr=0xfd1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x22dc, .a=0xa2, .x=0x95, .y=0x78, .sp=0xdf, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x22dc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x22dd, .a=0xa2, .x=0x96, .y=0x78, .sp=0xdf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x22dc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x22dc, .value=0x3d, .type=IO_READ},
        {.addr=0x22dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x2fc9, .a=0x45, .x=0x16, .y=0x22, .sp=0x82, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2fca, .a=0x45, .x=0x17, .y=0x22, .sp=0x82, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2fc9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2fc9, .value=0x3d, .type=IO_READ},
        {.addr=0x2fca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x4abf, .a=0x3e, .x=0x92, .y=0xab, .sp=0x8d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4abf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4ac0, .a=0x3e, .x=0x93, .y=0xab, .sp=0x8d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4abf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4abf, .value=0x3d, .type=IO_READ},
        {.addr=0x4ac0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x745b, .a=0x81, .x=0xe2, .y=0xa0, .sp=0x10, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x745b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x745c, .a=0x81, .x=0xe3, .y=0xa0, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x745b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x745b, .value=0x3d, .type=IO_READ},
        {.addr=0x745c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x0037, .a=0xfb, .x=0x21, .y=0x0b, .sp=0x21, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0038, .a=0xfb, .x=0x22, .y=0x0b, .sp=0x21, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0037, .value=0x3d, .type=IO_READ},
        {.addr=0x0038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x2c37, .a=0x48, .x=0xf1, .y=0xd6, .sp=0x8d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x2c37, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2c38, .a=0x48, .x=0xf2, .y=0xd6, .sp=0x8d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2c37, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2c37, .value=0x3d, .type=IO_READ},
        {.addr=0x2c38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd2d3, .a=0x58, .x=0x2e, .y=0x64, .sp=0x81, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd2d4, .a=0x58, .x=0x2f, .y=0x64, .sp=0x81, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd2d3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd2d3, .value=0x3d, .type=IO_READ},
        {.addr=0xd2d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x50cd, .a=0xb0, .x=0xa3, .y=0x92, .sp=0x3c, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x50cd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x50ce, .a=0xb0, .x=0xa4, .y=0x92, .sp=0x3c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x50cd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x50cd, .value=0x3d, .type=IO_READ},
        {.addr=0x50ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x5910, .a=0x0c, .x=0x48, .y=0x3e, .sp=0xe8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x5910, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5911, .a=0x0c, .x=0x49, .y=0x3e, .sp=0xe8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5910, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5910, .value=0x3d, .type=IO_READ},
        {.addr=0x5911, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xa53a, .a=0xd9, .x=0xf5, .y=0xb9, .sp=0x4b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa53a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa53b, .a=0xd9, .x=0xf6, .y=0xb9, .sp=0x4b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa53a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa53a, .value=0x3d, .type=IO_READ},
        {.addr=0xa53b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x2993, .a=0x2e, .x=0x62, .y=0xd1, .sp=0x97, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x2993, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2994, .a=0x2e, .x=0x63, .y=0xd1, .sp=0x97, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2993, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2993, .value=0x3d, .type=IO_READ},
        {.addr=0x2994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x420f, .a=0x41, .x=0xc5, .y=0x44, .sp=0x18, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x420f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4210, .a=0x41, .x=0xc6, .y=0x44, .sp=0x18, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x420f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x420f, .value=0x3d, .type=IO_READ},
        {.addr=0x4210, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xad85, .a=0x6f, .x=0xab, .y=0xcc, .sp=0xcc, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xad85, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xad86, .a=0x6f, .x=0xac, .y=0xcc, .sp=0xcc, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xad85, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xad85, .value=0x3d, .type=IO_READ},
        {.addr=0xad86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x57e2, .a=0x63, .x=0x17, .y=0x97, .sp=0xc8, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x57e2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x57e3, .a=0x63, .x=0x18, .y=0x97, .sp=0xc8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x57e2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x57e2, .value=0x3d, .type=IO_READ},
        {.addr=0x57e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x35ba, .a=0xc9, .x=0xa3, .y=0xfc, .sp=0x7b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x35ba, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x35bb, .a=0xc9, .x=0xa4, .y=0xfc, .sp=0x7b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x35ba, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x35ba, .value=0x3d, .type=IO_READ},
        {.addr=0x35bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xc11b, .a=0xdb, .x=0x46, .y=0x5d, .sp=0x9e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc11b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xc11c, .a=0xdb, .x=0x47, .y=0x5d, .sp=0x9e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc11b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xc11b, .value=0x3d, .type=IO_READ},
        {.addr=0xc11c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x7b51, .a=0x7f, .x=0x91, .y=0xd9, .sp=0x25, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7b51, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7b52, .a=0x7f, .x=0x92, .y=0xd9, .sp=0x25, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7b51, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7b51, .value=0x3d, .type=IO_READ},
        {.addr=0x7b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0640, .a=0x97, .x=0x7a, .y=0xc9, .sp=0x11, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0640, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0641, .a=0x97, .x=0x7b, .y=0xc9, .sp=0x11, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0640, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0640, .value=0x3d, .type=IO_READ},
        {.addr=0x0641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xbbd3, .a=0xc6, .x=0x43, .y=0x66, .sp=0x65, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbbd4, .a=0xc6, .x=0x44, .y=0x66, .sp=0x65, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbbd3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbbd3, .value=0x3d, .type=IO_READ},
        {.addr=0xbbd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3D, _3D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x7c39, .a=0xd6, .x=0xc0, .y=0x60, .sp=0x0c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c39, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7c3a, .a=0xd6, .x=0xc1, .y=0x60, .sp=0x0c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7c39, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7c39, .value=0x3d, .type=IO_READ},
        {.addr=0x7c3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
