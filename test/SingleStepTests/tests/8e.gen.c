#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_8E, _8E_0000) {
    const struct CPU_State initial_cpu = {.pc=0x43b6, .a=0xc7, .x=0x58, .y=0x81, .sp=0x51, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x28}, {.addr=0x43b6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x43b7, .a=0xc7, .x=0x58, .y=0x81, .sp=0x52, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x28}, {.addr=0x43b6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x43b6, .value=0x8e, .type=IO_READ},
        {.addr=0x43b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0001) {
    const struct CPU_State initial_cpu = {.pc=0xb5d0, .a=0x9a, .x=0xc5, .y=0x28, .sp=0xbc, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x0f}, {.addr=0xb5d0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb5d1, .a=0x9a, .x=0xc5, .y=0x28, .sp=0xbd, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x0f}, {.addr=0xb5d0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb5d0, .value=0x8e, .type=IO_READ},
        {.addr=0xb5d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2956, .a=0x84, .x=0x7d, .y=0x8b, .sp=0xcb, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x62}, {.addr=0x2956, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2957, .a=0x84, .x=0x7d, .y=0x8b, .sp=0xcc, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x62}, {.addr=0x2956, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2956, .value=0x8e, .type=IO_READ},
        {.addr=0x2957, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0003) {
    const struct CPU_State initial_cpu = {.pc=0x2bf9, .a=0x7c, .x=0xe1, .y=0xaf, .sp=0x13, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xf9}, {.addr=0x2bf9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bfa, .a=0x7c, .x=0xe1, .y=0xaf, .sp=0x14, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xf9}, {.addr=0x2bf9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bf9, .value=0x8e, .type=IO_READ},
        {.addr=0x2bfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0004) {
    const struct CPU_State initial_cpu = {.pc=0xfce0, .a=0xdf, .x=0x64, .y=0xfd, .sp=0x37, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x5a}, {.addr=0xfce0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfce1, .a=0xdf, .x=0x64, .y=0xfd, .sp=0x38, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x5a}, {.addr=0xfce0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfce0, .value=0x8e, .type=IO_READ},
        {.addr=0xfce1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0005) {
    const struct CPU_State initial_cpu = {.pc=0xf697, .a=0xe2, .x=0xc9, .y=0x80, .sp=0x26, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x73}, {.addr=0xf697, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf698, .a=0xe2, .x=0xc9, .y=0x80, .sp=0x27, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x73}, {.addr=0xf697, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf697, .value=0x8e, .type=IO_READ},
        {.addr=0xf698, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb063, .a=0x04, .x=0x9b, .y=0x5f, .sp=0x72, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x5b}, {.addr=0xb063, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb064, .a=0x04, .x=0x9b, .y=0x5f, .sp=0x73, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x5b}, {.addr=0xb063, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb063, .value=0x8e, .type=IO_READ},
        {.addr=0xb064, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0007) {
    const struct CPU_State initial_cpu = {.pc=0x0685, .a=0xd2, .x=0x51, .y=0x43, .sp=0x8a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x56}, {.addr=0x0685, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0686, .a=0xd2, .x=0x51, .y=0x43, .sp=0x8b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x56}, {.addr=0x0685, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0685, .value=0x8e, .type=IO_READ},
        {.addr=0x0686, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0008) {
    const struct CPU_State initial_cpu = {.pc=0x58c3, .a=0xf9, .x=0x4b, .y=0xc8, .sp=0x59, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x8d}, {.addr=0x58c3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x58c4, .a=0xf9, .x=0x4b, .y=0xc8, .sp=0x5a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x8d}, {.addr=0x58c3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x58c3, .value=0x8e, .type=IO_READ},
        {.addr=0x58c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0009) {
    const struct CPU_State initial_cpu = {.pc=0x3d8b, .a=0x0a, .x=0x45, .y=0x85, .sp=0xcb, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x4e}, {.addr=0x3d8b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3d8c, .a=0x0a, .x=0x45, .y=0x85, .sp=0xcc, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x4e}, {.addr=0x3d8b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3d8b, .value=0x8e, .type=IO_READ},
        {.addr=0x3d8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000A) {
    const struct CPU_State initial_cpu = {.pc=0xc8c0, .a=0xb9, .x=0xb8, .y=0x78, .sp=0x9a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x36}, {.addr=0xc8c0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc8c1, .a=0xb9, .x=0xb8, .y=0x78, .sp=0x9b, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x36}, {.addr=0xc8c0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc8c0, .value=0x8e, .type=IO_READ},
        {.addr=0xc8c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000B) {
    const struct CPU_State initial_cpu = {.pc=0x3057, .a=0xa1, .x=0x84, .y=0x7a, .sp=0xe3, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xcc}, {.addr=0x3057, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3058, .a=0xa1, .x=0x84, .y=0x7a, .sp=0xe4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xcc}, {.addr=0x3057, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3057, .value=0x8e, .type=IO_READ},
        {.addr=0x3058, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000C) {
    const struct CPU_State initial_cpu = {.pc=0xfbe0, .a=0x9c, .x=0x60, .y=0x91, .sp=0x7a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xb3}, {.addr=0xfbe0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfbe1, .a=0x9c, .x=0x60, .y=0x91, .sp=0x7b, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xb3}, {.addr=0xfbe0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfbe0, .value=0x8e, .type=IO_READ},
        {.addr=0xfbe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa07b, .a=0xf3, .x=0x23, .y=0x6f, .sp=0x46, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x25}, {.addr=0xa07b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa07c, .a=0xf3, .x=0x23, .y=0x6f, .sp=0x47, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x25}, {.addr=0xa07b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa07b, .value=0x8e, .type=IO_READ},
        {.addr=0xa07c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000E) {
    const struct CPU_State initial_cpu = {.pc=0xddf5, .a=0xac, .x=0xbe, .y=0x88, .sp=0xf7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xfa}, {.addr=0xddf5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xddf6, .a=0xac, .x=0xbe, .y=0x88, .sp=0xf8, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xfa}, {.addr=0xddf5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xddf5, .value=0x8e, .type=IO_READ},
        {.addr=0xddf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_000F) {
    const struct CPU_State initial_cpu = {.pc=0x5025, .a=0xec, .x=0x19, .y=0x16, .sp=0x80, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xb0}, {.addr=0x5025, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5026, .a=0xec, .x=0x19, .y=0x16, .sp=0x81, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xb0}, {.addr=0x5025, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5025, .value=0x8e, .type=IO_READ},
        {.addr=0x5026, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0010) {
    const struct CPU_State initial_cpu = {.pc=0x606b, .a=0x29, .x=0xae, .y=0x0a, .sp=0x31, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xc6}, {.addr=0x606b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x606c, .a=0x29, .x=0xae, .y=0x0a, .sp=0x32, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xc6}, {.addr=0x606b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x606b, .value=0x8e, .type=IO_READ},
        {.addr=0x606c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0011) {
    const struct CPU_State initial_cpu = {.pc=0xfd30, .a=0xca, .x=0xf1, .y=0xaa, .sp=0x47, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x4c}, {.addr=0xfd30, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfd31, .a=0xca, .x=0xf1, .y=0xaa, .sp=0x48, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x4c}, {.addr=0xfd30, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfd30, .value=0x8e, .type=IO_READ},
        {.addr=0xfd31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0012) {
    const struct CPU_State initial_cpu = {.pc=0x6c32, .a=0x49, .x=0xd5, .y=0x30, .sp=0x55, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x82}, {.addr=0x6c32, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6c33, .a=0x49, .x=0xd5, .y=0x30, .sp=0x56, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x82}, {.addr=0x6c32, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6c32, .value=0x8e, .type=IO_READ},
        {.addr=0x6c33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0013) {
    const struct CPU_State initial_cpu = {.pc=0x1f36, .a=0x08, .x=0x6b, .y=0x25, .sp=0x75, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xea}, {.addr=0x1f36, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1f37, .a=0x08, .x=0x6b, .y=0x25, .sp=0x76, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xea}, {.addr=0x1f36, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1f36, .value=0x8e, .type=IO_READ},
        {.addr=0x1f37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0014) {
    const struct CPU_State initial_cpu = {.pc=0x9033, .a=0x6f, .x=0x7c, .y=0x02, .sp=0x55, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x9d}, {.addr=0x9033, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9034, .a=0x6f, .x=0x7c, .y=0x02, .sp=0x56, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x9d}, {.addr=0x9033, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9033, .value=0x8e, .type=IO_READ},
        {.addr=0x9034, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0015) {
    const struct CPU_State initial_cpu = {.pc=0x61f3, .a=0x39, .x=0x02, .y=0x50, .sp=0xe9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x1e}, {.addr=0x61f3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x61f4, .a=0x39, .x=0x02, .y=0x50, .sp=0xea, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x1e}, {.addr=0x61f3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x61f3, .value=0x8e, .type=IO_READ},
        {.addr=0x61f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0016) {
    const struct CPU_State initial_cpu = {.pc=0x03af, .a=0xb7, .x=0xf7, .y=0x27, .sp=0x20, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x65}, {.addr=0x03af, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x03b0, .a=0xb7, .x=0xf7, .y=0x27, .sp=0x21, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x65}, {.addr=0x03af, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x03af, .value=0x8e, .type=IO_READ},
        {.addr=0x03b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0017) {
    const struct CPU_State initial_cpu = {.pc=0x94dd, .a=0x39, .x=0xe4, .y=0x7a, .sp=0x61, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xca}, {.addr=0x94dd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x94de, .a=0x39, .x=0xe4, .y=0x7a, .sp=0x62, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xca}, {.addr=0x94dd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x94dd, .value=0x8e, .type=IO_READ},
        {.addr=0x94de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0018) {
    const struct CPU_State initial_cpu = {.pc=0x2747, .a=0x6e, .x=0x4e, .y=0x14, .sp=0xb6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x33}, {.addr=0x2747, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2748, .a=0x6e, .x=0x4e, .y=0x14, .sp=0xb7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x33}, {.addr=0x2747, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2747, .value=0x8e, .type=IO_READ},
        {.addr=0x2748, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe139, .a=0x85, .x=0x7b, .y=0x0f, .sp=0xbe, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x71}, {.addr=0xe139, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe13a, .a=0x85, .x=0x7b, .y=0x0f, .sp=0xbf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x71}, {.addr=0xe139, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe139, .value=0x8e, .type=IO_READ},
        {.addr=0xe13a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001A) {
    const struct CPU_State initial_cpu = {.pc=0x8f7a, .a=0x12, .x=0xae, .y=0x87, .sp=0xb3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x40}, {.addr=0x8f7a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8f7b, .a=0x12, .x=0xae, .y=0x87, .sp=0xb4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x40}, {.addr=0x8f7a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8f7a, .value=0x8e, .type=IO_READ},
        {.addr=0x8f7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001B) {
    const struct CPU_State initial_cpu = {.pc=0x7682, .a=0x2a, .x=0xfa, .y=0x89, .sp=0xb3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xce}, {.addr=0x7682, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7683, .a=0x2a, .x=0xfa, .y=0x89, .sp=0xb4, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xce}, {.addr=0x7682, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7682, .value=0x8e, .type=IO_READ},
        {.addr=0x7683, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001C) {
    const struct CPU_State initial_cpu = {.pc=0xdb51, .a=0x1d, .x=0x6e, .y=0x76, .sp=0x8d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xe0}, {.addr=0xdb51, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdb52, .a=0x1d, .x=0x6e, .y=0x76, .sp=0x8e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xe0}, {.addr=0xdb51, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdb51, .value=0x8e, .type=IO_READ},
        {.addr=0xdb52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001D) {
    const struct CPU_State initial_cpu = {.pc=0xeadd, .a=0x69, .x=0xee, .y=0x22, .sp=0x77, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x0d}, {.addr=0xeadd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeade, .a=0x69, .x=0xee, .y=0x22, .sp=0x78, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x0d}, {.addr=0xeadd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeadd, .value=0x8e, .type=IO_READ},
        {.addr=0xeade, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001E) {
    const struct CPU_State initial_cpu = {.pc=0x8e6c, .a=0xf6, .x=0x90, .y=0x77, .sp=0xd5, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xf2}, {.addr=0x8e6c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8e6d, .a=0xf6, .x=0x90, .y=0x77, .sp=0xd6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xf2}, {.addr=0x8e6c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8e6c, .value=0x8e, .type=IO_READ},
        {.addr=0x8e6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_001F) {
    const struct CPU_State initial_cpu = {.pc=0x9cd6, .a=0x4e, .x=0xfa, .y=0x7e, .sp=0x20, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xfa}, {.addr=0x9cd6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9cd7, .a=0x4e, .x=0xfa, .y=0x7e, .sp=0x21, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xfa}, {.addr=0x9cd6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9cd6, .value=0x8e, .type=IO_READ},
        {.addr=0x9cd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0020) {
    const struct CPU_State initial_cpu = {.pc=0x995c, .a=0x27, .x=0xb4, .y=0x59, .sp=0x85, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xd1}, {.addr=0x995c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x995d, .a=0x27, .x=0xb4, .y=0x59, .sp=0x86, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xd1}, {.addr=0x995c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x995c, .value=0x8e, .type=IO_READ},
        {.addr=0x995d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0021) {
    const struct CPU_State initial_cpu = {.pc=0xcf9b, .a=0x9c, .x=0x2a, .y=0xc3, .sp=0xb3, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xd7}, {.addr=0xcf9b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcf9c, .a=0x9c, .x=0x2a, .y=0xc3, .sp=0xb4, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xd7}, {.addr=0xcf9b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcf9b, .value=0x8e, .type=IO_READ},
        {.addr=0xcf9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0022) {
    const struct CPU_State initial_cpu = {.pc=0xb330, .a=0xd0, .x=0x40, .y=0xb5, .sp=0x8f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x0a}, {.addr=0xb330, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb331, .a=0xd0, .x=0x40, .y=0xb5, .sp=0x90, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x0a}, {.addr=0xb330, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb330, .value=0x8e, .type=IO_READ},
        {.addr=0xb331, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0023) {
    const struct CPU_State initial_cpu = {.pc=0x4014, .a=0xc8, .x=0x29, .y=0x27, .sp=0xe2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x47}, {.addr=0x4014, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4015, .a=0xc8, .x=0x29, .y=0x27, .sp=0xe3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x47}, {.addr=0x4014, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4014, .value=0x8e, .type=IO_READ},
        {.addr=0x4015, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0024) {
    const struct CPU_State initial_cpu = {.pc=0x6791, .a=0xb2, .x=0x2f, .y=0xf6, .sp=0x09, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xfd}, {.addr=0x6791, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6792, .a=0xb2, .x=0x2f, .y=0xf6, .sp=0x0a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xfd}, {.addr=0x6791, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6791, .value=0x8e, .type=IO_READ},
        {.addr=0x6792, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0025) {
    const struct CPU_State initial_cpu = {.pc=0x2234, .a=0xdf, .x=0xe6, .y=0xfc, .sp=0x8e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xb3}, {.addr=0x2234, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2235, .a=0xdf, .x=0xe6, .y=0xfc, .sp=0x8f, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xb3}, {.addr=0x2234, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2234, .value=0x8e, .type=IO_READ},
        {.addr=0x2235, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0026) {
    const struct CPU_State initial_cpu = {.pc=0x380a, .a=0x31, .x=0x58, .y=0x38, .sp=0x80, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xc5}, {.addr=0x380a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x380b, .a=0x31, .x=0x58, .y=0x38, .sp=0x81, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc5}, {.addr=0x380a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x380a, .value=0x8e, .type=IO_READ},
        {.addr=0x380b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0027) {
    const struct CPU_State initial_cpu = {.pc=0x49bb, .a=0x2c, .x=0xe6, .y=0x5b, .sp=0xb0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x27}, {.addr=0x49bb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x49bc, .a=0x2c, .x=0xe6, .y=0x5b, .sp=0xb1, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x27}, {.addr=0x49bb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x49bb, .value=0x8e, .type=IO_READ},
        {.addr=0x49bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0028) {
    const struct CPU_State initial_cpu = {.pc=0x9484, .a=0x83, .x=0xe0, .y=0x9b, .sp=0xf7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x62}, {.addr=0x9484, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9485, .a=0x83, .x=0xe0, .y=0x9b, .sp=0xf8, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x62}, {.addr=0x9484, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9484, .value=0x8e, .type=IO_READ},
        {.addr=0x9485, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0029) {
    const struct CPU_State initial_cpu = {.pc=0xa83e, .a=0xed, .x=0x2d, .y=0xc6, .sp=0xa4, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xe7}, {.addr=0xa83e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa83f, .a=0xed, .x=0x2d, .y=0xc6, .sp=0xa5, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xe7}, {.addr=0xa83e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa83e, .value=0x8e, .type=IO_READ},
        {.addr=0xa83f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002A) {
    const struct CPU_State initial_cpu = {.pc=0x2a7b, .a=0xdd, .x=0x66, .y=0x12, .sp=0xff, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x0b}, {.addr=0x2a7b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2a7c, .a=0xdd, .x=0x66, .y=0x12, .sp=0x00, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x0b}, {.addr=0x2a7b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2a7b, .value=0x8e, .type=IO_READ},
        {.addr=0x2a7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002B) {
    const struct CPU_State initial_cpu = {.pc=0x20f1, .a=0x72, .x=0x96, .y=0x09, .sp=0xb2, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x23}, {.addr=0x20f1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x20f2, .a=0x72, .x=0x96, .y=0x09, .sp=0xb3, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x23}, {.addr=0x20f1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x20f1, .value=0x8e, .type=IO_READ},
        {.addr=0x20f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002C) {
    const struct CPU_State initial_cpu = {.pc=0xdf7e, .a=0xc3, .x=0x46, .y=0x34, .sp=0x2c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x5c}, {.addr=0xdf7e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdf7f, .a=0xc3, .x=0x46, .y=0x34, .sp=0x2d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x5c}, {.addr=0xdf7e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdf7e, .value=0x8e, .type=IO_READ},
        {.addr=0xdf7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002D) {
    const struct CPU_State initial_cpu = {.pc=0xf0bd, .a=0x87, .x=0x55, .y=0xe9, .sp=0x7d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x60}, {.addr=0xf0bd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf0be, .a=0x87, .x=0x55, .y=0xe9, .sp=0x7e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x60}, {.addr=0xf0bd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf0bd, .value=0x8e, .type=IO_READ},
        {.addr=0xf0be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002E) {
    const struct CPU_State initial_cpu = {.pc=0x10e4, .a=0xc2, .x=0x01, .y=0xb7, .sp=0x9d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x3e}, {.addr=0x10e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x10e5, .a=0xc2, .x=0x01, .y=0xb7, .sp=0x9e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x3e}, {.addr=0x10e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x10e4, .value=0x8e, .type=IO_READ},
        {.addr=0x10e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_002F) {
    const struct CPU_State initial_cpu = {.pc=0x44c0, .a=0x16, .x=0xa9, .y=0x9e, .sp=0x33, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x56}, {.addr=0x44c0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x44c1, .a=0x16, .x=0xa9, .y=0x9e, .sp=0x34, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x56}, {.addr=0x44c0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x44c0, .value=0x8e, .type=IO_READ},
        {.addr=0x44c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1d45, .a=0x8a, .x=0x98, .y=0x7d, .sp=0x01, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x74}, {.addr=0x1d45, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1d46, .a=0x8a, .x=0x98, .y=0x7d, .sp=0x02, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x74}, {.addr=0x1d45, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1d45, .value=0x8e, .type=IO_READ},
        {.addr=0x1d46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0031) {
    const struct CPU_State initial_cpu = {.pc=0xade0, .a=0x94, .x=0x87, .y=0xa6, .sp=0x19, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x0a}, {.addr=0xade0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xade1, .a=0x94, .x=0x87, .y=0xa6, .sp=0x1a, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x0a}, {.addr=0xade0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xade0, .value=0x8e, .type=IO_READ},
        {.addr=0xade1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0032) {
    const struct CPU_State initial_cpu = {.pc=0xa616, .a=0x4c, .x=0xdf, .y=0x97, .sp=0x4f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xb7}, {.addr=0xa616, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa617, .a=0x4c, .x=0xdf, .y=0x97, .sp=0x50, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xb7}, {.addr=0xa616, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa616, .value=0x8e, .type=IO_READ},
        {.addr=0xa617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0033) {
    const struct CPU_State initial_cpu = {.pc=0xbcca, .a=0x9a, .x=0x1b, .y=0x23, .sp=0xa9, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x04}, {.addr=0xbcca, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbccb, .a=0x9a, .x=0x1b, .y=0x23, .sp=0xaa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x04}, {.addr=0xbcca, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbcca, .value=0x8e, .type=IO_READ},
        {.addr=0xbccb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0034) {
    const struct CPU_State initial_cpu = {.pc=0x8649, .a=0x2b, .x=0x39, .y=0xe0, .sp=0xc5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x38}, {.addr=0x8649, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x864a, .a=0x2b, .x=0x39, .y=0xe0, .sp=0xc6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x38}, {.addr=0x8649, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8649, .value=0x8e, .type=IO_READ},
        {.addr=0x864a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0035) {
    const struct CPU_State initial_cpu = {.pc=0x5a1f, .a=0xf8, .x=0x12, .y=0x1e, .sp=0xe9, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xbd}, {.addr=0x5a1f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5a20, .a=0xf8, .x=0x12, .y=0x1e, .sp=0xea, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xbd}, {.addr=0x5a1f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5a1f, .value=0x8e, .type=IO_READ},
        {.addr=0x5a20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0036) {
    const struct CPU_State initial_cpu = {.pc=0x59ed, .a=0x08, .x=0x3c, .y=0x5d, .sp=0xce, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xb2}, {.addr=0x59ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x59ee, .a=0x08, .x=0x3c, .y=0x5d, .sp=0xcf, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xb2}, {.addr=0x59ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x59ed, .value=0x8e, .type=IO_READ},
        {.addr=0x59ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0037) {
    const struct CPU_State initial_cpu = {.pc=0xcdb9, .a=0xb8, .x=0xc2, .y=0xfb, .sp=0x54, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x83}, {.addr=0xcdb9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcdba, .a=0xb8, .x=0xc2, .y=0xfb, .sp=0x55, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x83}, {.addr=0xcdb9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcdb9, .value=0x8e, .type=IO_READ},
        {.addr=0xcdba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0038) {
    const struct CPU_State initial_cpu = {.pc=0x0fb3, .a=0x7e, .x=0x28, .y=0x66, .sp=0x85, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x6e}, {.addr=0x0fb3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0fb4, .a=0x7e, .x=0x28, .y=0x66, .sp=0x86, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x6e}, {.addr=0x0fb3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0fb3, .value=0x8e, .type=IO_READ},
        {.addr=0x0fb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0039) {
    const struct CPU_State initial_cpu = {.pc=0xa844, .a=0xcc, .x=0x53, .y=0x93, .sp=0xf8, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x4e}, {.addr=0xa844, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa845, .a=0xcc, .x=0x53, .y=0x93, .sp=0xf9, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x4e}, {.addr=0xa844, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa844, .value=0x8e, .type=IO_READ},
        {.addr=0xa845, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003A) {
    const struct CPU_State initial_cpu = {.pc=0x4388, .a=0x52, .x=0x62, .y=0xb5, .sp=0x81, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xcb}, {.addr=0x4388, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4389, .a=0x52, .x=0x62, .y=0xb5, .sp=0x82, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xcb}, {.addr=0x4388, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4388, .value=0x8e, .type=IO_READ},
        {.addr=0x4389, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003B) {
    const struct CPU_State initial_cpu = {.pc=0x5ff3, .a=0xf7, .x=0x12, .y=0x8f, .sp=0xcf, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xbc}, {.addr=0x5ff3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5ff4, .a=0xf7, .x=0x12, .y=0x8f, .sp=0xd0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xbc}, {.addr=0x5ff3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5ff3, .value=0x8e, .type=IO_READ},
        {.addr=0x5ff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003C) {
    const struct CPU_State initial_cpu = {.pc=0x7648, .a=0x48, .x=0x49, .y=0x6e, .sp=0xd3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x4b}, {.addr=0x7648, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7649, .a=0x48, .x=0x49, .y=0x6e, .sp=0xd4, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x4b}, {.addr=0x7648, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7648, .value=0x8e, .type=IO_READ},
        {.addr=0x7649, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0f70, .a=0x63, .x=0xfa, .y=0x67, .sp=0x00, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x5d}, {.addr=0x0f70, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f71, .a=0x63, .x=0xfa, .y=0x67, .sp=0x01, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x5d}, {.addr=0x0f70, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f70, .value=0x8e, .type=IO_READ},
        {.addr=0x0f71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9a98, .a=0x84, .x=0x16, .y=0xf2, .sp=0xa4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x45}, {.addr=0x9a98, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9a99, .a=0x84, .x=0x16, .y=0xf2, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x45}, {.addr=0x9a98, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9a98, .value=0x8e, .type=IO_READ},
        {.addr=0x9a99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_003F) {
    const struct CPU_State initial_cpu = {.pc=0x6155, .a=0x41, .x=0x42, .y=0xcc, .sp=0x01, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xb1}, {.addr=0x6155, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6156, .a=0x41, .x=0x42, .y=0xcc, .sp=0x02, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xb1}, {.addr=0x6155, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6155, .value=0x8e, .type=IO_READ},
        {.addr=0x6156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0040) {
    const struct CPU_State initial_cpu = {.pc=0x5c0e, .a=0x0f, .x=0xaa, .y=0x47, .sp=0x88, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xb5}, {.addr=0x5c0e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5c0f, .a=0x0f, .x=0xaa, .y=0x47, .sp=0x89, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xb5}, {.addr=0x5c0e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5c0e, .value=0x8e, .type=IO_READ},
        {.addr=0x5c0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0041) {
    const struct CPU_State initial_cpu = {.pc=0x80fc, .a=0xe3, .x=0xbc, .y=0x21, .sp=0x94, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x5e}, {.addr=0x80fc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x80fd, .a=0xe3, .x=0xbc, .y=0x21, .sp=0x95, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x5e}, {.addr=0x80fc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x80fc, .value=0x8e, .type=IO_READ},
        {.addr=0x80fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0042) {
    const struct CPU_State initial_cpu = {.pc=0xd61e, .a=0x2b, .x=0x94, .y=0x5f, .sp=0xa0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x6a}, {.addr=0xd61e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd61f, .a=0x2b, .x=0x94, .y=0x5f, .sp=0xa1, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x6a}, {.addr=0xd61e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd61e, .value=0x8e, .type=IO_READ},
        {.addr=0xd61f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0043) {
    const struct CPU_State initial_cpu = {.pc=0xc7e9, .a=0xf7, .x=0x5c, .y=0x54, .sp=0xd0, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x83}, {.addr=0xc7e9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc7ea, .a=0xf7, .x=0x5c, .y=0x54, .sp=0xd1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x83}, {.addr=0xc7e9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc7e9, .value=0x8e, .type=IO_READ},
        {.addr=0xc7ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0044) {
    const struct CPU_State initial_cpu = {.pc=0x4b96, .a=0xb4, .x=0xa0, .y=0xab, .sp=0x2d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x75}, {.addr=0x4b96, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4b97, .a=0xb4, .x=0xa0, .y=0xab, .sp=0x2e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x75}, {.addr=0x4b96, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4b96, .value=0x8e, .type=IO_READ},
        {.addr=0x4b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0045) {
    const struct CPU_State initial_cpu = {.pc=0x71d1, .a=0x4a, .x=0x86, .y=0x8c, .sp=0xd2, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xe0}, {.addr=0x71d1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x71d2, .a=0x4a, .x=0x86, .y=0x8c, .sp=0xd3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xe0}, {.addr=0x71d1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x71d1, .value=0x8e, .type=IO_READ},
        {.addr=0x71d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0046) {
    const struct CPU_State initial_cpu = {.pc=0x4646, .a=0x88, .x=0xd8, .y=0x54, .sp=0xfa, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xea}, {.addr=0x4646, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4647, .a=0x88, .x=0xd8, .y=0x54, .sp=0xfb, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xea}, {.addr=0x4646, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4646, .value=0x8e, .type=IO_READ},
        {.addr=0x4647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0047) {
    const struct CPU_State initial_cpu = {.pc=0x111b, .a=0xe4, .x=0xdb, .y=0x8f, .sp=0x21, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x61}, {.addr=0x111b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x111c, .a=0xe4, .x=0xdb, .y=0x8f, .sp=0x22, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x61}, {.addr=0x111b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x111b, .value=0x8e, .type=IO_READ},
        {.addr=0x111c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0048) {
    const struct CPU_State initial_cpu = {.pc=0x9e8a, .a=0xf2, .x=0x6b, .y=0xbd, .sp=0x35, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x55}, {.addr=0x9e8a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9e8b, .a=0xf2, .x=0x6b, .y=0xbd, .sp=0x36, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x55}, {.addr=0x9e8a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9e8a, .value=0x8e, .type=IO_READ},
        {.addr=0x9e8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2871, .a=0x4c, .x=0xc4, .y=0x0a, .sp=0x2f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x74}, {.addr=0x2871, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2872, .a=0x4c, .x=0xc4, .y=0x0a, .sp=0x30, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x74}, {.addr=0x2871, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2871, .value=0x8e, .type=IO_READ},
        {.addr=0x2872, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004A) {
    const struct CPU_State initial_cpu = {.pc=0xe17a, .a=0xb5, .x=0xc0, .y=0x88, .sp=0xbd, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x83}, {.addr=0xe17a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe17b, .a=0xb5, .x=0xc0, .y=0x88, .sp=0xbe, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x83}, {.addr=0xe17a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe17a, .value=0x8e, .type=IO_READ},
        {.addr=0xe17b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004B) {
    const struct CPU_State initial_cpu = {.pc=0x1d70, .a=0x95, .x=0xee, .y=0xd7, .sp=0x97, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xd8}, {.addr=0x1d70, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1d71, .a=0x95, .x=0xee, .y=0xd7, .sp=0x98, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xd8}, {.addr=0x1d70, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1d70, .value=0x8e, .type=IO_READ},
        {.addr=0x1d71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004C) {
    const struct CPU_State initial_cpu = {.pc=0x5bea, .a=0x51, .x=0xa9, .y=0x68, .sp=0x0c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xa9}, {.addr=0x5bea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5beb, .a=0x51, .x=0xa9, .y=0x68, .sp=0x0d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xa9}, {.addr=0x5bea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5bea, .value=0x8e, .type=IO_READ},
        {.addr=0x5beb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004D) {
    const struct CPU_State initial_cpu = {.pc=0x006a, .a=0xb6, .x=0x83, .y=0x19, .sp=0x0f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x8e}, {.addr=0x0110, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x006b, .a=0xb6, .x=0x83, .y=0x19, .sp=0x10, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x8e}, {.addr=0x0110, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x006a, .value=0x8e, .type=IO_READ},
        {.addr=0x006b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004E) {
    const struct CPU_State initial_cpu = {.pc=0x6949, .a=0x53, .x=0xfa, .y=0xfd, .sp=0xa4, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xeb}, {.addr=0x6949, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x694a, .a=0x53, .x=0xfa, .y=0xfd, .sp=0xa5, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xeb}, {.addr=0x6949, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6949, .value=0x8e, .type=IO_READ},
        {.addr=0x694a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_004F) {
    const struct CPU_State initial_cpu = {.pc=0x37bb, .a=0x68, .x=0x94, .y=0x12, .sp=0x69, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x6d}, {.addr=0x37bb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x37bc, .a=0x68, .x=0x94, .y=0x12, .sp=0x6a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x6d}, {.addr=0x37bb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x37bb, .value=0x8e, .type=IO_READ},
        {.addr=0x37bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5741, .a=0x69, .x=0x65, .y=0xa4, .sp=0x72, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x21}, {.addr=0x5741, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5742, .a=0x69, .x=0x65, .y=0xa4, .sp=0x73, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x21}, {.addr=0x5741, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5741, .value=0x8e, .type=IO_READ},
        {.addr=0x5742, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0051) {
    const struct CPU_State initial_cpu = {.pc=0xcb0d, .a=0x8a, .x=0x86, .y=0xf5, .sp=0x62, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x58}, {.addr=0xcb0d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcb0e, .a=0x8a, .x=0x86, .y=0xf5, .sp=0x63, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x58}, {.addr=0xcb0d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcb0d, .value=0x8e, .type=IO_READ},
        {.addr=0xcb0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0052) {
    const struct CPU_State initial_cpu = {.pc=0xef4e, .a=0x4c, .x=0x58, .y=0x78, .sp=0xda, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xc9}, {.addr=0xef4e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xef4f, .a=0x4c, .x=0x58, .y=0x78, .sp=0xdb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xc9}, {.addr=0xef4e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xef4e, .value=0x8e, .type=IO_READ},
        {.addr=0xef4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0053) {
    const struct CPU_State initial_cpu = {.pc=0x00e0, .a=0x9f, .x=0xbb, .y=0x05, .sp=0xcc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x8e}, {.addr=0x01cd, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x00e1, .a=0x9f, .x=0xbb, .y=0x05, .sp=0xcd, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x8e}, {.addr=0x01cd, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x00e0, .value=0x8e, .type=IO_READ},
        {.addr=0x00e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0054) {
    const struct CPU_State initial_cpu = {.pc=0xffb5, .a=0x06, .x=0xbd, .y=0xac, .sp=0xa0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xcb}, {.addr=0xffb5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0x06, .x=0xbd, .y=0xac, .sp=0xa1, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xcb}, {.addr=0xffb5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xffb5, .value=0x8e, .type=IO_READ},
        {.addr=0xffb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0055) {
    const struct CPU_State initial_cpu = {.pc=0x5987, .a=0xcd, .x=0x03, .y=0x82, .sp=0x54, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xaa}, {.addr=0x5987, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5988, .a=0xcd, .x=0x03, .y=0x82, .sp=0x55, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xaa}, {.addr=0x5987, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5987, .value=0x8e, .type=IO_READ},
        {.addr=0x5988, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0056) {
    const struct CPU_State initial_cpu = {.pc=0xa972, .a=0x14, .x=0xfe, .y=0x76, .sp=0x37, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x52}, {.addr=0xa972, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa973, .a=0x14, .x=0xfe, .y=0x76, .sp=0x38, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x52}, {.addr=0xa972, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa972, .value=0x8e, .type=IO_READ},
        {.addr=0xa973, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0057) {
    const struct CPU_State initial_cpu = {.pc=0xc5cd, .a=0x9b, .x=0x4e, .y=0x59, .sp=0x92, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x2e}, {.addr=0xc5cd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc5ce, .a=0x9b, .x=0x4e, .y=0x59, .sp=0x93, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x2e}, {.addr=0xc5cd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc5cd, .value=0x8e, .type=IO_READ},
        {.addr=0xc5ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0058) {
    const struct CPU_State initial_cpu = {.pc=0x0e83, .a=0x56, .x=0xc2, .y=0x99, .sp=0xa9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x5d}, {.addr=0x0e83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0e84, .a=0x56, .x=0xc2, .y=0x99, .sp=0xaa, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x5d}, {.addr=0x0e83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0e83, .value=0x8e, .type=IO_READ},
        {.addr=0x0e84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0059) {
    const struct CPU_State initial_cpu = {.pc=0xcf5b, .a=0x3b, .x=0x51, .y=0xf4, .sp=0xd8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x02}, {.addr=0xcf5b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcf5c, .a=0x3b, .x=0x51, .y=0xf4, .sp=0xd9, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x02}, {.addr=0xcf5b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcf5b, .value=0x8e, .type=IO_READ},
        {.addr=0xcf5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005A) {
    const struct CPU_State initial_cpu = {.pc=0xe091, .a=0x86, .x=0x56, .y=0xba, .sp=0xa7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x25}, {.addr=0xe091, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe092, .a=0x86, .x=0x56, .y=0xba, .sp=0xa8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x25}, {.addr=0xe091, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe091, .value=0x8e, .type=IO_READ},
        {.addr=0xe092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005B) {
    const struct CPU_State initial_cpu = {.pc=0xfbb6, .a=0x3b, .x=0xef, .y=0x7b, .sp=0x72, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xb5}, {.addr=0xfbb6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfbb7, .a=0x3b, .x=0xef, .y=0x7b, .sp=0x73, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xb5}, {.addr=0xfbb6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfbb6, .value=0x8e, .type=IO_READ},
        {.addr=0xfbb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005C) {
    const struct CPU_State initial_cpu = {.pc=0x1028, .a=0x75, .x=0x5c, .y=0xae, .sp=0xaa, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x31}, {.addr=0x1028, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1029, .a=0x75, .x=0x5c, .y=0xae, .sp=0xab, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x31}, {.addr=0x1028, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1028, .value=0x8e, .type=IO_READ},
        {.addr=0x1029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005D) {
    const struct CPU_State initial_cpu = {.pc=0x866a, .a=0xd8, .x=0x40, .y=0xf9, .sp=0x90, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x7a}, {.addr=0x866a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x866b, .a=0xd8, .x=0x40, .y=0xf9, .sp=0x91, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x7a}, {.addr=0x866a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x866a, .value=0x8e, .type=IO_READ},
        {.addr=0x866b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005E) {
    const struct CPU_State initial_cpu = {.pc=0x3b8b, .a=0x55, .x=0xe0, .y=0xdd, .sp=0xaf, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xd7}, {.addr=0x3b8b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3b8c, .a=0x55, .x=0xe0, .y=0xdd, .sp=0xb0, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xd7}, {.addr=0x3b8b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3b8b, .value=0x8e, .type=IO_READ},
        {.addr=0x3b8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_005F) {
    const struct CPU_State initial_cpu = {.pc=0xe6dd, .a=0xc3, .x=0x0f, .y=0xe9, .sp=0xc3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xfb}, {.addr=0xe6dd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe6de, .a=0xc3, .x=0x0f, .y=0xe9, .sp=0xc4, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xfb}, {.addr=0xe6dd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe6dd, .value=0x8e, .type=IO_READ},
        {.addr=0xe6de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0060) {
    const struct CPU_State initial_cpu = {.pc=0xf377, .a=0x32, .x=0xa0, .y=0x0b, .sp=0x38, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x07}, {.addr=0xf377, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf378, .a=0x32, .x=0xa0, .y=0x0b, .sp=0x39, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x07}, {.addr=0xf377, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf377, .value=0x8e, .type=IO_READ},
        {.addr=0xf378, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9807, .a=0x38, .x=0x84, .y=0x8d, .sp=0x6a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x5a}, {.addr=0x9807, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9808, .a=0x38, .x=0x84, .y=0x8d, .sp=0x6b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x5a}, {.addr=0x9807, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9807, .value=0x8e, .type=IO_READ},
        {.addr=0x9808, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0062) {
    const struct CPU_State initial_cpu = {.pc=0x23db, .a=0xf6, .x=0xe9, .y=0x6f, .sp=0x0b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x42}, {.addr=0x23db, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x23dc, .a=0xf6, .x=0xe9, .y=0x6f, .sp=0x0c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x42}, {.addr=0x23db, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x23db, .value=0x8e, .type=IO_READ},
        {.addr=0x23dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0063) {
    const struct CPU_State initial_cpu = {.pc=0xa725, .a=0xd8, .x=0x59, .y=0x84, .sp=0xa5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x6e}, {.addr=0xa725, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa726, .a=0xd8, .x=0x59, .y=0x84, .sp=0xa6, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x6e}, {.addr=0xa725, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa725, .value=0x8e, .type=IO_READ},
        {.addr=0xa726, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0064) {
    const struct CPU_State initial_cpu = {.pc=0x5301, .a=0xed, .x=0x50, .y=0x44, .sp=0x03, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x87}, {.addr=0x5301, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5302, .a=0xed, .x=0x50, .y=0x44, .sp=0x04, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x87}, {.addr=0x5301, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5301, .value=0x8e, .type=IO_READ},
        {.addr=0x5302, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0065) {
    const struct CPU_State initial_cpu = {.pc=0x8add, .a=0x24, .x=0x45, .y=0xe6, .sp=0x32, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x6f}, {.addr=0x8add, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8ade, .a=0x24, .x=0x45, .y=0xe6, .sp=0x33, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x6f}, {.addr=0x8add, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8add, .value=0x8e, .type=IO_READ},
        {.addr=0x8ade, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0066) {
    const struct CPU_State initial_cpu = {.pc=0x9632, .a=0xd3, .x=0x43, .y=0x5e, .sp=0x1f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xd6}, {.addr=0x9632, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9633, .a=0xd3, .x=0x43, .y=0x5e, .sp=0x20, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xd6}, {.addr=0x9632, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9632, .value=0x8e, .type=IO_READ},
        {.addr=0x9633, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0067) {
    const struct CPU_State initial_cpu = {.pc=0x2086, .a=0x28, .x=0x7e, .y=0xda, .sp=0xb2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xf6}, {.addr=0x2086, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2087, .a=0x28, .x=0x7e, .y=0xda, .sp=0xb3, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xf6}, {.addr=0x2086, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2086, .value=0x8e, .type=IO_READ},
        {.addr=0x2087, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0068) {
    const struct CPU_State initial_cpu = {.pc=0x3c55, .a=0xf3, .x=0x5e, .y=0xf7, .sp=0x51, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x2e}, {.addr=0x3c55, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3c56, .a=0xf3, .x=0x5e, .y=0xf7, .sp=0x52, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x2e}, {.addr=0x3c55, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3c55, .value=0x8e, .type=IO_READ},
        {.addr=0x3c56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0069) {
    const struct CPU_State initial_cpu = {.pc=0x385e, .a=0x36, .x=0x13, .y=0x6f, .sp=0x6a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x05}, {.addr=0x385e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x385f, .a=0x36, .x=0x13, .y=0x6f, .sp=0x6b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x05}, {.addr=0x385e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x385e, .value=0x8e, .type=IO_READ},
        {.addr=0x385f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006A) {
    const struct CPU_State initial_cpu = {.pc=0x53b3, .a=0x7a, .x=0xe7, .y=0x84, .sp=0xee, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x43}, {.addr=0x53b3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x53b4, .a=0x7a, .x=0xe7, .y=0x84, .sp=0xef, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x43}, {.addr=0x53b3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x53b3, .value=0x8e, .type=IO_READ},
        {.addr=0x53b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006B) {
    const struct CPU_State initial_cpu = {.pc=0x6c2c, .a=0xd0, .x=0xcb, .y=0xac, .sp=0xf7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xf1}, {.addr=0x6c2c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6c2d, .a=0xd0, .x=0xcb, .y=0xac, .sp=0xf8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xf1}, {.addr=0x6c2c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6c2c, .value=0x8e, .type=IO_READ},
        {.addr=0x6c2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006C) {
    const struct CPU_State initial_cpu = {.pc=0x10a3, .a=0x87, .x=0x0a, .y=0xbe, .sp=0x39, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xd7}, {.addr=0x10a3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x10a4, .a=0x87, .x=0x0a, .y=0xbe, .sp=0x3a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xd7}, {.addr=0x10a3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x10a3, .value=0x8e, .type=IO_READ},
        {.addr=0x10a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0112, .a=0x20, .x=0xae, .y=0x73, .sp=0xa0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x8e}, {.addr=0x01a1, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0113, .a=0x20, .x=0xae, .y=0x73, .sp=0xa1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x8e}, {.addr=0x01a1, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0112, .value=0x8e, .type=IO_READ},
        {.addr=0x0113, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006E) {
    const struct CPU_State initial_cpu = {.pc=0xdff1, .a=0xcb, .x=0xe8, .y=0xd6, .sp=0xe2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x6a}, {.addr=0xdff1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdff2, .a=0xcb, .x=0xe8, .y=0xd6, .sp=0xe3, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x6a}, {.addr=0xdff1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdff1, .value=0x8e, .type=IO_READ},
        {.addr=0xdff2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_006F) {
    const struct CPU_State initial_cpu = {.pc=0x4f00, .a=0xc2, .x=0x24, .y=0x39, .sp=0x2a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x87}, {.addr=0x4f00, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f01, .a=0xc2, .x=0x24, .y=0x39, .sp=0x2b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x87}, {.addr=0x4f00, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4f00, .value=0x8e, .type=IO_READ},
        {.addr=0x4f01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9bd8, .a=0x93, .x=0x4c, .y=0x47, .sp=0x44, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xc6}, {.addr=0x9bd8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9bd9, .a=0x93, .x=0x4c, .y=0x47, .sp=0x45, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xc6}, {.addr=0x9bd8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9bd8, .value=0x8e, .type=IO_READ},
        {.addr=0x9bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0071) {
    const struct CPU_State initial_cpu = {.pc=0xc8a7, .a=0x59, .x=0x9c, .y=0x55, .sp=0x93, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xe2}, {.addr=0xc8a7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc8a8, .a=0x59, .x=0x9c, .y=0x55, .sp=0x94, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xe2}, {.addr=0xc8a7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc8a7, .value=0x8e, .type=IO_READ},
        {.addr=0xc8a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0072) {
    const struct CPU_State initial_cpu = {.pc=0xca78, .a=0xe8, .x=0xe3, .y=0x08, .sp=0x11, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xca78, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xca79, .a=0xe8, .x=0xe3, .y=0x08, .sp=0x12, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xca78, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xca78, .value=0x8e, .type=IO_READ},
        {.addr=0xca79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0073) {
    const struct CPU_State initial_cpu = {.pc=0x359b, .a=0x96, .x=0xd4, .y=0x75, .sp=0x96, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xd7}, {.addr=0x359b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x359c, .a=0x96, .x=0xd4, .y=0x75, .sp=0x97, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xd7}, {.addr=0x359b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x359b, .value=0x8e, .type=IO_READ},
        {.addr=0x359c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7757, .a=0x1b, .x=0x14, .y=0x30, .sp=0xe0, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xe3}, {.addr=0x7757, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7758, .a=0x1b, .x=0x14, .y=0x30, .sp=0xe1, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xe3}, {.addr=0x7757, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7757, .value=0x8e, .type=IO_READ},
        {.addr=0x7758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0075) {
    const struct CPU_State initial_cpu = {.pc=0x64c7, .a=0x3c, .x=0x7f, .y=0xbe, .sp=0xbf, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xee}, {.addr=0x64c7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x64c8, .a=0x3c, .x=0x7f, .y=0xbe, .sp=0xc0, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xee}, {.addr=0x64c7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x64c7, .value=0x8e, .type=IO_READ},
        {.addr=0x64c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0076) {
    const struct CPU_State initial_cpu = {.pc=0xe1ea, .a=0x5f, .x=0xda, .y=0x3b, .sp=0xcd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x79}, {.addr=0xe1ea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe1eb, .a=0x5f, .x=0xda, .y=0x3b, .sp=0xce, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x79}, {.addr=0xe1ea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe1ea, .value=0x8e, .type=IO_READ},
        {.addr=0xe1eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0077) {
    const struct CPU_State initial_cpu = {.pc=0xbea7, .a=0xdc, .x=0xfc, .y=0xe0, .sp=0x3f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x6a}, {.addr=0xbea7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbea8, .a=0xdc, .x=0xfc, .y=0xe0, .sp=0x40, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x6a}, {.addr=0xbea7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbea7, .value=0x8e, .type=IO_READ},
        {.addr=0xbea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0078) {
    const struct CPU_State initial_cpu = {.pc=0x3be9, .a=0x91, .x=0xf3, .y=0x39, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x9b}, {.addr=0x3be9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3bea, .a=0x91, .x=0xf3, .y=0x39, .sp=0xfa, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x9b}, {.addr=0x3be9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3be9, .value=0x8e, .type=IO_READ},
        {.addr=0x3bea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0079) {
    const struct CPU_State initial_cpu = {.pc=0xe908, .a=0xfa, .x=0x9e, .y=0x5d, .sp=0x93, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xf6}, {.addr=0xe908, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe909, .a=0xfa, .x=0x9e, .y=0x5d, .sp=0x94, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf6}, {.addr=0xe908, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe908, .value=0x8e, .type=IO_READ},
        {.addr=0xe909, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007A) {
    const struct CPU_State initial_cpu = {.pc=0x4488, .a=0xe9, .x=0x13, .y=0x05, .sp=0x3e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x01}, {.addr=0x4488, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4489, .a=0xe9, .x=0x13, .y=0x05, .sp=0x3f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x01}, {.addr=0x4488, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4488, .value=0x8e, .type=IO_READ},
        {.addr=0x4489, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007B) {
    const struct CPU_State initial_cpu = {.pc=0x126c, .a=0xb8, .x=0x04, .y=0x2e, .sp=0x31, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x07}, {.addr=0x126c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x126d, .a=0xb8, .x=0x04, .y=0x2e, .sp=0x32, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x07}, {.addr=0x126c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x126c, .value=0x8e, .type=IO_READ},
        {.addr=0x126d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007C) {
    const struct CPU_State initial_cpu = {.pc=0x1887, .a=0xc8, .x=0x19, .y=0xc4, .sp=0xd1, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x20}, {.addr=0x1887, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1888, .a=0xc8, .x=0x19, .y=0xc4, .sp=0xd2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x20}, {.addr=0x1887, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1887, .value=0x8e, .type=IO_READ},
        {.addr=0x1888, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007D) {
    const struct CPU_State initial_cpu = {.pc=0xc3ab, .a=0x2a, .x=0xe9, .y=0x12, .sp=0xe5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x73}, {.addr=0xc3ab, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc3ac, .a=0x2a, .x=0xe9, .y=0x12, .sp=0xe6, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x73}, {.addr=0xc3ab, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc3ab, .value=0x8e, .type=IO_READ},
        {.addr=0xc3ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007E) {
    const struct CPU_State initial_cpu = {.pc=0x0b8d, .a=0x2e, .x=0x6e, .y=0x67, .sp=0x98, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x70}, {.addr=0x0b8d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0b8e, .a=0x2e, .x=0x6e, .y=0x67, .sp=0x99, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x70}, {.addr=0x0b8d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0b8d, .value=0x8e, .type=IO_READ},
        {.addr=0x0b8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_007F) {
    const struct CPU_State initial_cpu = {.pc=0xbaec, .a=0x1d, .x=0xd4, .y=0x9c, .sp=0x16, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x83}, {.addr=0xbaec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbaed, .a=0x1d, .x=0xd4, .y=0x9c, .sp=0x17, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x83}, {.addr=0xbaec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbaec, .value=0x8e, .type=IO_READ},
        {.addr=0xbaed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0080) {
    const struct CPU_State initial_cpu = {.pc=0x18ca, .a=0xa3, .x=0xa2, .y=0xaf, .sp=0xb8, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x62}, {.addr=0x18ca, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x18cb, .a=0xa3, .x=0xa2, .y=0xaf, .sp=0xb9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x62}, {.addr=0x18ca, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x18ca, .value=0x8e, .type=IO_READ},
        {.addr=0x18cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0081) {
    const struct CPU_State initial_cpu = {.pc=0xdb3e, .a=0xa1, .x=0x5f, .y=0x09, .sp=0x58, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xed}, {.addr=0xdb3e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdb3f, .a=0xa1, .x=0x5f, .y=0x09, .sp=0x59, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xed}, {.addr=0xdb3e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdb3e, .value=0x8e, .type=IO_READ},
        {.addr=0xdb3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0082) {
    const struct CPU_State initial_cpu = {.pc=0x4c2e, .a=0x06, .x=0x2f, .y=0x30, .sp=0x38, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x61}, {.addr=0x4c2e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4c2f, .a=0x06, .x=0x2f, .y=0x30, .sp=0x39, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x61}, {.addr=0x4c2e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4c2e, .value=0x8e, .type=IO_READ},
        {.addr=0x4c2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0083) {
    const struct CPU_State initial_cpu = {.pc=0x906c, .a=0x08, .x=0xe7, .y=0xa9, .sp=0xa8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x58}, {.addr=0x906c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x906d, .a=0x08, .x=0xe7, .y=0xa9, .sp=0xa9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x58}, {.addr=0x906c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x906c, .value=0x8e, .type=IO_READ},
        {.addr=0x906d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0084) {
    const struct CPU_State initial_cpu = {.pc=0x4244, .a=0x26, .x=0x8a, .y=0xed, .sp=0x52, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xbf}, {.addr=0x4244, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4245, .a=0x26, .x=0x8a, .y=0xed, .sp=0x53, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xbf}, {.addr=0x4244, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4244, .value=0x8e, .type=IO_READ},
        {.addr=0x4245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5d42, .a=0xae, .x=0x50, .y=0x06, .sp=0xc7, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xf6}, {.addr=0x5d42, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5d43, .a=0xae, .x=0x50, .y=0x06, .sp=0xc8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xf6}, {.addr=0x5d42, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5d42, .value=0x8e, .type=IO_READ},
        {.addr=0x5d43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9d6a, .a=0x51, .x=0x9a, .y=0x91, .sp=0xba, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x2a}, {.addr=0x9d6a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9d6b, .a=0x51, .x=0x9a, .y=0x91, .sp=0xbb, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x2a}, {.addr=0x9d6a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9d6a, .value=0x8e, .type=IO_READ},
        {.addr=0x9d6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0087) {
    const struct CPU_State initial_cpu = {.pc=0x8765, .a=0x40, .x=0x91, .y=0xec, .sp=0x9f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x3e}, {.addr=0x8765, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8766, .a=0x40, .x=0x91, .y=0xec, .sp=0xa0, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x3e}, {.addr=0x8765, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8765, .value=0x8e, .type=IO_READ},
        {.addr=0x8766, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1dee, .a=0xb9, .x=0x13, .y=0x30, .sp=0xa6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x24}, {.addr=0x1dee, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1def, .a=0xb9, .x=0x13, .y=0x30, .sp=0xa7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x24}, {.addr=0x1dee, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1dee, .value=0x8e, .type=IO_READ},
        {.addr=0x1def, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0089) {
    const struct CPU_State initial_cpu = {.pc=0x3fc4, .a=0x40, .x=0x55, .y=0xb8, .sp=0xc5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x0f}, {.addr=0x3fc4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3fc5, .a=0x40, .x=0x55, .y=0xb8, .sp=0xc6, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x0f}, {.addr=0x3fc4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3fc4, .value=0x8e, .type=IO_READ},
        {.addr=0x3fc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008A) {
    const struct CPU_State initial_cpu = {.pc=0xaf9f, .a=0x89, .x=0xa0, .y=0x2d, .sp=0x05, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x91}, {.addr=0xaf9f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xafa0, .a=0x89, .x=0xa0, .y=0x2d, .sp=0x06, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x91}, {.addr=0xaf9f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf9f, .value=0x8e, .type=IO_READ},
        {.addr=0xafa0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008B) {
    const struct CPU_State initial_cpu = {.pc=0x69b0, .a=0x17, .x=0xdf, .y=0x59, .sp=0xbb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x34}, {.addr=0x69b0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x69b1, .a=0x17, .x=0xdf, .y=0x59, .sp=0xbc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x34}, {.addr=0x69b0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x69b0, .value=0x8e, .type=IO_READ},
        {.addr=0x69b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3950, .a=0xf6, .x=0x5a, .y=0xee, .sp=0x4d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x2c}, {.addr=0x3950, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3951, .a=0xf6, .x=0x5a, .y=0xee, .sp=0x4e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x2c}, {.addr=0x3950, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3950, .value=0x8e, .type=IO_READ},
        {.addr=0x3951, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008D) {
    const struct CPU_State initial_cpu = {.pc=0x0f26, .a=0xd5, .x=0x22, .y=0xbe, .sp=0xbc, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xee}, {.addr=0x0f26, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f27, .a=0xd5, .x=0x22, .y=0xbe, .sp=0xbd, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xee}, {.addr=0x0f26, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f26, .value=0x8e, .type=IO_READ},
        {.addr=0x0f27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6944, .a=0x30, .x=0x72, .y=0xa8, .sp=0xaa, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xa8}, {.addr=0x6944, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6945, .a=0x30, .x=0x72, .y=0xa8, .sp=0xab, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xa8}, {.addr=0x6944, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6944, .value=0x8e, .type=IO_READ},
        {.addr=0x6945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4c8d, .a=0x2b, .x=0xb5, .y=0xca, .sp=0xb2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x58}, {.addr=0x4c8d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4c8e, .a=0x2b, .x=0xb5, .y=0xca, .sp=0xb3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x58}, {.addr=0x4c8d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4c8d, .value=0x8e, .type=IO_READ},
        {.addr=0x4c8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0090) {
    const struct CPU_State initial_cpu = {.pc=0x8df8, .a=0x77, .x=0xfe, .y=0x0b, .sp=0x03, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x11}, {.addr=0x8df8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8df9, .a=0x77, .x=0xfe, .y=0x0b, .sp=0x04, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x11}, {.addr=0x8df8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8df8, .value=0x8e, .type=IO_READ},
        {.addr=0x8df9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0091) {
    const struct CPU_State initial_cpu = {.pc=0xb2af, .a=0x40, .x=0x30, .y=0xba, .sp=0x22, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x51}, {.addr=0xb2af, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb2b0, .a=0x40, .x=0x30, .y=0xba, .sp=0x23, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x51}, {.addr=0xb2af, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb2af, .value=0x8e, .type=IO_READ},
        {.addr=0xb2b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0092) {
    const struct CPU_State initial_cpu = {.pc=0xe00e, .a=0x16, .x=0x7e, .y=0x5d, .sp=0x3d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x61}, {.addr=0xe00e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe00f, .a=0x16, .x=0x7e, .y=0x5d, .sp=0x3e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x61}, {.addr=0xe00e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe00e, .value=0x8e, .type=IO_READ},
        {.addr=0xe00f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0093) {
    const struct CPU_State initial_cpu = {.pc=0xe7ef, .a=0x21, .x=0x8f, .y=0x6d, .sp=0xb2, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xd4}, {.addr=0xe7ef, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe7f0, .a=0x21, .x=0x8f, .y=0x6d, .sp=0xb3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xd4}, {.addr=0xe7ef, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe7ef, .value=0x8e, .type=IO_READ},
        {.addr=0xe7f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0094) {
    const struct CPU_State initial_cpu = {.pc=0xdb84, .a=0x4c, .x=0xdd, .y=0x2f, .sp=0x88, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xca}, {.addr=0xdb84, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdb85, .a=0x4c, .x=0xdd, .y=0x2f, .sp=0x89, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xca}, {.addr=0xdb84, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdb84, .value=0x8e, .type=IO_READ},
        {.addr=0xdb85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0095) {
    const struct CPU_State initial_cpu = {.pc=0xd1a6, .a=0xcb, .x=0x12, .y=0x8a, .sp=0x92, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xc4}, {.addr=0xd1a6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1a7, .a=0xcb, .x=0x12, .y=0x8a, .sp=0x93, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xc4}, {.addr=0xd1a6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1a6, .value=0x8e, .type=IO_READ},
        {.addr=0xd1a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc2e1, .a=0xd0, .x=0x03, .y=0x7c, .sp=0xba, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x85}, {.addr=0xc2e1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc2e2, .a=0xd0, .x=0x03, .y=0x7c, .sp=0xbb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x85}, {.addr=0xc2e1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc2e1, .value=0x8e, .type=IO_READ},
        {.addr=0xc2e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6f85, .a=0xdd, .x=0xd1, .y=0x9a, .sp=0x35, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x15}, {.addr=0x6f85, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6f86, .a=0xdd, .x=0xd1, .y=0x9a, .sp=0x36, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x15}, {.addr=0x6f85, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6f85, .value=0x8e, .type=IO_READ},
        {.addr=0x6f86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0098) {
    const struct CPU_State initial_cpu = {.pc=0x972a, .a=0xf0, .x=0xc3, .y=0x54, .sp=0x60, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x0e}, {.addr=0x972a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x972b, .a=0xf0, .x=0xc3, .y=0x54, .sp=0x61, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x0e}, {.addr=0x972a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x972a, .value=0x8e, .type=IO_READ},
        {.addr=0x972b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0099) {
    const struct CPU_State initial_cpu = {.pc=0x2452, .a=0x9d, .x=0xb4, .y=0x7a, .sp=0xf6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x62}, {.addr=0x2452, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2453, .a=0x9d, .x=0xb4, .y=0x7a, .sp=0xf7, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x62}, {.addr=0x2452, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2452, .value=0x8e, .type=IO_READ},
        {.addr=0x2453, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009A) {
    const struct CPU_State initial_cpu = {.pc=0x9a8c, .a=0x70, .x=0xc9, .y=0x53, .sp=0xe8, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xf4}, {.addr=0x9a8c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9a8d, .a=0x70, .x=0xc9, .y=0x53, .sp=0xe9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xf4}, {.addr=0x9a8c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9a8c, .value=0x8e, .type=IO_READ},
        {.addr=0x9a8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009B) {
    const struct CPU_State initial_cpu = {.pc=0x0957, .a=0x52, .x=0x9c, .y=0x5e, .sp=0x3a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xab}, {.addr=0x0957, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0958, .a=0x52, .x=0x9c, .y=0x5e, .sp=0x3b, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xab}, {.addr=0x0957, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0957, .value=0x8e, .type=IO_READ},
        {.addr=0x0958, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb833, .a=0x15, .x=0x3d, .y=0x24, .sp=0x57, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x2e}, {.addr=0xb833, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb834, .a=0x15, .x=0x3d, .y=0x24, .sp=0x58, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x2e}, {.addr=0xb833, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb833, .value=0x8e, .type=IO_READ},
        {.addr=0xb834, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009D) {
    const struct CPU_State initial_cpu = {.pc=0x7cab, .a=0xdd, .x=0x87, .y=0xc6, .sp=0xd0, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xd3}, {.addr=0x7cab, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7cac, .a=0xdd, .x=0x87, .y=0xc6, .sp=0xd1, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xd3}, {.addr=0x7cab, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7cab, .value=0x8e, .type=IO_READ},
        {.addr=0x7cac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009E) {
    const struct CPU_State initial_cpu = {.pc=0x0157, .a=0xa9, .x=0x3c, .y=0x6e, .sp=0xdc, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x8e}, {.addr=0x01dd, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x0158, .a=0xa9, .x=0x3c, .y=0x6e, .sp=0xdd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x8e}, {.addr=0x01dd, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x0157, .value=0x8e, .type=IO_READ},
        {.addr=0x0158, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_009F) {
    const struct CPU_State initial_cpu = {.pc=0x3888, .a=0x69, .x=0x6a, .y=0x09, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0x3888, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3889, .a=0x69, .x=0x6a, .y=0x09, .sp=0x60, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0x3888, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3888, .value=0x8e, .type=IO_READ},
        {.addr=0x3889, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xc324, .a=0x8e, .x=0xf2, .y=0xda, .sp=0x4b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x4a}, {.addr=0xc324, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc325, .a=0x8e, .x=0xf2, .y=0xda, .sp=0x4c, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x4a}, {.addr=0xc324, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc324, .value=0x8e, .type=IO_READ},
        {.addr=0xc325, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x15fd, .a=0x48, .x=0x68, .y=0x7f, .sp=0x73, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x04}, {.addr=0x15fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x15fe, .a=0x48, .x=0x68, .y=0x7f, .sp=0x74, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x04}, {.addr=0x15fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x15fd, .value=0x8e, .type=IO_READ},
        {.addr=0x15fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x2da4, .a=0xbf, .x=0xb4, .y=0x5a, .sp=0x68, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x0e}, {.addr=0x2da4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2da5, .a=0xbf, .x=0xb4, .y=0x5a, .sp=0x69, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x0e}, {.addr=0x2da4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2da4, .value=0x8e, .type=IO_READ},
        {.addr=0x2da5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x137d, .a=0x38, .x=0xd7, .y=0x54, .sp=0x1c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x56}, {.addr=0x137d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x137e, .a=0x38, .x=0xd7, .y=0x54, .sp=0x1d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x56}, {.addr=0x137d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x137d, .value=0x8e, .type=IO_READ},
        {.addr=0x137e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x8e4b, .a=0xc9, .x=0xdd, .y=0x69, .sp=0xb6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xa0}, {.addr=0x8e4b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8e4c, .a=0xc9, .x=0xdd, .y=0x69, .sp=0xb7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xa0}, {.addr=0x8e4b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8e4b, .value=0x8e, .type=IO_READ},
        {.addr=0x8e4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x21ed, .a=0xff, .x=0x02, .y=0x04, .sp=0x33, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xe5}, {.addr=0x21ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x21ee, .a=0xff, .x=0x02, .y=0x04, .sp=0x34, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xe5}, {.addr=0x21ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x21ed, .value=0x8e, .type=IO_READ},
        {.addr=0x21ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x5c11, .a=0x84, .x=0x72, .y=0x1d, .sp=0x7d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x80}, {.addr=0x5c11, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5c12, .a=0x84, .x=0x72, .y=0x1d, .sp=0x7e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x80}, {.addr=0x5c11, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5c11, .value=0x8e, .type=IO_READ},
        {.addr=0x5c12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x2c2e, .a=0xda, .x=0xd3, .y=0x64, .sp=0x92, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xa3}, {.addr=0x2c2e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2c2f, .a=0xda, .x=0xd3, .y=0x64, .sp=0x93, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xa3}, {.addr=0x2c2e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2c2e, .value=0x8e, .type=IO_READ},
        {.addr=0x2c2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x4f3b, .a=0x5a, .x=0xd0, .y=0xf1, .sp=0x96, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xaa}, {.addr=0x4f3b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f3c, .a=0x5a, .x=0xd0, .y=0xf1, .sp=0x97, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xaa}, {.addr=0x4f3b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4f3b, .value=0x8e, .type=IO_READ},
        {.addr=0x4f3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x6212, .a=0xb0, .x=0x23, .y=0x60, .sp=0x1f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xbc}, {.addr=0x6212, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6213, .a=0xb0, .x=0x23, .y=0x60, .sp=0x20, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xbc}, {.addr=0x6212, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6212, .value=0x8e, .type=IO_READ},
        {.addr=0x6213, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x7419, .a=0x9c, .x=0x7c, .y=0x4a, .sp=0xa9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x56}, {.addr=0x7419, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x741a, .a=0x9c, .x=0x7c, .y=0x4a, .sp=0xaa, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x56}, {.addr=0x7419, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7419, .value=0x8e, .type=IO_READ},
        {.addr=0x741a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xcd60, .a=0x2a, .x=0x62, .y=0xaa, .sp=0xac, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x1a}, {.addr=0xcd60, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcd61, .a=0x2a, .x=0x62, .y=0xaa, .sp=0xad, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x1a}, {.addr=0xcd60, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcd60, .value=0x8e, .type=IO_READ},
        {.addr=0xcd61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xb33a, .a=0x6b, .x=0x45, .y=0x29, .sp=0xde, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xb7}, {.addr=0xb33a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb33b, .a=0x6b, .x=0x45, .y=0x29, .sp=0xdf, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xb7}, {.addr=0xb33a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb33a, .value=0x8e, .type=IO_READ},
        {.addr=0xb33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xea4f, .a=0x2c, .x=0x8d, .y=0x3f, .sp=0xb0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xe7}, {.addr=0xea4f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xea50, .a=0x2c, .x=0x8d, .y=0x3f, .sp=0xb1, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xe7}, {.addr=0xea4f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xea4f, .value=0x8e, .type=IO_READ},
        {.addr=0xea50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x70f7, .a=0xa3, .x=0x08, .y=0x64, .sp=0xb5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x30}, {.addr=0x70f7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x70f8, .a=0xa3, .x=0x08, .y=0x64, .sp=0xb6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x30}, {.addr=0x70f7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x70f7, .value=0x8e, .type=IO_READ},
        {.addr=0x70f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x0dd5, .a=0x95, .x=0x59, .y=0xdd, .sp=0xe4, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x69}, {.addr=0x0dd5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0dd6, .a=0x95, .x=0x59, .y=0xdd, .sp=0xe5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x69}, {.addr=0x0dd5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0dd5, .value=0x8e, .type=IO_READ},
        {.addr=0x0dd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x8165, .a=0xc8, .x=0x04, .y=0x74, .sp=0x40, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x27}, {.addr=0x8165, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8166, .a=0xc8, .x=0x04, .y=0x74, .sp=0x41, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x27}, {.addr=0x8165, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8165, .value=0x8e, .type=IO_READ},
        {.addr=0x8166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x63e2, .a=0x78, .x=0xf7, .y=0x57, .sp=0xb8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xb5}, {.addr=0x63e2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x63e3, .a=0x78, .x=0xf7, .y=0x57, .sp=0xb9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xb5}, {.addr=0x63e2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x63e2, .value=0x8e, .type=IO_READ},
        {.addr=0x63e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xc290, .a=0x41, .x=0xe8, .y=0xa0, .sp=0x75, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xcd}, {.addr=0xc290, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc291, .a=0x41, .x=0xe8, .y=0xa0, .sp=0x76, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xcd}, {.addr=0xc290, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc290, .value=0x8e, .type=IO_READ},
        {.addr=0xc291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x52b2, .a=0x0d, .x=0xb0, .y=0xdc, .sp=0x7d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x1e}, {.addr=0x52b2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x52b3, .a=0x0d, .x=0xb0, .y=0xdc, .sp=0x7e, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x1e}, {.addr=0x52b2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x52b2, .value=0x8e, .type=IO_READ},
        {.addr=0x52b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x17ea, .a=0x47, .x=0xd6, .y=0xe4, .sp=0x33, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x24}, {.addr=0x17ea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x17eb, .a=0x47, .x=0xd6, .y=0xe4, .sp=0x34, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x24}, {.addr=0x17ea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x17ea, .value=0x8e, .type=IO_READ},
        {.addr=0x17eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xb12b, .a=0xe2, .x=0x6c, .y=0x8f, .sp=0xdb, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xc4}, {.addr=0xb12b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb12c, .a=0xe2, .x=0x6c, .y=0x8f, .sp=0xdc, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xc4}, {.addr=0xb12b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb12b, .value=0x8e, .type=IO_READ},
        {.addr=0xb12c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x20be, .a=0x4b, .x=0x76, .y=0x0f, .sp=0x0a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x55}, {.addr=0x20be, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x20bf, .a=0x4b, .x=0x76, .y=0x0f, .sp=0x0b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x55}, {.addr=0x20be, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x20be, .value=0x8e, .type=IO_READ},
        {.addr=0x20bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xbea4, .a=0x0c, .x=0x6f, .y=0x17, .sp=0x41, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x95}, {.addr=0xbea4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbea5, .a=0x0c, .x=0x6f, .y=0x17, .sp=0x42, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x95}, {.addr=0xbea4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbea4, .value=0x8e, .type=IO_READ},
        {.addr=0xbea5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xa8af, .a=0xe1, .x=0x47, .y=0xe8, .sp=0x16, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x92}, {.addr=0xa8af, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa8b0, .a=0xe1, .x=0x47, .y=0xe8, .sp=0x17, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x92}, {.addr=0xa8af, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa8af, .value=0x8e, .type=IO_READ},
        {.addr=0xa8b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xcf32, .a=0xc4, .x=0x57, .y=0xda, .sp=0xb5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xe7}, {.addr=0xcf32, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcf33, .a=0xc4, .x=0x57, .y=0xda, .sp=0xb6, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xe7}, {.addr=0xcf32, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcf32, .value=0x8e, .type=IO_READ},
        {.addr=0xcf33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xb38c, .a=0x74, .x=0x23, .y=0xf0, .sp=0xa9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xf0}, {.addr=0xb38c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb38d, .a=0x74, .x=0x23, .y=0xf0, .sp=0xaa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xf0}, {.addr=0xb38c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb38c, .value=0x8e, .type=IO_READ},
        {.addr=0xb38d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xc370, .a=0x7f, .x=0xb3, .y=0x6e, .sp=0xf4, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xcf}, {.addr=0xc370, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc371, .a=0x7f, .x=0xb3, .y=0x6e, .sp=0xf5, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xcf}, {.addr=0xc370, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc370, .value=0x8e, .type=IO_READ},
        {.addr=0xc371, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8d96, .a=0xc2, .x=0xcf, .y=0x26, .sp=0x1f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xfd}, {.addr=0x8d96, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8d97, .a=0xc2, .x=0xcf, .y=0x26, .sp=0x20, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xfd}, {.addr=0x8d96, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8d96, .value=0x8e, .type=IO_READ},
        {.addr=0x8d97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xa397, .a=0x1d, .x=0x74, .y=0x16, .sp=0x44, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xee}, {.addr=0xa397, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa398, .a=0x1d, .x=0x74, .y=0x16, .sp=0x45, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xee}, {.addr=0xa397, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa397, .value=0x8e, .type=IO_READ},
        {.addr=0xa398, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7bd5, .a=0x1e, .x=0xc9, .y=0x73, .sp=0xf6, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x51}, {.addr=0x7bd5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7bd6, .a=0x1e, .x=0xc9, .y=0x73, .sp=0xf7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x51}, {.addr=0x7bd5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7bd5, .value=0x8e, .type=IO_READ},
        {.addr=0x7bd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xda63, .a=0x58, .x=0x68, .y=0x9d, .sp=0xbd, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x12}, {.addr=0xda63, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xda64, .a=0x58, .x=0x68, .y=0x9d, .sp=0xbe, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x12}, {.addr=0xda63, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xda63, .value=0x8e, .type=IO_READ},
        {.addr=0xda64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xf6a9, .a=0x3e, .x=0x7d, .y=0xe5, .sp=0xc1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x7d}, {.addr=0xf6a9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf6aa, .a=0x3e, .x=0x7d, .y=0xe5, .sp=0xc2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x7d}, {.addr=0xf6a9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf6a9, .value=0x8e, .type=IO_READ},
        {.addr=0xf6aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xae02, .a=0x14, .x=0x85, .y=0x75, .sp=0x6e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x44}, {.addr=0xae02, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae03, .a=0x14, .x=0x85, .y=0x75, .sp=0x6f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x44}, {.addr=0xae02, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae02, .value=0x8e, .type=IO_READ},
        {.addr=0xae03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x097c, .a=0x20, .x=0xa9, .y=0x43, .sp=0xf0, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xf6}, {.addr=0x097c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x097d, .a=0x20, .x=0xa9, .y=0x43, .sp=0xf1, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xf6}, {.addr=0x097c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x097c, .value=0x8e, .type=IO_READ},
        {.addr=0x097d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x2dea, .a=0x20, .x=0x03, .y=0x47, .sp=0x7e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xb0}, {.addr=0x2dea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2deb, .a=0x20, .x=0x03, .y=0x47, .sp=0x7f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xb0}, {.addr=0x2dea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2dea, .value=0x8e, .type=IO_READ},
        {.addr=0x2deb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xbcd0, .a=0xd3, .x=0x4e, .y=0x96, .sp=0x1c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xec}, {.addr=0xbcd0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbcd1, .a=0xd3, .x=0x4e, .y=0x96, .sp=0x1d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xec}, {.addr=0xbcd0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbcd0, .value=0x8e, .type=IO_READ},
        {.addr=0xbcd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x65fa, .a=0xb4, .x=0x8c, .y=0x6f, .sp=0xdc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x92}, {.addr=0x65fa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x65fb, .a=0xb4, .x=0x8c, .y=0x6f, .sp=0xdd, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x92}, {.addr=0x65fa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x65fa, .value=0x8e, .type=IO_READ},
        {.addr=0x65fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x156f, .a=0x89, .x=0xe5, .y=0xc3, .sp=0xd2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xd9}, {.addr=0x156f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1570, .a=0x89, .x=0xe5, .y=0xc3, .sp=0xd3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xd9}, {.addr=0x156f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x156f, .value=0x8e, .type=IO_READ},
        {.addr=0x1570, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x888b, .a=0xdd, .x=0x80, .y=0xc7, .sp=0x92, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xcd}, {.addr=0x888b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x888c, .a=0xdd, .x=0x80, .y=0xc7, .sp=0x93, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xcd}, {.addr=0x888b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x888b, .value=0x8e, .type=IO_READ},
        {.addr=0x888c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xd5ed, .a=0xc9, .x=0x2a, .y=0x46, .sp=0x73, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x04}, {.addr=0xd5ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd5ee, .a=0xc9, .x=0x2a, .y=0x46, .sp=0x74, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x04}, {.addr=0xd5ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd5ed, .value=0x8e, .type=IO_READ},
        {.addr=0xd5ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xce1c, .a=0x92, .x=0x07, .y=0x70, .sp=0xfa, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x92}, {.addr=0xce1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce1d, .a=0x92, .x=0x07, .y=0x70, .sp=0xfb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x92}, {.addr=0xce1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce1c, .value=0x8e, .type=IO_READ},
        {.addr=0xce1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x13eb, .a=0xa8, .x=0xf9, .y=0x06, .sp=0x78, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xa3}, {.addr=0x13eb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x13ec, .a=0xa8, .x=0xf9, .y=0x06, .sp=0x79, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xa3}, {.addr=0x13eb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x13eb, .value=0x8e, .type=IO_READ},
        {.addr=0x13ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x38fc, .a=0x67, .x=0x60, .y=0xbf, .sp=0x4e, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x80}, {.addr=0x38fc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x38fd, .a=0x67, .x=0x60, .y=0xbf, .sp=0x4f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x80}, {.addr=0x38fc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x38fc, .value=0x8e, .type=IO_READ},
        {.addr=0x38fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xc099, .a=0xf2, .x=0x72, .y=0xdb, .sp=0x2d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xeb}, {.addr=0xc099, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc09a, .a=0xf2, .x=0x72, .y=0xdb, .sp=0x2e, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xeb}, {.addr=0xc099, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc099, .value=0x8e, .type=IO_READ},
        {.addr=0xc09a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9b22, .a=0xad, .x=0x83, .y=0x15, .sp=0x1c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xdd}, {.addr=0x9b22, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9b23, .a=0xad, .x=0x83, .y=0x15, .sp=0x1d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xdd}, {.addr=0x9b22, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9b22, .value=0x8e, .type=IO_READ},
        {.addr=0x9b23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x4839, .a=0xbf, .x=0x91, .y=0xee, .sp=0xa9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xf5}, {.addr=0x4839, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x483a, .a=0xbf, .x=0x91, .y=0xee, .sp=0xaa, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xf5}, {.addr=0x4839, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4839, .value=0x8e, .type=IO_READ},
        {.addr=0x483a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x4baf, .a=0x2c, .x=0xdd, .y=0xae, .sp=0xea, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x60}, {.addr=0x4baf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4bb0, .a=0x2c, .x=0xdd, .y=0xae, .sp=0xeb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x60}, {.addr=0x4baf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4baf, .value=0x8e, .type=IO_READ},
        {.addr=0x4bb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0cad, .a=0x45, .x=0x4b, .y=0x25, .sp=0x95, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xd0}, {.addr=0x0cad, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0cae, .a=0x45, .x=0x4b, .y=0x25, .sp=0x96, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd0}, {.addr=0x0cad, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0cad, .value=0x8e, .type=IO_READ},
        {.addr=0x0cae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x56fd, .a=0x46, .x=0x2c, .y=0x36, .sp=0x2a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x55}, {.addr=0x56fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x56fe, .a=0x46, .x=0x2c, .y=0x36, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x55}, {.addr=0x56fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x56fd, .value=0x8e, .type=IO_READ},
        {.addr=0x56fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x32d1, .a=0x0e, .x=0xf3, .y=0xf4, .sp=0x01, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xf2}, {.addr=0x32d1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x32d2, .a=0x0e, .x=0xf3, .y=0xf4, .sp=0x02, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xf2}, {.addr=0x32d1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x32d1, .value=0x8e, .type=IO_READ},
        {.addr=0x32d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xdaf1, .a=0xc3, .x=0x9e, .y=0x7e, .sp=0xb8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xb2}, {.addr=0xdaf1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdaf2, .a=0xc3, .x=0x9e, .y=0x7e, .sp=0xb9, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xb2}, {.addr=0xdaf1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdaf1, .value=0x8e, .type=IO_READ},
        {.addr=0xdaf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x157e, .a=0x23, .x=0x47, .y=0xd0, .sp=0x53, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xfb}, {.addr=0x157e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x157f, .a=0x23, .x=0x47, .y=0xd0, .sp=0x54, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xfb}, {.addr=0x157e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x157e, .value=0x8e, .type=IO_READ},
        {.addr=0x157f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x702e, .a=0x2e, .x=0xcd, .y=0x07, .sp=0x67, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x12}, {.addr=0x702e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x702f, .a=0x2e, .x=0xcd, .y=0x07, .sp=0x68, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x12}, {.addr=0x702e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x702e, .value=0x8e, .type=IO_READ},
        {.addr=0x702f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x5a21, .a=0x7b, .x=0xb0, .y=0xcd, .sp=0x35, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x06}, {.addr=0x5a21, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5a22, .a=0x7b, .x=0xb0, .y=0xcd, .sp=0x36, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x06}, {.addr=0x5a21, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5a21, .value=0x8e, .type=IO_READ},
        {.addr=0x5a22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x6b01, .a=0x50, .x=0x89, .y=0x3d, .sp=0xde, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xfb}, {.addr=0x6b01, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6b02, .a=0x50, .x=0x89, .y=0x3d, .sp=0xdf, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xfb}, {.addr=0x6b01, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6b01, .value=0x8e, .type=IO_READ},
        {.addr=0x6b02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x38a0, .a=0x66, .x=0xd9, .y=0xe0, .sp=0x12, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x7c}, {.addr=0x38a0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x38a1, .a=0x66, .x=0xd9, .y=0xe0, .sp=0x13, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x7c}, {.addr=0x38a0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x38a0, .value=0x8e, .type=IO_READ},
        {.addr=0x38a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1618, .a=0xfb, .x=0xb3, .y=0x47, .sp=0xaa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0x1618, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1619, .a=0xfb, .x=0xb3, .y=0x47, .sp=0xab, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0x1618, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1618, .value=0x8e, .type=IO_READ},
        {.addr=0x1619, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xaee6, .a=0xac, .x=0x08, .y=0xe5, .sp=0xf6, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xfa}, {.addr=0xaee6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaee7, .a=0xac, .x=0x08, .y=0xe5, .sp=0xf7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xfa}, {.addr=0xaee6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaee6, .value=0x8e, .type=IO_READ},
        {.addr=0xaee7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x4fd9, .a=0x73, .x=0x42, .y=0xed, .sp=0xaa, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xb3}, {.addr=0x4fd9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4fda, .a=0x73, .x=0x42, .y=0xed, .sp=0xab, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb3}, {.addr=0x4fd9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4fd9, .value=0x8e, .type=IO_READ},
        {.addr=0x4fda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xc79d, .a=0x75, .x=0x46, .y=0xdc, .sp=0xb9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x94}, {.addr=0xc79d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc79e, .a=0x75, .x=0x46, .y=0xdc, .sp=0xba, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x94}, {.addr=0xc79d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc79d, .value=0x8e, .type=IO_READ},
        {.addr=0xc79e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x04ed, .a=0xe8, .x=0xdd, .y=0xdc, .sp=0x79, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x15}, {.addr=0x04ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x04ee, .a=0xe8, .x=0xdd, .y=0xdc, .sp=0x7a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x15}, {.addr=0x04ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x04ed, .value=0x8e, .type=IO_READ},
        {.addr=0x04ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x1481, .a=0x5b, .x=0xf0, .y=0x8f, .sp=0xa7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x37}, {.addr=0x1481, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1482, .a=0x5b, .x=0xf0, .y=0x8f, .sp=0xa8, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x37}, {.addr=0x1481, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1481, .value=0x8e, .type=IO_READ},
        {.addr=0x1482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8c5a, .a=0x74, .x=0xca, .y=0xed, .sp=0x22, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xdc}, {.addr=0x8c5a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8c5b, .a=0x74, .x=0xca, .y=0xed, .sp=0x23, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xdc}, {.addr=0x8c5a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8c5a, .value=0x8e, .type=IO_READ},
        {.addr=0x8c5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc398, .a=0x8b, .x=0x95, .y=0x88, .sp=0x62, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x2d}, {.addr=0xc398, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc399, .a=0x8b, .x=0x95, .y=0x88, .sp=0x63, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x2d}, {.addr=0xc398, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc398, .value=0x8e, .type=IO_READ},
        {.addr=0xc399, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x9761, .a=0x48, .x=0xf2, .y=0xc7, .sp=0x7f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x0c}, {.addr=0x9761, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9762, .a=0x48, .x=0xf2, .y=0xc7, .sp=0x80, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x0c}, {.addr=0x9761, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9761, .value=0x8e, .type=IO_READ},
        {.addr=0x9762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x0f55, .a=0xfb, .x=0x75, .y=0x06, .sp=0xfb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x56}, {.addr=0x0f55, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f56, .a=0xfb, .x=0x75, .y=0x06, .sp=0xfc, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x56}, {.addr=0x0f55, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f55, .value=0x8e, .type=IO_READ},
        {.addr=0x0f56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x6bf6, .a=0xef, .x=0xad, .y=0x2b, .sp=0x89, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xc4}, {.addr=0x6bf6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6bf7, .a=0xef, .x=0xad, .y=0x2b, .sp=0x8a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xc4}, {.addr=0x6bf6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6bf6, .value=0x8e, .type=IO_READ},
        {.addr=0x6bf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x3502, .a=0x5c, .x=0xeb, .y=0x80, .sp=0x98, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x3a}, {.addr=0x3502, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3503, .a=0x5c, .x=0xeb, .y=0x80, .sp=0x99, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x3a}, {.addr=0x3502, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3502, .value=0x8e, .type=IO_READ},
        {.addr=0x3503, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x8c60, .a=0xb0, .x=0xd7, .y=0xd1, .sp=0xa8, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xaf}, {.addr=0x8c60, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8c61, .a=0xb0, .x=0xd7, .y=0xd1, .sp=0xa9, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xaf}, {.addr=0x8c60, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8c60, .value=0x8e, .type=IO_READ},
        {.addr=0x8c61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x7ac5, .a=0x3a, .x=0xfa, .y=0x36, .sp=0xf1, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x77}, {.addr=0x7ac5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ac6, .a=0x3a, .x=0xfa, .y=0x36, .sp=0xf2, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x77}, {.addr=0x7ac5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7ac5, .value=0x8e, .type=IO_READ},
        {.addr=0x7ac6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x8394, .a=0xca, .x=0xd8, .y=0xa6, .sp=0xab, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x02}, {.addr=0x8394, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8395, .a=0xca, .x=0xd8, .y=0xa6, .sp=0xac, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x02}, {.addr=0x8394, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8394, .value=0x8e, .type=IO_READ},
        {.addr=0x8395, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x6699, .a=0xad, .x=0x43, .y=0x3d, .sp=0xad, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xd9}, {.addr=0x6699, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x669a, .a=0xad, .x=0x43, .y=0x3d, .sp=0xae, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xd9}, {.addr=0x6699, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6699, .value=0x8e, .type=IO_READ},
        {.addr=0x669a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xb622, .a=0x88, .x=0x95, .y=0x37, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xbd}, {.addr=0xb622, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb623, .a=0x88, .x=0x95, .y=0x37, .sp=0xa3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xbd}, {.addr=0xb622, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb622, .value=0x8e, .type=IO_READ},
        {.addr=0xb623, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7e36, .a=0x85, .x=0xc5, .y=0xd6, .sp=0x17, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x8f}, {.addr=0x7e36, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7e37, .a=0x85, .x=0xc5, .y=0xd6, .sp=0x18, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x8f}, {.addr=0x7e36, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7e36, .value=0x8e, .type=IO_READ},
        {.addr=0x7e37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5ba3, .a=0xc9, .x=0xae, .y=0x9c, .sp=0xea, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xca}, {.addr=0x5ba3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5ba4, .a=0xc9, .x=0xae, .y=0x9c, .sp=0xeb, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xca}, {.addr=0x5ba3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5ba3, .value=0x8e, .type=IO_READ},
        {.addr=0x5ba4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xe616, .a=0xae, .x=0x0b, .y=0xdc, .sp=0x37, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0xe616, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe617, .a=0xae, .x=0x0b, .y=0xdc, .sp=0x38, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0xe616, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe616, .value=0x8e, .type=IO_READ},
        {.addr=0xe617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xc29b, .a=0x6c, .x=0x64, .y=0x55, .sp=0x0b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xf1}, {.addr=0xc29b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc29c, .a=0x6c, .x=0x64, .y=0x55, .sp=0x0c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xf1}, {.addr=0xc29b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc29b, .value=0x8e, .type=IO_READ},
        {.addr=0xc29c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xf0e7, .a=0xad, .x=0x2a, .y=0xc5, .sp=0xc7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xa0}, {.addr=0xf0e7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf0e8, .a=0xad, .x=0x2a, .y=0xc5, .sp=0xc8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xa0}, {.addr=0xf0e7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf0e7, .value=0x8e, .type=IO_READ},
        {.addr=0xf0e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x2b27, .a=0x64, .x=0x9a, .y=0xe4, .sp=0x3c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xe2}, {.addr=0x2b27, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2b28, .a=0x64, .x=0x9a, .y=0xe4, .sp=0x3d, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xe2}, {.addr=0x2b27, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2b27, .value=0x8e, .type=IO_READ},
        {.addr=0x2b28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x9c1f, .a=0x6e, .x=0x1b, .y=0xdc, .sp=0xb8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x18}, {.addr=0x9c1f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9c20, .a=0x6e, .x=0x1b, .y=0xdc, .sp=0xb9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x18}, {.addr=0x9c1f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9c1f, .value=0x8e, .type=IO_READ},
        {.addr=0x9c20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0cf5, .a=0x79, .x=0x8c, .y=0x0e, .sp=0xcf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xbe}, {.addr=0x0cf5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0cf6, .a=0x79, .x=0x8c, .y=0x0e, .sp=0xd0, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xbe}, {.addr=0x0cf5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0cf5, .value=0x8e, .type=IO_READ},
        {.addr=0x0cf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2843, .a=0x93, .x=0xdc, .y=0x81, .sp=0xba, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x74}, {.addr=0x2843, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2844, .a=0x93, .x=0xdc, .y=0x81, .sp=0xbb, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x74}, {.addr=0x2843, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2843, .value=0x8e, .type=IO_READ},
        {.addr=0x2844, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x7f0c, .a=0x92, .x=0x5f, .y=0x57, .sp=0x7d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x1a}, {.addr=0x7f0c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7f0d, .a=0x92, .x=0x5f, .y=0x57, .sp=0x7e, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x1a}, {.addr=0x7f0c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7f0c, .value=0x8e, .type=IO_READ},
        {.addr=0x7f0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xab8e, .a=0x17, .x=0x6c, .y=0x29, .sp=0x41, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xfd}, {.addr=0xab8e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xab8f, .a=0x17, .x=0x6c, .y=0x29, .sp=0x42, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xfd}, {.addr=0xab8e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xab8e, .value=0x8e, .type=IO_READ},
        {.addr=0xab8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x0d49, .a=0x4a, .x=0x6f, .y=0xdb, .sp=0xdb, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x27}, {.addr=0x0d49, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d4a, .a=0x4a, .x=0x6f, .y=0xdb, .sp=0xdc, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x27}, {.addr=0x0d49, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d49, .value=0x8e, .type=IO_READ},
        {.addr=0x0d4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xef5c, .a=0xca, .x=0x89, .y=0x65, .sp=0xd9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x16}, {.addr=0xef5c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xef5d, .a=0xca, .x=0x89, .y=0x65, .sp=0xda, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x16}, {.addr=0xef5c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xef5c, .value=0x8e, .type=IO_READ},
        {.addr=0xef5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xc752, .a=0xe2, .x=0xa1, .y=0x52, .sp=0x8b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x27}, {.addr=0xc752, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc753, .a=0xe2, .x=0xa1, .y=0x52, .sp=0x8c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x27}, {.addr=0xc752, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc752, .value=0x8e, .type=IO_READ},
        {.addr=0xc753, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xfeab, .a=0xcb, .x=0xf0, .y=0xb0, .sp=0x6b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x23}, {.addr=0xfeab, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfeac, .a=0xcb, .x=0xf0, .y=0xb0, .sp=0x6c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x23}, {.addr=0xfeab, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfeab, .value=0x8e, .type=IO_READ},
        {.addr=0xfeac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x806d, .a=0x45, .x=0xb3, .y=0xbc, .sp=0x0c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xea}, {.addr=0x806d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x806e, .a=0x45, .x=0xb3, .y=0xbc, .sp=0x0d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xea}, {.addr=0x806d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x806d, .value=0x8e, .type=IO_READ},
        {.addr=0x806e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x61b9, .a=0x04, .x=0x09, .y=0xd7, .sp=0x4c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x85}, {.addr=0x61b9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x61ba, .a=0x04, .x=0x09, .y=0xd7, .sp=0x4d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x85}, {.addr=0x61b9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x61b9, .value=0x8e, .type=IO_READ},
        {.addr=0x61ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x5e41, .a=0xc7, .x=0xc9, .y=0x3b, .sp=0x70, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x31}, {.addr=0x5e41, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5e42, .a=0xc7, .x=0xc9, .y=0x3b, .sp=0x71, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x31}, {.addr=0x5e41, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5e41, .value=0x8e, .type=IO_READ},
        {.addr=0x5e42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x6661, .a=0xbf, .x=0xbf, .y=0xd8, .sp=0xc1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x89}, {.addr=0x6661, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6662, .a=0xbf, .x=0xbf, .y=0xd8, .sp=0xc2, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x89}, {.addr=0x6661, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6661, .value=0x8e, .type=IO_READ},
        {.addr=0x6662, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xae6e, .a=0x5c, .x=0x8b, .y=0x05, .sp=0x87, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x28}, {.addr=0xae6e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae6f, .a=0x5c, .x=0x8b, .y=0x05, .sp=0x88, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x28}, {.addr=0xae6e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae6e, .value=0x8e, .type=IO_READ},
        {.addr=0xae6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x82e0, .a=0xf3, .x=0xc2, .y=0x40, .sp=0xc8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x26}, {.addr=0x82e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x82e1, .a=0xf3, .x=0xc2, .y=0x40, .sp=0xc9, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x26}, {.addr=0x82e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x82e0, .value=0x8e, .type=IO_READ},
        {.addr=0x82e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x8577, .a=0x4c, .x=0xf6, .y=0x86, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xab}, {.addr=0x8577, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8578, .a=0x4c, .x=0xf6, .y=0x86, .sp=0x9f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xab}, {.addr=0x8577, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8577, .value=0x8e, .type=IO_READ},
        {.addr=0x8578, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0100) {
    const struct CPU_State initial_cpu = {.pc=0xfe9d, .a=0x38, .x=0xb2, .y=0xda, .sp=0x89, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xe3}, {.addr=0xfe9d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfe9e, .a=0x38, .x=0xb2, .y=0xda, .sp=0x8a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xe3}, {.addr=0xfe9d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfe9d, .value=0x8e, .type=IO_READ},
        {.addr=0xfe9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0101) {
    const struct CPU_State initial_cpu = {.pc=0x2aa7, .a=0x17, .x=0xd2, .y=0x1f, .sp=0x4b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xc2}, {.addr=0x2aa7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2aa8, .a=0x17, .x=0xd2, .y=0x1f, .sp=0x4c, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xc2}, {.addr=0x2aa7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2aa7, .value=0x8e, .type=IO_READ},
        {.addr=0x2aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0102) {
    const struct CPU_State initial_cpu = {.pc=0x7b93, .a=0x80, .x=0x12, .y=0x1b, .sp=0x43, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x31}, {.addr=0x7b93, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7b94, .a=0x80, .x=0x12, .y=0x1b, .sp=0x44, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x31}, {.addr=0x7b93, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7b93, .value=0x8e, .type=IO_READ},
        {.addr=0x7b94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0103) {
    const struct CPU_State initial_cpu = {.pc=0x0e89, .a=0x01, .x=0xa1, .y=0x37, .sp=0xea, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xf8}, {.addr=0x0e89, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0e8a, .a=0x01, .x=0xa1, .y=0x37, .sp=0xeb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xf8}, {.addr=0x0e89, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0e89, .value=0x8e, .type=IO_READ},
        {.addr=0x0e8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0104) {
    const struct CPU_State initial_cpu = {.pc=0x21d7, .a=0x41, .x=0x6b, .y=0x36, .sp=0x6f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x72}, {.addr=0x21d7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x21d8, .a=0x41, .x=0x6b, .y=0x36, .sp=0x70, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x72}, {.addr=0x21d7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x21d7, .value=0x8e, .type=IO_READ},
        {.addr=0x21d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0105) {
    const struct CPU_State initial_cpu = {.pc=0xbc06, .a=0x19, .x=0xaf, .y=0x75, .sp=0x34, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x2b}, {.addr=0xbc06, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbc07, .a=0x19, .x=0xaf, .y=0x75, .sp=0x35, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x2b}, {.addr=0xbc06, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbc06, .value=0x8e, .type=IO_READ},
        {.addr=0xbc07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb990, .a=0x70, .x=0xfb, .y=0x21, .sp=0x13, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x25}, {.addr=0xb990, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb991, .a=0x70, .x=0xfb, .y=0x21, .sp=0x14, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x25}, {.addr=0xb990, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb990, .value=0x8e, .type=IO_READ},
        {.addr=0xb991, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0107) {
    const struct CPU_State initial_cpu = {.pc=0xd219, .a=0x0e, .x=0x46, .y=0xc0, .sp=0x99, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x74}, {.addr=0xd219, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd21a, .a=0x0e, .x=0x46, .y=0xc0, .sp=0x9a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x74}, {.addr=0xd219, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd219, .value=0x8e, .type=IO_READ},
        {.addr=0xd21a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0108) {
    const struct CPU_State initial_cpu = {.pc=0xb228, .a=0x26, .x=0x44, .y=0x3a, .sp=0x9f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x79}, {.addr=0xb228, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb229, .a=0x26, .x=0x44, .y=0x3a, .sp=0xa0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x79}, {.addr=0xb228, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb228, .value=0x8e, .type=IO_READ},
        {.addr=0xb229, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0109) {
    const struct CPU_State initial_cpu = {.pc=0x2fc3, .a=0xae, .x=0xb2, .y=0xab, .sp=0x37, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x2fc3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2fc4, .a=0xae, .x=0xb2, .y=0xab, .sp=0x38, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x2fc3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2fc3, .value=0x8e, .type=IO_READ},
        {.addr=0x2fc4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010A) {
    const struct CPU_State initial_cpu = {.pc=0xb60c, .a=0x1e, .x=0xec, .y=0x25, .sp=0x9d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xb5}, {.addr=0xb60c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb60d, .a=0x1e, .x=0xec, .y=0x25, .sp=0x9e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xb5}, {.addr=0xb60c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb60c, .value=0x8e, .type=IO_READ},
        {.addr=0xb60d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010B) {
    const struct CPU_State initial_cpu = {.pc=0xe7e9, .a=0x52, .x=0xdc, .y=0x1d, .sp=0xce, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xed}, {.addr=0xe7e9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe7ea, .a=0x52, .x=0xdc, .y=0x1d, .sp=0xcf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xed}, {.addr=0xe7e9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe7e9, .value=0x8e, .type=IO_READ},
        {.addr=0xe7ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010C) {
    const struct CPU_State initial_cpu = {.pc=0x9481, .a=0x4c, .x=0xb6, .y=0x49, .sp=0x71, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xe0}, {.addr=0x9481, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9482, .a=0x4c, .x=0xb6, .y=0x49, .sp=0x72, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xe0}, {.addr=0x9481, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9481, .value=0x8e, .type=IO_READ},
        {.addr=0x9482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010D) {
    const struct CPU_State initial_cpu = {.pc=0xd57a, .a=0x16, .x=0x4f, .y=0xa3, .sp=0xf8, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x42}, {.addr=0xd57a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd57b, .a=0x16, .x=0x4f, .y=0xa3, .sp=0xf9, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x42}, {.addr=0xd57a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd57a, .value=0x8e, .type=IO_READ},
        {.addr=0xd57b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010E) {
    const struct CPU_State initial_cpu = {.pc=0x459a, .a=0x2d, .x=0x91, .y=0xc3, .sp=0x33, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x9d}, {.addr=0x459a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x459b, .a=0x2d, .x=0x91, .y=0xc3, .sp=0x34, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x9d}, {.addr=0x459a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x459a, .value=0x8e, .type=IO_READ},
        {.addr=0x459b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_010F) {
    const struct CPU_State initial_cpu = {.pc=0x0d8c, .a=0xfe, .x=0x9e, .y=0xdf, .sp=0x13, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x24}, {.addr=0x0d8c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d8d, .a=0xfe, .x=0x9e, .y=0xdf, .sp=0x14, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x24}, {.addr=0x0d8c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d8c, .value=0x8e, .type=IO_READ},
        {.addr=0x0d8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0110) {
    const struct CPU_State initial_cpu = {.pc=0x3c2e, .a=0xd0, .x=0x10, .y=0x06, .sp=0xdd, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x7d}, {.addr=0x3c2e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3c2f, .a=0xd0, .x=0x10, .y=0x06, .sp=0xde, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x7d}, {.addr=0x3c2e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3c2e, .value=0x8e, .type=IO_READ},
        {.addr=0x3c2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0111) {
    const struct CPU_State initial_cpu = {.pc=0x8b53, .a=0x4e, .x=0xcd, .y=0x92, .sp=0x68, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x3c}, {.addr=0x8b53, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8b54, .a=0x4e, .x=0xcd, .y=0x92, .sp=0x69, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x3c}, {.addr=0x8b53, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8b53, .value=0x8e, .type=IO_READ},
        {.addr=0x8b54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0112) {
    const struct CPU_State initial_cpu = {.pc=0x784d, .a=0xd9, .x=0x36, .y=0xf0, .sp=0xb5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xba}, {.addr=0x784d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x784e, .a=0xd9, .x=0x36, .y=0xf0, .sp=0xb6, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xba}, {.addr=0x784d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x784d, .value=0x8e, .type=IO_READ},
        {.addr=0x784e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0113) {
    const struct CPU_State initial_cpu = {.pc=0xbdf0, .a=0xc7, .x=0xec, .y=0x7c, .sp=0x3d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x1a}, {.addr=0xbdf0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbdf1, .a=0xc7, .x=0xec, .y=0x7c, .sp=0x3e, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x1a}, {.addr=0xbdf0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbdf0, .value=0x8e, .type=IO_READ},
        {.addr=0xbdf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0114) {
    const struct CPU_State initial_cpu = {.pc=0x465d, .a=0xff, .x=0x02, .y=0x52, .sp=0x49, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x10}, {.addr=0x465d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x465e, .a=0xff, .x=0x02, .y=0x52, .sp=0x4a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x10}, {.addr=0x465d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x465d, .value=0x8e, .type=IO_READ},
        {.addr=0x465e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0115) {
    const struct CPU_State initial_cpu = {.pc=0x710d, .a=0x35, .x=0x8e, .y=0xc2, .sp=0xa0, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x56}, {.addr=0x710d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x710e, .a=0x35, .x=0x8e, .y=0xc2, .sp=0xa1, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x56}, {.addr=0x710d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x710d, .value=0x8e, .type=IO_READ},
        {.addr=0x710e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0116) {
    const struct CPU_State initial_cpu = {.pc=0x3a6f, .a=0x66, .x=0xe7, .y=0xa3, .sp=0xa8, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x76}, {.addr=0x3a6f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a70, .a=0x66, .x=0xe7, .y=0xa3, .sp=0xa9, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x76}, {.addr=0x3a6f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a6f, .value=0x8e, .type=IO_READ},
        {.addr=0x3a70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2f3f, .a=0x08, .x=0xda, .y=0xda, .sp=0x52, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xce}, {.addr=0x2f3f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2f40, .a=0x08, .x=0xda, .y=0xda, .sp=0x53, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xce}, {.addr=0x2f3f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2f3f, .value=0x8e, .type=IO_READ},
        {.addr=0x2f40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0118) {
    const struct CPU_State initial_cpu = {.pc=0xea5b, .a=0xd9, .x=0x2b, .y=0x98, .sp=0x8a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x83}, {.addr=0xea5b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xea5c, .a=0xd9, .x=0x2b, .y=0x98, .sp=0x8b, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x83}, {.addr=0xea5b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xea5b, .value=0x8e, .type=IO_READ},
        {.addr=0xea5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0119) {
    const struct CPU_State initial_cpu = {.pc=0x00c8, .a=0x71, .x=0xd3, .y=0xe1, .sp=0x4b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x8e}, {.addr=0x014c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x00c9, .a=0x71, .x=0xd3, .y=0xe1, .sp=0x4c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x8e}, {.addr=0x014c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x00c8, .value=0x8e, .type=IO_READ},
        {.addr=0x00c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011A) {
    const struct CPU_State initial_cpu = {.pc=0xe8da, .a=0x62, .x=0x09, .y=0xe7, .sp=0x0d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x52}, {.addr=0xe8da, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8db, .a=0x62, .x=0x09, .y=0xe7, .sp=0x0e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x52}, {.addr=0xe8da, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8da, .value=0x8e, .type=IO_READ},
        {.addr=0xe8db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011B) {
    const struct CPU_State initial_cpu = {.pc=0x26c3, .a=0x76, .x=0xf8, .y=0xc0, .sp=0x03, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x1e}, {.addr=0x26c3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x26c4, .a=0x76, .x=0xf8, .y=0xc0, .sp=0x04, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x1e}, {.addr=0x26c3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x26c3, .value=0x8e, .type=IO_READ},
        {.addr=0x26c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011C) {
    const struct CPU_State initial_cpu = {.pc=0xc892, .a=0x2f, .x=0xa4, .y=0xfb, .sp=0xf3, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x3f}, {.addr=0xc892, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc893, .a=0x2f, .x=0xa4, .y=0xfb, .sp=0xf4, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x3f}, {.addr=0xc892, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc892, .value=0x8e, .type=IO_READ},
        {.addr=0xc893, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4ccc, .a=0x22, .x=0x68, .y=0xf4, .sp=0x52, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x74}, {.addr=0x4ccc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4ccd, .a=0x22, .x=0x68, .y=0xf4, .sp=0x53, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x74}, {.addr=0x4ccc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4ccc, .value=0x8e, .type=IO_READ},
        {.addr=0x4ccd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011E) {
    const struct CPU_State initial_cpu = {.pc=0xeb92, .a=0xb4, .x=0x64, .y=0x55, .sp=0x59, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xab}, {.addr=0xeb92, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeb93, .a=0xb4, .x=0x64, .y=0x55, .sp=0x5a, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xab}, {.addr=0xeb92, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeb92, .value=0x8e, .type=IO_READ},
        {.addr=0xeb93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_011F) {
    const struct CPU_State initial_cpu = {.pc=0x8a9e, .a=0x48, .x=0x25, .y=0x47, .sp=0x19, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xc1}, {.addr=0x8a9e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a9f, .a=0x48, .x=0x25, .y=0x47, .sp=0x1a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xc1}, {.addr=0x8a9e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a9e, .value=0x8e, .type=IO_READ},
        {.addr=0x8a9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0120) {
    const struct CPU_State initial_cpu = {.pc=0x9cbc, .a=0x13, .x=0x20, .y=0xf0, .sp=0xb5, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x2f}, {.addr=0x9cbc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9cbd, .a=0x13, .x=0x20, .y=0xf0, .sp=0xb6, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x2f}, {.addr=0x9cbc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9cbc, .value=0x8e, .type=IO_READ},
        {.addr=0x9cbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6a94, .a=0x91, .x=0x78, .y=0x8d, .sp=0x40, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xad}, {.addr=0x6a94, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6a95, .a=0x91, .x=0x78, .y=0x8d, .sp=0x41, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xad}, {.addr=0x6a94, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6a94, .value=0x8e, .type=IO_READ},
        {.addr=0x6a95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2bf0, .a=0x50, .x=0xa7, .y=0x22, .sp=0x7c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xf0}, {.addr=0x2bf0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bf1, .a=0x50, .x=0xa7, .y=0x22, .sp=0x7d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xf0}, {.addr=0x2bf0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bf0, .value=0x8e, .type=IO_READ},
        {.addr=0x2bf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0123) {
    const struct CPU_State initial_cpu = {.pc=0xbf45, .a=0xf3, .x=0xe5, .y=0xb0, .sp=0x74, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xb8}, {.addr=0xbf45, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbf46, .a=0xf3, .x=0xe5, .y=0xb0, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xb8}, {.addr=0xbf45, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbf45, .value=0x8e, .type=IO_READ},
        {.addr=0xbf46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0124) {
    const struct CPU_State initial_cpu = {.pc=0x0800, .a=0x35, .x=0xd6, .y=0x69, .sp=0x8b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xb8}, {.addr=0x0800, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0801, .a=0x35, .x=0xd6, .y=0x69, .sp=0x8c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xb8}, {.addr=0x0800, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0800, .value=0x8e, .type=IO_READ},
        {.addr=0x0801, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0125) {
    const struct CPU_State initial_cpu = {.pc=0xb4b8, .a=0x3f, .x=0x88, .y=0xd0, .sp=0x91, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x50}, {.addr=0xb4b8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb4b9, .a=0x3f, .x=0x88, .y=0xd0, .sp=0x92, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x50}, {.addr=0xb4b8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb4b8, .value=0x8e, .type=IO_READ},
        {.addr=0xb4b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0126) {
    const struct CPU_State initial_cpu = {.pc=0x4244, .a=0x8f, .x=0x29, .y=0xde, .sp=0x8e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x56}, {.addr=0x4244, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4245, .a=0x8f, .x=0x29, .y=0xde, .sp=0x8f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x56}, {.addr=0x4244, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4244, .value=0x8e, .type=IO_READ},
        {.addr=0x4245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0127) {
    const struct CPU_State initial_cpu = {.pc=0xc3a5, .a=0x93, .x=0x8a, .y=0xe7, .sp=0x70, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x46}, {.addr=0xc3a5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc3a6, .a=0x93, .x=0x8a, .y=0xe7, .sp=0x71, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x46}, {.addr=0xc3a5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc3a5, .value=0x8e, .type=IO_READ},
        {.addr=0xc3a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3751, .a=0x1f, .x=0x3c, .y=0xf7, .sp=0x6a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x50}, {.addr=0x3751, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3752, .a=0x1f, .x=0x3c, .y=0xf7, .sp=0x6b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x50}, {.addr=0x3751, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3751, .value=0x8e, .type=IO_READ},
        {.addr=0x3752, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0129) {
    const struct CPU_State initial_cpu = {.pc=0x7104, .a=0x60, .x=0x3b, .y=0xfe, .sp=0x8f, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x35}, {.addr=0x7104, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7105, .a=0x60, .x=0x3b, .y=0xfe, .sp=0x90, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x35}, {.addr=0x7104, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7104, .value=0x8e, .type=IO_READ},
        {.addr=0x7105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012A) {
    const struct CPU_State initial_cpu = {.pc=0x9f53, .a=0x4b, .x=0x5b, .y=0xe7, .sp=0x28, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x94}, {.addr=0x9f53, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9f54, .a=0x4b, .x=0x5b, .y=0xe7, .sp=0x29, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x94}, {.addr=0x9f53, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9f53, .value=0x8e, .type=IO_READ},
        {.addr=0x9f54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012B) {
    const struct CPU_State initial_cpu = {.pc=0xe46c, .a=0x6b, .x=0x3f, .y=0xc2, .sp=0x39, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xfb}, {.addr=0xe46c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe46d, .a=0x6b, .x=0x3f, .y=0xc2, .sp=0x3a, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xfb}, {.addr=0xe46c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe46c, .value=0x8e, .type=IO_READ},
        {.addr=0xe46d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012C) {
    const struct CPU_State initial_cpu = {.pc=0x00e7, .a=0x5d, .x=0x39, .y=0x12, .sp=0x82, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x8e}, {.addr=0x0183, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x00e8, .a=0x5d, .x=0x39, .y=0x12, .sp=0x83, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x8e}, {.addr=0x0183, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x00e7, .value=0x8e, .type=IO_READ},
        {.addr=0x00e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012D) {
    const struct CPU_State initial_cpu = {.pc=0xe8d4, .a=0x68, .x=0x25, .y=0x27, .sp=0x49, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xa9}, {.addr=0xe8d4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8d5, .a=0x68, .x=0x25, .y=0x27, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xa9}, {.addr=0xe8d4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8d4, .value=0x8e, .type=IO_READ},
        {.addr=0xe8d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012E) {
    const struct CPU_State initial_cpu = {.pc=0x74e4, .a=0x5e, .x=0xac, .y=0x65, .sp=0xd7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x92}, {.addr=0x74e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x74e5, .a=0x5e, .x=0xac, .y=0x65, .sp=0xd8, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x92}, {.addr=0x74e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x74e4, .value=0x8e, .type=IO_READ},
        {.addr=0x74e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_012F) {
    const struct CPU_State initial_cpu = {.pc=0xb830, .a=0xa0, .x=0x53, .y=0x72, .sp=0x23, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xad}, {.addr=0xb830, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb831, .a=0xa0, .x=0x53, .y=0x72, .sp=0x24, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xad}, {.addr=0xb830, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb830, .value=0x8e, .type=IO_READ},
        {.addr=0xb831, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0130) {
    const struct CPU_State initial_cpu = {.pc=0x75ed, .a=0xab, .x=0x90, .y=0x02, .sp=0x65, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x9f}, {.addr=0x75ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x75ee, .a=0xab, .x=0x90, .y=0x02, .sp=0x66, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x9f}, {.addr=0x75ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x75ed, .value=0x8e, .type=IO_READ},
        {.addr=0x75ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0131) {
    const struct CPU_State initial_cpu = {.pc=0xf071, .a=0x97, .x=0x7b, .y=0xb8, .sp=0x10, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x89}, {.addr=0xf071, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf072, .a=0x97, .x=0x7b, .y=0xb8, .sp=0x11, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x89}, {.addr=0xf071, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf071, .value=0x8e, .type=IO_READ},
        {.addr=0xf072, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0132) {
    const struct CPU_State initial_cpu = {.pc=0xcb5d, .a=0xb6, .x=0xdb, .y=0x88, .sp=0x52, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x46}, {.addr=0xcb5d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcb5e, .a=0xb6, .x=0xdb, .y=0x88, .sp=0x53, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x46}, {.addr=0xcb5d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcb5d, .value=0x8e, .type=IO_READ},
        {.addr=0xcb5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8a0c, .a=0x80, .x=0xc9, .y=0x1c, .sp=0x8f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x5c}, {.addr=0x8a0c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a0d, .a=0x80, .x=0xc9, .y=0x1c, .sp=0x90, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x5c}, {.addr=0x8a0c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a0c, .value=0x8e, .type=IO_READ},
        {.addr=0x8a0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0134) {
    const struct CPU_State initial_cpu = {.pc=0x4e1c, .a=0x6b, .x=0x6d, .y=0x91, .sp=0x98, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x2b}, {.addr=0x4e1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4e1d, .a=0x6b, .x=0x6d, .y=0x91, .sp=0x99, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x2b}, {.addr=0x4e1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4e1c, .value=0x8e, .type=IO_READ},
        {.addr=0x4e1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0135) {
    const struct CPU_State initial_cpu = {.pc=0xf8e8, .a=0x69, .x=0x05, .y=0x97, .sp=0xc0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xbb}, {.addr=0xf8e8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf8e9, .a=0x69, .x=0x05, .y=0x97, .sp=0xc1, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xbb}, {.addr=0xf8e8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf8e8, .value=0x8e, .type=IO_READ},
        {.addr=0xf8e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0136) {
    const struct CPU_State initial_cpu = {.pc=0xa88c, .a=0x45, .x=0x82, .y=0xd3, .sp=0x42, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x94}, {.addr=0xa88c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa88d, .a=0x45, .x=0x82, .y=0xd3, .sp=0x43, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x94}, {.addr=0xa88c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa88c, .value=0x8e, .type=IO_READ},
        {.addr=0xa88d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0137) {
    const struct CPU_State initial_cpu = {.pc=0x5e29, .a=0xc6, .x=0xf6, .y=0x06, .sp=0x59, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xad}, {.addr=0x5e29, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5e2a, .a=0xc6, .x=0xf6, .y=0x06, .sp=0x5a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xad}, {.addr=0x5e29, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5e29, .value=0x8e, .type=IO_READ},
        {.addr=0x5e2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0138) {
    const struct CPU_State initial_cpu = {.pc=0x78b5, .a=0xb1, .x=0xfb, .y=0xc0, .sp=0x5d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x48}, {.addr=0x78b5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x78b6, .a=0xb1, .x=0xfb, .y=0xc0, .sp=0x5e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x48}, {.addr=0x78b5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x78b5, .value=0x8e, .type=IO_READ},
        {.addr=0x78b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0139) {
    const struct CPU_State initial_cpu = {.pc=0xd1c1, .a=0x81, .x=0x84, .y=0x9e, .sp=0x86, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x2b}, {.addr=0xd1c1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1c2, .a=0x81, .x=0x84, .y=0x9e, .sp=0x87, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x2b}, {.addr=0xd1c1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1c1, .value=0x8e, .type=IO_READ},
        {.addr=0xd1c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013A) {
    const struct CPU_State initial_cpu = {.pc=0x7ece, .a=0xbd, .x=0x00, .y=0x6d, .sp=0xbf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x77}, {.addr=0x7ece, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ecf, .a=0xbd, .x=0x00, .y=0x6d, .sp=0xc0, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x77}, {.addr=0x7ece, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7ece, .value=0x8e, .type=IO_READ},
        {.addr=0x7ecf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013B) {
    const struct CPU_State initial_cpu = {.pc=0x16ca, .a=0xab, .x=0x08, .y=0xba, .sp=0x03, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x9f}, {.addr=0x16ca, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x16cb, .a=0xab, .x=0x08, .y=0xba, .sp=0x04, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x9f}, {.addr=0x16ca, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x16ca, .value=0x8e, .type=IO_READ},
        {.addr=0x16cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013C) {
    const struct CPU_State initial_cpu = {.pc=0xf02d, .a=0x2f, .x=0xa7, .y=0x9c, .sp=0x81, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xe7}, {.addr=0xf02d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf02e, .a=0x2f, .x=0xa7, .y=0x9c, .sp=0x82, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xe7}, {.addr=0xf02d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf02d, .value=0x8e, .type=IO_READ},
        {.addr=0xf02e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3a5d, .a=0x60, .x=0xdd, .y=0xa6, .sp=0x80, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xf3}, {.addr=0x3a5d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a5e, .a=0x60, .x=0xdd, .y=0xa6, .sp=0x81, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xf3}, {.addr=0x3a5d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a5d, .value=0x8e, .type=IO_READ},
        {.addr=0x3a5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013E) {
    const struct CPU_State initial_cpu = {.pc=0x20b7, .a=0xfa, .x=0xff, .y=0x06, .sp=0xf6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x7d}, {.addr=0x20b7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x20b8, .a=0xfa, .x=0xff, .y=0x06, .sp=0xf7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x7d}, {.addr=0x20b7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x20b7, .value=0x8e, .type=IO_READ},
        {.addr=0x20b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_013F) {
    const struct CPU_State initial_cpu = {.pc=0x991d, .a=0xe9, .x=0x73, .y=0x12, .sp=0x8b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x07}, {.addr=0x991d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x991e, .a=0xe9, .x=0x73, .y=0x12, .sp=0x8c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x07}, {.addr=0x991d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x991d, .value=0x8e, .type=IO_READ},
        {.addr=0x991e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0140) {
    const struct CPU_State initial_cpu = {.pc=0x72ae, .a=0x2e, .x=0xef, .y=0x5f, .sp=0x8b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x5b}, {.addr=0x72ae, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x72af, .a=0x2e, .x=0xef, .y=0x5f, .sp=0x8c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x5b}, {.addr=0x72ae, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x72ae, .value=0x8e, .type=IO_READ},
        {.addr=0x72af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0141) {
    const struct CPU_State initial_cpu = {.pc=0xb413, .a=0x4a, .x=0xa3, .y=0x5e, .sp=0xfe, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x78}, {.addr=0xb413, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb414, .a=0x4a, .x=0xa3, .y=0x5e, .sp=0xff, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x78}, {.addr=0xb413, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb413, .value=0x8e, .type=IO_READ},
        {.addr=0xb414, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0142) {
    const struct CPU_State initial_cpu = {.pc=0x31f5, .a=0x84, .x=0x92, .y=0xb4, .sp=0x71, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x3c}, {.addr=0x31f5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x31f6, .a=0x84, .x=0x92, .y=0xb4, .sp=0x72, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x3c}, {.addr=0x31f5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x31f5, .value=0x8e, .type=IO_READ},
        {.addr=0x31f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0143) {
    const struct CPU_State initial_cpu = {.pc=0xb195, .a=0xaa, .x=0x0e, .y=0x74, .sp=0x4e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x93}, {.addr=0xb195, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb196, .a=0xaa, .x=0x0e, .y=0x74, .sp=0x4f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x93}, {.addr=0xb195, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb195, .value=0x8e, .type=IO_READ},
        {.addr=0xb196, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5921, .a=0x64, .x=0x7c, .y=0xf9, .sp=0xad, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x50}, {.addr=0x5921, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5922, .a=0x64, .x=0x7c, .y=0xf9, .sp=0xae, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x50}, {.addr=0x5921, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5921, .value=0x8e, .type=IO_READ},
        {.addr=0x5922, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0145) {
    const struct CPU_State initial_cpu = {.pc=0x0f84, .a=0x50, .x=0x09, .y=0x0b, .sp=0x34, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xb1}, {.addr=0x0f84, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f85, .a=0x50, .x=0x09, .y=0x0b, .sp=0x35, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xb1}, {.addr=0x0f84, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f84, .value=0x8e, .type=IO_READ},
        {.addr=0x0f85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0146) {
    const struct CPU_State initial_cpu = {.pc=0xc42b, .a=0xd1, .x=0xf5, .y=0x21, .sp=0x18, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x8b}, {.addr=0xc42b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc42c, .a=0xd1, .x=0xf5, .y=0x21, .sp=0x19, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x8b}, {.addr=0xc42b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc42b, .value=0x8e, .type=IO_READ},
        {.addr=0xc42c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0147) {
    const struct CPU_State initial_cpu = {.pc=0x8a47, .a=0xd8, .x=0xa7, .y=0x12, .sp=0xf5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xa3}, {.addr=0x8a47, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a48, .a=0xd8, .x=0xa7, .y=0x12, .sp=0xf6, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xa3}, {.addr=0x8a47, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a47, .value=0x8e, .type=IO_READ},
        {.addr=0x8a48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0148) {
    const struct CPU_State initial_cpu = {.pc=0x7642, .a=0x03, .x=0x4f, .y=0x27, .sp=0xe9, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x48}, {.addr=0x7642, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7643, .a=0x03, .x=0x4f, .y=0x27, .sp=0xea, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x48}, {.addr=0x7642, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7642, .value=0x8e, .type=IO_READ},
        {.addr=0x7643, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0149) {
    const struct CPU_State initial_cpu = {.pc=0xfd12, .a=0xf1, .x=0x37, .y=0x37, .sp=0xe0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x1c}, {.addr=0xfd12, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfd13, .a=0xf1, .x=0x37, .y=0x37, .sp=0xe1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x1c}, {.addr=0xfd12, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfd12, .value=0x8e, .type=IO_READ},
        {.addr=0xfd13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014A) {
    const struct CPU_State initial_cpu = {.pc=0x2bf0, .a=0xc1, .x=0x8c, .y=0xf5, .sp=0x23, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x9b}, {.addr=0x2bf0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bf1, .a=0xc1, .x=0x8c, .y=0xf5, .sp=0x24, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x9b}, {.addr=0x2bf0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bf0, .value=0x8e, .type=IO_READ},
        {.addr=0x2bf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014B) {
    const struct CPU_State initial_cpu = {.pc=0x4023, .a=0x68, .x=0x74, .y=0xe6, .sp=0x52, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xa9}, {.addr=0x4023, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4024, .a=0x68, .x=0x74, .y=0xe6, .sp=0x53, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xa9}, {.addr=0x4023, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4023, .value=0x8e, .type=IO_READ},
        {.addr=0x4024, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014C) {
    const struct CPU_State initial_cpu = {.pc=0xf9cd, .a=0xcf, .x=0x00, .y=0x17, .sp=0xf2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x63}, {.addr=0xf9cd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf9ce, .a=0xcf, .x=0x00, .y=0x17, .sp=0xf3, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x63}, {.addr=0xf9cd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf9cd, .value=0x8e, .type=IO_READ},
        {.addr=0xf9ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014D) {
    const struct CPU_State initial_cpu = {.pc=0x19b9, .a=0xa2, .x=0xa5, .y=0xc9, .sp=0x3f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xec}, {.addr=0x19b9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x19ba, .a=0xa2, .x=0xa5, .y=0xc9, .sp=0x40, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xec}, {.addr=0x19b9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x19b9, .value=0x8e, .type=IO_READ},
        {.addr=0x19ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014E) {
    const struct CPU_State initial_cpu = {.pc=0xb8a3, .a=0xd9, .x=0x18, .y=0x3f, .sp=0x68, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xf6}, {.addr=0xb8a3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb8a4, .a=0xd9, .x=0x18, .y=0x3f, .sp=0x69, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xf6}, {.addr=0xb8a3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb8a3, .value=0x8e, .type=IO_READ},
        {.addr=0xb8a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_014F) {
    const struct CPU_State initial_cpu = {.pc=0x666a, .a=0x52, .x=0x36, .y=0x19, .sp=0x82, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x8e}, {.addr=0x666a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x666b, .a=0x52, .x=0x36, .y=0x19, .sp=0x83, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x8e}, {.addr=0x666a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x666a, .value=0x8e, .type=IO_READ},
        {.addr=0x666b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0150) {
    const struct CPU_State initial_cpu = {.pc=0x6912, .a=0xcf, .x=0xf5, .y=0x4a, .sp=0x0e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x8b}, {.addr=0x6912, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6913, .a=0xcf, .x=0xf5, .y=0x4a, .sp=0x0f, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x8b}, {.addr=0x6912, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6912, .value=0x8e, .type=IO_READ},
        {.addr=0x6913, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0151) {
    const struct CPU_State initial_cpu = {.pc=0x9712, .a=0x78, .x=0x6e, .y=0xbb, .sp=0x67, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x7e}, {.addr=0x9712, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9713, .a=0x78, .x=0x6e, .y=0xbb, .sp=0x68, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x7e}, {.addr=0x9712, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9712, .value=0x8e, .type=IO_READ},
        {.addr=0x9713, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb101, .a=0x65, .x=0x58, .y=0xac, .sp=0xfb, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0xb101, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb102, .a=0x65, .x=0x58, .y=0xac, .sp=0xfc, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0xb101, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb101, .value=0x8e, .type=IO_READ},
        {.addr=0xb102, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0153) {
    const struct CPU_State initial_cpu = {.pc=0x6a10, .a=0x1c, .x=0x9f, .y=0xfe, .sp=0x3f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xf3}, {.addr=0x6a10, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6a11, .a=0x1c, .x=0x9f, .y=0xfe, .sp=0x40, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xf3}, {.addr=0x6a10, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6a10, .value=0x8e, .type=IO_READ},
        {.addr=0x6a11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0154) {
    const struct CPU_State initial_cpu = {.pc=0xfa93, .a=0xdf, .x=0x41, .y=0x37, .sp=0xb1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xd3}, {.addr=0xfa93, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfa94, .a=0xdf, .x=0x41, .y=0x37, .sp=0xb2, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xd3}, {.addr=0xfa93, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfa93, .value=0x8e, .type=IO_READ},
        {.addr=0xfa94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1940, .a=0x5f, .x=0xd9, .y=0xd5, .sp=0x7d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x4c}, {.addr=0x1940, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1941, .a=0x5f, .x=0xd9, .y=0xd5, .sp=0x7e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x4c}, {.addr=0x1940, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1940, .value=0x8e, .type=IO_READ},
        {.addr=0x1941, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0156) {
    const struct CPU_State initial_cpu = {.pc=0xd4c1, .a=0x8c, .x=0x1d, .y=0x45, .sp=0xbc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x01}, {.addr=0xd4c1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd4c2, .a=0x8c, .x=0x1d, .y=0x45, .sp=0xbd, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x01}, {.addr=0xd4c1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd4c1, .value=0x8e, .type=IO_READ},
        {.addr=0xd4c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0157) {
    const struct CPU_State initial_cpu = {.pc=0xc851, .a=0x8f, .x=0x32, .y=0x9a, .sp=0xd9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x91}, {.addr=0xc851, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc852, .a=0x8f, .x=0x32, .y=0x9a, .sp=0xda, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x91}, {.addr=0xc851, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc851, .value=0x8e, .type=IO_READ},
        {.addr=0xc852, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc9e4, .a=0x97, .x=0x3a, .y=0x16, .sp=0x44, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xdb}, {.addr=0xc9e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc9e5, .a=0x97, .x=0x3a, .y=0x16, .sp=0x45, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xdb}, {.addr=0xc9e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc9e4, .value=0x8e, .type=IO_READ},
        {.addr=0xc9e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0159) {
    const struct CPU_State initial_cpu = {.pc=0xe214, .a=0x69, .x=0x87, .y=0x16, .sp=0x52, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x3e}, {.addr=0xe214, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe215, .a=0x69, .x=0x87, .y=0x16, .sp=0x53, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x3e}, {.addr=0xe214, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe214, .value=0x8e, .type=IO_READ},
        {.addr=0xe215, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015A) {
    const struct CPU_State initial_cpu = {.pc=0x1bb7, .a=0x77, .x=0xcd, .y=0xa2, .sp=0x88, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x3a}, {.addr=0x1bb7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1bb8, .a=0x77, .x=0xcd, .y=0xa2, .sp=0x89, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x3a}, {.addr=0x1bb7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1bb7, .value=0x8e, .type=IO_READ},
        {.addr=0x1bb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015B) {
    const struct CPU_State initial_cpu = {.pc=0x902c, .a=0x69, .x=0x90, .y=0xd3, .sp=0x66, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xc2}, {.addr=0x902c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x902d, .a=0x69, .x=0x90, .y=0xd3, .sp=0x67, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xc2}, {.addr=0x902c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x902c, .value=0x8e, .type=IO_READ},
        {.addr=0x902d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4ef1, .a=0x90, .x=0x57, .y=0xdb, .sp=0x73, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x2a}, {.addr=0x4ef1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4ef2, .a=0x90, .x=0x57, .y=0xdb, .sp=0x74, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x2a}, {.addr=0x4ef1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4ef1, .value=0x8e, .type=IO_READ},
        {.addr=0x4ef2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd30f, .a=0x7f, .x=0xff, .y=0x4e, .sp=0x82, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xde}, {.addr=0xd30f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd310, .a=0x7f, .x=0xff, .y=0x4e, .sp=0x83, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xde}, {.addr=0xd30f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd30f, .value=0x8e, .type=IO_READ},
        {.addr=0xd310, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015E) {
    const struct CPU_State initial_cpu = {.pc=0xc3f5, .a=0x13, .x=0x4f, .y=0x9a, .sp=0xa2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x62}, {.addr=0xc3f5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc3f6, .a=0x13, .x=0x4f, .y=0x9a, .sp=0xa3, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x62}, {.addr=0xc3f5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc3f5, .value=0x8e, .type=IO_READ},
        {.addr=0xc3f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_015F) {
    const struct CPU_State initial_cpu = {.pc=0xa4b9, .a=0xea, .x=0xcc, .y=0xb9, .sp=0x20, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x70}, {.addr=0xa4b9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa4ba, .a=0xea, .x=0xcc, .y=0xb9, .sp=0x21, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x70}, {.addr=0xa4b9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa4b9, .value=0x8e, .type=IO_READ},
        {.addr=0xa4ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0160) {
    const struct CPU_State initial_cpu = {.pc=0xac1b, .a=0xef, .x=0xf9, .y=0xfd, .sp=0xef, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x7b}, {.addr=0xac1b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xac1c, .a=0xef, .x=0xf9, .y=0xfd, .sp=0xf0, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x7b}, {.addr=0xac1b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xac1b, .value=0x8e, .type=IO_READ},
        {.addr=0xac1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0161) {
    const struct CPU_State initial_cpu = {.pc=0x68b7, .a=0xe1, .x=0x88, .y=0x0c, .sp=0x60, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xb9}, {.addr=0x68b7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x68b8, .a=0xe1, .x=0x88, .y=0x0c, .sp=0x61, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xb9}, {.addr=0x68b7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x68b7, .value=0x8e, .type=IO_READ},
        {.addr=0x68b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0162) {
    const struct CPU_State initial_cpu = {.pc=0xee4c, .a=0x6d, .x=0x75, .y=0x3b, .sp=0x45, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xe1}, {.addr=0xee4c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xee4d, .a=0x6d, .x=0x75, .y=0x3b, .sp=0x46, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xe1}, {.addr=0xee4c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xee4c, .value=0x8e, .type=IO_READ},
        {.addr=0xee4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0163) {
    const struct CPU_State initial_cpu = {.pc=0xa7ec, .a=0x9d, .x=0x19, .y=0x40, .sp=0x34, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x50}, {.addr=0xa7ec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa7ed, .a=0x9d, .x=0x19, .y=0x40, .sp=0x35, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x50}, {.addr=0xa7ec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa7ec, .value=0x8e, .type=IO_READ},
        {.addr=0xa7ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0164) {
    const struct CPU_State initial_cpu = {.pc=0x5e07, .a=0x71, .x=0x89, .y=0x8e, .sp=0x05, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xc2}, {.addr=0x5e07, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5e08, .a=0x71, .x=0x89, .y=0x8e, .sp=0x06, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xc2}, {.addr=0x5e07, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5e07, .value=0x8e, .type=IO_READ},
        {.addr=0x5e08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0165) {
    const struct CPU_State initial_cpu = {.pc=0xabc9, .a=0xea, .x=0x6a, .y=0x70, .sp=0x64, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x05}, {.addr=0xabc9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xabca, .a=0xea, .x=0x6a, .y=0x70, .sp=0x65, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x05}, {.addr=0xabc9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xabc9, .value=0x8e, .type=IO_READ},
        {.addr=0xabca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0166) {
    const struct CPU_State initial_cpu = {.pc=0xf400, .a=0x31, .x=0xd9, .y=0x49, .sp=0xd0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x18}, {.addr=0xf400, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf401, .a=0x31, .x=0xd9, .y=0x49, .sp=0xd1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x18}, {.addr=0xf400, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf400, .value=0x8e, .type=IO_READ},
        {.addr=0xf401, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0167) {
    const struct CPU_State initial_cpu = {.pc=0x0962, .a=0x6e, .x=0xc7, .y=0x80, .sp=0xfc, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x49}, {.addr=0x0962, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0963, .a=0x6e, .x=0xc7, .y=0x80, .sp=0xfd, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x49}, {.addr=0x0962, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0962, .value=0x8e, .type=IO_READ},
        {.addr=0x0963, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0168) {
    const struct CPU_State initial_cpu = {.pc=0x3fa9, .a=0x20, .x=0x2e, .y=0x76, .sp=0x25, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x34}, {.addr=0x3fa9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3faa, .a=0x20, .x=0x2e, .y=0x76, .sp=0x26, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x34}, {.addr=0x3fa9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3fa9, .value=0x8e, .type=IO_READ},
        {.addr=0x3faa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0169) {
    const struct CPU_State initial_cpu = {.pc=0xeff4, .a=0xcc, .x=0xf1, .y=0x72, .sp=0xd6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x44}, {.addr=0xeff4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeff5, .a=0xcc, .x=0xf1, .y=0x72, .sp=0xd7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x44}, {.addr=0xeff4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeff4, .value=0x8e, .type=IO_READ},
        {.addr=0xeff5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016A) {
    const struct CPU_State initial_cpu = {.pc=0xc7e3, .a=0xed, .x=0xb2, .y=0xd8, .sp=0x1a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xbd}, {.addr=0xc7e3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc7e4, .a=0xed, .x=0xb2, .y=0xd8, .sp=0x1b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xbd}, {.addr=0xc7e3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc7e3, .value=0x8e, .type=IO_READ},
        {.addr=0xc7e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0a96, .a=0x1a, .x=0x9b, .y=0x67, .sp=0x63, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xf8}, {.addr=0x0a96, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0a97, .a=0x1a, .x=0x9b, .y=0x67, .sp=0x64, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xf8}, {.addr=0x0a96, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0a96, .value=0x8e, .type=IO_READ},
        {.addr=0x0a97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016C) {
    const struct CPU_State initial_cpu = {.pc=0x489e, .a=0xd3, .x=0x65, .y=0xbe, .sp=0xa1, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x5b}, {.addr=0x489e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x489f, .a=0xd3, .x=0x65, .y=0xbe, .sp=0xa2, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x5b}, {.addr=0x489e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x489e, .value=0x8e, .type=IO_READ},
        {.addr=0x489f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016D) {
    const struct CPU_State initial_cpu = {.pc=0xb136, .a=0x4c, .x=0x30, .y=0x29, .sp=0xf5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xcf}, {.addr=0xb136, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb137, .a=0x4c, .x=0x30, .y=0x29, .sp=0xf6, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xcf}, {.addr=0xb136, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb136, .value=0x8e, .type=IO_READ},
        {.addr=0xb137, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016E) {
    const struct CPU_State initial_cpu = {.pc=0x7051, .a=0x8f, .x=0xb6, .y=0x24, .sp=0x08, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xa8}, {.addr=0x7051, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7052, .a=0x8f, .x=0xb6, .y=0x24, .sp=0x09, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xa8}, {.addr=0x7051, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7051, .value=0x8e, .type=IO_READ},
        {.addr=0x7052, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_016F) {
    const struct CPU_State initial_cpu = {.pc=0x70d0, .a=0x02, .x=0x72, .y=0x18, .sp=0x23, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x12}, {.addr=0x70d0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x70d1, .a=0x02, .x=0x72, .y=0x18, .sp=0x24, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x12}, {.addr=0x70d0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x70d0, .value=0x8e, .type=IO_READ},
        {.addr=0x70d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0170) {
    const struct CPU_State initial_cpu = {.pc=0x5a6a, .a=0x83, .x=0x54, .y=0xb2, .sp=0x0c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x69}, {.addr=0x5a6a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5a6b, .a=0x83, .x=0x54, .y=0xb2, .sp=0x0d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x69}, {.addr=0x5a6a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5a6a, .value=0x8e, .type=IO_READ},
        {.addr=0x5a6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0171) {
    const struct CPU_State initial_cpu = {.pc=0x8403, .a=0xee, .x=0xe8, .y=0x50, .sp=0x23, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x92}, {.addr=0x8403, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0xee, .x=0xe8, .y=0x50, .sp=0x24, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x92}, {.addr=0x8403, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8403, .value=0x8e, .type=IO_READ},
        {.addr=0x8404, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0172) {
    const struct CPU_State initial_cpu = {.pc=0xe391, .a=0xea, .x=0x63, .y=0x47, .sp=0x81, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xe6}, {.addr=0xe391, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe392, .a=0xea, .x=0x63, .y=0x47, .sp=0x82, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xe6}, {.addr=0xe391, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe391, .value=0x8e, .type=IO_READ},
        {.addr=0xe392, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0173) {
    const struct CPU_State initial_cpu = {.pc=0x484a, .a=0x56, .x=0xcb, .y=0x9a, .sp=0xc8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xc4}, {.addr=0x484a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x484b, .a=0x56, .x=0xcb, .y=0x9a, .sp=0xc9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xc4}, {.addr=0x484a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x484a, .value=0x8e, .type=IO_READ},
        {.addr=0x484b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0174) {
    const struct CPU_State initial_cpu = {.pc=0x8a32, .a=0xf4, .x=0x2d, .y=0x05, .sp=0xd2, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x4e}, {.addr=0x8a32, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a33, .a=0xf4, .x=0x2d, .y=0x05, .sp=0xd3, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x4e}, {.addr=0x8a32, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a32, .value=0x8e, .type=IO_READ},
        {.addr=0x8a33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0175) {
    const struct CPU_State initial_cpu = {.pc=0x773d, .a=0x5c, .x=0x6a, .y=0xb7, .sp=0xc8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x54}, {.addr=0x773d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x773e, .a=0x5c, .x=0x6a, .y=0xb7, .sp=0xc9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x54}, {.addr=0x773d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x773d, .value=0x8e, .type=IO_READ},
        {.addr=0x773e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0176) {
    const struct CPU_State initial_cpu = {.pc=0x2d13, .a=0x7c, .x=0x49, .y=0x9e, .sp=0x2e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xe0}, {.addr=0x2d13, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2d14, .a=0x7c, .x=0x49, .y=0x9e, .sp=0x2f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xe0}, {.addr=0x2d13, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2d13, .value=0x8e, .type=IO_READ},
        {.addr=0x2d14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0177) {
    const struct CPU_State initial_cpu = {.pc=0x58a2, .a=0x56, .x=0xdd, .y=0x4b, .sp=0xb9, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xfb}, {.addr=0x58a2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x58a3, .a=0x56, .x=0xdd, .y=0x4b, .sp=0xba, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xfb}, {.addr=0x58a2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x58a2, .value=0x8e, .type=IO_READ},
        {.addr=0x58a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb9d2, .a=0x73, .x=0x0d, .y=0x7d, .sp=0xcc, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x88}, {.addr=0xb9d2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb9d3, .a=0x73, .x=0x0d, .y=0x7d, .sp=0xcd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x88}, {.addr=0xb9d2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb9d2, .value=0x8e, .type=IO_READ},
        {.addr=0xb9d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0179) {
    const struct CPU_State initial_cpu = {.pc=0xa73f, .a=0xdf, .x=0xf2, .y=0x06, .sp=0x19, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x1b}, {.addr=0xa73f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa740, .a=0xdf, .x=0xf2, .y=0x06, .sp=0x1a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x1b}, {.addr=0xa73f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa73f, .value=0x8e, .type=IO_READ},
        {.addr=0xa740, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017A) {
    const struct CPU_State initial_cpu = {.pc=0x176f, .a=0x89, .x=0x27, .y=0x8b, .sp=0x4e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xc5}, {.addr=0x176f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1770, .a=0x89, .x=0x27, .y=0x8b, .sp=0x4f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xc5}, {.addr=0x176f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x176f, .value=0x8e, .type=IO_READ},
        {.addr=0x1770, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017B) {
    const struct CPU_State initial_cpu = {.pc=0x0b83, .a=0x24, .x=0x67, .y=0xc9, .sp=0x12, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xf4}, {.addr=0x0b83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0b84, .a=0x24, .x=0x67, .y=0xc9, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xf4}, {.addr=0x0b83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0b83, .value=0x8e, .type=IO_READ},
        {.addr=0x0b84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017C) {
    const struct CPU_State initial_cpu = {.pc=0x8795, .a=0xab, .x=0x85, .y=0x5e, .sp=0x3d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xc9}, {.addr=0x8795, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8796, .a=0xab, .x=0x85, .y=0x5e, .sp=0x3e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xc9}, {.addr=0x8795, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8795, .value=0x8e, .type=IO_READ},
        {.addr=0x8796, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017D) {
    const struct CPU_State initial_cpu = {.pc=0x9808, .a=0x12, .x=0xd8, .y=0x5e, .sp=0x9b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x03}, {.addr=0x9808, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9809, .a=0x12, .x=0xd8, .y=0x5e, .sp=0x9c, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x03}, {.addr=0x9808, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9808, .value=0x8e, .type=IO_READ},
        {.addr=0x9809, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017E) {
    const struct CPU_State initial_cpu = {.pc=0xf50b, .a=0x7d, .x=0x28, .y=0xab, .sp=0x58, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x0c}, {.addr=0xf50b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf50c, .a=0x7d, .x=0x28, .y=0xab, .sp=0x59, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x0c}, {.addr=0xf50b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf50b, .value=0x8e, .type=IO_READ},
        {.addr=0xf50c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_017F) {
    const struct CPU_State initial_cpu = {.pc=0xb79c, .a=0x6d, .x=0x47, .y=0xa0, .sp=0xc7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x2f}, {.addr=0xb79c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb79d, .a=0x6d, .x=0x47, .y=0xa0, .sp=0xc8, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x2f}, {.addr=0xb79c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb79c, .value=0x8e, .type=IO_READ},
        {.addr=0xb79d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb3f9, .a=0x79, .x=0x62, .y=0xc5, .sp=0xbd, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x56}, {.addr=0xb3f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb3fa, .a=0x79, .x=0x62, .y=0xc5, .sp=0xbe, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x56}, {.addr=0xb3f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb3f9, .value=0x8e, .type=IO_READ},
        {.addr=0xb3fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0181) {
    const struct CPU_State initial_cpu = {.pc=0x0029, .a=0xe8, .x=0xdd, .y=0xdd, .sp=0xf9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x8e}, {.addr=0x01fa, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x002a, .a=0xe8, .x=0xdd, .y=0xdd, .sp=0xfa, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x8e}, {.addr=0x01fa, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x0029, .value=0x8e, .type=IO_READ},
        {.addr=0x002a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0182) {
    const struct CPU_State initial_cpu = {.pc=0x351b, .a=0xb5, .x=0x55, .y=0x4c, .sp=0xe2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xc5}, {.addr=0x351b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x351c, .a=0xb5, .x=0x55, .y=0x4c, .sp=0xe3, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc5}, {.addr=0x351b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x351b, .value=0x8e, .type=IO_READ},
        {.addr=0x351c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0183) {
    const struct CPU_State initial_cpu = {.pc=0x8bc8, .a=0x3b, .x=0x2a, .y=0x91, .sp=0xc0, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xf5}, {.addr=0x8bc8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8bc9, .a=0x3b, .x=0x2a, .y=0x91, .sp=0xc1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xf5}, {.addr=0x8bc8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8bc8, .value=0x8e, .type=IO_READ},
        {.addr=0x8bc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2e5b, .a=0x69, .x=0xf7, .y=0x5b, .sp=0x43, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xa3}, {.addr=0x2e5b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2e5c, .a=0x69, .x=0xf7, .y=0x5b, .sp=0x44, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa3}, {.addr=0x2e5b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2e5b, .value=0x8e, .type=IO_READ},
        {.addr=0x2e5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0185) {
    const struct CPU_State initial_cpu = {.pc=0xc552, .a=0xaf, .x=0x1b, .y=0x0c, .sp=0xc6, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xa0}, {.addr=0xc552, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc553, .a=0xaf, .x=0x1b, .y=0x0c, .sp=0xc7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xa0}, {.addr=0xc552, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc552, .value=0x8e, .type=IO_READ},
        {.addr=0xc553, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0186) {
    const struct CPU_State initial_cpu = {.pc=0x2a59, .a=0x18, .x=0x42, .y=0x2f, .sp=0x28, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xec}, {.addr=0x2a59, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2a5a, .a=0x18, .x=0x42, .y=0x2f, .sp=0x29, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xec}, {.addr=0x2a59, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2a59, .value=0x8e, .type=IO_READ},
        {.addr=0x2a5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0187) {
    const struct CPU_State initial_cpu = {.pc=0x7756, .a=0xcc, .x=0xfa, .y=0xc4, .sp=0x88, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x31}, {.addr=0x7756, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7757, .a=0xcc, .x=0xfa, .y=0xc4, .sp=0x89, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x31}, {.addr=0x7756, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7756, .value=0x8e, .type=IO_READ},
        {.addr=0x7757, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0188) {
    const struct CPU_State initial_cpu = {.pc=0x3ce1, .a=0x83, .x=0xc2, .y=0x7f, .sp=0x17, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x15}, {.addr=0x3ce1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3ce2, .a=0x83, .x=0xc2, .y=0x7f, .sp=0x18, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x15}, {.addr=0x3ce1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3ce1, .value=0x8e, .type=IO_READ},
        {.addr=0x3ce2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0189) {
    const struct CPU_State initial_cpu = {.pc=0x24e1, .a=0x98, .x=0x76, .y=0x82, .sp=0x63, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xb0}, {.addr=0x24e1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x24e2, .a=0x98, .x=0x76, .y=0x82, .sp=0x64, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xb0}, {.addr=0x24e1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x24e1, .value=0x8e, .type=IO_READ},
        {.addr=0x24e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018A) {
    const struct CPU_State initial_cpu = {.pc=0xaf42, .a=0xba, .x=0xef, .y=0xb5, .sp=0x32, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x86}, {.addr=0xaf42, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaf43, .a=0xba, .x=0xef, .y=0xb5, .sp=0x33, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x86}, {.addr=0xaf42, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf42, .value=0x8e, .type=IO_READ},
        {.addr=0xaf43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018B) {
    const struct CPU_State initial_cpu = {.pc=0xae63, .a=0x7c, .x=0x63, .y=0x19, .sp=0xf3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xe5}, {.addr=0xae63, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae64, .a=0x7c, .x=0x63, .y=0x19, .sp=0xf4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xe5}, {.addr=0xae63, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae63, .value=0x8e, .type=IO_READ},
        {.addr=0xae64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018C) {
    const struct CPU_State initial_cpu = {.pc=0x6a81, .a=0x8c, .x=0x6a, .y=0xdc, .sp=0xbc, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x80}, {.addr=0x6a81, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6a82, .a=0x8c, .x=0x6a, .y=0xdc, .sp=0xbd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x80}, {.addr=0x6a81, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6a81, .value=0x8e, .type=IO_READ},
        {.addr=0x6a82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018D) {
    const struct CPU_State initial_cpu = {.pc=0x73aa, .a=0x05, .x=0x3f, .y=0x00, .sp=0x65, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x5f}, {.addr=0x73aa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x73ab, .a=0x05, .x=0x3f, .y=0x00, .sp=0x66, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x5f}, {.addr=0x73aa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x73aa, .value=0x8e, .type=IO_READ},
        {.addr=0x73ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018E) {
    const struct CPU_State initial_cpu = {.pc=0xaf7d, .a=0x59, .x=0x66, .y=0x30, .sp=0x35, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xdd}, {.addr=0xaf7d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaf7e, .a=0x59, .x=0x66, .y=0x30, .sp=0x36, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xdd}, {.addr=0xaf7d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf7d, .value=0x8e, .type=IO_READ},
        {.addr=0xaf7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_018F) {
    const struct CPU_State initial_cpu = {.pc=0x9f10, .a=0xae, .x=0x5f, .y=0xbb, .sp=0x1b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x0f}, {.addr=0x9f10, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9f11, .a=0xae, .x=0x5f, .y=0xbb, .sp=0x1c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x0f}, {.addr=0x9f10, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9f10, .value=0x8e, .type=IO_READ},
        {.addr=0x9f11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0190) {
    const struct CPU_State initial_cpu = {.pc=0x497a, .a=0x1b, .x=0x0b, .y=0xa4, .sp=0x0f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x50}, {.addr=0x497a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x497b, .a=0x1b, .x=0x0b, .y=0xa4, .sp=0x10, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x50}, {.addr=0x497a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x497a, .value=0x8e, .type=IO_READ},
        {.addr=0x497b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0191) {
    const struct CPU_State initial_cpu = {.pc=0x272d, .a=0x39, .x=0x9c, .y=0x5a, .sp=0x8f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x43}, {.addr=0x272d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x272e, .a=0x39, .x=0x9c, .y=0x5a, .sp=0x90, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x43}, {.addr=0x272d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x272d, .value=0x8e, .type=IO_READ},
        {.addr=0x272e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0192) {
    const struct CPU_State initial_cpu = {.pc=0xaf8e, .a=0xdd, .x=0xf0, .y=0x43, .sp=0x45, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xf1}, {.addr=0xaf8e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0xdd, .x=0xf0, .y=0x43, .sp=0x46, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xf1}, {.addr=0xaf8e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf8e, .value=0x8e, .type=IO_READ},
        {.addr=0xaf8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0193) {
    const struct CPU_State initial_cpu = {.pc=0xed56, .a=0x00, .x=0xeb, .y=0x55, .sp=0xa7, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x60}, {.addr=0xed56, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xed57, .a=0x00, .x=0xeb, .y=0x55, .sp=0xa8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x60}, {.addr=0xed56, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xed56, .value=0x8e, .type=IO_READ},
        {.addr=0xed57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0194) {
    const struct CPU_State initial_cpu = {.pc=0x78d9, .a=0x16, .x=0x03, .y=0xfc, .sp=0xf2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x85}, {.addr=0x78d9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x78da, .a=0x16, .x=0x03, .y=0xfc, .sp=0xf3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x85}, {.addr=0x78d9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x78d9, .value=0x8e, .type=IO_READ},
        {.addr=0x78da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0195) {
    const struct CPU_State initial_cpu = {.pc=0x0958, .a=0x92, .x=0x82, .y=0x44, .sp=0xb7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x65}, {.addr=0x0958, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0959, .a=0x92, .x=0x82, .y=0x44, .sp=0xb8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x65}, {.addr=0x0958, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0958, .value=0x8e, .type=IO_READ},
        {.addr=0x0959, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0196) {
    const struct CPU_State initial_cpu = {.pc=0xba17, .a=0x8d, .x=0x11, .y=0xa2, .sp=0xae, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x30}, {.addr=0xba17, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xba18, .a=0x8d, .x=0x11, .y=0xa2, .sp=0xaf, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x30}, {.addr=0xba17, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xba17, .value=0x8e, .type=IO_READ},
        {.addr=0xba18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0197) {
    const struct CPU_State initial_cpu = {.pc=0x41c4, .a=0x5f, .x=0x21, .y=0xb5, .sp=0x9a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xcd}, {.addr=0x41c4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x41c5, .a=0x5f, .x=0x21, .y=0xb5, .sp=0x9b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xcd}, {.addr=0x41c4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x41c4, .value=0x8e, .type=IO_READ},
        {.addr=0x41c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0198) {
    const struct CPU_State initial_cpu = {.pc=0xc345, .a=0x23, .x=0x82, .y=0x02, .sp=0xd3, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x78}, {.addr=0xc345, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc346, .a=0x23, .x=0x82, .y=0x02, .sp=0xd4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x78}, {.addr=0xc345, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc345, .value=0x8e, .type=IO_READ},
        {.addr=0xc346, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0199) {
    const struct CPU_State initial_cpu = {.pc=0x165e, .a=0x06, .x=0x0f, .y=0x1f, .sp=0xd6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x8c}, {.addr=0x165e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x165f, .a=0x06, .x=0x0f, .y=0x1f, .sp=0xd7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x8c}, {.addr=0x165e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x165e, .value=0x8e, .type=IO_READ},
        {.addr=0x165f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1d78, .a=0x31, .x=0x03, .y=0x01, .sp=0x48, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x82}, {.addr=0x1d78, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1d79, .a=0x31, .x=0x03, .y=0x01, .sp=0x49, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x82}, {.addr=0x1d78, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1d78, .value=0x8e, .type=IO_READ},
        {.addr=0x1d79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019B) {
    const struct CPU_State initial_cpu = {.pc=0xeb29, .a=0x1c, .x=0xd9, .y=0x11, .sp=0x04, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x84}, {.addr=0xeb29, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeb2a, .a=0x1c, .x=0xd9, .y=0x11, .sp=0x05, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x84}, {.addr=0xeb29, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeb29, .value=0x8e, .type=IO_READ},
        {.addr=0xeb2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019C) {
    const struct CPU_State initial_cpu = {.pc=0xf1a6, .a=0x06, .x=0x4a, .y=0x08, .sp=0xea, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x62}, {.addr=0xf1a6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf1a7, .a=0x06, .x=0x4a, .y=0x08, .sp=0xeb, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x62}, {.addr=0xf1a6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf1a6, .value=0x8e, .type=IO_READ},
        {.addr=0xf1a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019D) {
    const struct CPU_State initial_cpu = {.pc=0x7869, .a=0xb4, .x=0x88, .y=0x62, .sp=0x7c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x60}, {.addr=0x7869, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x786a, .a=0xb4, .x=0x88, .y=0x62, .sp=0x7d, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x60}, {.addr=0x7869, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7869, .value=0x8e, .type=IO_READ},
        {.addr=0x786a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019E) {
    const struct CPU_State initial_cpu = {.pc=0xd7df, .a=0xd8, .x=0xcc, .y=0x05, .sp=0x23, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xfe}, {.addr=0xd7df, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd7e0, .a=0xd8, .x=0xcc, .y=0x05, .sp=0x24, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xfe}, {.addr=0xd7df, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd7df, .value=0x8e, .type=IO_READ},
        {.addr=0xd7e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_019F) {
    const struct CPU_State initial_cpu = {.pc=0xcb68, .a=0xf5, .x=0xf4, .y=0x33, .sp=0x02, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x18}, {.addr=0xcb68, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcb69, .a=0xf5, .x=0xf4, .y=0x33, .sp=0x03, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x18}, {.addr=0xcb68, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcb68, .value=0x8e, .type=IO_READ},
        {.addr=0xcb69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xad70, .a=0x22, .x=0x79, .y=0x97, .sp=0xaa, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xd6}, {.addr=0xad70, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xad71, .a=0x22, .x=0x79, .y=0x97, .sp=0xab, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xd6}, {.addr=0xad70, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xad70, .value=0x8e, .type=IO_READ},
        {.addr=0xad71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x41f6, .a=0xe0, .x=0x48, .y=0x13, .sp=0xe7, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xa4}, {.addr=0x41f6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x41f7, .a=0xe0, .x=0x48, .y=0x13, .sp=0xe8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xa4}, {.addr=0x41f6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x41f6, .value=0x8e, .type=IO_READ},
        {.addr=0x41f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xc0ea, .a=0x23, .x=0x60, .y=0x39, .sp=0x44, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xe5}, {.addr=0xc0ea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc0eb, .a=0x23, .x=0x60, .y=0x39, .sp=0x45, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xe5}, {.addr=0xc0ea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc0ea, .value=0x8e, .type=IO_READ},
        {.addr=0xc0eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xe015, .a=0x2c, .x=0x1d, .y=0x55, .sp=0x1e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x02}, {.addr=0xe015, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe016, .a=0x2c, .x=0x1d, .y=0x55, .sp=0x1f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x02}, {.addr=0xe015, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe015, .value=0x8e, .type=IO_READ},
        {.addr=0xe016, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc120, .a=0xfb, .x=0x58, .y=0xb4, .sp=0x42, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xa9}, {.addr=0xc120, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc121, .a=0xfb, .x=0x58, .y=0xb4, .sp=0x43, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xa9}, {.addr=0xc120, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc120, .value=0x8e, .type=IO_READ},
        {.addr=0xc121, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3865, .a=0x4b, .x=0x90, .y=0xe1, .sp=0xa3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x8f}, {.addr=0x3865, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3866, .a=0x4b, .x=0x90, .y=0xe1, .sp=0xa4, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x8f}, {.addr=0x3865, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3865, .value=0x8e, .type=IO_READ},
        {.addr=0x3866, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xf9e0, .a=0x19, .x=0x83, .y=0xfc, .sp=0x5c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x58}, {.addr=0xf9e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf9e1, .a=0x19, .x=0x83, .y=0xfc, .sp=0x5d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x58}, {.addr=0xf9e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf9e0, .value=0x8e, .type=IO_READ},
        {.addr=0xf9e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x4bf3, .a=0x0b, .x=0xfc, .y=0x62, .sp=0x79, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x03}, {.addr=0x4bf3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4bf4, .a=0x0b, .x=0xfc, .y=0x62, .sp=0x7a, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x03}, {.addr=0x4bf3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4bf3, .value=0x8e, .type=IO_READ},
        {.addr=0x4bf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xd5fc, .a=0x8c, .x=0xdf, .y=0xcd, .sp=0xa7, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x95}, {.addr=0xd5fc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd5fd, .a=0x8c, .x=0xdf, .y=0xcd, .sp=0xa8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x95}, {.addr=0xd5fc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd5fc, .value=0x8e, .type=IO_READ},
        {.addr=0xd5fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf306, .a=0x35, .x=0x65, .y=0x1c, .sp=0xf0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x6c}, {.addr=0xf306, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf307, .a=0x35, .x=0x65, .y=0x1c, .sp=0xf1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x6c}, {.addr=0xf306, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf306, .value=0x8e, .type=IO_READ},
        {.addr=0xf307, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x5ec1, .a=0xbf, .x=0x4b, .y=0x5c, .sp=0x7b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xb7}, {.addr=0x5ec1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5ec2, .a=0xbf, .x=0x4b, .y=0x5c, .sp=0x7c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xb7}, {.addr=0x5ec1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5ec1, .value=0x8e, .type=IO_READ},
        {.addr=0x5ec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x8442, .a=0x8a, .x=0xe6, .y=0xa5, .sp=0x55, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xae}, {.addr=0x8442, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8443, .a=0x8a, .x=0xe6, .y=0xa5, .sp=0x56, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xae}, {.addr=0x8442, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8442, .value=0x8e, .type=IO_READ},
        {.addr=0x8443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x975e, .a=0x34, .x=0x94, .y=0x1e, .sp=0xf7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x13}, {.addr=0x975e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x975f, .a=0x34, .x=0x94, .y=0x1e, .sp=0xf8, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x13}, {.addr=0x975e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x975e, .value=0x8e, .type=IO_READ},
        {.addr=0x975f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xd703, .a=0x0a, .x=0x5d, .y=0xff, .sp=0xd3, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x0d}, {.addr=0xd703, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd704, .a=0x0a, .x=0x5d, .y=0xff, .sp=0xd4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x0d}, {.addr=0xd703, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd703, .value=0x8e, .type=IO_READ},
        {.addr=0xd704, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x632a, .a=0xfe, .x=0xc0, .y=0xac, .sp=0x57, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x0b}, {.addr=0x632a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x632b, .a=0xfe, .x=0xc0, .y=0xac, .sp=0x58, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x0b}, {.addr=0x632a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x632a, .value=0x8e, .type=IO_READ},
        {.addr=0x632b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x98a5, .a=0xdb, .x=0x4c, .y=0xd3, .sp=0x08, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xd7}, {.addr=0x98a5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x98a6, .a=0xdb, .x=0x4c, .y=0xd3, .sp=0x09, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xd7}, {.addr=0x98a5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x98a5, .value=0x8e, .type=IO_READ},
        {.addr=0x98a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xcc9a, .a=0xae, .x=0x3d, .y=0x7b, .sp=0x8f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x72}, {.addr=0xcc9a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcc9b, .a=0xae, .x=0x3d, .y=0x7b, .sp=0x90, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x72}, {.addr=0xcc9a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcc9a, .value=0x8e, .type=IO_READ},
        {.addr=0xcc9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xab61, .a=0xb1, .x=0x62, .y=0x3b, .sp=0x9c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xe9}, {.addr=0xab61, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xab62, .a=0xb1, .x=0x62, .y=0x3b, .sp=0x9d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xe9}, {.addr=0xab61, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xab61, .value=0x8e, .type=IO_READ},
        {.addr=0xab62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x87ff, .a=0x04, .x=0xde, .y=0x5b, .sp=0x78, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x86}, {.addr=0x87ff, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8800, .a=0x04, .x=0xde, .y=0x5b, .sp=0x79, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x86}, {.addr=0x87ff, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x87ff, .value=0x8e, .type=IO_READ},
        {.addr=0x8800, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xbc4d, .a=0xb2, .x=0x88, .y=0x41, .sp=0xe8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x9e}, {.addr=0xbc4d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbc4e, .a=0xb2, .x=0x88, .y=0x41, .sp=0xe9, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x9e}, {.addr=0xbc4d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbc4d, .value=0x8e, .type=IO_READ},
        {.addr=0xbc4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xe6f5, .a=0x6c, .x=0x2d, .y=0xc6, .sp=0x9a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xc4}, {.addr=0xe6f5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe6f6, .a=0x6c, .x=0x2d, .y=0xc6, .sp=0x9b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xc4}, {.addr=0xe6f5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe6f5, .value=0x8e, .type=IO_READ},
        {.addr=0xe6f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xaa33, .a=0x94, .x=0xbf, .y=0xf3, .sp=0xea, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x12}, {.addr=0xaa33, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaa34, .a=0x94, .x=0xbf, .y=0xf3, .sp=0xeb, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x12}, {.addr=0xaa33, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaa33, .value=0x8e, .type=IO_READ},
        {.addr=0xaa34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xe990, .a=0x7f, .x=0x69, .y=0x72, .sp=0xe5, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x56}, {.addr=0xe990, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe991, .a=0x7f, .x=0x69, .y=0x72, .sp=0xe6, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x56}, {.addr=0xe990, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe990, .value=0x8e, .type=IO_READ},
        {.addr=0xe991, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x8bf0, .a=0x22, .x=0x18, .y=0xe3, .sp=0x73, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xdd}, {.addr=0x8bf0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8bf1, .a=0x22, .x=0x18, .y=0xe3, .sp=0x74, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xdd}, {.addr=0x8bf0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8bf0, .value=0x8e, .type=IO_READ},
        {.addr=0x8bf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xc674, .a=0x11, .x=0x23, .y=0x94, .sp=0x56, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x33}, {.addr=0xc674, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc675, .a=0x11, .x=0x23, .y=0x94, .sp=0x57, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x33}, {.addr=0xc674, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc674, .value=0x8e, .type=IO_READ},
        {.addr=0xc675, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x7ee6, .a=0x53, .x=0x88, .y=0x1a, .sp=0x3f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x52}, {.addr=0x7ee6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ee7, .a=0x53, .x=0x88, .y=0x1a, .sp=0x40, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x52}, {.addr=0x7ee6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7ee6, .value=0x8e, .type=IO_READ},
        {.addr=0x7ee7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x862c, .a=0xbc, .x=0x6b, .y=0xc9, .sp=0xdf, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x3d}, {.addr=0x862c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x862d, .a=0xbc, .x=0x6b, .y=0xc9, .sp=0xe0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x3d}, {.addr=0x862c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x862c, .value=0x8e, .type=IO_READ},
        {.addr=0x862d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xe8d1, .a=0x05, .x=0x1a, .y=0x0a, .sp=0xd7, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xa4}, {.addr=0xe8d1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8d2, .a=0x05, .x=0x1a, .y=0x0a, .sp=0xd8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xa4}, {.addr=0xe8d1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8d1, .value=0x8e, .type=IO_READ},
        {.addr=0xe8d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xfabb, .a=0x90, .x=0x09, .y=0x31, .sp=0xc9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x14}, {.addr=0xfabb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfabc, .a=0x90, .x=0x09, .y=0x31, .sp=0xca, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x14}, {.addr=0xfabb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfabb, .value=0x8e, .type=IO_READ},
        {.addr=0xfabc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xaca0, .a=0x19, .x=0x2c, .y=0x21, .sp=0x83, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x4e}, {.addr=0xaca0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaca1, .a=0x19, .x=0x2c, .y=0x21, .sp=0x84, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x4e}, {.addr=0xaca0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaca0, .value=0x8e, .type=IO_READ},
        {.addr=0xaca1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x537f, .a=0x01, .x=0x9e, .y=0xdb, .sp=0xfd, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x85}, {.addr=0x537f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5380, .a=0x01, .x=0x9e, .y=0xdb, .sp=0xfe, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x85}, {.addr=0x537f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x537f, .value=0x8e, .type=IO_READ},
        {.addr=0x5380, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xbbf9, .a=0x14, .x=0x8f, .y=0xc5, .sp=0x88, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xdb}, {.addr=0xbbf9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbbfa, .a=0x14, .x=0x8f, .y=0xc5, .sp=0x89, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xdb}, {.addr=0xbbf9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbbf9, .value=0x8e, .type=IO_READ},
        {.addr=0xbbfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xe57e, .a=0x84, .x=0x0b, .y=0xc8, .sp=0xd2, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xb9}, {.addr=0xe57e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe57f, .a=0x84, .x=0x0b, .y=0xc8, .sp=0xd3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xb9}, {.addr=0xe57e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe57e, .value=0x8e, .type=IO_READ},
        {.addr=0xe57f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xbe3a, .a=0x00, .x=0x67, .y=0x05, .sp=0xa3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xb5}, {.addr=0xbe3a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbe3b, .a=0x00, .x=0x67, .y=0x05, .sp=0xa4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xb5}, {.addr=0xbe3a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbe3a, .value=0x8e, .type=IO_READ},
        {.addr=0xbe3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x6d8e, .a=0x86, .x=0x7e, .y=0xa1, .sp=0x72, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xd0}, {.addr=0x6d8e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6d8f, .a=0x86, .x=0x7e, .y=0xa1, .sp=0x73, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xd0}, {.addr=0x6d8e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6d8e, .value=0x8e, .type=IO_READ},
        {.addr=0x6d8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xe00a, .a=0xd2, .x=0x34, .y=0x36, .sp=0x50, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xf5}, {.addr=0xe00a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe00b, .a=0xd2, .x=0x34, .y=0x36, .sp=0x51, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xf5}, {.addr=0xe00a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe00a, .value=0x8e, .type=IO_READ},
        {.addr=0xe00b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x5d91, .a=0xf1, .x=0x54, .y=0x55, .sp=0xb3, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x6b}, {.addr=0x5d91, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5d92, .a=0xf1, .x=0x54, .y=0x55, .sp=0xb4, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x6b}, {.addr=0x5d91, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5d91, .value=0x8e, .type=IO_READ},
        {.addr=0x5d92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xbca3, .a=0x63, .x=0x79, .y=0x04, .sp=0xa8, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x71}, {.addr=0xbca3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbca4, .a=0x63, .x=0x79, .y=0x04, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x71}, {.addr=0xbca3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbca3, .value=0x8e, .type=IO_READ},
        {.addr=0xbca4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x305c, .a=0xed, .x=0x99, .y=0xec, .sp=0x41, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x7d}, {.addr=0x305c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x305d, .a=0xed, .x=0x99, .y=0xec, .sp=0x42, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x7d}, {.addr=0x305c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x305c, .value=0x8e, .type=IO_READ},
        {.addr=0x305d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7222, .a=0xce, .x=0x16, .y=0x5b, .sp=0xa6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xb0}, {.addr=0x7222, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7223, .a=0xce, .x=0x16, .y=0x5b, .sp=0xa7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xb0}, {.addr=0x7222, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7222, .value=0x8e, .type=IO_READ},
        {.addr=0x7223, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x918d, .a=0x06, .x=0xb5, .y=0x06, .sp=0xd8, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xa5}, {.addr=0x918d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x918e, .a=0x06, .x=0xb5, .y=0x06, .sp=0xd9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xa5}, {.addr=0x918d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x918d, .value=0x8e, .type=IO_READ},
        {.addr=0x918e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb180, .a=0x6e, .x=0xc5, .y=0x91, .sp=0x96, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xd6}, {.addr=0xb180, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb181, .a=0x6e, .x=0xc5, .y=0x91, .sp=0x97, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xd6}, {.addr=0xb180, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb180, .value=0x8e, .type=IO_READ},
        {.addr=0xb181, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xe284, .a=0x3d, .x=0xbf, .y=0xb4, .sp=0x13, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x39}, {.addr=0xe284, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe285, .a=0x3d, .x=0xbf, .y=0xb4, .sp=0x14, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x39}, {.addr=0xe284, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe284, .value=0x8e, .type=IO_READ},
        {.addr=0xe285, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2155, .a=0x63, .x=0x4e, .y=0x43, .sp=0x1e, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x57}, {.addr=0x2155, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2156, .a=0x63, .x=0x4e, .y=0x43, .sp=0x1f, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x57}, {.addr=0x2155, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2155, .value=0x8e, .type=IO_READ},
        {.addr=0x2156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xd944, .a=0x02, .x=0x27, .y=0xa7, .sp=0x72, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x40}, {.addr=0xd944, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd945, .a=0x02, .x=0x27, .y=0xa7, .sp=0x73, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x40}, {.addr=0xd944, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd944, .value=0x8e, .type=IO_READ},
        {.addr=0xd945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x2f1a, .a=0x52, .x=0x5f, .y=0x0c, .sp=0x46, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x12}, {.addr=0x2f1a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2f1b, .a=0x52, .x=0x5f, .y=0x0c, .sp=0x47, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x12}, {.addr=0x2f1a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2f1a, .value=0x8e, .type=IO_READ},
        {.addr=0x2f1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x067f, .a=0xbb, .x=0x77, .y=0x77, .sp=0x76, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x80}, {.addr=0x067f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0680, .a=0xbb, .x=0x77, .y=0x77, .sp=0x77, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x80}, {.addr=0x067f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x067f, .value=0x8e, .type=IO_READ},
        {.addr=0x0680, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0x6a, .x=0x42, .y=0xf2, .sp=0x39, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x67}, {.addr=0x7c14, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7c15, .a=0x6a, .x=0x42, .y=0xf2, .sp=0x3a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x67}, {.addr=0x7c14, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0x8e, .type=IO_READ},
        {.addr=0x7c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xb4cf, .a=0x9b, .x=0x13, .y=0x0a, .sp=0xd5, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x04}, {.addr=0xb4cf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb4d0, .a=0x9b, .x=0x13, .y=0x0a, .sp=0xd6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x04}, {.addr=0xb4cf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb4cf, .value=0x8e, .type=IO_READ},
        {.addr=0xb4d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x13cf, .a=0xf4, .x=0x4d, .y=0x41, .sp=0x46, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x83}, {.addr=0x13cf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x13d0, .a=0xf4, .x=0x4d, .y=0x41, .sp=0x47, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x83}, {.addr=0x13cf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x13cf, .value=0x8e, .type=IO_READ},
        {.addr=0x13d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xffe4, .a=0xa1, .x=0xae, .y=0x77, .sp=0x49, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xc3}, {.addr=0xffe4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xffe5, .a=0xa1, .x=0xae, .y=0x77, .sp=0x4a, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xc3}, {.addr=0xffe4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xffe4, .value=0x8e, .type=IO_READ},
        {.addr=0xffe5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x89e0, .a=0xeb, .x=0x48, .y=0x5d, .sp=0xfa, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xec}, {.addr=0x89e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x89e1, .a=0xeb, .x=0x48, .y=0x5d, .sp=0xfb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xec}, {.addr=0x89e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x89e0, .value=0x8e, .type=IO_READ},
        {.addr=0x89e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xce43, .a=0x20, .x=0x63, .y=0xc0, .sp=0x02, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x1c}, {.addr=0xce43, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce44, .a=0x20, .x=0x63, .y=0xc0, .sp=0x03, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x1c}, {.addr=0xce43, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce43, .value=0x8e, .type=IO_READ},
        {.addr=0xce44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x413c, .a=0xec, .x=0x8b, .y=0xe4, .sp=0xf8, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x09}, {.addr=0x413c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x413d, .a=0xec, .x=0x8b, .y=0xe4, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x09}, {.addr=0x413c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x413c, .value=0x8e, .type=IO_READ},
        {.addr=0x413d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd23c, .a=0xc9, .x=0x15, .y=0x05, .sp=0xab, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x8b}, {.addr=0xd23c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd23d, .a=0xc9, .x=0x15, .y=0x05, .sp=0xac, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x8b}, {.addr=0xd23c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd23c, .value=0x8e, .type=IO_READ},
        {.addr=0xd23d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xb8de, .a=0xd8, .x=0x43, .y=0xbb, .sp=0xe6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xe7}, {.addr=0xb8de, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb8df, .a=0xd8, .x=0x43, .y=0xbb, .sp=0xe7, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xe7}, {.addr=0xb8de, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb8de, .value=0x8e, .type=IO_READ},
        {.addr=0xb8df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xe246, .a=0x70, .x=0x35, .y=0xf2, .sp=0x92, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x08}, {.addr=0xe246, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe247, .a=0x70, .x=0x35, .y=0xf2, .sp=0x93, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x08}, {.addr=0xe246, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe246, .value=0x8e, .type=IO_READ},
        {.addr=0xe247, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x67b6, .a=0x14, .x=0x29, .y=0x4a, .sp=0x7d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x47}, {.addr=0x67b6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x67b7, .a=0x14, .x=0x29, .y=0x4a, .sp=0x7e, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x47}, {.addr=0x67b6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x67b6, .value=0x8e, .type=IO_READ},
        {.addr=0x67b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xd288, .a=0xe4, .x=0x2f, .y=0x51, .sp=0xd6, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xab}, {.addr=0xd288, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd289, .a=0xe4, .x=0x2f, .y=0x51, .sp=0xd7, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xab}, {.addr=0xd288, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd288, .value=0x8e, .type=IO_READ},
        {.addr=0xd289, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x0d33, .a=0x1c, .x=0xd0, .y=0xf0, .sp=0xb9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x43}, {.addr=0x0d33, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d34, .a=0x1c, .x=0xd0, .y=0xf0, .sp=0xba, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x43}, {.addr=0x0d33, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d33, .value=0x8e, .type=IO_READ},
        {.addr=0x0d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xbd9c, .a=0x26, .x=0x25, .y=0xff, .sp=0xc3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xcf}, {.addr=0xbd9c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbd9d, .a=0x26, .x=0x25, .y=0xff, .sp=0xc4, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xcf}, {.addr=0xbd9c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbd9c, .value=0x8e, .type=IO_READ},
        {.addr=0xbd9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x83c3, .a=0xf2, .x=0x4f, .y=0x6a, .sp=0x4e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x31}, {.addr=0x83c3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x83c4, .a=0xf2, .x=0x4f, .y=0x6a, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x31}, {.addr=0x83c3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x83c3, .value=0x8e, .type=IO_READ},
        {.addr=0x83c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xcbeb, .a=0x23, .x=0x35, .y=0x4a, .sp=0x5b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x66}, {.addr=0xcbeb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcbec, .a=0x23, .x=0x35, .y=0x4a, .sp=0x5c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x66}, {.addr=0xcbeb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcbeb, .value=0x8e, .type=IO_READ},
        {.addr=0xcbec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xb22e, .a=0x29, .x=0x0c, .y=0x9f, .sp=0xb3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xec}, {.addr=0xb22e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb22f, .a=0x29, .x=0x0c, .y=0x9f, .sp=0xb4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xec}, {.addr=0xb22e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb22e, .value=0x8e, .type=IO_READ},
        {.addr=0xb22f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x51bd, .a=0xb6, .x=0xf7, .y=0x1c, .sp=0xaa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xda}, {.addr=0x51bd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x51be, .a=0xb6, .x=0xf7, .y=0x1c, .sp=0xab, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xda}, {.addr=0x51bd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x51bd, .value=0x8e, .type=IO_READ},
        {.addr=0x51be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x108f, .a=0xc6, .x=0x47, .y=0x22, .sp=0xc4, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf9}, {.addr=0x108f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1090, .a=0xc6, .x=0x47, .y=0x22, .sp=0xc5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xf9}, {.addr=0x108f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x108f, .value=0x8e, .type=IO_READ},
        {.addr=0x1090, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x1e0d, .a=0x03, .x=0xad, .y=0xe5, .sp=0x36, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xde}, {.addr=0x1e0d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1e0e, .a=0x03, .x=0xad, .y=0xe5, .sp=0x37, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xde}, {.addr=0x1e0d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1e0d, .value=0x8e, .type=IO_READ},
        {.addr=0x1e0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xdad5, .a=0xa8, .x=0x24, .y=0xc2, .sp=0x23, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xc5}, {.addr=0xdad5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdad6, .a=0xa8, .x=0x24, .y=0xc2, .sp=0x24, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xc5}, {.addr=0xdad5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdad5, .value=0x8e, .type=IO_READ},
        {.addr=0xdad6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x6032, .a=0x60, .x=0x4f, .y=0x29, .sp=0x94, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xf2}, {.addr=0x6032, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6033, .a=0x60, .x=0x4f, .y=0x29, .sp=0x95, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xf2}, {.addr=0x6032, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6032, .value=0x8e, .type=IO_READ},
        {.addr=0x6033, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xdb46, .a=0x5b, .x=0x5f, .y=0xc0, .sp=0xd9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xd8}, {.addr=0xdb46, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdb47, .a=0x5b, .x=0x5f, .y=0xc0, .sp=0xda, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xd8}, {.addr=0xdb46, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdb46, .value=0x8e, .type=IO_READ},
        {.addr=0xdb47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x3d6a, .a=0xeb, .x=0x26, .y=0x39, .sp=0x1d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xd0}, {.addr=0x3d6a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3d6b, .a=0xeb, .x=0x26, .y=0x39, .sp=0x1e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xd0}, {.addr=0x3d6a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3d6a, .value=0x8e, .type=IO_READ},
        {.addr=0x3d6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9b2c, .a=0x4f, .x=0x1f, .y=0xcf, .sp=0x03, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x55}, {.addr=0x9b2c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9b2d, .a=0x4f, .x=0x1f, .y=0xcf, .sp=0x04, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x55}, {.addr=0x9b2c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9b2c, .value=0x8e, .type=IO_READ},
        {.addr=0x9b2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x6240, .a=0x88, .x=0xf7, .y=0xb1, .sp=0xd9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x5c}, {.addr=0x6240, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6241, .a=0x88, .x=0xf7, .y=0xb1, .sp=0xda, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x5c}, {.addr=0x6240, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6240, .value=0x8e, .type=IO_READ},
        {.addr=0x6241, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x2f3e, .a=0x5a, .x=0xe4, .y=0x9d, .sp=0xe2, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xe5}, {.addr=0x2f3e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2f3f, .a=0x5a, .x=0xe4, .y=0x9d, .sp=0xe3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xe5}, {.addr=0x2f3e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2f3e, .value=0x8e, .type=IO_READ},
        {.addr=0x2f3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x60a2, .a=0x99, .x=0x89, .y=0x82, .sp=0xdd, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x9c}, {.addr=0x60a2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x60a3, .a=0x99, .x=0x89, .y=0x82, .sp=0xde, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x9c}, {.addr=0x60a2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x60a2, .value=0x8e, .type=IO_READ},
        {.addr=0x60a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x5d07, .a=0xf4, .x=0x78, .y=0x92, .sp=0xe8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x5d}, {.addr=0x5d07, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5d08, .a=0xf4, .x=0x78, .y=0x92, .sp=0xe9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x5d}, {.addr=0x5d07, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5d07, .value=0x8e, .type=IO_READ},
        {.addr=0x5d08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x2848, .a=0x8c, .x=0xc9, .y=0xe9, .sp=0x27, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x35}, {.addr=0x2848, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2849, .a=0x8c, .x=0xc9, .y=0xe9, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x35}, {.addr=0x2848, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2848, .value=0x8e, .type=IO_READ},
        {.addr=0x2849, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4f49, .a=0x08, .x=0x23, .y=0x8d, .sp=0x72, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xdc}, {.addr=0x4f49, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f4a, .a=0x08, .x=0x23, .y=0x8d, .sp=0x73, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xdc}, {.addr=0x4f49, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4f49, .value=0x8e, .type=IO_READ},
        {.addr=0x4f4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x3c96, .a=0xf9, .x=0xb6, .y=0x9e, .sp=0x47, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x33}, {.addr=0x3c96, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3c97, .a=0xf9, .x=0xb6, .y=0x9e, .sp=0x48, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x33}, {.addr=0x3c96, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3c96, .value=0x8e, .type=IO_READ},
        {.addr=0x3c97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xa244, .a=0xae, .x=0x62, .y=0x82, .sp=0xee, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x50}, {.addr=0xa244, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa245, .a=0xae, .x=0x62, .y=0x82, .sp=0xef, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x50}, {.addr=0xa244, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa244, .value=0x8e, .type=IO_READ},
        {.addr=0xa245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xcca9, .a=0x9a, .x=0xeb, .y=0xa7, .sp=0x51, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xc0}, {.addr=0xcca9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xccaa, .a=0x9a, .x=0xeb, .y=0xa7, .sp=0x52, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xc0}, {.addr=0xcca9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcca9, .value=0x8e, .type=IO_READ},
        {.addr=0xccaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x1aa8, .a=0x74, .x=0x0b, .y=0x82, .sp=0x14, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x98}, {.addr=0x1aa8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1aa9, .a=0x74, .x=0x0b, .y=0x82, .sp=0x15, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x98}, {.addr=0x1aa8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1aa8, .value=0x8e, .type=IO_READ},
        {.addr=0x1aa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa188, .a=0xb2, .x=0x26, .y=0x06, .sp=0xf6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x41}, {.addr=0xa188, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa189, .a=0xb2, .x=0x26, .y=0x06, .sp=0xf7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x41}, {.addr=0xa188, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa188, .value=0x8e, .type=IO_READ},
        {.addr=0xa189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x0aa7, .a=0xcf, .x=0x8b, .y=0xa2, .sp=0x92, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xaa}, {.addr=0x0aa7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0aa8, .a=0xcf, .x=0x8b, .y=0xa2, .sp=0x93, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xaa}, {.addr=0x0aa7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0aa7, .value=0x8e, .type=IO_READ},
        {.addr=0x0aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xe538, .a=0x84, .x=0xfc, .y=0x72, .sp=0x5e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xd4}, {.addr=0xe538, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe539, .a=0x84, .x=0xfc, .y=0x72, .sp=0x5f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xd4}, {.addr=0xe538, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe538, .value=0x8e, .type=IO_READ},
        {.addr=0xe539, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0f1e, .a=0x22, .x=0x56, .y=0x7a, .sp=0xfe, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x79}, {.addr=0x0f1e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f1f, .a=0x22, .x=0x56, .y=0x7a, .sp=0xff, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x79}, {.addr=0x0f1e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f1e, .value=0x8e, .type=IO_READ},
        {.addr=0x0f1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x515f, .a=0xf5, .x=0x73, .y=0x1c, .sp=0x96, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x75}, {.addr=0x515f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0xf5, .x=0x73, .y=0x1c, .sp=0x97, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x75}, {.addr=0x515f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x515f, .value=0x8e, .type=IO_READ},
        {.addr=0x5160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xfbae, .a=0x41, .x=0xb4, .y=0x6b, .sp=0x41, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xaa}, {.addr=0xfbae, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfbaf, .a=0x41, .x=0xb4, .y=0x6b, .sp=0x42, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xaa}, {.addr=0xfbae, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfbae, .value=0x8e, .type=IO_READ},
        {.addr=0xfbaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xd1a0, .a=0x4e, .x=0xa5, .y=0x7a, .sp=0xe2, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x09}, {.addr=0xd1a0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1a1, .a=0x4e, .x=0xa5, .y=0x7a, .sp=0xe3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x09}, {.addr=0xd1a0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1a0, .value=0x8e, .type=IO_READ},
        {.addr=0xd1a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2344, .a=0x62, .x=0x6a, .y=0x16, .sp=0xa6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x2f}, {.addr=0x2344, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2345, .a=0x62, .x=0x6a, .y=0x16, .sp=0xa7, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x2f}, {.addr=0x2344, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2344, .value=0x8e, .type=IO_READ},
        {.addr=0x2345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x9e23, .a=0x1c, .x=0xb2, .y=0x3b, .sp=0xd6, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x1a}, {.addr=0x9e23, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9e24, .a=0x1c, .x=0xb2, .y=0x3b, .sp=0xd7, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x1a}, {.addr=0x9e23, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9e23, .value=0x8e, .type=IO_READ},
        {.addr=0x9e24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xd90d, .a=0xf5, .x=0x18, .y=0x12, .sp=0xca, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xb5}, {.addr=0xd90d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd90e, .a=0xf5, .x=0x18, .y=0x12, .sp=0xcb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xb5}, {.addr=0xd90d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd90d, .value=0x8e, .type=IO_READ},
        {.addr=0xd90e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x3796, .a=0x7f, .x=0x48, .y=0xc9, .sp=0x99, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x51}, {.addr=0x3796, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3797, .a=0x7f, .x=0x48, .y=0xc9, .sp=0x9a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x51}, {.addr=0x3796, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3796, .value=0x8e, .type=IO_READ},
        {.addr=0x3797, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xcd1c, .a=0xc2, .x=0xd1, .y=0xdc, .sp=0xa0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x9f}, {.addr=0xcd1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcd1d, .a=0xc2, .x=0xd1, .y=0xdc, .sp=0xa1, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x9f}, {.addr=0xcd1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcd1c, .value=0x8e, .type=IO_READ},
        {.addr=0xcd1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xc6c4, .a=0xa5, .x=0x64, .y=0x16, .sp=0x36, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x95}, {.addr=0xc6c4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc6c5, .a=0xa5, .x=0x64, .y=0x16, .sp=0x37, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x95}, {.addr=0xc6c4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc6c4, .value=0x8e, .type=IO_READ},
        {.addr=0xc6c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xb2ed, .a=0xdf, .x=0xbd, .y=0x7e, .sp=0x80, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x25}, {.addr=0xb2ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb2ee, .a=0xdf, .x=0xbd, .y=0x7e, .sp=0x81, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x25}, {.addr=0xb2ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb2ed, .value=0x8e, .type=IO_READ},
        {.addr=0xb2ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0200) {
    const struct CPU_State initial_cpu = {.pc=0xaf27, .a=0xd2, .x=0x7d, .y=0x74, .sp=0xe0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x48}, {.addr=0xaf27, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaf28, .a=0xd2, .x=0x7d, .y=0x74, .sp=0xe1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x48}, {.addr=0xaf27, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf27, .value=0x8e, .type=IO_READ},
        {.addr=0xaf28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0201) {
    const struct CPU_State initial_cpu = {.pc=0x0d53, .a=0x21, .x=0x05, .y=0x14, .sp=0xaa, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xdf}, {.addr=0x0d53, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d54, .a=0x21, .x=0x05, .y=0x14, .sp=0xab, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xdf}, {.addr=0x0d53, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d53, .value=0x8e, .type=IO_READ},
        {.addr=0x0d54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0202) {
    const struct CPU_State initial_cpu = {.pc=0xb78d, .a=0x1e, .x=0x0e, .y=0x1f, .sp=0x7e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x96}, {.addr=0xb78d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb78e, .a=0x1e, .x=0x0e, .y=0x1f, .sp=0x7f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x96}, {.addr=0xb78d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb78d, .value=0x8e, .type=IO_READ},
        {.addr=0xb78e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0203) {
    const struct CPU_State initial_cpu = {.pc=0x17de, .a=0x60, .x=0xd3, .y=0x2b, .sp=0x7c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xa4}, {.addr=0x17de, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x17df, .a=0x60, .x=0xd3, .y=0x2b, .sp=0x7d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa4}, {.addr=0x17de, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x17de, .value=0x8e, .type=IO_READ},
        {.addr=0x17df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0204) {
    const struct CPU_State initial_cpu = {.pc=0x76bf, .a=0x0e, .x=0x3c, .y=0xf4, .sp=0x46, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x10}, {.addr=0x76bf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x76c0, .a=0x0e, .x=0x3c, .y=0xf4, .sp=0x47, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x10}, {.addr=0x76bf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x76bf, .value=0x8e, .type=IO_READ},
        {.addr=0x76c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0205) {
    const struct CPU_State initial_cpu = {.pc=0xb35e, .a=0x51, .x=0x27, .y=0x84, .sp=0xb7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x8d}, {.addr=0xb35e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb35f, .a=0x51, .x=0x27, .y=0x84, .sp=0xb8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x8d}, {.addr=0xb35e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb35e, .value=0x8e, .type=IO_READ},
        {.addr=0xb35f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0206) {
    const struct CPU_State initial_cpu = {.pc=0xb1b8, .a=0x82, .x=0xa5, .y=0x4c, .sp=0xfa, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xfc}, {.addr=0xb1b8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb1b9, .a=0x82, .x=0xa5, .y=0x4c, .sp=0xfb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xfc}, {.addr=0xb1b8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb1b8, .value=0x8e, .type=IO_READ},
        {.addr=0xb1b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0207) {
    const struct CPU_State initial_cpu = {.pc=0x41e0, .a=0x0e, .x=0xc9, .y=0x41, .sp=0x49, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x2b}, {.addr=0x41e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x41e1, .a=0x0e, .x=0xc9, .y=0x41, .sp=0x4a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x2b}, {.addr=0x41e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x41e0, .value=0x8e, .type=IO_READ},
        {.addr=0x41e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0208) {
    const struct CPU_State initial_cpu = {.pc=0x44f9, .a=0x45, .x=0x5c, .y=0x2f, .sp=0x52, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xfd}, {.addr=0x44f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x44fa, .a=0x45, .x=0x5c, .y=0x2f, .sp=0x53, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xfd}, {.addr=0x44f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x44f9, .value=0x8e, .type=IO_READ},
        {.addr=0x44fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0209) {
    const struct CPU_State initial_cpu = {.pc=0xd4a6, .a=0x75, .x=0x06, .y=0x0c, .sp=0x28, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x46}, {.addr=0xd4a6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd4a7, .a=0x75, .x=0x06, .y=0x0c, .sp=0x29, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x46}, {.addr=0xd4a6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd4a6, .value=0x8e, .type=IO_READ},
        {.addr=0xd4a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020A) {
    const struct CPU_State initial_cpu = {.pc=0x12ec, .a=0x12, .x=0x77, .y=0x82, .sp=0x62, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xb4}, {.addr=0x12ec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x12ed, .a=0x12, .x=0x77, .y=0x82, .sp=0x63, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xb4}, {.addr=0x12ec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x12ec, .value=0x8e, .type=IO_READ},
        {.addr=0x12ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020B) {
    const struct CPU_State initial_cpu = {.pc=0x6650, .a=0x12, .x=0x0b, .y=0xff, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x72}, {.addr=0x6650, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6651, .a=0x12, .x=0x0b, .y=0xff, .sp=0x8d, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x72}, {.addr=0x6650, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6650, .value=0x8e, .type=IO_READ},
        {.addr=0x6651, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020C) {
    const struct CPU_State initial_cpu = {.pc=0x48ed, .a=0x3b, .x=0xd2, .y=0x34, .sp=0x8f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xe4}, {.addr=0x48ed, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x48ee, .a=0x3b, .x=0xd2, .y=0x34, .sp=0x90, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xe4}, {.addr=0x48ed, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x48ed, .value=0x8e, .type=IO_READ},
        {.addr=0x48ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4291, .a=0x30, .x=0xec, .y=0xde, .sp=0x3f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x10}, {.addr=0x4291, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4292, .a=0x30, .x=0xec, .y=0xde, .sp=0x40, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x10}, {.addr=0x4291, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4291, .value=0x8e, .type=IO_READ},
        {.addr=0x4292, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020E) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x2c, .x=0x6d, .y=0x58, .sp=0xb2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xfe}, {.addr=0x681d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x681e, .a=0x2c, .x=0x6d, .y=0x58, .sp=0xb3, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xfe}, {.addr=0x681d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0x8e, .type=IO_READ},
        {.addr=0x681e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5c66, .a=0xee, .x=0xce, .y=0x4d, .sp=0x2a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x76}, {.addr=0x5c66, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5c67, .a=0xee, .x=0xce, .y=0x4d, .sp=0x2b, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x76}, {.addr=0x5c66, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5c66, .value=0x8e, .type=IO_READ},
        {.addr=0x5c67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0210) {
    const struct CPU_State initial_cpu = {.pc=0x0f64, .a=0x03, .x=0x61, .y=0xf2, .sp=0x06, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xed}, {.addr=0x0f64, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f65, .a=0x03, .x=0x61, .y=0xf2, .sp=0x07, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xed}, {.addr=0x0f64, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f64, .value=0x8e, .type=IO_READ},
        {.addr=0x0f65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0211) {
    const struct CPU_State initial_cpu = {.pc=0x5518, .a=0x6e, .x=0xb3, .y=0xdd, .sp=0x75, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x90}, {.addr=0x5518, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5519, .a=0x6e, .x=0xb3, .y=0xdd, .sp=0x76, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x90}, {.addr=0x5518, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5518, .value=0x8e, .type=IO_READ},
        {.addr=0x5519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf73e, .a=0xed, .x=0x53, .y=0x8b, .sp=0xbb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xa5}, {.addr=0xf73e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf73f, .a=0xed, .x=0x53, .y=0x8b, .sp=0xbc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xa5}, {.addr=0xf73e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf73e, .value=0x8e, .type=IO_READ},
        {.addr=0xf73f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0213) {
    const struct CPU_State initial_cpu = {.pc=0xc777, .a=0xce, .x=0x76, .y=0x45, .sp=0x11, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xb6}, {.addr=0xc777, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc778, .a=0xce, .x=0x76, .y=0x45, .sp=0x12, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xb6}, {.addr=0xc777, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc777, .value=0x8e, .type=IO_READ},
        {.addr=0xc778, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0214) {
    const struct CPU_State initial_cpu = {.pc=0xd6bd, .a=0x92, .x=0x43, .y=0x1f, .sp=0xeb, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x95}, {.addr=0xd6bd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd6be, .a=0x92, .x=0x43, .y=0x1f, .sp=0xec, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x95}, {.addr=0xd6bd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd6bd, .value=0x8e, .type=IO_READ},
        {.addr=0xd6be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0215) {
    const struct CPU_State initial_cpu = {.pc=0x3f44, .a=0xbd, .x=0xc9, .y=0x6e, .sp=0x87, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x18}, {.addr=0x3f44, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3f45, .a=0xbd, .x=0xc9, .y=0x6e, .sp=0x88, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x18}, {.addr=0x3f44, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3f44, .value=0x8e, .type=IO_READ},
        {.addr=0x3f45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0216) {
    const struct CPU_State initial_cpu = {.pc=0x6794, .a=0x0a, .x=0x6b, .y=0x6f, .sp=0x47, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x41}, {.addr=0x6794, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6795, .a=0x0a, .x=0x6b, .y=0x6f, .sp=0x48, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x41}, {.addr=0x6794, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6794, .value=0x8e, .type=IO_READ},
        {.addr=0x6795, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0217) {
    const struct CPU_State initial_cpu = {.pc=0x9f8d, .a=0x27, .x=0x89, .y=0x22, .sp=0x80, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xa5}, {.addr=0x9f8d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9f8e, .a=0x27, .x=0x89, .y=0x22, .sp=0x81, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xa5}, {.addr=0x9f8d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9f8d, .value=0x8e, .type=IO_READ},
        {.addr=0x9f8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0218) {
    const struct CPU_State initial_cpu = {.pc=0x36c1, .a=0x3a, .x=0xca, .y=0x8d, .sp=0xe3, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x4c}, {.addr=0x36c1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x36c2, .a=0x3a, .x=0xca, .y=0x8d, .sp=0xe4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x4c}, {.addr=0x36c1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x36c1, .value=0x8e, .type=IO_READ},
        {.addr=0x36c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0219) {
    const struct CPU_State initial_cpu = {.pc=0xca3a, .a=0x12, .x=0x99, .y=0x40, .sp=0x25, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xc7}, {.addr=0xca3a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xca3b, .a=0x12, .x=0x99, .y=0x40, .sp=0x26, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xc7}, {.addr=0xca3a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xca3a, .value=0x8e, .type=IO_READ},
        {.addr=0xca3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2de7, .a=0x74, .x=0x91, .y=0x69, .sp=0x24, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x8f}, {.addr=0x2de7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2de8, .a=0x74, .x=0x91, .y=0x69, .sp=0x25, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x8f}, {.addr=0x2de7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2de7, .value=0x8e, .type=IO_READ},
        {.addr=0x2de8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021B) {
    const struct CPU_State initial_cpu = {.pc=0x100d, .a=0x14, .x=0xa5, .y=0xaa, .sp=0x22, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x6e}, {.addr=0x100d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x100e, .a=0x14, .x=0xa5, .y=0xaa, .sp=0x23, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x6e}, {.addr=0x100d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x100d, .value=0x8e, .type=IO_READ},
        {.addr=0x100e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021C) {
    const struct CPU_State initial_cpu = {.pc=0x3239, .a=0xad, .x=0xca, .y=0x24, .sp=0x41, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x72}, {.addr=0x3239, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x323a, .a=0xad, .x=0xca, .y=0x24, .sp=0x42, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x72}, {.addr=0x3239, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3239, .value=0x8e, .type=IO_READ},
        {.addr=0x323a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021D) {
    const struct CPU_State initial_cpu = {.pc=0x3a69, .a=0x2e, .x=0x6f, .y=0xaa, .sp=0x8f, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x54}, {.addr=0x3a69, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a6a, .a=0x2e, .x=0x6f, .y=0xaa, .sp=0x90, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x54}, {.addr=0x3a69, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a69, .value=0x8e, .type=IO_READ},
        {.addr=0x3a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021E) {
    const struct CPU_State initial_cpu = {.pc=0xe824, .a=0xb4, .x=0x8c, .y=0x8d, .sp=0x8b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xf6}, {.addr=0xe824, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe825, .a=0xb4, .x=0x8c, .y=0x8d, .sp=0x8c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xf6}, {.addr=0xe824, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe824, .value=0x8e, .type=IO_READ},
        {.addr=0xe825, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_021F) {
    const struct CPU_State initial_cpu = {.pc=0xbdc9, .a=0xb5, .x=0x54, .y=0xce, .sp=0xfb, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x05}, {.addr=0xbdc9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbdca, .a=0xb5, .x=0x54, .y=0xce, .sp=0xfc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x05}, {.addr=0xbdc9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbdc9, .value=0x8e, .type=IO_READ},
        {.addr=0xbdca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9b38, .a=0x44, .x=0x1e, .y=0x1e, .sp=0x74, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x83}, {.addr=0x9b38, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9b39, .a=0x44, .x=0x1e, .y=0x1e, .sp=0x75, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x83}, {.addr=0x9b38, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9b38, .value=0x8e, .type=IO_READ},
        {.addr=0x9b39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa400, .a=0xad, .x=0xfa, .y=0x24, .sp=0x6b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xab}, {.addr=0xa400, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa401, .a=0xad, .x=0xfa, .y=0x24, .sp=0x6c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xab}, {.addr=0xa400, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa400, .value=0x8e, .type=IO_READ},
        {.addr=0xa401, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfb8f, .a=0xa4, .x=0xf5, .y=0x18, .sp=0xbf, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x88}, {.addr=0xfb8f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfb90, .a=0xa4, .x=0xf5, .y=0x18, .sp=0xc0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x88}, {.addr=0xfb8f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfb8f, .value=0x8e, .type=IO_READ},
        {.addr=0xfb90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0223) {
    const struct CPU_State initial_cpu = {.pc=0x0b2b, .a=0xf1, .x=0x3c, .y=0x1d, .sp=0x00, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xe3}, {.addr=0x0b2b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0b2c, .a=0xf1, .x=0x3c, .y=0x1d, .sp=0x01, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xe3}, {.addr=0x0b2b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0b2b, .value=0x8e, .type=IO_READ},
        {.addr=0x0b2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0224) {
    const struct CPU_State initial_cpu = {.pc=0xeb10, .a=0x25, .x=0x61, .y=0x9e, .sp=0x8c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xb0}, {.addr=0xeb10, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeb11, .a=0x25, .x=0x61, .y=0x9e, .sp=0x8d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xb0}, {.addr=0xeb10, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeb10, .value=0x8e, .type=IO_READ},
        {.addr=0xeb11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0225) {
    const struct CPU_State initial_cpu = {.pc=0x4b87, .a=0xc6, .x=0x37, .y=0x77, .sp=0x4f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x5a}, {.addr=0x4b87, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4b88, .a=0xc6, .x=0x37, .y=0x77, .sp=0x50, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x5a}, {.addr=0x4b87, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4b87, .value=0x8e, .type=IO_READ},
        {.addr=0x4b88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0226) {
    const struct CPU_State initial_cpu = {.pc=0xaf2e, .a=0x09, .x=0x0d, .y=0xaa, .sp=0xf3, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x29}, {.addr=0xaf2e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaf2f, .a=0x09, .x=0x0d, .y=0xaa, .sp=0xf4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x29}, {.addr=0xaf2e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaf2e, .value=0x8e, .type=IO_READ},
        {.addr=0xaf2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0227) {
    const struct CPU_State initial_cpu = {.pc=0x3a83, .a=0x4e, .x=0xd5, .y=0x64, .sp=0x15, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x28}, {.addr=0x3a83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a84, .a=0x4e, .x=0xd5, .y=0x64, .sp=0x16, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x28}, {.addr=0x3a83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a83, .value=0x8e, .type=IO_READ},
        {.addr=0x3a84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0228) {
    const struct CPU_State initial_cpu = {.pc=0x482a, .a=0x11, .x=0xa6, .y=0x49, .sp=0x1e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x9e}, {.addr=0x482a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x482b, .a=0x11, .x=0xa6, .y=0x49, .sp=0x1f, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x9e}, {.addr=0x482a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x482a, .value=0x8e, .type=IO_READ},
        {.addr=0x482b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0229) {
    const struct CPU_State initial_cpu = {.pc=0xa933, .a=0xa5, .x=0x7c, .y=0x40, .sp=0xee, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xe2}, {.addr=0xa933, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa934, .a=0xa5, .x=0x7c, .y=0x40, .sp=0xef, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xe2}, {.addr=0xa933, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa933, .value=0x8e, .type=IO_READ},
        {.addr=0xa934, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022A) {
    const struct CPU_State initial_cpu = {.pc=0xf1ef, .a=0x21, .x=0x22, .y=0xde, .sp=0x69, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x0f}, {.addr=0xf1ef, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0x21, .x=0x22, .y=0xde, .sp=0x6a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x0f}, {.addr=0xf1ef, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf1ef, .value=0x8e, .type=IO_READ},
        {.addr=0xf1f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022B) {
    const struct CPU_State initial_cpu = {.pc=0xdbba, .a=0x2d, .x=0x33, .y=0x99, .sp=0x5f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x09}, {.addr=0xdbba, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdbbb, .a=0x2d, .x=0x33, .y=0x99, .sp=0x60, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x09}, {.addr=0xdbba, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdbba, .value=0x8e, .type=IO_READ},
        {.addr=0xdbbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022C) {
    const struct CPU_State initial_cpu = {.pc=0x9905, .a=0xd8, .x=0xdd, .y=0x60, .sp=0x53, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xcc}, {.addr=0x9905, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9906, .a=0xd8, .x=0xdd, .y=0x60, .sp=0x54, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xcc}, {.addr=0x9905, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9905, .value=0x8e, .type=IO_READ},
        {.addr=0x9906, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022D) {
    const struct CPU_State initial_cpu = {.pc=0x1e5f, .a=0x59, .x=0xb0, .y=0xc2, .sp=0x3e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0x1e5f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1e60, .a=0x59, .x=0xb0, .y=0xc2, .sp=0x3f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0x1e5f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1e5f, .value=0x8e, .type=IO_READ},
        {.addr=0x1e60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022E) {
    const struct CPU_State initial_cpu = {.pc=0x6f34, .a=0x1b, .x=0xa9, .y=0x74, .sp=0x12, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xaf}, {.addr=0x6f34, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6f35, .a=0x1b, .x=0xa9, .y=0x74, .sp=0x13, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xaf}, {.addr=0x6f34, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6f34, .value=0x8e, .type=IO_READ},
        {.addr=0x6f35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe8e7, .a=0xe1, .x=0xff, .y=0x11, .sp=0x04, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x76}, {.addr=0xe8e7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8e8, .a=0xe1, .x=0xff, .y=0x11, .sp=0x05, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x76}, {.addr=0xe8e7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8e7, .value=0x8e, .type=IO_READ},
        {.addr=0xe8e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0230) {
    const struct CPU_State initial_cpu = {.pc=0x4155, .a=0xd7, .x=0x8b, .y=0xd8, .sp=0xaa, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x05}, {.addr=0x4155, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4156, .a=0xd7, .x=0x8b, .y=0xd8, .sp=0xab, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x05}, {.addr=0x4155, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4155, .value=0x8e, .type=IO_READ},
        {.addr=0x4156, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0231) {
    const struct CPU_State initial_cpu = {.pc=0xa529, .a=0x9f, .x=0xe5, .y=0x95, .sp=0x22, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x9e}, {.addr=0xa529, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa52a, .a=0x9f, .x=0xe5, .y=0x95, .sp=0x23, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x9e}, {.addr=0xa529, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa529, .value=0x8e, .type=IO_READ},
        {.addr=0xa52a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0232) {
    const struct CPU_State initial_cpu = {.pc=0x2fab, .a=0x20, .x=0x6d, .y=0x3b, .sp=0xbf, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xd3}, {.addr=0x2fab, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2fac, .a=0x20, .x=0x6d, .y=0x3b, .sp=0xc0, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xd3}, {.addr=0x2fab, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2fab, .value=0x8e, .type=IO_READ},
        {.addr=0x2fac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0233) {
    const struct CPU_State initial_cpu = {.pc=0x8748, .a=0x6c, .x=0xf7, .y=0x36, .sp=0x6d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xf7}, {.addr=0x8748, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8749, .a=0x6c, .x=0xf7, .y=0x36, .sp=0x6e, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xf7}, {.addr=0x8748, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8748, .value=0x8e, .type=IO_READ},
        {.addr=0x8749, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0234) {
    const struct CPU_State initial_cpu = {.pc=0xcbcc, .a=0x70, .x=0x07, .y=0x27, .sp=0x94, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x07}, {.addr=0xcbcc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcbcd, .a=0x70, .x=0x07, .y=0x27, .sp=0x95, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x07}, {.addr=0xcbcc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcbcc, .value=0x8e, .type=IO_READ},
        {.addr=0xcbcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd644, .a=0xaf, .x=0x8a, .y=0x45, .sp=0x27, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xb4}, {.addr=0xd644, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd645, .a=0xaf, .x=0x8a, .y=0x45, .sp=0x28, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xb4}, {.addr=0xd644, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd644, .value=0x8e, .type=IO_READ},
        {.addr=0xd645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0236) {
    const struct CPU_State initial_cpu = {.pc=0x076e, .a=0xcb, .x=0x0e, .y=0x00, .sp=0xb2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xe6}, {.addr=0x076e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x076f, .a=0xcb, .x=0x0e, .y=0x00, .sp=0xb3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xe6}, {.addr=0x076e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x076e, .value=0x8e, .type=IO_READ},
        {.addr=0x076f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0237) {
    const struct CPU_State initial_cpu = {.pc=0x7863, .a=0xf5, .x=0x0b, .y=0x13, .sp=0xfb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xfe}, {.addr=0x7863, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7864, .a=0xf5, .x=0x0b, .y=0x13, .sp=0xfc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xfe}, {.addr=0x7863, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7863, .value=0x8e, .type=IO_READ},
        {.addr=0x7864, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0238) {
    const struct CPU_State initial_cpu = {.pc=0xa645, .a=0x5f, .x=0x3b, .y=0x79, .sp=0x38, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xa6}, {.addr=0xa645, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa646, .a=0x5f, .x=0x3b, .y=0x79, .sp=0x39, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xa6}, {.addr=0xa645, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa645, .value=0x8e, .type=IO_READ},
        {.addr=0xa646, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0239) {
    const struct CPU_State initial_cpu = {.pc=0xf179, .a=0xb0, .x=0x36, .y=0xe7, .sp=0x31, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x68}, {.addr=0xf179, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf17a, .a=0xb0, .x=0x36, .y=0xe7, .sp=0x32, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x68}, {.addr=0xf179, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf179, .value=0x8e, .type=IO_READ},
        {.addr=0xf17a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023A) {
    const struct CPU_State initial_cpu = {.pc=0x4979, .a=0xd6, .x=0x5a, .y=0x63, .sp=0x65, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x50}, {.addr=0x4979, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x497a, .a=0xd6, .x=0x5a, .y=0x63, .sp=0x66, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x50}, {.addr=0x4979, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4979, .value=0x8e, .type=IO_READ},
        {.addr=0x497a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023B) {
    const struct CPU_State initial_cpu = {.pc=0x180c, .a=0x18, .x=0x12, .y=0xce, .sp=0x3b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x41}, {.addr=0x180c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x180d, .a=0x18, .x=0x12, .y=0xce, .sp=0x3c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x41}, {.addr=0x180c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x180c, .value=0x8e, .type=IO_READ},
        {.addr=0x180d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023C) {
    const struct CPU_State initial_cpu = {.pc=0x6055, .a=0x91, .x=0x94, .y=0xf8, .sp=0x32, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x87}, {.addr=0x6055, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6056, .a=0x91, .x=0x94, .y=0xf8, .sp=0x33, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x87}, {.addr=0x6055, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6055, .value=0x8e, .type=IO_READ},
        {.addr=0x6056, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023D) {
    const struct CPU_State initial_cpu = {.pc=0xb982, .a=0xa3, .x=0x03, .y=0xaa, .sp=0xed, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x9d}, {.addr=0xb982, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb983, .a=0xa3, .x=0x03, .y=0xaa, .sp=0xee, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x9d}, {.addr=0xb982, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb982, .value=0x8e, .type=IO_READ},
        {.addr=0xb983, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023E) {
    const struct CPU_State initial_cpu = {.pc=0xf0a4, .a=0x7e, .x=0x69, .y=0xe7, .sp=0xda, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x34}, {.addr=0xf0a4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf0a5, .a=0x7e, .x=0x69, .y=0xe7, .sp=0xdb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x34}, {.addr=0xf0a4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf0a4, .value=0x8e, .type=IO_READ},
        {.addr=0xf0a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_023F) {
    const struct CPU_State initial_cpu = {.pc=0xea00, .a=0x32, .x=0xa0, .y=0x0e, .sp=0x39, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x5d}, {.addr=0xea00, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xea01, .a=0x32, .x=0xa0, .y=0x0e, .sp=0x3a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x5d}, {.addr=0xea00, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xea00, .value=0x8e, .type=IO_READ},
        {.addr=0xea01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0240) {
    const struct CPU_State initial_cpu = {.pc=0x97c0, .a=0x90, .x=0xba, .y=0xc0, .sp=0x15, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xc9}, {.addr=0x97c0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0x90, .x=0xba, .y=0xc0, .sp=0x16, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xc9}, {.addr=0x97c0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x97c0, .value=0x8e, .type=IO_READ},
        {.addr=0x97c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0241) {
    const struct CPU_State initial_cpu = {.pc=0xce56, .a=0x18, .x=0x16, .y=0xa0, .sp=0x1a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x43}, {.addr=0xce56, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce57, .a=0x18, .x=0x16, .y=0xa0, .sp=0x1b, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x43}, {.addr=0xce56, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce56, .value=0x8e, .type=IO_READ},
        {.addr=0xce57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0242) {
    const struct CPU_State initial_cpu = {.pc=0x7aa5, .a=0xa5, .x=0x57, .y=0x8a, .sp=0x13, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x3f}, {.addr=0x7aa5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7aa6, .a=0xa5, .x=0x57, .y=0x8a, .sp=0x14, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x3f}, {.addr=0x7aa5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7aa5, .value=0x8e, .type=IO_READ},
        {.addr=0x7aa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0243) {
    const struct CPU_State initial_cpu = {.pc=0x7912, .a=0x27, .x=0x87, .y=0x75, .sp=0xa6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x4b}, {.addr=0x7912, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7913, .a=0x27, .x=0x87, .y=0x75, .sp=0xa7, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x4b}, {.addr=0x7912, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7912, .value=0x8e, .type=IO_READ},
        {.addr=0x7913, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0244) {
    const struct CPU_State initial_cpu = {.pc=0x190f, .a=0x6e, .x=0x69, .y=0x50, .sp=0x8b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x21}, {.addr=0x190f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1910, .a=0x6e, .x=0x69, .y=0x50, .sp=0x8c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x21}, {.addr=0x190f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x190f, .value=0x8e, .type=IO_READ},
        {.addr=0x1910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0245) {
    const struct CPU_State initial_cpu = {.pc=0x08c7, .a=0x7e, .x=0xe7, .y=0x16, .sp=0xca, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xbc}, {.addr=0x08c7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x08c8, .a=0x7e, .x=0xe7, .y=0x16, .sp=0xcb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xbc}, {.addr=0x08c7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x08c7, .value=0x8e, .type=IO_READ},
        {.addr=0x08c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0246) {
    const struct CPU_State initial_cpu = {.pc=0x33ad, .a=0x3e, .x=0x2e, .y=0x96, .sp=0x44, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x7a}, {.addr=0x33ad, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x33ae, .a=0x3e, .x=0x2e, .y=0x96, .sp=0x45, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x7a}, {.addr=0x33ad, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x33ad, .value=0x8e, .type=IO_READ},
        {.addr=0x33ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0247) {
    const struct CPU_State initial_cpu = {.pc=0x3c30, .a=0x0b, .x=0x4a, .y=0x50, .sp=0x1c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xba}, {.addr=0x3c30, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3c31, .a=0x0b, .x=0x4a, .y=0x50, .sp=0x1d, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xba}, {.addr=0x3c30, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3c30, .value=0x8e, .type=IO_READ},
        {.addr=0x3c31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0248) {
    const struct CPU_State initial_cpu = {.pc=0x7136, .a=0xbf, .x=0x28, .y=0xe3, .sp=0x87, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x1d}, {.addr=0x7136, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7137, .a=0xbf, .x=0x28, .y=0xe3, .sp=0x88, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x1d}, {.addr=0x7136, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7136, .value=0x8e, .type=IO_READ},
        {.addr=0x7137, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0249) {
    const struct CPU_State initial_cpu = {.pc=0xfa8f, .a=0x89, .x=0x7a, .y=0x2f, .sp=0x3e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0xfa8f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfa90, .a=0x89, .x=0x7a, .y=0x2f, .sp=0x3f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0xfa8f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfa8f, .value=0x8e, .type=IO_READ},
        {.addr=0xfa90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024A) {
    const struct CPU_State initial_cpu = {.pc=0xfb85, .a=0xb4, .x=0x49, .y=0x59, .sp=0xa1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xe9}, {.addr=0xfb85, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfb86, .a=0xb4, .x=0x49, .y=0x59, .sp=0xa2, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xe9}, {.addr=0xfb85, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfb85, .value=0x8e, .type=IO_READ},
        {.addr=0xfb86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024B) {
    const struct CPU_State initial_cpu = {.pc=0x05fd, .a=0xf2, .x=0x59, .y=0x7a, .sp=0x98, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xae}, {.addr=0x05fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x05fe, .a=0xf2, .x=0x59, .y=0x7a, .sp=0x99, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xae}, {.addr=0x05fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x05fd, .value=0x8e, .type=IO_READ},
        {.addr=0x05fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024C) {
    const struct CPU_State initial_cpu = {.pc=0x3af8, .a=0x9b, .x=0xc3, .y=0x05, .sp=0x6c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xa6}, {.addr=0x3af8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3af9, .a=0x9b, .x=0xc3, .y=0x05, .sp=0x6d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xa6}, {.addr=0x3af8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3af8, .value=0x8e, .type=IO_READ},
        {.addr=0x3af9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024D) {
    const struct CPU_State initial_cpu = {.pc=0x0a69, .a=0xdf, .x=0x5c, .y=0xe5, .sp=0x7c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x87}, {.addr=0x0a69, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0a6a, .a=0xdf, .x=0x5c, .y=0xe5, .sp=0x7d, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x87}, {.addr=0x0a69, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0a69, .value=0x8e, .type=IO_READ},
        {.addr=0x0a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024E) {
    const struct CPU_State initial_cpu = {.pc=0x96ac, .a=0x72, .x=0xae, .y=0xb0, .sp=0x50, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x04}, {.addr=0x96ac, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x96ad, .a=0x72, .x=0xae, .y=0xb0, .sp=0x51, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x04}, {.addr=0x96ac, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x96ac, .value=0x8e, .type=IO_READ},
        {.addr=0x96ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_024F) {
    const struct CPU_State initial_cpu = {.pc=0xceda, .a=0x8f, .x=0xf2, .y=0x4a, .sp=0x18, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xb2}, {.addr=0xceda, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcedb, .a=0x8f, .x=0xf2, .y=0x4a, .sp=0x19, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xb2}, {.addr=0xceda, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xceda, .value=0x8e, .type=IO_READ},
        {.addr=0xcedb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0250) {
    const struct CPU_State initial_cpu = {.pc=0x76ac, .a=0xb1, .x=0x87, .y=0xc0, .sp=0x0e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x13}, {.addr=0x76ac, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x76ad, .a=0xb1, .x=0x87, .y=0xc0, .sp=0x0f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x13}, {.addr=0x76ac, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x76ac, .value=0x8e, .type=IO_READ},
        {.addr=0x76ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0251) {
    const struct CPU_State initial_cpu = {.pc=0xc286, .a=0xa1, .x=0xe9, .y=0xd4, .sp=0xff, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x91}, {.addr=0xc286, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc287, .a=0xa1, .x=0xe9, .y=0xd4, .sp=0x00, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x91}, {.addr=0xc286, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc286, .value=0x8e, .type=IO_READ},
        {.addr=0xc287, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0252) {
    const struct CPU_State initial_cpu = {.pc=0x7afe, .a=0xe0, .x=0xc2, .y=0x48, .sp=0xbf, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x42}, {.addr=0x7afe, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7aff, .a=0xe0, .x=0xc2, .y=0x48, .sp=0xc0, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x42}, {.addr=0x7afe, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7afe, .value=0x8e, .type=IO_READ},
        {.addr=0x7aff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7c1c, .a=0xe8, .x=0x20, .y=0xa5, .sp=0xcc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x3b}, {.addr=0x7c1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7c1d, .a=0xe8, .x=0x20, .y=0xa5, .sp=0xcd, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x3b}, {.addr=0x7c1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7c1c, .value=0x8e, .type=IO_READ},
        {.addr=0x7c1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0254) {
    const struct CPU_State initial_cpu = {.pc=0x671f, .a=0x24, .x=0x40, .y=0x67, .sp=0xb9, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xf6}, {.addr=0x671f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6720, .a=0x24, .x=0x40, .y=0x67, .sp=0xba, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xf6}, {.addr=0x671f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x671f, .value=0x8e, .type=IO_READ},
        {.addr=0x6720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4d23, .a=0xaf, .x=0x54, .y=0xe2, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xc1}, {.addr=0x4d23, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4d24, .a=0xaf, .x=0x54, .y=0xe2, .sp=0x28, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xc1}, {.addr=0x4d23, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4d23, .value=0x8e, .type=IO_READ},
        {.addr=0x4d24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf28f, .a=0x95, .x=0xa3, .y=0x3b, .sp=0x5b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x86}, {.addr=0xf28f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf290, .a=0x95, .x=0xa3, .y=0x3b, .sp=0x5c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x86}, {.addr=0xf28f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf28f, .value=0x8e, .type=IO_READ},
        {.addr=0xf290, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0257) {
    const struct CPU_State initial_cpu = {.pc=0x8e38, .a=0x3d, .x=0x94, .y=0xf1, .sp=0x9a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x5b}, {.addr=0x8e38, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8e39, .a=0x3d, .x=0x94, .y=0xf1, .sp=0x9b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x5b}, {.addr=0x8e38, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8e38, .value=0x8e, .type=IO_READ},
        {.addr=0x8e39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0258) {
    const struct CPU_State initial_cpu = {.pc=0x1db3, .a=0xa2, .x=0x80, .y=0x04, .sp=0x83, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x3a}, {.addr=0x1db3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1db4, .a=0xa2, .x=0x80, .y=0x04, .sp=0x84, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x3a}, {.addr=0x1db3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1db3, .value=0x8e, .type=IO_READ},
        {.addr=0x1db4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0259) {
    const struct CPU_State initial_cpu = {.pc=0xba7e, .a=0xe3, .x=0x90, .y=0x75, .sp=0x80, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x47}, {.addr=0xba7e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xba7f, .a=0xe3, .x=0x90, .y=0x75, .sp=0x81, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x47}, {.addr=0xba7e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xba7e, .value=0x8e, .type=IO_READ},
        {.addr=0xba7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7225, .a=0x87, .x=0x27, .y=0x09, .sp=0xb7, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x06}, {.addr=0x7225, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7226, .a=0x87, .x=0x27, .y=0x09, .sp=0xb8, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x06}, {.addr=0x7225, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7225, .value=0x8e, .type=IO_READ},
        {.addr=0x7226, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025B) {
    const struct CPU_State initial_cpu = {.pc=0x029f, .a=0x06, .x=0x20, .y=0xf8, .sp=0x71, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x4f}, {.addr=0x029f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x02a0, .a=0x06, .x=0x20, .y=0xf8, .sp=0x72, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x4f}, {.addr=0x029f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x029f, .value=0x8e, .type=IO_READ},
        {.addr=0x02a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025C) {
    const struct CPU_State initial_cpu = {.pc=0x0e38, .a=0xb0, .x=0xe8, .y=0x6f, .sp=0xfb, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xb4}, {.addr=0x0e38, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0e39, .a=0xb0, .x=0xe8, .y=0x6f, .sp=0xfc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xb4}, {.addr=0x0e38, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0e38, .value=0x8e, .type=IO_READ},
        {.addr=0x0e39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025D) {
    const struct CPU_State initial_cpu = {.pc=0xc6d1, .a=0x0a, .x=0x9e, .y=0x9a, .sp=0x80, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x86}, {.addr=0xc6d1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc6d2, .a=0x0a, .x=0x9e, .y=0x9a, .sp=0x81, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x86}, {.addr=0xc6d1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc6d1, .value=0x8e, .type=IO_READ},
        {.addr=0xc6d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025E) {
    const struct CPU_State initial_cpu = {.pc=0x74b1, .a=0xb6, .x=0x47, .y=0x22, .sp=0x57, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x9f}, {.addr=0x74b1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x74b2, .a=0xb6, .x=0x47, .y=0x22, .sp=0x58, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x9f}, {.addr=0x74b1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x74b1, .value=0x8e, .type=IO_READ},
        {.addr=0x74b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_025F) {
    const struct CPU_State initial_cpu = {.pc=0x77d5, .a=0xf0, .x=0x30, .y=0xe9, .sp=0x7d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x59}, {.addr=0x77d5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0xf0, .x=0x30, .y=0xe9, .sp=0x7e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x59}, {.addr=0x77d5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x77d5, .value=0x8e, .type=IO_READ},
        {.addr=0x77d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0260) {
    const struct CPU_State initial_cpu = {.pc=0xcebf, .a=0xc8, .x=0x72, .y=0x3e, .sp=0x3b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x5e}, {.addr=0xcebf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcec0, .a=0xc8, .x=0x72, .y=0x3e, .sp=0x3c, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x5e}, {.addr=0xcebf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcebf, .value=0x8e, .type=IO_READ},
        {.addr=0xcec0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0261) {
    const struct CPU_State initial_cpu = {.pc=0xd15e, .a=0x40, .x=0xca, .y=0x29, .sp=0x22, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x8d}, {.addr=0xd15e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd15f, .a=0x40, .x=0xca, .y=0x29, .sp=0x23, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x8d}, {.addr=0xd15e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd15e, .value=0x8e, .type=IO_READ},
        {.addr=0xd15f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0262) {
    const struct CPU_State initial_cpu = {.pc=0x2f1c, .a=0x21, .x=0x9b, .y=0x92, .sp=0x93, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x29}, {.addr=0x2f1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2f1d, .a=0x21, .x=0x9b, .y=0x92, .sp=0x94, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x29}, {.addr=0x2f1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2f1c, .value=0x8e, .type=IO_READ},
        {.addr=0x2f1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0263) {
    const struct CPU_State initial_cpu = {.pc=0x6ef0, .a=0x5a, .x=0xa2, .y=0x93, .sp=0x85, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x8d}, {.addr=0x6ef0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6ef1, .a=0x5a, .x=0xa2, .y=0x93, .sp=0x86, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x8d}, {.addr=0x6ef0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6ef0, .value=0x8e, .type=IO_READ},
        {.addr=0x6ef1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0264) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x4a, .x=0xe2, .y=0xf9, .sp=0xda, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x0e}, {.addr=0x53df, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x53e0, .a=0x4a, .x=0xe2, .y=0xf9, .sp=0xdb, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x0e}, {.addr=0x53df, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0x8e, .type=IO_READ},
        {.addr=0x53e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6e7f, .a=0xf7, .x=0x3a, .y=0x65, .sp=0x4e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xdc}, {.addr=0x6e7f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6e80, .a=0xf7, .x=0x3a, .y=0x65, .sp=0x4f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xdc}, {.addr=0x6e7f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6e7f, .value=0x8e, .type=IO_READ},
        {.addr=0x6e80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0266) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0x51, .x=0x78, .y=0x9b, .sp=0xaa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xd2}, {.addr=0xaebd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0x51, .x=0x78, .y=0x9b, .sp=0xab, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xd2}, {.addr=0xaebd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x8e, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0267) {
    const struct CPU_State initial_cpu = {.pc=0x9153, .a=0x74, .x=0x96, .y=0x4d, .sp=0x7f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xaf}, {.addr=0x9153, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9154, .a=0x74, .x=0x96, .y=0x4d, .sp=0x80, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xaf}, {.addr=0x9153, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9153, .value=0x8e, .type=IO_READ},
        {.addr=0x9154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0268) {
    const struct CPU_State initial_cpu = {.pc=0xde62, .a=0x06, .x=0x6d, .y=0xbf, .sp=0xa0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x52}, {.addr=0xde62, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xde63, .a=0x06, .x=0x6d, .y=0xbf, .sp=0xa1, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x52}, {.addr=0xde62, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xde62, .value=0x8e, .type=IO_READ},
        {.addr=0xde63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0269) {
    const struct CPU_State initial_cpu = {.pc=0x8a1b, .a=0x82, .x=0x42, .y=0x03, .sp=0x1c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xb6}, {.addr=0x8a1b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a1c, .a=0x82, .x=0x42, .y=0x03, .sp=0x1d, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xb6}, {.addr=0x8a1b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a1b, .value=0x8e, .type=IO_READ},
        {.addr=0x8a1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026A) {
    const struct CPU_State initial_cpu = {.pc=0x62f4, .a=0x4f, .x=0x37, .y=0x38, .sp=0x6c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x8d}, {.addr=0x62f4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x62f5, .a=0x4f, .x=0x37, .y=0x38, .sp=0x6d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x8d}, {.addr=0x62f4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x62f4, .value=0x8e, .type=IO_READ},
        {.addr=0x62f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb6b4, .a=0x86, .x=0x66, .y=0x10, .sp=0x1b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xb6b4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb6b5, .a=0x86, .x=0x66, .y=0x10, .sp=0x1c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xb6b4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb6b4, .value=0x8e, .type=IO_READ},
        {.addr=0xb6b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026C) {
    const struct CPU_State initial_cpu = {.pc=0xfad2, .a=0x0d, .x=0x67, .y=0xac, .sp=0xe9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x26}, {.addr=0xfad2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfad3, .a=0x0d, .x=0x67, .y=0xac, .sp=0xea, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x26}, {.addr=0xfad2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfad2, .value=0x8e, .type=IO_READ},
        {.addr=0xfad3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026D) {
    const struct CPU_State initial_cpu = {.pc=0x6174, .a=0x01, .x=0xbb, .y=0x2a, .sp=0x48, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x5c}, {.addr=0x6174, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6175, .a=0x01, .x=0xbb, .y=0x2a, .sp=0x49, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x5c}, {.addr=0x6174, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6174, .value=0x8e, .type=IO_READ},
        {.addr=0x6175, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026E) {
    const struct CPU_State initial_cpu = {.pc=0x5375, .a=0xfc, .x=0xfd, .y=0xf4, .sp=0xff, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x2f}, {.addr=0x5375, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5376, .a=0xfc, .x=0xfd, .y=0xf4, .sp=0x00, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x2f}, {.addr=0x5375, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5375, .value=0x8e, .type=IO_READ},
        {.addr=0x5376, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_026F) {
    const struct CPU_State initial_cpu = {.pc=0xede7, .a=0xce, .x=0x46, .y=0xe7, .sp=0x6a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x69}, {.addr=0xede7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xede8, .a=0xce, .x=0x46, .y=0xe7, .sp=0x6b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x69}, {.addr=0xede7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xede7, .value=0x8e, .type=IO_READ},
        {.addr=0xede8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0270) {
    const struct CPU_State initial_cpu = {.pc=0x4c01, .a=0xa8, .x=0x4c, .y=0x75, .sp=0x6c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x87}, {.addr=0x4c01, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4c02, .a=0xa8, .x=0x4c, .y=0x75, .sp=0x6d, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x87}, {.addr=0x4c01, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4c01, .value=0x8e, .type=IO_READ},
        {.addr=0x4c02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0271) {
    const struct CPU_State initial_cpu = {.pc=0x6554, .a=0xf6, .x=0x3d, .y=0x78, .sp=0x16, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x3c}, {.addr=0x6554, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6555, .a=0xf6, .x=0x3d, .y=0x78, .sp=0x17, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x3c}, {.addr=0x6554, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6554, .value=0x8e, .type=IO_READ},
        {.addr=0x6555, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0272) {
    const struct CPU_State initial_cpu = {.pc=0x545d, .a=0xf0, .x=0xeb, .y=0x27, .sp=0x36, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x5c}, {.addr=0x545d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x545e, .a=0xf0, .x=0xeb, .y=0x27, .sp=0x37, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x5c}, {.addr=0x545d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x545d, .value=0x8e, .type=IO_READ},
        {.addr=0x545e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0273) {
    const struct CPU_State initial_cpu = {.pc=0xffeb, .a=0xb4, .x=0x36, .y=0xf0, .sp=0xae, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x6b}, {.addr=0xffeb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xffec, .a=0xb4, .x=0x36, .y=0xf0, .sp=0xaf, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x6b}, {.addr=0xffeb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xffeb, .value=0x8e, .type=IO_READ},
        {.addr=0xffec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0274) {
    const struct CPU_State initial_cpu = {.pc=0x1f17, .a=0x8a, .x=0x5c, .y=0x18, .sp=0x65, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xd8}, {.addr=0x1f17, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1f18, .a=0x8a, .x=0x5c, .y=0x18, .sp=0x66, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd8}, {.addr=0x1f17, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1f17, .value=0x8e, .type=IO_READ},
        {.addr=0x1f18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0275) {
    const struct CPU_State initial_cpu = {.pc=0x4ef3, .a=0x4a, .x=0xea, .y=0x9d, .sp=0x8e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xa0}, {.addr=0x4ef3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4ef4, .a=0x4a, .x=0xea, .y=0x9d, .sp=0x8f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xa0}, {.addr=0x4ef3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4ef3, .value=0x8e, .type=IO_READ},
        {.addr=0x4ef4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0276) {
    const struct CPU_State initial_cpu = {.pc=0x0549, .a=0x6a, .x=0xa2, .y=0xfc, .sp=0xba, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x13}, {.addr=0x0549, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x054a, .a=0x6a, .x=0xa2, .y=0xfc, .sp=0xbb, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x13}, {.addr=0x0549, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0549, .value=0x8e, .type=IO_READ},
        {.addr=0x054a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0277) {
    const struct CPU_State initial_cpu = {.pc=0x57b4, .a=0xa0, .x=0xfe, .y=0xee, .sp=0xb7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xf2}, {.addr=0x57b4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x57b5, .a=0xa0, .x=0xfe, .y=0xee, .sp=0xb8, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xf2}, {.addr=0x57b4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x57b4, .value=0x8e, .type=IO_READ},
        {.addr=0x57b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0278) {
    const struct CPU_State initial_cpu = {.pc=0xe4aa, .a=0x67, .x=0x98, .y=0x61, .sp=0x51, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x34}, {.addr=0xe4aa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe4ab, .a=0x67, .x=0x98, .y=0x61, .sp=0x52, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x34}, {.addr=0xe4aa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe4aa, .value=0x8e, .type=IO_READ},
        {.addr=0xe4ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0279) {
    const struct CPU_State initial_cpu = {.pc=0xe11f, .a=0x69, .x=0x25, .y=0x76, .sp=0xe1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x2a}, {.addr=0xe11f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe120, .a=0x69, .x=0x25, .y=0x76, .sp=0xe2, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x2a}, {.addr=0xe11f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe11f, .value=0x8e, .type=IO_READ},
        {.addr=0xe120, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027A) {
    const struct CPU_State initial_cpu = {.pc=0x595e, .a=0x58, .x=0x8e, .y=0xe9, .sp=0x81, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x5c}, {.addr=0x595e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x595f, .a=0x58, .x=0x8e, .y=0xe9, .sp=0x82, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x5c}, {.addr=0x595e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x595e, .value=0x8e, .type=IO_READ},
        {.addr=0x595f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027B) {
    const struct CPU_State initial_cpu = {.pc=0x12fd, .a=0x51, .x=0xd7, .y=0x29, .sp=0xf6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xb8}, {.addr=0x12fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x12fe, .a=0x51, .x=0xd7, .y=0x29, .sp=0xf7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xb8}, {.addr=0x12fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x12fd, .value=0x8e, .type=IO_READ},
        {.addr=0x12fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027C) {
    const struct CPU_State initial_cpu = {.pc=0xae9e, .a=0x9f, .x=0x62, .y=0x53, .sp=0x8f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xda}, {.addr=0xae9e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae9f, .a=0x9f, .x=0x62, .y=0x53, .sp=0x90, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xda}, {.addr=0xae9e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae9e, .value=0x8e, .type=IO_READ},
        {.addr=0xae9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027D) {
    const struct CPU_State initial_cpu = {.pc=0x1a4a, .a=0xcb, .x=0x64, .y=0x63, .sp=0x57, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x21}, {.addr=0x1a4a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1a4b, .a=0xcb, .x=0x64, .y=0x63, .sp=0x58, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x21}, {.addr=0x1a4a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1a4a, .value=0x8e, .type=IO_READ},
        {.addr=0x1a4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027E) {
    const struct CPU_State initial_cpu = {.pc=0x6f60, .a=0x06, .x=0x03, .y=0xc3, .sp=0x41, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x44}, {.addr=0x6f60, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6f61, .a=0x06, .x=0x03, .y=0xc3, .sp=0x42, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x44}, {.addr=0x6f60, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6f60, .value=0x8e, .type=IO_READ},
        {.addr=0x6f61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_027F) {
    const struct CPU_State initial_cpu = {.pc=0x9bd1, .a=0xc5, .x=0xf1, .y=0xda, .sp=0xec, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xb0}, {.addr=0x9bd1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9bd2, .a=0xc5, .x=0xf1, .y=0xda, .sp=0xed, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xb0}, {.addr=0x9bd1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9bd1, .value=0x8e, .type=IO_READ},
        {.addr=0x9bd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0280) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0x41, .x=0xed, .y=0xd0, .sp=0xba, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xe7}, {.addr=0x6392, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6393, .a=0x41, .x=0xed, .y=0xd0, .sp=0xbb, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xe7}, {.addr=0x6392, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0x8e, .type=IO_READ},
        {.addr=0x6393, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0281) {
    const struct CPU_State initial_cpu = {.pc=0xddea, .a=0x19, .x=0x83, .y=0x74, .sp=0xb8, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x8b}, {.addr=0xddea, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xddeb, .a=0x19, .x=0x83, .y=0x74, .sp=0xb9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x8b}, {.addr=0xddea, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xddea, .value=0x8e, .type=IO_READ},
        {.addr=0xddeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0282) {
    const struct CPU_State initial_cpu = {.pc=0xa6fb, .a=0x6b, .x=0x66, .y=0xca, .sp=0xae, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xdf}, {.addr=0xa6fb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa6fc, .a=0x6b, .x=0x66, .y=0xca, .sp=0xaf, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xdf}, {.addr=0xa6fb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa6fb, .value=0x8e, .type=IO_READ},
        {.addr=0xa6fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0283) {
    const struct CPU_State initial_cpu = {.pc=0xd1e5, .a=0xf2, .x=0xa0, .y=0x1d, .sp=0xe9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xe1}, {.addr=0xd1e5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1e6, .a=0xf2, .x=0xa0, .y=0x1d, .sp=0xea, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xe1}, {.addr=0xd1e5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1e5, .value=0x8e, .type=IO_READ},
        {.addr=0xd1e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe7ee, .a=0x3e, .x=0xa4, .y=0x9e, .sp=0x29, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x42}, {.addr=0xe7ee, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe7ef, .a=0x3e, .x=0xa4, .y=0x9e, .sp=0x2a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x42}, {.addr=0xe7ee, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe7ee, .value=0x8e, .type=IO_READ},
        {.addr=0xe7ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0285) {
    const struct CPU_State initial_cpu = {.pc=0x2baa, .a=0xb5, .x=0x05, .y=0x7b, .sp=0x42, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x9c}, {.addr=0x2baa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bab, .a=0xb5, .x=0x05, .y=0x7b, .sp=0x43, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x9c}, {.addr=0x2baa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2baa, .value=0x8e, .type=IO_READ},
        {.addr=0x2bab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0286) {
    const struct CPU_State initial_cpu = {.pc=0xaa55, .a=0x2b, .x=0xcb, .y=0x48, .sp=0x91, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x61}, {.addr=0xaa55, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaa56, .a=0x2b, .x=0xcb, .y=0x48, .sp=0x92, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x61}, {.addr=0xaa55, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaa55, .value=0x8e, .type=IO_READ},
        {.addr=0xaa56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9905, .a=0x58, .x=0x7a, .y=0xfe, .sp=0xc0, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xc8}, {.addr=0x9905, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9906, .a=0x58, .x=0x7a, .y=0xfe, .sp=0xc1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xc8}, {.addr=0x9905, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9905, .value=0x8e, .type=IO_READ},
        {.addr=0x9906, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0288) {
    const struct CPU_State initial_cpu = {.pc=0x7cc6, .a=0x33, .x=0x2a, .y=0xde, .sp=0xb9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x15}, {.addr=0x7cc6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7cc7, .a=0x33, .x=0x2a, .y=0xde, .sp=0xba, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x15}, {.addr=0x7cc6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7cc6, .value=0x8e, .type=IO_READ},
        {.addr=0x7cc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3ff1, .a=0x2b, .x=0xbd, .y=0x1d, .sp=0xc6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xa4}, {.addr=0x3ff1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3ff2, .a=0x2b, .x=0xbd, .y=0x1d, .sp=0xc7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xa4}, {.addr=0x3ff1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3ff1, .value=0x8e, .type=IO_READ},
        {.addr=0x3ff2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028A) {
    const struct CPU_State initial_cpu = {.pc=0x88d2, .a=0xea, .x=0x99, .y=0x10, .sp=0x58, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x46}, {.addr=0x88d2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x88d3, .a=0xea, .x=0x99, .y=0x10, .sp=0x59, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x46}, {.addr=0x88d2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x88d2, .value=0x8e, .type=IO_READ},
        {.addr=0x88d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028B) {
    const struct CPU_State initial_cpu = {.pc=0x839a, .a=0xc1, .x=0x96, .y=0x2e, .sp=0x4a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xea}, {.addr=0x839a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x839b, .a=0xc1, .x=0x96, .y=0x2e, .sp=0x4b, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xea}, {.addr=0x839a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x839a, .value=0x8e, .type=IO_READ},
        {.addr=0x839b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028C) {
    const struct CPU_State initial_cpu = {.pc=0x3c7d, .a=0xe7, .x=0x3f, .y=0x8d, .sp=0xb8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x5f}, {.addr=0x3c7d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3c7e, .a=0xe7, .x=0x3f, .y=0x8d, .sp=0xb9, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x5f}, {.addr=0x3c7d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3c7d, .value=0x8e, .type=IO_READ},
        {.addr=0x3c7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028D) {
    const struct CPU_State initial_cpu = {.pc=0x7e6c, .a=0xcb, .x=0x34, .y=0x32, .sp=0xa4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xc3}, {.addr=0x7e6c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7e6d, .a=0xcb, .x=0x34, .y=0x32, .sp=0xa5, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xc3}, {.addr=0x7e6c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7e6c, .value=0x8e, .type=IO_READ},
        {.addr=0x7e6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2783, .a=0x45, .x=0xf3, .y=0x70, .sp=0x75, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x38}, {.addr=0x2783, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2784, .a=0x45, .x=0xf3, .y=0x70, .sp=0x76, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x38}, {.addr=0x2783, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2783, .value=0x8e, .type=IO_READ},
        {.addr=0x2784, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_028F) {
    const struct CPU_State initial_cpu = {.pc=0x30b5, .a=0x36, .x=0xae, .y=0xda, .sp=0x8f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xde}, {.addr=0x30b5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x30b6, .a=0x36, .x=0xae, .y=0xda, .sp=0x90, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xde}, {.addr=0x30b5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x30b5, .value=0x8e, .type=IO_READ},
        {.addr=0x30b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0290) {
    const struct CPU_State initial_cpu = {.pc=0x31f3, .a=0xd7, .x=0x10, .y=0x48, .sp=0x56, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x73}, {.addr=0x31f3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x31f4, .a=0xd7, .x=0x10, .y=0x48, .sp=0x57, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x73}, {.addr=0x31f3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x31f3, .value=0x8e, .type=IO_READ},
        {.addr=0x31f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0291) {
    const struct CPU_State initial_cpu = {.pc=0x5ed6, .a=0xb3, .x=0x90, .y=0xd1, .sp=0xfb, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x12}, {.addr=0x5ed6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5ed7, .a=0xb3, .x=0x90, .y=0xd1, .sp=0xfc, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x12}, {.addr=0x5ed6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5ed6, .value=0x8e, .type=IO_READ},
        {.addr=0x5ed7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0292) {
    const struct CPU_State initial_cpu = {.pc=0x3486, .a=0x9d, .x=0x3b, .y=0x02, .sp=0xe0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x8e}, {.addr=0x3486, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3487, .a=0x9d, .x=0x3b, .y=0x02, .sp=0xe1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x8e}, {.addr=0x3486, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3486, .value=0x8e, .type=IO_READ},
        {.addr=0x3487, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0293) {
    const struct CPU_State initial_cpu = {.pc=0xe259, .a=0x71, .x=0x85, .y=0x5d, .sp=0x0c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x7f}, {.addr=0xe259, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe25a, .a=0x71, .x=0x85, .y=0x5d, .sp=0x0d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x7f}, {.addr=0xe259, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe259, .value=0x8e, .type=IO_READ},
        {.addr=0xe25a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0294) {
    const struct CPU_State initial_cpu = {.pc=0x2b11, .a=0x15, .x=0x77, .y=0xb4, .sp=0x67, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x0b}, {.addr=0x2b11, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2b12, .a=0x15, .x=0x77, .y=0xb4, .sp=0x68, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x0b}, {.addr=0x2b11, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2b11, .value=0x8e, .type=IO_READ},
        {.addr=0x2b12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0295) {
    const struct CPU_State initial_cpu = {.pc=0x1d83, .a=0x69, .x=0xee, .y=0x6c, .sp=0xcd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xd3}, {.addr=0x1d83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1d84, .a=0x69, .x=0xee, .y=0x6c, .sp=0xce, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xd3}, {.addr=0x1d83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1d83, .value=0x8e, .type=IO_READ},
        {.addr=0x1d84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0296) {
    const struct CPU_State initial_cpu = {.pc=0x2a28, .a=0xe4, .x=0x9a, .y=0x79, .sp=0x96, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xd6}, {.addr=0x2a28, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2a29, .a=0xe4, .x=0x9a, .y=0x79, .sp=0x97, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xd6}, {.addr=0x2a28, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2a28, .value=0x8e, .type=IO_READ},
        {.addr=0x2a29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0297) {
    const struct CPU_State initial_cpu = {.pc=0x1e31, .a=0xdb, .x=0x49, .y=0x08, .sp=0x84, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x2d}, {.addr=0x1e31, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1e32, .a=0xdb, .x=0x49, .y=0x08, .sp=0x85, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x2d}, {.addr=0x1e31, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1e31, .value=0x8e, .type=IO_READ},
        {.addr=0x1e32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4c3a, .a=0xaa, .x=0x91, .y=0xf5, .sp=0xce, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x7c}, {.addr=0x4c3a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4c3b, .a=0xaa, .x=0x91, .y=0xf5, .sp=0xcf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x7c}, {.addr=0x4c3a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4c3a, .value=0x8e, .type=IO_READ},
        {.addr=0x4c3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0299) {
    const struct CPU_State initial_cpu = {.pc=0x4958, .a=0x54, .x=0xb3, .y=0xf0, .sp=0xb1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xf6}, {.addr=0x4958, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4959, .a=0x54, .x=0xb3, .y=0xf0, .sp=0xb2, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xf6}, {.addr=0x4958, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4958, .value=0x8e, .type=IO_READ},
        {.addr=0x4959, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029A) {
    const struct CPU_State initial_cpu = {.pc=0x4cec, .a=0xfd, .x=0xcc, .y=0x4f, .sp=0xd9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x05}, {.addr=0x4cec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4ced, .a=0xfd, .x=0xcc, .y=0x4f, .sp=0xda, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x05}, {.addr=0x4cec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4cec, .value=0x8e, .type=IO_READ},
        {.addr=0x4ced, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029B) {
    const struct CPU_State initial_cpu = {.pc=0x6f10, .a=0x45, .x=0xe9, .y=0x3f, .sp=0xa4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xf5}, {.addr=0x6f10, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6f11, .a=0x45, .x=0xe9, .y=0x3f, .sp=0xa5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xf5}, {.addr=0x6f10, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6f10, .value=0x8e, .type=IO_READ},
        {.addr=0x6f11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029C) {
    const struct CPU_State initial_cpu = {.pc=0xaab7, .a=0xd3, .x=0x9d, .y=0x65, .sp=0xdc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x5f}, {.addr=0xaab7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaab8, .a=0xd3, .x=0x9d, .y=0x65, .sp=0xdd, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x5f}, {.addr=0xaab7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaab7, .value=0x8e, .type=IO_READ},
        {.addr=0xaab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029D) {
    const struct CPU_State initial_cpu = {.pc=0xb697, .a=0x63, .x=0xb7, .y=0x91, .sp=0x3a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x10}, {.addr=0xb697, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb698, .a=0x63, .x=0xb7, .y=0x91, .sp=0x3b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x10}, {.addr=0xb697, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb697, .value=0x8e, .type=IO_READ},
        {.addr=0xb698, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029E) {
    const struct CPU_State initial_cpu = {.pc=0xcee0, .a=0x6b, .x=0x56, .y=0x22, .sp=0x66, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xa0}, {.addr=0xcee0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcee1, .a=0x6b, .x=0x56, .y=0x22, .sp=0x67, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xa0}, {.addr=0xcee0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcee0, .value=0x8e, .type=IO_READ},
        {.addr=0xcee1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_029F) {
    const struct CPU_State initial_cpu = {.pc=0x06fd, .a=0xa9, .x=0xe4, .y=0x48, .sp=0xb8, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x97}, {.addr=0x06fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x06fe, .a=0xa9, .x=0xe4, .y=0x48, .sp=0xb9, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x97}, {.addr=0x06fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x06fd, .value=0x8e, .type=IO_READ},
        {.addr=0x06fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x86c8, .a=0xee, .x=0xa3, .y=0xc7, .sp=0xed, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x44}, {.addr=0x86c8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x86c9, .a=0xee, .x=0xa3, .y=0xc7, .sp=0xee, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x44}, {.addr=0x86c8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x86c8, .value=0x8e, .type=IO_READ},
        {.addr=0x86c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x62bb, .a=0x93, .x=0x51, .y=0xea, .sp=0xf0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x43}, {.addr=0x62bb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x62bc, .a=0x93, .x=0x51, .y=0xea, .sp=0xf1, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x43}, {.addr=0x62bb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x62bb, .value=0x8e, .type=IO_READ},
        {.addr=0x62bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x78f0, .a=0xed, .x=0x88, .y=0xd4, .sp=0x38, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xd9}, {.addr=0x78f0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x78f1, .a=0xed, .x=0x88, .y=0xd4, .sp=0x39, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xd9}, {.addr=0x78f0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x78f0, .value=0x8e, .type=IO_READ},
        {.addr=0x78f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x7e92, .a=0x23, .x=0x2e, .y=0xb3, .sp=0xe5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x41}, {.addr=0x7e92, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7e93, .a=0x23, .x=0x2e, .y=0xb3, .sp=0xe6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x41}, {.addr=0x7e92, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7e92, .value=0x8e, .type=IO_READ},
        {.addr=0x7e93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc2c2, .a=0xe1, .x=0x40, .y=0x48, .sp=0x7a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x54}, {.addr=0xc2c2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc2c3, .a=0xe1, .x=0x40, .y=0x48, .sp=0x7b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x54}, {.addr=0xc2c2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc2c2, .value=0x8e, .type=IO_READ},
        {.addr=0xc2c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x3494, .a=0xc4, .x=0x4c, .y=0xb7, .sp=0x6c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xd5}, {.addr=0x3494, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3495, .a=0xc4, .x=0x4c, .y=0xb7, .sp=0x6d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xd5}, {.addr=0x3494, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3494, .value=0x8e, .type=IO_READ},
        {.addr=0x3495, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x1aa6, .a=0xa0, .x=0x4b, .y=0x7e, .sp=0x42, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x60}, {.addr=0x1aa6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1aa7, .a=0xa0, .x=0x4b, .y=0x7e, .sp=0x43, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x60}, {.addr=0x1aa6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1aa6, .value=0x8e, .type=IO_READ},
        {.addr=0x1aa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xe9d3, .a=0xaa, .x=0x07, .y=0x21, .sp=0xfd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xb2}, {.addr=0xe9d3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe9d4, .a=0xaa, .x=0x07, .y=0x21, .sp=0xfe, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xb2}, {.addr=0xe9d3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe9d3, .value=0x8e, .type=IO_READ},
        {.addr=0xe9d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x3023, .a=0x37, .x=0xc4, .y=0xba, .sp=0x0f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x3a}, {.addr=0x3023, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3024, .a=0x37, .x=0xc4, .y=0xba, .sp=0x10, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x3a}, {.addr=0x3023, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3023, .value=0x8e, .type=IO_READ},
        {.addr=0x3024, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x3b47, .a=0xa6, .x=0x15, .y=0x5d, .sp=0x41, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xcd}, {.addr=0x3b47, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3b48, .a=0xa6, .x=0x15, .y=0x5d, .sp=0x42, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xcd}, {.addr=0x3b47, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3b47, .value=0x8e, .type=IO_READ},
        {.addr=0x3b48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xcd1e, .a=0x09, .x=0x18, .y=0x0d, .sp=0x79, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xb2}, {.addr=0xcd1e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcd1f, .a=0x09, .x=0x18, .y=0x0d, .sp=0x7a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xb2}, {.addr=0xcd1e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcd1e, .value=0x8e, .type=IO_READ},
        {.addr=0xcd1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xcae3, .a=0xb3, .x=0xa6, .y=0x85, .sp=0xda, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x1c}, {.addr=0xcae3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcae4, .a=0xb3, .x=0xa6, .y=0x85, .sp=0xdb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x1c}, {.addr=0xcae3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcae3, .value=0x8e, .type=IO_READ},
        {.addr=0xcae4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x403a, .a=0x63, .x=0xe8, .y=0x62, .sp=0x9b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xd1}, {.addr=0x403a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x403b, .a=0x63, .x=0xe8, .y=0x62, .sp=0x9c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xd1}, {.addr=0x403a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x403a, .value=0x8e, .type=IO_READ},
        {.addr=0x403b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb869, .a=0x82, .x=0x9d, .y=0xf8, .sp=0xaf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xa6}, {.addr=0xb869, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb86a, .a=0x82, .x=0x9d, .y=0xf8, .sp=0xb0, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xa6}, {.addr=0xb869, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb869, .value=0x8e, .type=IO_READ},
        {.addr=0xb86a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xccfe, .a=0x09, .x=0x86, .y=0x62, .sp=0x2c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x7f}, {.addr=0xccfe, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xccff, .a=0x09, .x=0x86, .y=0x62, .sp=0x2d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x7f}, {.addr=0xccfe, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xccfe, .value=0x8e, .type=IO_READ},
        {.addr=0xccff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x354e, .a=0x4a, .x=0xdc, .y=0x4a, .sp=0xea, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xce}, {.addr=0x354e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x354f, .a=0x4a, .x=0xdc, .y=0x4a, .sp=0xeb, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xce}, {.addr=0x354e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x354e, .value=0x8e, .type=IO_READ},
        {.addr=0x354f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x8c45, .a=0x98, .x=0xc9, .y=0x68, .sp=0x96, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xfa}, {.addr=0x8c45, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8c46, .a=0x98, .x=0xc9, .y=0x68, .sp=0x97, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xfa}, {.addr=0x8c45, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8c45, .value=0x8e, .type=IO_READ},
        {.addr=0x8c46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x1517, .a=0xa9, .x=0x21, .y=0x38, .sp=0xd0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x2f}, {.addr=0x1517, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1518, .a=0xa9, .x=0x21, .y=0x38, .sp=0xd1, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x2f}, {.addr=0x1517, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1517, .value=0x8e, .type=IO_READ},
        {.addr=0x1518, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xe8c2, .a=0xe6, .x=0xd4, .y=0x9e, .sp=0x38, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xae}, {.addr=0xe8c2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8c3, .a=0xe6, .x=0xd4, .y=0x9e, .sp=0x39, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xae}, {.addr=0xe8c2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe8c2, .value=0x8e, .type=IO_READ},
        {.addr=0xe8c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0424, .a=0xd2, .x=0xd5, .y=0x5a, .sp=0x65, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x41}, {.addr=0x0424, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0425, .a=0xd2, .x=0xd5, .y=0x5a, .sp=0x66, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x41}, {.addr=0x0424, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0424, .value=0x8e, .type=IO_READ},
        {.addr=0x0425, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xa222, .a=0x61, .x=0x40, .y=0x53, .sp=0x58, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xa4}, {.addr=0xa222, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa223, .a=0x61, .x=0x40, .y=0x53, .sp=0x59, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xa4}, {.addr=0xa222, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa222, .value=0x8e, .type=IO_READ},
        {.addr=0xa223, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6a8c, .a=0x38, .x=0x69, .y=0xad, .sp=0x74, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xe3}, {.addr=0x6a8c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6a8d, .a=0x38, .x=0x69, .y=0xad, .sp=0x75, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xe3}, {.addr=0x6a8c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6a8c, .value=0x8e, .type=IO_READ},
        {.addr=0x6a8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x0613, .a=0x22, .x=0x41, .y=0xdc, .sp=0xc2, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xe5}, {.addr=0x0613, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0614, .a=0x22, .x=0x41, .y=0xdc, .sp=0xc3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xe5}, {.addr=0x0613, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0613, .value=0x8e, .type=IO_READ},
        {.addr=0x0614, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xc32b, .a=0x71, .x=0x93, .y=0xb8, .sp=0xbd, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xd3}, {.addr=0xc32b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc32c, .a=0x71, .x=0x93, .y=0xb8, .sp=0xbe, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xd3}, {.addr=0xc32b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc32b, .value=0x8e, .type=IO_READ},
        {.addr=0xc32c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xff30, .a=0xd7, .x=0xa9, .y=0x3d, .sp=0x08, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x96}, {.addr=0xff30, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xff31, .a=0xd7, .x=0xa9, .y=0x3d, .sp=0x09, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x96}, {.addr=0xff30, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xff30, .value=0x8e, .type=IO_READ},
        {.addr=0xff31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xa8e4, .a=0x60, .x=0x8c, .y=0x55, .sp=0x1f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x65}, {.addr=0xa8e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa8e5, .a=0x60, .x=0x8c, .y=0x55, .sp=0x20, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x65}, {.addr=0xa8e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa8e4, .value=0x8e, .type=IO_READ},
        {.addr=0xa8e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xce35, .a=0xb4, .x=0x44, .y=0xfa, .sp=0xad, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x3b}, {.addr=0xce35, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce36, .a=0xb4, .x=0x44, .y=0xfa, .sp=0xae, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x3b}, {.addr=0xce35, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce35, .value=0x8e, .type=IO_READ},
        {.addr=0xce36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc7ba, .a=0x73, .x=0xe0, .y=0xd0, .sp=0x10, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xc9}, {.addr=0xc7ba, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc7bb, .a=0x73, .x=0xe0, .y=0xd0, .sp=0x11, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xc9}, {.addr=0xc7ba, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc7ba, .value=0x8e, .type=IO_READ},
        {.addr=0xc7bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xd786, .a=0x68, .x=0x29, .y=0x96, .sp=0x3e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x19}, {.addr=0xd786, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd787, .a=0x68, .x=0x29, .y=0x96, .sp=0x3f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x19}, {.addr=0xd786, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd786, .value=0x8e, .type=IO_READ},
        {.addr=0xd787, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xd7f8, .a=0x7c, .x=0x4e, .y=0xfc, .sp=0x3c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x0b}, {.addr=0xd7f8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd7f9, .a=0x7c, .x=0x4e, .y=0xfc, .sp=0x3d, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x0b}, {.addr=0xd7f8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd7f8, .value=0x8e, .type=IO_READ},
        {.addr=0xd7f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xb35b, .a=0xd9, .x=0x9a, .y=0xac, .sp=0x64, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xbc}, {.addr=0xb35b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb35c, .a=0xd9, .x=0x9a, .y=0xac, .sp=0x65, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xbc}, {.addr=0xb35b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb35b, .value=0x8e, .type=IO_READ},
        {.addr=0xb35c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x4b17, .a=0xc3, .x=0x85, .y=0x7b, .sp=0xaa, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xdf}, {.addr=0x4b17, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4b18, .a=0xc3, .x=0x85, .y=0x7b, .sp=0xab, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xdf}, {.addr=0x4b17, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4b17, .value=0x8e, .type=IO_READ},
        {.addr=0x4b18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x1661, .a=0xcc, .x=0x4d, .y=0x84, .sp=0x3b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x86}, {.addr=0x1661, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1662, .a=0xcc, .x=0x4d, .y=0x84, .sp=0x3c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x86}, {.addr=0x1661, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1661, .value=0x8e, .type=IO_READ},
        {.addr=0x1662, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x6ce3, .a=0x4e, .x=0xeb, .y=0x4b, .sp=0xaf, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc7}, {.addr=0x6ce3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6ce4, .a=0x4e, .x=0xeb, .y=0x4b, .sp=0xb0, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc7}, {.addr=0x6ce3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6ce3, .value=0x8e, .type=IO_READ},
        {.addr=0x6ce4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x6a8b, .a=0xe9, .x=0xec, .y=0x1d, .sp=0xb3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x33}, {.addr=0x6a8b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6a8c, .a=0xe9, .x=0xec, .y=0x1d, .sp=0xb4, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x33}, {.addr=0x6a8b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6a8b, .value=0x8e, .type=IO_READ},
        {.addr=0x6a8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xa28f, .a=0xdb, .x=0xc1, .y=0x28, .sp=0x7c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xb4}, {.addr=0xa28f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa290, .a=0xdb, .x=0xc1, .y=0x28, .sp=0x7d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xb4}, {.addr=0xa28f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa28f, .value=0x8e, .type=IO_READ},
        {.addr=0xa290, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8f4f, .a=0x4d, .x=0xc9, .y=0x2b, .sp=0x26, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xd0}, {.addr=0x8f4f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8f50, .a=0x4d, .x=0xc9, .y=0x2b, .sp=0x27, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xd0}, {.addr=0x8f4f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8f4f, .value=0x8e, .type=IO_READ},
        {.addr=0x8f50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xc82e, .a=0xf8, .x=0xd0, .y=0x2b, .sp=0x78, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xfe}, {.addr=0xc82e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc82f, .a=0xf8, .x=0xd0, .y=0x2b, .sp=0x79, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xfe}, {.addr=0xc82e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc82e, .value=0x8e, .type=IO_READ},
        {.addr=0xc82f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xd19f, .a=0x17, .x=0xec, .y=0x89, .sp=0x46, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x1a}, {.addr=0xd19f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1a0, .a=0x17, .x=0xec, .y=0x89, .sp=0x47, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x1a}, {.addr=0xd19f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd19f, .value=0x8e, .type=IO_READ},
        {.addr=0xd1a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x5b20, .a=0xef, .x=0x7e, .y=0x62, .sp=0x21, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x11}, {.addr=0x5b20, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5b21, .a=0xef, .x=0x7e, .y=0x62, .sp=0x22, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x11}, {.addr=0x5b20, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5b20, .value=0x8e, .type=IO_READ},
        {.addr=0x5b21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x6762, .a=0x8a, .x=0x51, .y=0x11, .sp=0x33, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xf8}, {.addr=0x6762, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6763, .a=0x8a, .x=0x51, .y=0x11, .sp=0x34, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xf8}, {.addr=0x6762, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6762, .value=0x8e, .type=IO_READ},
        {.addr=0x6763, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xfb64, .a=0x56, .x=0x2a, .y=0x61, .sp=0x97, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x06}, {.addr=0xfb64, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfb65, .a=0x56, .x=0x2a, .y=0x61, .sp=0x98, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x06}, {.addr=0xfb64, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfb64, .value=0x8e, .type=IO_READ},
        {.addr=0xfb65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x0ea7, .a=0x1c, .x=0xfa, .y=0xf7, .sp=0x27, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x94}, {.addr=0x0ea7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0ea8, .a=0x1c, .x=0xfa, .y=0xf7, .sp=0x28, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x94}, {.addr=0x0ea7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0ea7, .value=0x8e, .type=IO_READ},
        {.addr=0x0ea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xc45a, .a=0x76, .x=0xe5, .y=0xc9, .sp=0xeb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x89}, {.addr=0xc45a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc45b, .a=0x76, .x=0xe5, .y=0xc9, .sp=0xec, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x89}, {.addr=0xc45a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc45a, .value=0x8e, .type=IO_READ},
        {.addr=0xc45b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x1b72, .a=0x6d, .x=0xb5, .y=0xd9, .sp=0x58, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xaf}, {.addr=0x1b72, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1b73, .a=0x6d, .x=0xb5, .y=0xd9, .sp=0x59, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xaf}, {.addr=0x1b72, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1b72, .value=0x8e, .type=IO_READ},
        {.addr=0x1b73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x0fbf, .a=0x5e, .x=0xac, .y=0xb7, .sp=0xec, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x85}, {.addr=0x0fbf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0fc0, .a=0x5e, .x=0xac, .y=0xb7, .sp=0xed, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x85}, {.addr=0x0fbf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0fbf, .value=0x8e, .type=IO_READ},
        {.addr=0x0fc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xc06a, .a=0x39, .x=0xd6, .y=0x0f, .sp=0xb7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x50}, {.addr=0xc06a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc06b, .a=0x39, .x=0xd6, .y=0x0f, .sp=0xb8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x50}, {.addr=0xc06a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc06a, .value=0x8e, .type=IO_READ},
        {.addr=0xc06b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xb995, .a=0x6e, .x=0x9a, .y=0x0b, .sp=0x13, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x27}, {.addr=0xb995, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb996, .a=0x6e, .x=0x9a, .y=0x0b, .sp=0x14, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x27}, {.addr=0xb995, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb995, .value=0x8e, .type=IO_READ},
        {.addr=0xb996, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x41a4, .a=0xe1, .x=0x2e, .y=0xda, .sp=0x9f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xfb}, {.addr=0x41a4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x41a5, .a=0xe1, .x=0x2e, .y=0xda, .sp=0xa0, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xfb}, {.addr=0x41a4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x41a4, .value=0x8e, .type=IO_READ},
        {.addr=0x41a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xef95, .a=0x21, .x=0x4f, .y=0x61, .sp=0x1e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xae}, {.addr=0xef95, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xef96, .a=0x21, .x=0x4f, .y=0x61, .sp=0x1f, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xae}, {.addr=0xef95, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xef95, .value=0x8e, .type=IO_READ},
        {.addr=0xef96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x2bc1, .a=0x8f, .x=0x81, .y=0xb5, .sp=0x5f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x80}, {.addr=0x2bc1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bc2, .a=0x8f, .x=0x81, .y=0xb5, .sp=0x60, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x80}, {.addr=0x2bc1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bc1, .value=0x8e, .type=IO_READ},
        {.addr=0x2bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xec5c, .a=0xd1, .x=0x6a, .y=0x67, .sp=0x98, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xba}, {.addr=0xec5c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xec5d, .a=0xd1, .x=0x6a, .y=0x67, .sp=0x99, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xba}, {.addr=0xec5c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xec5c, .value=0x8e, .type=IO_READ},
        {.addr=0xec5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x5e63, .a=0xb7, .x=0x65, .y=0x49, .sp=0x7b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xc1}, {.addr=0x5e63, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5e64, .a=0xb7, .x=0x65, .y=0x49, .sp=0x7c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xc1}, {.addr=0x5e63, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5e63, .value=0x8e, .type=IO_READ},
        {.addr=0x5e64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xf2d2, .a=0x04, .x=0x9c, .y=0x14, .sp=0x7c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x76}, {.addr=0xf2d2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf2d3, .a=0x04, .x=0x9c, .y=0x14, .sp=0x7d, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x76}, {.addr=0xf2d2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf2d2, .value=0x8e, .type=IO_READ},
        {.addr=0xf2d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9f8c, .a=0xaf, .x=0x13, .y=0x0e, .sp=0xee, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x41}, {.addr=0x9f8c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9f8d, .a=0xaf, .x=0x13, .y=0x0e, .sp=0xef, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x41}, {.addr=0x9f8c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9f8c, .value=0x8e, .type=IO_READ},
        {.addr=0x9f8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x0b32, .a=0x80, .x=0xf4, .y=0xb0, .sp=0x59, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xd8}, {.addr=0x0b32, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0b33, .a=0x80, .x=0xf4, .y=0xb0, .sp=0x5a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xd8}, {.addr=0x0b32, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0b32, .value=0x8e, .type=IO_READ},
        {.addr=0x0b33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x37b4, .a=0x24, .x=0x9e, .y=0xcb, .sp=0xd0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x51}, {.addr=0x37b4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x37b5, .a=0x24, .x=0x9e, .y=0xcb, .sp=0xd1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x51}, {.addr=0x37b4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x37b4, .value=0x8e, .type=IO_READ},
        {.addr=0x37b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xb75a, .a=0xe6, .x=0xdf, .y=0xa8, .sp=0x53, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x6e}, {.addr=0xb75a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb75b, .a=0xe6, .x=0xdf, .y=0xa8, .sp=0x54, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x6e}, {.addr=0xb75a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb75a, .value=0x8e, .type=IO_READ},
        {.addr=0xb75b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xce53, .a=0x07, .x=0xd3, .y=0x96, .sp=0x1c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x66}, {.addr=0xce53, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce54, .a=0x07, .x=0xd3, .y=0x96, .sp=0x1d, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x66}, {.addr=0xce53, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce53, .value=0x8e, .type=IO_READ},
        {.addr=0xce54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x3362, .a=0x73, .x=0xef, .y=0xc1, .sp=0x7f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x9c}, {.addr=0x3362, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3363, .a=0x73, .x=0xef, .y=0xc1, .sp=0x80, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x9c}, {.addr=0x3362, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3362, .value=0x8e, .type=IO_READ},
        {.addr=0x3363, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x64c1, .a=0x16, .x=0x4d, .y=0x4f, .sp=0xe0, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xec}, {.addr=0x64c1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x64c2, .a=0x16, .x=0x4d, .y=0x4f, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xec}, {.addr=0x64c1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x64c1, .value=0x8e, .type=IO_READ},
        {.addr=0x64c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x02da, .a=0x84, .x=0x91, .y=0xf3, .sp=0x9c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xdb}, {.addr=0x02da, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x02db, .a=0x84, .x=0x91, .y=0xf3, .sp=0x9d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xdb}, {.addr=0x02da, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x02da, .value=0x8e, .type=IO_READ},
        {.addr=0x02db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x39a3, .a=0xe8, .x=0xe1, .y=0x63, .sp=0x63, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x62}, {.addr=0x39a3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x39a4, .a=0xe8, .x=0xe1, .y=0x63, .sp=0x64, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x62}, {.addr=0x39a3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x39a3, .value=0x8e, .type=IO_READ},
        {.addr=0x39a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xfe84, .a=0xfb, .x=0xb3, .y=0x9e, .sp=0xe0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xd8}, {.addr=0xfe84, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfe85, .a=0xfb, .x=0xb3, .y=0x9e, .sp=0xe1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xd8}, {.addr=0xfe84, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfe84, .value=0x8e, .type=IO_READ},
        {.addr=0xfe85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x4449, .a=0x72, .x=0x32, .y=0xb0, .sp=0xb8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xaf}, {.addr=0x4449, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x444a, .a=0x72, .x=0x32, .y=0xb0, .sp=0xb9, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xaf}, {.addr=0x4449, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4449, .value=0x8e, .type=IO_READ},
        {.addr=0x444a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x3a48, .a=0x69, .x=0x75, .y=0x04, .sp=0x94, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x27}, {.addr=0x3a48, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a49, .a=0x69, .x=0x75, .y=0x04, .sp=0x95, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x27}, {.addr=0x3a48, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a48, .value=0x8e, .type=IO_READ},
        {.addr=0x3a49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x93b5, .a=0x01, .x=0x93, .y=0x3f, .sp=0x1c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xd8}, {.addr=0x93b5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x93b6, .a=0x01, .x=0x93, .y=0x3f, .sp=0x1d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xd8}, {.addr=0x93b5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x93b5, .value=0x8e, .type=IO_READ},
        {.addr=0x93b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6be5, .a=0x0a, .x=0x7f, .y=0x28, .sp=0x7a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x84}, {.addr=0x6be5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6be6, .a=0x0a, .x=0x7f, .y=0x28, .sp=0x7b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x84}, {.addr=0x6be5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6be5, .value=0x8e, .type=IO_READ},
        {.addr=0x6be6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xb787, .a=0x5a, .x=0x6a, .y=0x3f, .sp=0x70, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x6f}, {.addr=0xb787, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb788, .a=0x5a, .x=0x6a, .y=0x3f, .sp=0x71, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x6f}, {.addr=0xb787, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb787, .value=0x8e, .type=IO_READ},
        {.addr=0xb788, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xb1fd, .a=0x07, .x=0x82, .y=0x76, .sp=0xcc, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xb9}, {.addr=0xb1fd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb1fe, .a=0x07, .x=0x82, .y=0x76, .sp=0xcd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xb9}, {.addr=0xb1fd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb1fd, .value=0x8e, .type=IO_READ},
        {.addr=0xb1fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xd014, .a=0x06, .x=0x8e, .y=0x07, .sp=0x0b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xe6}, {.addr=0xd014, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd015, .a=0x06, .x=0x8e, .y=0x07, .sp=0x0c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xe6}, {.addr=0xd014, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd014, .value=0x8e, .type=IO_READ},
        {.addr=0xd015, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x23aa, .a=0x74, .x=0x0b, .y=0x64, .sp=0xe5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x56}, {.addr=0x23aa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x23ab, .a=0x74, .x=0x0b, .y=0x64, .sp=0xe6, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x56}, {.addr=0x23aa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x23aa, .value=0x8e, .type=IO_READ},
        {.addr=0x23ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x8576, .a=0x5e, .x=0x35, .y=0x6e, .sp=0x09, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x91}, {.addr=0x8576, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8577, .a=0x5e, .x=0x35, .y=0x6e, .sp=0x0a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x91}, {.addr=0x8576, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8576, .value=0x8e, .type=IO_READ},
        {.addr=0x8577, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x213e, .a=0x45, .x=0xb9, .y=0x48, .sp=0x92, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xb6}, {.addr=0x213e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x213f, .a=0x45, .x=0xb9, .y=0x48, .sp=0x93, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xb6}, {.addr=0x213e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x213e, .value=0x8e, .type=IO_READ},
        {.addr=0x213f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x9527, .a=0x0d, .x=0xe6, .y=0x02, .sp=0x35, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xa4}, {.addr=0x9527, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9528, .a=0x0d, .x=0xe6, .y=0x02, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xa4}, {.addr=0x9527, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9527, .value=0x8e, .type=IO_READ},
        {.addr=0x9528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7829, .a=0x04, .x=0x18, .y=0xa4, .sp=0xa1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xeb}, {.addr=0x7829, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x782a, .a=0x04, .x=0x18, .y=0xa4, .sp=0xa2, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xeb}, {.addr=0x7829, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7829, .value=0x8e, .type=IO_READ},
        {.addr=0x782a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x8e83, .a=0xf1, .x=0xce, .y=0xb2, .sp=0xe3, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x49}, {.addr=0x8e83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8e84, .a=0xf1, .x=0xce, .y=0xb2, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x49}, {.addr=0x8e83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8e83, .value=0x8e, .type=IO_READ},
        {.addr=0x8e84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2148, .a=0x9e, .x=0x43, .y=0x02, .sp=0x98, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x90}, {.addr=0x2148, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2149, .a=0x9e, .x=0x43, .y=0x02, .sp=0x99, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x90}, {.addr=0x2148, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2148, .value=0x8e, .type=IO_READ},
        {.addr=0x2149, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xd8d9, .a=0x52, .x=0x85, .y=0x21, .sp=0x3e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x8a}, {.addr=0xd8d9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd8da, .a=0x52, .x=0x85, .y=0x21, .sp=0x3f, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x8a}, {.addr=0xd8d9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd8d9, .value=0x8e, .type=IO_READ},
        {.addr=0xd8da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xbc0f, .a=0xd9, .x=0x4f, .y=0x5a, .sp=0x88, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x8a}, {.addr=0xbc0f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbc10, .a=0xd9, .x=0x4f, .y=0x5a, .sp=0x89, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x8a}, {.addr=0xbc0f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbc0f, .value=0x8e, .type=IO_READ},
        {.addr=0xbc10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xe99a, .a=0x24, .x=0x14, .y=0x07, .sp=0xd0, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x3d}, {.addr=0xe99a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe99b, .a=0x24, .x=0x14, .y=0x07, .sp=0xd1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x3d}, {.addr=0xe99a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe99a, .value=0x8e, .type=IO_READ},
        {.addr=0xe99b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xd1af, .a=0x8a, .x=0xd8, .y=0x45, .sp=0xbb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x08}, {.addr=0xd1af, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1b0, .a=0x8a, .x=0xd8, .y=0x45, .sp=0xbc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x08}, {.addr=0xd1af, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1af, .value=0x8e, .type=IO_READ},
        {.addr=0xd1b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xc032, .a=0xd6, .x=0x66, .y=0x81, .sp=0x81, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x0d}, {.addr=0xc032, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc033, .a=0xd6, .x=0x66, .y=0x81, .sp=0x82, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x0d}, {.addr=0xc032, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc032, .value=0x8e, .type=IO_READ},
        {.addr=0xc033, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xeaaa, .a=0xf0, .x=0x69, .y=0xae, .sp=0xea, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xaf}, {.addr=0xeaaa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeaab, .a=0xf0, .x=0x69, .y=0xae, .sp=0xeb, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xaf}, {.addr=0xeaaa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeaaa, .value=0x8e, .type=IO_READ},
        {.addr=0xeaab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xc566, .a=0xe9, .x=0x47, .y=0xe2, .sp=0xf6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x57}, {.addr=0xc566, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc567, .a=0xe9, .x=0x47, .y=0xe2, .sp=0xf7, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x57}, {.addr=0xc566, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc566, .value=0x8e, .type=IO_READ},
        {.addr=0xc567, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x1f05, .a=0x4c, .x=0xd6, .y=0xe3, .sp=0x72, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xa6}, {.addr=0x1f05, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1f06, .a=0x4c, .x=0xd6, .y=0xe3, .sp=0x73, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xa6}, {.addr=0x1f05, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1f05, .value=0x8e, .type=IO_READ},
        {.addr=0x1f06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x6935, .a=0xe3, .x=0x6a, .y=0x01, .sp=0x3a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xcd}, {.addr=0x6935, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6936, .a=0xe3, .x=0x6a, .y=0x01, .sp=0x3b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xcd}, {.addr=0x6935, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6935, .value=0x8e, .type=IO_READ},
        {.addr=0x6936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x5570, .a=0x3b, .x=0xbe, .y=0x18, .sp=0x1a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x46}, {.addr=0x5570, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5571, .a=0x3b, .x=0xbe, .y=0x18, .sp=0x1b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x46}, {.addr=0x5570, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5570, .value=0x8e, .type=IO_READ},
        {.addr=0x5571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x7476, .a=0xa3, .x=0xf8, .y=0x29, .sp=0x78, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x5a}, {.addr=0x7476, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7477, .a=0xa3, .x=0xf8, .y=0x29, .sp=0x79, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x5a}, {.addr=0x7476, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7476, .value=0x8e, .type=IO_READ},
        {.addr=0x7477, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x0c37, .a=0xfa, .x=0x53, .y=0x2e, .sp=0x3d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xbf}, {.addr=0x0c37, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0c38, .a=0xfa, .x=0x53, .y=0x2e, .sp=0x3e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xbf}, {.addr=0x0c37, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0c37, .value=0x8e, .type=IO_READ},
        {.addr=0x0c38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x7072, .a=0x23, .x=0x64, .y=0xfb, .sp=0x86, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xf8}, {.addr=0x7072, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7073, .a=0x23, .x=0x64, .y=0xfb, .sp=0x87, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xf8}, {.addr=0x7072, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7072, .value=0x8e, .type=IO_READ},
        {.addr=0x7073, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x5857, .a=0x0a, .x=0xc7, .y=0xf7, .sp=0x33, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xc9}, {.addr=0x5857, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5858, .a=0x0a, .x=0xc7, .y=0xf7, .sp=0x34, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xc9}, {.addr=0x5857, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5857, .value=0x8e, .type=IO_READ},
        {.addr=0x5858, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x7aaf, .a=0x05, .x=0x30, .y=0xe6, .sp=0xd3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x02}, {.addr=0x7aaf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ab0, .a=0x05, .x=0x30, .y=0xe6, .sp=0xd4, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x02}, {.addr=0x7aaf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7aaf, .value=0x8e, .type=IO_READ},
        {.addr=0x7ab0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x0768, .a=0x34, .x=0xac, .y=0x9d, .sp=0x19, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x4b}, {.addr=0x0768, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0769, .a=0x34, .x=0xac, .y=0x9d, .sp=0x1a, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x4b}, {.addr=0x0768, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0768, .value=0x8e, .type=IO_READ},
        {.addr=0x0769, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x4527, .a=0x8a, .x=0x94, .y=0x8e, .sp=0xd8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x1d}, {.addr=0x4527, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4528, .a=0x8a, .x=0x94, .y=0x8e, .sp=0xd9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x1d}, {.addr=0x4527, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4527, .value=0x8e, .type=IO_READ},
        {.addr=0x4528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x2788, .a=0x84, .x=0x39, .y=0xc7, .sp=0xff, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x48}, {.addr=0x2788, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2789, .a=0x84, .x=0x39, .y=0xc7, .sp=0x00, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x48}, {.addr=0x2788, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2788, .value=0x8e, .type=IO_READ},
        {.addr=0x2789, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0300) {
    const struct CPU_State initial_cpu = {.pc=0x2ebe, .a=0x49, .x=0xab, .y=0x94, .sp=0xc3, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x5f}, {.addr=0x2ebe, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2ebf, .a=0x49, .x=0xab, .y=0x94, .sp=0xc4, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x5f}, {.addr=0x2ebe, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2ebe, .value=0x8e, .type=IO_READ},
        {.addr=0x2ebf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0301) {
    const struct CPU_State initial_cpu = {.pc=0xc343, .a=0xca, .x=0xfa, .y=0x11, .sp=0xed, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x8e}, {.addr=0xc343, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc344, .a=0xca, .x=0xfa, .y=0x11, .sp=0xee, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x8e}, {.addr=0xc343, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc343, .value=0x8e, .type=IO_READ},
        {.addr=0xc344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0302) {
    const struct CPU_State initial_cpu = {.pc=0x5743, .a=0x6b, .x=0x0b, .y=0x41, .sp=0x83, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x5a}, {.addr=0x5743, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5744, .a=0x6b, .x=0x0b, .y=0x41, .sp=0x84, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x5a}, {.addr=0x5743, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5743, .value=0x8e, .type=IO_READ},
        {.addr=0x5744, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0303) {
    const struct CPU_State initial_cpu = {.pc=0xb869, .a=0xb5, .x=0x72, .y=0x62, .sp=0xab, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x60}, {.addr=0xb869, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb86a, .a=0xb5, .x=0x72, .y=0x62, .sp=0xac, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x60}, {.addr=0xb869, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb869, .value=0x8e, .type=IO_READ},
        {.addr=0xb86a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0304) {
    const struct CPU_State initial_cpu = {.pc=0xb464, .a=0x92, .x=0x38, .y=0x77, .sp=0xde, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x6c}, {.addr=0xb464, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb465, .a=0x92, .x=0x38, .y=0x77, .sp=0xdf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x6c}, {.addr=0xb464, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb464, .value=0x8e, .type=IO_READ},
        {.addr=0xb465, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0305) {
    const struct CPU_State initial_cpu = {.pc=0xeb06, .a=0x98, .x=0xfa, .y=0x11, .sp=0x28, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xeb06, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeb07, .a=0x98, .x=0xfa, .y=0x11, .sp=0x29, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xeb06, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeb06, .value=0x8e, .type=IO_READ},
        {.addr=0xeb07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0306) {
    const struct CPU_State initial_cpu = {.pc=0xe15a, .a=0x9f, .x=0x3a, .y=0x60, .sp=0x6c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x42}, {.addr=0xe15a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe15b, .a=0x9f, .x=0x3a, .y=0x60, .sp=0x6d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x42}, {.addr=0xe15a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe15a, .value=0x8e, .type=IO_READ},
        {.addr=0xe15b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0307) {
    const struct CPU_State initial_cpu = {.pc=0x1586, .a=0x8d, .x=0xa1, .y=0x69, .sp=0x24, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x30}, {.addr=0x1586, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1587, .a=0x8d, .x=0xa1, .y=0x69, .sp=0x25, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x30}, {.addr=0x1586, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1586, .value=0x8e, .type=IO_READ},
        {.addr=0x1587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6adf, .a=0xfc, .x=0x5c, .y=0xcf, .sp=0xf5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xea}, {.addr=0x6adf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6ae0, .a=0xfc, .x=0x5c, .y=0xcf, .sp=0xf6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xea}, {.addr=0x6adf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6adf, .value=0x8e, .type=IO_READ},
        {.addr=0x6ae0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0309) {
    const struct CPU_State initial_cpu = {.pc=0x0955, .a=0xf4, .x=0xa0, .y=0xd6, .sp=0xec, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x99}, {.addr=0x0955, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0956, .a=0xf4, .x=0xa0, .y=0xd6, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x99}, {.addr=0x0955, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0955, .value=0x8e, .type=IO_READ},
        {.addr=0x0956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030A) {
    const struct CPU_State initial_cpu = {.pc=0x57bf, .a=0xec, .x=0xaa, .y=0x6e, .sp=0xc0, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x99}, {.addr=0x57bf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x57c0, .a=0xec, .x=0xaa, .y=0x6e, .sp=0xc1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x99}, {.addr=0x57bf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x57bf, .value=0x8e, .type=IO_READ},
        {.addr=0x57c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030B) {
    const struct CPU_State initial_cpu = {.pc=0x7f31, .a=0x67, .x=0xc9, .y=0xf9, .sp=0xfc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xb6}, {.addr=0x7f31, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7f32, .a=0x67, .x=0xc9, .y=0xf9, .sp=0xfd, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xb6}, {.addr=0x7f31, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7f31, .value=0x8e, .type=IO_READ},
        {.addr=0x7f32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030C) {
    const struct CPU_State initial_cpu = {.pc=0xb3b6, .a=0xa7, .x=0x57, .y=0xa7, .sp=0x96, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x4b}, {.addr=0xb3b6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb3b7, .a=0xa7, .x=0x57, .y=0xa7, .sp=0x97, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x4b}, {.addr=0xb3b6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb3b6, .value=0x8e, .type=IO_READ},
        {.addr=0xb3b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb4f5, .a=0xc7, .x=0xe4, .y=0x3e, .sp=0xef, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x19}, {.addr=0xb4f5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb4f6, .a=0xc7, .x=0xe4, .y=0x3e, .sp=0xf0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x19}, {.addr=0xb4f5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb4f5, .value=0x8e, .type=IO_READ},
        {.addr=0xb4f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030E) {
    const struct CPU_State initial_cpu = {.pc=0xcde4, .a=0x3f, .x=0x33, .y=0xcd, .sp=0x49, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xba}, {.addr=0xcde4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcde5, .a=0x3f, .x=0x33, .y=0xcd, .sp=0x4a, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xba}, {.addr=0xcde4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcde4, .value=0x8e, .type=IO_READ},
        {.addr=0xcde5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_030F) {
    const struct CPU_State initial_cpu = {.pc=0x3395, .a=0x36, .x=0xd2, .y=0x8f, .sp=0x05, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x4b}, {.addr=0x3395, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3396, .a=0x36, .x=0xd2, .y=0x8f, .sp=0x06, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x4b}, {.addr=0x3395, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3395, .value=0x8e, .type=IO_READ},
        {.addr=0x3396, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0310) {
    const struct CPU_State initial_cpu = {.pc=0x62c9, .a=0x9c, .x=0x73, .y=0xc3, .sp=0x35, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xfb}, {.addr=0x62c9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x62ca, .a=0x9c, .x=0x73, .y=0xc3, .sp=0x36, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xfb}, {.addr=0x62c9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x62c9, .value=0x8e, .type=IO_READ},
        {.addr=0x62ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0311) {
    const struct CPU_State initial_cpu = {.pc=0x8d7c, .a=0x3f, .x=0xc4, .y=0xbb, .sp=0xe6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xe1}, {.addr=0x8d7c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8d7d, .a=0x3f, .x=0xc4, .y=0xbb, .sp=0xe7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xe1}, {.addr=0x8d7c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8d7c, .value=0x8e, .type=IO_READ},
        {.addr=0x8d7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0312) {
    const struct CPU_State initial_cpu = {.pc=0x2aa6, .a=0x93, .x=0x15, .y=0x13, .sp=0x71, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x28}, {.addr=0x2aa6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2aa7, .a=0x93, .x=0x15, .y=0x13, .sp=0x72, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x28}, {.addr=0x2aa6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2aa6, .value=0x8e, .type=IO_READ},
        {.addr=0x2aa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0313) {
    const struct CPU_State initial_cpu = {.pc=0xb544, .a=0x4f, .x=0x2b, .y=0x6e, .sp=0xf5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x94}, {.addr=0xb544, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb545, .a=0x4f, .x=0x2b, .y=0x6e, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x94}, {.addr=0xb544, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb544, .value=0x8e, .type=IO_READ},
        {.addr=0xb545, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0314) {
    const struct CPU_State initial_cpu = {.pc=0xfedc, .a=0x02, .x=0xa7, .y=0xd9, .sp=0xa5, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xae}, {.addr=0xfedc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfedd, .a=0x02, .x=0xa7, .y=0xd9, .sp=0xa6, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xae}, {.addr=0xfedc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfedc, .value=0x8e, .type=IO_READ},
        {.addr=0xfedd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0315) {
    const struct CPU_State initial_cpu = {.pc=0x90d7, .a=0x96, .x=0xd7, .y=0xc2, .sp=0xe5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x16}, {.addr=0x90d7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x90d8, .a=0x96, .x=0xd7, .y=0xc2, .sp=0xe6, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x16}, {.addr=0x90d7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x90d7, .value=0x8e, .type=IO_READ},
        {.addr=0x90d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0316) {
    const struct CPU_State initial_cpu = {.pc=0x4463, .a=0x56, .x=0xa5, .y=0x0b, .sp=0x0a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x55}, {.addr=0x4463, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4464, .a=0x56, .x=0xa5, .y=0x0b, .sp=0x0b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x55}, {.addr=0x4463, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4463, .value=0x8e, .type=IO_READ},
        {.addr=0x4464, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0317) {
    const struct CPU_State initial_cpu = {.pc=0xd05b, .a=0x3c, .x=0xee, .y=0x80, .sp=0x71, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x68}, {.addr=0xd05b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd05c, .a=0x3c, .x=0xee, .y=0x80, .sp=0x72, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x68}, {.addr=0xd05b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd05b, .value=0x8e, .type=IO_READ},
        {.addr=0xd05c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0318) {
    const struct CPU_State initial_cpu = {.pc=0x8b4c, .a=0x64, .x=0x2c, .y=0xe3, .sp=0x36, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xe1}, {.addr=0x8b4c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8b4d, .a=0x64, .x=0x2c, .y=0xe3, .sp=0x37, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xe1}, {.addr=0x8b4c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8b4c, .value=0x8e, .type=IO_READ},
        {.addr=0x8b4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0319) {
    const struct CPU_State initial_cpu = {.pc=0xcd68, .a=0x3c, .x=0xe8, .y=0xfa, .sp=0x9a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x13}, {.addr=0xcd68, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcd69, .a=0x3c, .x=0xe8, .y=0xfa, .sp=0x9b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x13}, {.addr=0xcd68, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcd68, .value=0x8e, .type=IO_READ},
        {.addr=0xcd69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031A) {
    const struct CPU_State initial_cpu = {.pc=0x29e2, .a=0xdc, .x=0x04, .y=0xd1, .sp=0x5b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xdf}, {.addr=0x29e2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x29e3, .a=0xdc, .x=0x04, .y=0xd1, .sp=0x5c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xdf}, {.addr=0x29e2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x29e2, .value=0x8e, .type=IO_READ},
        {.addr=0x29e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf45a, .a=0x13, .x=0xcd, .y=0xa4, .sp=0xff, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x01}, {.addr=0xf45a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf45b, .a=0x13, .x=0xcd, .y=0xa4, .sp=0x00, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x01}, {.addr=0xf45a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf45a, .value=0x8e, .type=IO_READ},
        {.addr=0xf45b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031C) {
    const struct CPU_State initial_cpu = {.pc=0xb687, .a=0x17, .x=0x9d, .y=0xdc, .sp=0x06, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xda}, {.addr=0xb687, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb688, .a=0x17, .x=0x9d, .y=0xdc, .sp=0x07, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xda}, {.addr=0xb687, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb687, .value=0x8e, .type=IO_READ},
        {.addr=0xb688, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031D) {
    const struct CPU_State initial_cpu = {.pc=0x1bf2, .a=0x17, .x=0xef, .y=0xa4, .sp=0x22, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x16}, {.addr=0x1bf2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1bf3, .a=0x17, .x=0xef, .y=0xa4, .sp=0x23, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x16}, {.addr=0x1bf2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1bf2, .value=0x8e, .type=IO_READ},
        {.addr=0x1bf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031E) {
    const struct CPU_State initial_cpu = {.pc=0x5c5a, .a=0xcd, .x=0x0d, .y=0x68, .sp=0x83, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xc2}, {.addr=0x5c5a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5c5b, .a=0xcd, .x=0x0d, .y=0x68, .sp=0x84, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xc2}, {.addr=0x5c5a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5c5a, .value=0x8e, .type=IO_READ},
        {.addr=0x5c5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_031F) {
    const struct CPU_State initial_cpu = {.pc=0x672b, .a=0x0f, .x=0x5e, .y=0x6c, .sp=0xe6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x7b}, {.addr=0x672b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x672c, .a=0x0f, .x=0x5e, .y=0x6c, .sp=0xe7, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x7b}, {.addr=0x672b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x672b, .value=0x8e, .type=IO_READ},
        {.addr=0x672c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0320) {
    const struct CPU_State initial_cpu = {.pc=0x3021, .a=0x2e, .x=0x3c, .y=0xcd, .sp=0xd0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x31}, {.addr=0x3021, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3022, .a=0x2e, .x=0x3c, .y=0xcd, .sp=0xd1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x31}, {.addr=0x3021, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3021, .value=0x8e, .type=IO_READ},
        {.addr=0x3022, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0321) {
    const struct CPU_State initial_cpu = {.pc=0x2dca, .a=0x30, .x=0x5a, .y=0x5e, .sp=0x76, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x30}, {.addr=0x2dca, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2dcb, .a=0x30, .x=0x5a, .y=0x5e, .sp=0x77, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x30}, {.addr=0x2dca, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2dca, .value=0x8e, .type=IO_READ},
        {.addr=0x2dcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0322) {
    const struct CPU_State initial_cpu = {.pc=0xbd21, .a=0x14, .x=0xe7, .y=0x1d, .sp=0x83, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xef}, {.addr=0xbd21, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbd22, .a=0x14, .x=0xe7, .y=0x1d, .sp=0x84, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xef}, {.addr=0xbd21, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbd21, .value=0x8e, .type=IO_READ},
        {.addr=0xbd22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0323) {
    const struct CPU_State initial_cpu = {.pc=0xb70e, .a=0x42, .x=0x9e, .y=0xd7, .sp=0x00, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x98}, {.addr=0xb70e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb70f, .a=0x42, .x=0x9e, .y=0xd7, .sp=0x01, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x98}, {.addr=0xb70e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb70e, .value=0x8e, .type=IO_READ},
        {.addr=0xb70f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0324) {
    const struct CPU_State initial_cpu = {.pc=0x5487, .a=0xf3, .x=0x26, .y=0xac, .sp=0x58, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x71}, {.addr=0x5487, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5488, .a=0xf3, .x=0x26, .y=0xac, .sp=0x59, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x71}, {.addr=0x5487, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5487, .value=0x8e, .type=IO_READ},
        {.addr=0x5488, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0325) {
    const struct CPU_State initial_cpu = {.pc=0xe3ae, .a=0x9a, .x=0x42, .y=0x7f, .sp=0x5c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xe4}, {.addr=0xe3ae, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe3af, .a=0x9a, .x=0x42, .y=0x7f, .sp=0x5d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xe4}, {.addr=0xe3ae, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe3ae, .value=0x8e, .type=IO_READ},
        {.addr=0xe3af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0326) {
    const struct CPU_State initial_cpu = {.pc=0x41cd, .a=0x34, .x=0xc4, .y=0xf3, .sp=0x9f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xb0}, {.addr=0x41cd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x41ce, .a=0x34, .x=0xc4, .y=0xf3, .sp=0xa0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xb0}, {.addr=0x41cd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x41cd, .value=0x8e, .type=IO_READ},
        {.addr=0x41ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0327) {
    const struct CPU_State initial_cpu = {.pc=0x9247, .a=0x1e, .x=0x35, .y=0x1e, .sp=0x67, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xc8}, {.addr=0x9247, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9248, .a=0x1e, .x=0x35, .y=0x1e, .sp=0x68, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xc8}, {.addr=0x9247, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9247, .value=0x8e, .type=IO_READ},
        {.addr=0x9248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc92b, .a=0x45, .x=0x6d, .y=0xd3, .sp=0xe9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xf2}, {.addr=0xc92b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc92c, .a=0x45, .x=0x6d, .y=0xd3, .sp=0xea, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xf2}, {.addr=0xc92b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc92b, .value=0x8e, .type=IO_READ},
        {.addr=0xc92c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0329) {
    const struct CPU_State initial_cpu = {.pc=0x9bcb, .a=0x53, .x=0x2a, .y=0xa3, .sp=0x4c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x39}, {.addr=0x9bcb, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9bcc, .a=0x53, .x=0x2a, .y=0xa3, .sp=0x4d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x39}, {.addr=0x9bcb, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9bcb, .value=0x8e, .type=IO_READ},
        {.addr=0x9bcc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032A) {
    const struct CPU_State initial_cpu = {.pc=0x3f56, .a=0x8b, .x=0x1d, .y=0xd4, .sp=0x61, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xcf}, {.addr=0x3f56, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3f57, .a=0x8b, .x=0x1d, .y=0xd4, .sp=0x62, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xcf}, {.addr=0x3f56, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3f56, .value=0x8e, .type=IO_READ},
        {.addr=0x3f57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032B) {
    const struct CPU_State initial_cpu = {.pc=0x367b, .a=0x16, .x=0xa4, .y=0x7b, .sp=0x67, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xee}, {.addr=0x367b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x367c, .a=0x16, .x=0xa4, .y=0x7b, .sp=0x68, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xee}, {.addr=0x367b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x367b, .value=0x8e, .type=IO_READ},
        {.addr=0x367c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032C) {
    const struct CPU_State initial_cpu = {.pc=0x05f9, .a=0xa8, .x=0x71, .y=0xe1, .sp=0x33, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x1b}, {.addr=0x05f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x05fa, .a=0xa8, .x=0x71, .y=0xe1, .sp=0x34, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x1b}, {.addr=0x05f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x05f9, .value=0x8e, .type=IO_READ},
        {.addr=0x05fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032D) {
    const struct CPU_State initial_cpu = {.pc=0xf933, .a=0xbf, .x=0xef, .y=0x19, .sp=0xb5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x27}, {.addr=0xf933, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf934, .a=0xbf, .x=0xef, .y=0x19, .sp=0xb6, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x27}, {.addr=0xf933, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf933, .value=0x8e, .type=IO_READ},
        {.addr=0xf934, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032E) {
    const struct CPU_State initial_cpu = {.pc=0x6bb1, .a=0x12, .x=0x90, .y=0xcf, .sp=0xff, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x67}, {.addr=0x6bb1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6bb2, .a=0x12, .x=0x90, .y=0xcf, .sp=0x00, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x67}, {.addr=0x6bb1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6bb1, .value=0x8e, .type=IO_READ},
        {.addr=0x6bb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_032F) {
    const struct CPU_State initial_cpu = {.pc=0xb45e, .a=0xbb, .x=0xee, .y=0x3d, .sp=0xa3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x6b}, {.addr=0xb45e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb45f, .a=0xbb, .x=0xee, .y=0x3d, .sp=0xa4, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x6b}, {.addr=0xb45e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb45e, .value=0x8e, .type=IO_READ},
        {.addr=0xb45f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0330) {
    const struct CPU_State initial_cpu = {.pc=0x6879, .a=0xef, .x=0x62, .y=0x2b, .sp=0xa9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x4e}, {.addr=0x6879, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x687a, .a=0xef, .x=0x62, .y=0x2b, .sp=0xaa, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x4e}, {.addr=0x6879, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6879, .value=0x8e, .type=IO_READ},
        {.addr=0x687a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0331) {
    const struct CPU_State initial_cpu = {.pc=0xc2e4, .a=0x65, .x=0x7d, .y=0x3d, .sp=0xf9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x69}, {.addr=0xc2e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc2e5, .a=0x65, .x=0x7d, .y=0x3d, .sp=0xfa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x69}, {.addr=0xc2e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc2e4, .value=0x8e, .type=IO_READ},
        {.addr=0xc2e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0332) {
    const struct CPU_State initial_cpu = {.pc=0x7ae3, .a=0xf5, .x=0x82, .y=0x79, .sp=0x90, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x5c}, {.addr=0x7ae3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ae4, .a=0xf5, .x=0x82, .y=0x79, .sp=0x91, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x5c}, {.addr=0x7ae3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7ae3, .value=0x8e, .type=IO_READ},
        {.addr=0x7ae4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0333) {
    const struct CPU_State initial_cpu = {.pc=0x6331, .a=0xa1, .x=0xf1, .y=0xc1, .sp=0xe0, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xff}, {.addr=0x6331, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6332, .a=0xa1, .x=0xf1, .y=0xc1, .sp=0xe1, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xff}, {.addr=0x6331, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6331, .value=0x8e, .type=IO_READ},
        {.addr=0x6332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0334) {
    const struct CPU_State initial_cpu = {.pc=0x39b6, .a=0x39, .x=0x34, .y=0x0f, .sp=0x16, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x6e}, {.addr=0x39b6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x39b7, .a=0x39, .x=0x34, .y=0x0f, .sp=0x17, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x6e}, {.addr=0x39b6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x39b6, .value=0x8e, .type=IO_READ},
        {.addr=0x39b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0335) {
    const struct CPU_State initial_cpu = {.pc=0x76d6, .a=0x6d, .x=0x89, .y=0x03, .sp=0x80, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x2c}, {.addr=0x76d6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x76d7, .a=0x6d, .x=0x89, .y=0x03, .sp=0x81, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x2c}, {.addr=0x76d6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x76d6, .value=0x8e, .type=IO_READ},
        {.addr=0x76d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0336) {
    const struct CPU_State initial_cpu = {.pc=0x27e9, .a=0xdc, .x=0xa9, .y=0x92, .sp=0x00, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x7e}, {.addr=0x27e9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x27ea, .a=0xdc, .x=0xa9, .y=0x92, .sp=0x01, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x7e}, {.addr=0x27e9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x27e9, .value=0x8e, .type=IO_READ},
        {.addr=0x27ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0337) {
    const struct CPU_State initial_cpu = {.pc=0xac02, .a=0x81, .x=0x49, .y=0x8d, .sp=0x77, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xaf}, {.addr=0xac02, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xac03, .a=0x81, .x=0x49, .y=0x8d, .sp=0x78, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xaf}, {.addr=0xac02, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xac02, .value=0x8e, .type=IO_READ},
        {.addr=0xac03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0338) {
    const struct CPU_State initial_cpu = {.pc=0x71e0, .a=0x21, .x=0x73, .y=0x7c, .sp=0xbf, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x5c}, {.addr=0x71e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x71e1, .a=0x21, .x=0x73, .y=0x7c, .sp=0xc0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x5c}, {.addr=0x71e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x71e0, .value=0x8e, .type=IO_READ},
        {.addr=0x71e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0339) {
    const struct CPU_State initial_cpu = {.pc=0xee99, .a=0x21, .x=0x37, .y=0x1f, .sp=0xd4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x7a}, {.addr=0xee99, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xee9a, .a=0x21, .x=0x37, .y=0x1f, .sp=0xd5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x7a}, {.addr=0xee99, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xee99, .value=0x8e, .type=IO_READ},
        {.addr=0xee9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033A) {
    const struct CPU_State initial_cpu = {.pc=0x09ba, .a=0x56, .x=0x7b, .y=0x50, .sp=0xec, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x02}, {.addr=0x09ba, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x09bb, .a=0x56, .x=0x7b, .y=0x50, .sp=0xed, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x02}, {.addr=0x09ba, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x09ba, .value=0x8e, .type=IO_READ},
        {.addr=0x09bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033B) {
    const struct CPU_State initial_cpu = {.pc=0xb542, .a=0x43, .x=0xf2, .y=0xc2, .sp=0x64, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x09}, {.addr=0xb542, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb543, .a=0x43, .x=0xf2, .y=0xc2, .sp=0x65, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x09}, {.addr=0xb542, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb542, .value=0x8e, .type=IO_READ},
        {.addr=0xb543, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1492, .a=0xb5, .x=0x1c, .y=0x8d, .sp=0x85, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x42}, {.addr=0x1492, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1493, .a=0xb5, .x=0x1c, .y=0x8d, .sp=0x86, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x42}, {.addr=0x1492, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1492, .value=0x8e, .type=IO_READ},
        {.addr=0x1493, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033D) {
    const struct CPU_State initial_cpu = {.pc=0x0e64, .a=0x53, .x=0x6c, .y=0xdf, .sp=0x1c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x3d}, {.addr=0x0e64, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0e65, .a=0x53, .x=0x6c, .y=0xdf, .sp=0x1d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x3d}, {.addr=0x0e64, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0e64, .value=0x8e, .type=IO_READ},
        {.addr=0x0e65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033E) {
    const struct CPU_State initial_cpu = {.pc=0x0ce3, .a=0xf0, .x=0x7c, .y=0x86, .sp=0x8a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x8f}, {.addr=0x0ce3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0ce4, .a=0xf0, .x=0x7c, .y=0x86, .sp=0x8b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x8f}, {.addr=0x0ce3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0ce3, .value=0x8e, .type=IO_READ},
        {.addr=0x0ce4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_033F) {
    const struct CPU_State initial_cpu = {.pc=0x8604, .a=0x5e, .x=0xb3, .y=0x6e, .sp=0x1a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x03}, {.addr=0x8604, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8605, .a=0x5e, .x=0xb3, .y=0x6e, .sp=0x1b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x03}, {.addr=0x8604, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8604, .value=0x8e, .type=IO_READ},
        {.addr=0x8605, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0340) {
    const struct CPU_State initial_cpu = {.pc=0xa898, .a=0x0d, .x=0xd6, .y=0xe7, .sp=0x8f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x22}, {.addr=0xa898, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa899, .a=0x0d, .x=0xd6, .y=0xe7, .sp=0x90, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x22}, {.addr=0xa898, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa898, .value=0x8e, .type=IO_READ},
        {.addr=0xa899, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0341) {
    const struct CPU_State initial_cpu = {.pc=0xf575, .a=0xa8, .x=0x31, .y=0xaa, .sp=0xbe, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x33}, {.addr=0xf575, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf576, .a=0xa8, .x=0x31, .y=0xaa, .sp=0xbf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x33}, {.addr=0xf575, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf575, .value=0x8e, .type=IO_READ},
        {.addr=0xf576, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0342) {
    const struct CPU_State initial_cpu = {.pc=0x8478, .a=0xea, .x=0x6b, .y=0x3f, .sp=0x1c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x14}, {.addr=0x8478, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8479, .a=0xea, .x=0x6b, .y=0x3f, .sp=0x1d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x14}, {.addr=0x8478, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8478, .value=0x8e, .type=IO_READ},
        {.addr=0x8479, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0343) {
    const struct CPU_State initial_cpu = {.pc=0xae68, .a=0x22, .x=0x08, .y=0xa5, .sp=0x9a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xad}, {.addr=0xae68, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae69, .a=0x22, .x=0x08, .y=0xa5, .sp=0x9b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xad}, {.addr=0xae68, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae68, .value=0x8e, .type=IO_READ},
        {.addr=0xae69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0344) {
    const struct CPU_State initial_cpu = {.pc=0x91d6, .a=0xd5, .x=0xbd, .y=0x0e, .sp=0x4d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xce}, {.addr=0x91d6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x91d7, .a=0xd5, .x=0xbd, .y=0x0e, .sp=0x4e, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xce}, {.addr=0x91d6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x91d6, .value=0x8e, .type=IO_READ},
        {.addr=0x91d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0345) {
    const struct CPU_State initial_cpu = {.pc=0x8b47, .a=0x62, .x=0x5f, .y=0xf2, .sp=0x9c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x5c}, {.addr=0x8b47, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8b48, .a=0x62, .x=0x5f, .y=0xf2, .sp=0x9d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x5c}, {.addr=0x8b47, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8b47, .value=0x8e, .type=IO_READ},
        {.addr=0x8b48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0346) {
    const struct CPU_State initial_cpu = {.pc=0x5445, .a=0xed, .x=0x96, .y=0x94, .sp=0xf5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x05}, {.addr=0x5445, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5446, .a=0xed, .x=0x96, .y=0x94, .sp=0xf6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x05}, {.addr=0x5445, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5445, .value=0x8e, .type=IO_READ},
        {.addr=0x5446, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0347) {
    const struct CPU_State initial_cpu = {.pc=0x0f95, .a=0xac, .x=0xd6, .y=0x12, .sp=0x66, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xfb}, {.addr=0x0f95, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f96, .a=0xac, .x=0xd6, .y=0x12, .sp=0x67, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xfb}, {.addr=0x0f95, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f95, .value=0x8e, .type=IO_READ},
        {.addr=0x0f96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0348) {
    const struct CPU_State initial_cpu = {.pc=0x5d4d, .a=0x40, .x=0x33, .y=0x4c, .sp=0xd3, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xc8}, {.addr=0x5d4d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5d4e, .a=0x40, .x=0x33, .y=0x4c, .sp=0xd4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xc8}, {.addr=0x5d4d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5d4d, .value=0x8e, .type=IO_READ},
        {.addr=0x5d4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0349) {
    const struct CPU_State initial_cpu = {.pc=0x3a2a, .a=0x36, .x=0x75, .y=0x89, .sp=0x0a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x6d}, {.addr=0x3a2a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a2b, .a=0x36, .x=0x75, .y=0x89, .sp=0x0b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x6d}, {.addr=0x3a2a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a2a, .value=0x8e, .type=IO_READ},
        {.addr=0x3a2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034A) {
    const struct CPU_State initial_cpu = {.pc=0x87f7, .a=0xb9, .x=0x5f, .y=0x2a, .sp=0xde, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x04}, {.addr=0x87f7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x87f8, .a=0xb9, .x=0x5f, .y=0x2a, .sp=0xdf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x04}, {.addr=0x87f7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x87f7, .value=0x8e, .type=IO_READ},
        {.addr=0x87f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8557, .a=0x90, .x=0x0e, .y=0x11, .sp=0x48, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xcb}, {.addr=0x8557, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8558, .a=0x90, .x=0x0e, .y=0x11, .sp=0x49, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xcb}, {.addr=0x8557, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8557, .value=0x8e, .type=IO_READ},
        {.addr=0x8558, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034C) {
    const struct CPU_State initial_cpu = {.pc=0x37d0, .a=0x4e, .x=0x1f, .y=0x79, .sp=0xfe, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x45}, {.addr=0x37d0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x37d1, .a=0x4e, .x=0x1f, .y=0x79, .sp=0xff, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x45}, {.addr=0x37d0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x37d0, .value=0x8e, .type=IO_READ},
        {.addr=0x37d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034D) {
    const struct CPU_State initial_cpu = {.pc=0xcb12, .a=0x33, .x=0x16, .y=0x34, .sp=0x15, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x07}, {.addr=0xcb12, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcb13, .a=0x33, .x=0x16, .y=0x34, .sp=0x16, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x07}, {.addr=0xcb12, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcb12, .value=0x8e, .type=IO_READ},
        {.addr=0xcb13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034E) {
    const struct CPU_State initial_cpu = {.pc=0x367a, .a=0x76, .x=0x50, .y=0xb8, .sp=0xb1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x95}, {.addr=0x367a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x367b, .a=0x76, .x=0x50, .y=0xb8, .sp=0xb2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x95}, {.addr=0x367a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x367a, .value=0x8e, .type=IO_READ},
        {.addr=0x367b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_034F) {
    const struct CPU_State initial_cpu = {.pc=0x67b9, .a=0xc0, .x=0x4d, .y=0x6a, .sp=0x69, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x58}, {.addr=0x67b9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x67ba, .a=0xc0, .x=0x4d, .y=0x6a, .sp=0x6a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x58}, {.addr=0x67b9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x67b9, .value=0x8e, .type=IO_READ},
        {.addr=0x67ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0350) {
    const struct CPU_State initial_cpu = {.pc=0x5cb6, .a=0x55, .x=0x76, .y=0x98, .sp=0x91, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x08}, {.addr=0x5cb6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5cb7, .a=0x55, .x=0x76, .y=0x98, .sp=0x92, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x08}, {.addr=0x5cb6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5cb6, .value=0x8e, .type=IO_READ},
        {.addr=0x5cb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0351) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0x57, .x=0x60, .y=0x04, .sp=0xde, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xae}, {.addr=0xe4cd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe4ce, .a=0x57, .x=0x60, .y=0x04, .sp=0xdf, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xae}, {.addr=0xe4cd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0x8e, .type=IO_READ},
        {.addr=0xe4ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0352) {
    const struct CPU_State initial_cpu = {.pc=0x54f9, .a=0x11, .x=0xa1, .y=0x2b, .sp=0xaa, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xcc}, {.addr=0x54f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x54fa, .a=0x11, .x=0xa1, .y=0x2b, .sp=0xab, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xcc}, {.addr=0x54f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x54f9, .value=0x8e, .type=IO_READ},
        {.addr=0x54fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0353) {
    const struct CPU_State initial_cpu = {.pc=0x9e76, .a=0x44, .x=0x1a, .y=0x29, .sp=0x1c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xe0}, {.addr=0x9e76, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9e77, .a=0x44, .x=0x1a, .y=0x29, .sp=0x1d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xe0}, {.addr=0x9e76, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9e76, .value=0x8e, .type=IO_READ},
        {.addr=0x9e77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0354) {
    const struct CPU_State initial_cpu = {.pc=0xca83, .a=0x4c, .x=0x06, .y=0x9d, .sp=0xe8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x1b}, {.addr=0xca83, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xca84, .a=0x4c, .x=0x06, .y=0x9d, .sp=0xe9, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x1b}, {.addr=0xca83, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xca83, .value=0x8e, .type=IO_READ},
        {.addr=0xca84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0355) {
    const struct CPU_State initial_cpu = {.pc=0x9437, .a=0x58, .x=0x84, .y=0xc1, .sp=0x82, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x6e}, {.addr=0x9437, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9438, .a=0x58, .x=0x84, .y=0xc1, .sp=0x83, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x6e}, {.addr=0x9437, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9437, .value=0x8e, .type=IO_READ},
        {.addr=0x9438, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0356) {
    const struct CPU_State initial_cpu = {.pc=0x89c5, .a=0xdf, .x=0x5a, .y=0xca, .sp=0x01, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xf2}, {.addr=0x89c5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x89c6, .a=0xdf, .x=0x5a, .y=0xca, .sp=0x02, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xf2}, {.addr=0x89c5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x89c5, .value=0x8e, .type=IO_READ},
        {.addr=0x89c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0357) {
    const struct CPU_State initial_cpu = {.pc=0x8434, .a=0x18, .x=0x77, .y=0xf6, .sp=0x96, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x4e}, {.addr=0x8434, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8435, .a=0x18, .x=0x77, .y=0xf6, .sp=0x97, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x4e}, {.addr=0x8434, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8434, .value=0x8e, .type=IO_READ},
        {.addr=0x8435, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0358) {
    const struct CPU_State initial_cpu = {.pc=0xa757, .a=0xe9, .x=0x99, .y=0x2a, .sp=0x57, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x87}, {.addr=0xa757, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa758, .a=0xe9, .x=0x99, .y=0x2a, .sp=0x58, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x87}, {.addr=0xa757, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa757, .value=0x8e, .type=IO_READ},
        {.addr=0xa758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3b67, .a=0xb1, .x=0xc8, .y=0x05, .sp=0xfb, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x99}, {.addr=0x3b67, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3b68, .a=0xb1, .x=0xc8, .y=0x05, .sp=0xfc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x99}, {.addr=0x3b67, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3b67, .value=0x8e, .type=IO_READ},
        {.addr=0x3b68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035A) {
    const struct CPU_State initial_cpu = {.pc=0xcfb5, .a=0x39, .x=0x7b, .y=0xd9, .sp=0x78, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x0f}, {.addr=0xcfb5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcfb6, .a=0x39, .x=0x7b, .y=0xd9, .sp=0x79, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x0f}, {.addr=0xcfb5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcfb5, .value=0x8e, .type=IO_READ},
        {.addr=0xcfb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035B) {
    const struct CPU_State initial_cpu = {.pc=0x8684, .a=0x1f, .x=0xb5, .y=0x2c, .sp=0x2d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x81}, {.addr=0x8684, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8685, .a=0x1f, .x=0xb5, .y=0x2c, .sp=0x2e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x81}, {.addr=0x8684, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8684, .value=0x8e, .type=IO_READ},
        {.addr=0x8685, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035C) {
    const struct CPU_State initial_cpu = {.pc=0xc1a6, .a=0x26, .x=0x63, .y=0x61, .sp=0x09, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xee}, {.addr=0xc1a6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc1a7, .a=0x26, .x=0x63, .y=0x61, .sp=0x0a, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xee}, {.addr=0xc1a6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc1a6, .value=0x8e, .type=IO_READ},
        {.addr=0xc1a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035D) {
    const struct CPU_State initial_cpu = {.pc=0xe6b3, .a=0x15, .x=0xe6, .y=0x54, .sp=0x05, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x39}, {.addr=0xe6b3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe6b4, .a=0x15, .x=0xe6, .y=0x54, .sp=0x06, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x39}, {.addr=0xe6b3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe6b3, .value=0x8e, .type=IO_READ},
        {.addr=0xe6b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035E) {
    const struct CPU_State initial_cpu = {.pc=0xb369, .a=0x94, .x=0xac, .y=0x32, .sp=0xd3, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x14}, {.addr=0xb369, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb36a, .a=0x94, .x=0xac, .y=0x32, .sp=0xd4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x14}, {.addr=0xb369, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb369, .value=0x8e, .type=IO_READ},
        {.addr=0xb36a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_035F) {
    const struct CPU_State initial_cpu = {.pc=0xbe93, .a=0x15, .x=0xe3, .y=0xfe, .sp=0xa9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x69}, {.addr=0xbe93, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbe94, .a=0x15, .x=0xe3, .y=0xfe, .sp=0xaa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x69}, {.addr=0xbe93, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbe93, .value=0x8e, .type=IO_READ},
        {.addr=0xbe94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0360) {
    const struct CPU_State initial_cpu = {.pc=0x0eb8, .a=0x3a, .x=0x49, .y=0xdf, .sp=0x48, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x55}, {.addr=0x0eb8, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0eb9, .a=0x3a, .x=0x49, .y=0xdf, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x55}, {.addr=0x0eb8, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0eb8, .value=0x8e, .type=IO_READ},
        {.addr=0x0eb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0361) {
    const struct CPU_State initial_cpu = {.pc=0x063a, .a=0xa8, .x=0xe8, .y=0x85, .sp=0xea, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xbb}, {.addr=0x063a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x063b, .a=0xa8, .x=0xe8, .y=0x85, .sp=0xeb, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xbb}, {.addr=0x063a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x063a, .value=0x8e, .type=IO_READ},
        {.addr=0x063b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0362) {
    const struct CPU_State initial_cpu = {.pc=0x8ee7, .a=0xe8, .x=0x07, .y=0xe6, .sp=0xcf, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xda}, {.addr=0x8ee7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8ee8, .a=0xe8, .x=0x07, .y=0xe6, .sp=0xd0, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xda}, {.addr=0x8ee7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8ee7, .value=0x8e, .type=IO_READ},
        {.addr=0x8ee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0363) {
    const struct CPU_State initial_cpu = {.pc=0x6331, .a=0x0f, .x=0xa2, .y=0x0e, .sp=0x19, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x73}, {.addr=0x6331, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6332, .a=0x0f, .x=0xa2, .y=0x0e, .sp=0x1a, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x73}, {.addr=0x6331, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6331, .value=0x8e, .type=IO_READ},
        {.addr=0x6332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0364) {
    const struct CPU_State initial_cpu = {.pc=0xe5b2, .a=0x56, .x=0x06, .y=0xe8, .sp=0xcc, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x74}, {.addr=0xe5b2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe5b3, .a=0x56, .x=0x06, .y=0xe8, .sp=0xcd, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x74}, {.addr=0xe5b2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe5b2, .value=0x8e, .type=IO_READ},
        {.addr=0xe5b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0365) {
    const struct CPU_State initial_cpu = {.pc=0x0e9b, .a=0x5e, .x=0x7d, .y=0xc4, .sp=0xae, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x7f}, {.addr=0x0e9b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0e9c, .a=0x5e, .x=0x7d, .y=0xc4, .sp=0xaf, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x7f}, {.addr=0x0e9b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0e9b, .value=0x8e, .type=IO_READ},
        {.addr=0x0e9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0366) {
    const struct CPU_State initial_cpu = {.pc=0x158e, .a=0xf5, .x=0x48, .y=0x18, .sp=0xef, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xbf}, {.addr=0x158e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x158f, .a=0xf5, .x=0x48, .y=0x18, .sp=0xf0, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xbf}, {.addr=0x158e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x158e, .value=0x8e, .type=IO_READ},
        {.addr=0x158f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe6b0, .a=0x83, .x=0x22, .y=0x8b, .sp=0x41, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xfd}, {.addr=0xe6b0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe6b1, .a=0x83, .x=0x22, .y=0x8b, .sp=0x42, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xfd}, {.addr=0xe6b0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe6b0, .value=0x8e, .type=IO_READ},
        {.addr=0xe6b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6d0f, .a=0xc3, .x=0x3d, .y=0x9b, .sp=0xa6, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x46}, {.addr=0x6d0f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6d10, .a=0xc3, .x=0x3d, .y=0x9b, .sp=0xa7, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x46}, {.addr=0x6d0f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6d0f, .value=0x8e, .type=IO_READ},
        {.addr=0x6d10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0369) {
    const struct CPU_State initial_cpu = {.pc=0x0d27, .a=0x36, .x=0x96, .y=0xa9, .sp=0x8c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x95}, {.addr=0x0d27, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0d28, .a=0x36, .x=0x96, .y=0xa9, .sp=0x8d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x95}, {.addr=0x0d27, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0d27, .value=0x8e, .type=IO_READ},
        {.addr=0x0d28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036A) {
    const struct CPU_State initial_cpu = {.pc=0x267f, .a=0x3d, .x=0x15, .y=0x3d, .sp=0xb1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x1c}, {.addr=0x267f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2680, .a=0x3d, .x=0x15, .y=0x3d, .sp=0xb2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x1c}, {.addr=0x267f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x267f, .value=0x8e, .type=IO_READ},
        {.addr=0x2680, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036B) {
    const struct CPU_State initial_cpu = {.pc=0x4340, .a=0xc5, .x=0x57, .y=0xdd, .sp=0x44, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x10}, {.addr=0x4340, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4341, .a=0xc5, .x=0x57, .y=0xdd, .sp=0x45, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x10}, {.addr=0x4340, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4340, .value=0x8e, .type=IO_READ},
        {.addr=0x4341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036C) {
    const struct CPU_State initial_cpu = {.pc=0xe427, .a=0x0f, .x=0x64, .y=0xcd, .sp=0x5d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x23}, {.addr=0xe427, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe428, .a=0x0f, .x=0x64, .y=0xcd, .sp=0x5e, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x23}, {.addr=0xe427, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe427, .value=0x8e, .type=IO_READ},
        {.addr=0xe428, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036D) {
    const struct CPU_State initial_cpu = {.pc=0x6c43, .a=0x8e, .x=0x0b, .y=0x87, .sp=0xab, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x8b}, {.addr=0x6c43, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6c44, .a=0x8e, .x=0x0b, .y=0x87, .sp=0xac, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x8b}, {.addr=0x6c43, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6c43, .value=0x8e, .type=IO_READ},
        {.addr=0x6c44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036E) {
    const struct CPU_State initial_cpu = {.pc=0x2e85, .a=0xfb, .x=0xa9, .y=0x99, .sp=0x6e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xb4}, {.addr=0x2e85, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2e86, .a=0xfb, .x=0xa9, .y=0x99, .sp=0x6f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xb4}, {.addr=0x2e85, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2e85, .value=0x8e, .type=IO_READ},
        {.addr=0x2e86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_036F) {
    const struct CPU_State initial_cpu = {.pc=0xcda4, .a=0x74, .x=0x56, .y=0x6f, .sp=0x8a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x79}, {.addr=0xcda4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcda5, .a=0x74, .x=0x56, .y=0x6f, .sp=0x8b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x79}, {.addr=0xcda4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcda4, .value=0x8e, .type=IO_READ},
        {.addr=0xcda5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0370) {
    const struct CPU_State initial_cpu = {.pc=0x3a02, .a=0xf3, .x=0x67, .y=0x02, .sp=0x06, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x31}, {.addr=0x3a02, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3a03, .a=0xf3, .x=0x67, .y=0x02, .sp=0x07, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x31}, {.addr=0x3a02, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3a02, .value=0x8e, .type=IO_READ},
        {.addr=0x3a03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0371) {
    const struct CPU_State initial_cpu = {.pc=0x7ff5, .a=0xf5, .x=0x72, .y=0x71, .sp=0xa1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xb3}, {.addr=0x7ff5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7ff6, .a=0xf5, .x=0x72, .y=0x71, .sp=0xa2, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xb3}, {.addr=0x7ff5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7ff5, .value=0x8e, .type=IO_READ},
        {.addr=0x7ff6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0372) {
    const struct CPU_State initial_cpu = {.pc=0xde36, .a=0xda, .x=0x29, .y=0x07, .sp=0x41, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x01}, {.addr=0xde36, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xde37, .a=0xda, .x=0x29, .y=0x07, .sp=0x42, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x01}, {.addr=0xde36, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xde36, .value=0x8e, .type=IO_READ},
        {.addr=0xde37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0373) {
    const struct CPU_State initial_cpu = {.pc=0x0ea5, .a=0xae, .x=0xbb, .y=0xd4, .sp=0x52, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x7e}, {.addr=0x0ea5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0ea6, .a=0xae, .x=0xbb, .y=0xd4, .sp=0x53, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x7e}, {.addr=0x0ea5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0ea5, .value=0x8e, .type=IO_READ},
        {.addr=0x0ea6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0374) {
    const struct CPU_State initial_cpu = {.pc=0xba74, .a=0x86, .x=0x53, .y=0xdf, .sp=0xcd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x3a}, {.addr=0xba74, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xba75, .a=0x86, .x=0x53, .y=0xdf, .sp=0xce, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x3a}, {.addr=0xba74, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xba74, .value=0x8e, .type=IO_READ},
        {.addr=0xba75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0375) {
    const struct CPU_State initial_cpu = {.pc=0xfdf1, .a=0x96, .x=0xab, .y=0xf9, .sp=0x8c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xbd}, {.addr=0xfdf1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfdf2, .a=0x96, .x=0xab, .y=0xf9, .sp=0x8d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xbd}, {.addr=0xfdf1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfdf1, .value=0x8e, .type=IO_READ},
        {.addr=0xfdf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0376) {
    const struct CPU_State initial_cpu = {.pc=0x6cac, .a=0xce, .x=0x43, .y=0x53, .sp=0x02, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xbd}, {.addr=0x6cac, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6cad, .a=0xce, .x=0x43, .y=0x53, .sp=0x03, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xbd}, {.addr=0x6cac, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6cac, .value=0x8e, .type=IO_READ},
        {.addr=0x6cad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0377) {
    const struct CPU_State initial_cpu = {.pc=0xa28c, .a=0x41, .x=0xe3, .y=0x93, .sp=0x9d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x49}, {.addr=0xa28c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa28d, .a=0x41, .x=0xe3, .y=0x93, .sp=0x9e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x49}, {.addr=0xa28c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa28c, .value=0x8e, .type=IO_READ},
        {.addr=0xa28d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7130, .a=0x14, .x=0x1c, .y=0xdc, .sp=0x30, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xd0}, {.addr=0x7130, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7131, .a=0x14, .x=0x1c, .y=0xdc, .sp=0x31, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xd0}, {.addr=0x7130, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7130, .value=0x8e, .type=IO_READ},
        {.addr=0x7131, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0379) {
    const struct CPU_State initial_cpu = {.pc=0x1bfe, .a=0xde, .x=0xf8, .y=0x6a, .sp=0xb2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x37}, {.addr=0x1bfe, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1bff, .a=0xde, .x=0xf8, .y=0x6a, .sp=0xb3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x37}, {.addr=0x1bfe, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1bfe, .value=0x8e, .type=IO_READ},
        {.addr=0x1bff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037A) {
    const struct CPU_State initial_cpu = {.pc=0x929d, .a=0x7a, .x=0xf4, .y=0xcd, .sp=0x21, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xdc}, {.addr=0x929d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x929e, .a=0x7a, .x=0xf4, .y=0xcd, .sp=0x22, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xdc}, {.addr=0x929d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x929d, .value=0x8e, .type=IO_READ},
        {.addr=0x929e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5dfc, .a=0x38, .x=0x1a, .y=0x75, .sp=0x75, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x31}, {.addr=0x5dfc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5dfd, .a=0x38, .x=0x1a, .y=0x75, .sp=0x76, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x31}, {.addr=0x5dfc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5dfc, .value=0x8e, .type=IO_READ},
        {.addr=0x5dfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037C) {
    const struct CPU_State initial_cpu = {.pc=0x579c, .a=0x50, .x=0x68, .y=0x04, .sp=0x8b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x8e}, {.addr=0x579c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x579d, .a=0x50, .x=0x68, .y=0x04, .sp=0x8c, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x8e}, {.addr=0x579c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x579c, .value=0x8e, .type=IO_READ},
        {.addr=0x579d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037D) {
    const struct CPU_State initial_cpu = {.pc=0x7236, .a=0x12, .x=0x29, .y=0xa6, .sp=0xe4, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xa6}, {.addr=0x7236, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7237, .a=0x12, .x=0x29, .y=0xa6, .sp=0xe5, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xa6}, {.addr=0x7236, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7236, .value=0x8e, .type=IO_READ},
        {.addr=0x7237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037E) {
    const struct CPU_State initial_cpu = {.pc=0x9dfd, .a=0xc9, .x=0x77, .y=0xa0, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x9c}, {.addr=0x9dfd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9dfe, .a=0xc9, .x=0x77, .y=0xa0, .sp=0x43, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x9c}, {.addr=0x9dfd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9dfd, .value=0x8e, .type=IO_READ},
        {.addr=0x9dfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_037F) {
    const struct CPU_State initial_cpu = {.pc=0x1f04, .a=0x33, .x=0xc9, .y=0xc6, .sp=0x0f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xcc}, {.addr=0x1f04, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1f05, .a=0x33, .x=0xc9, .y=0xc6, .sp=0x10, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xcc}, {.addr=0x1f04, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1f04, .value=0x8e, .type=IO_READ},
        {.addr=0x1f05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3112, .a=0x56, .x=0x24, .y=0xa0, .sp=0xa5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xf1}, {.addr=0x3112, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3113, .a=0x56, .x=0x24, .y=0xa0, .sp=0xa6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xf1}, {.addr=0x3112, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3112, .value=0x8e, .type=IO_READ},
        {.addr=0x3113, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0381) {
    const struct CPU_State initial_cpu = {.pc=0x5922, .a=0xda, .x=0xcb, .y=0x19, .sp=0xdd, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x93}, {.addr=0x5922, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5923, .a=0xda, .x=0xcb, .y=0x19, .sp=0xde, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x93}, {.addr=0x5922, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5922, .value=0x8e, .type=IO_READ},
        {.addr=0x5923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0382) {
    const struct CPU_State initial_cpu = {.pc=0xc206, .a=0x11, .x=0x32, .y=0x27, .sp=0x65, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xb9}, {.addr=0xc206, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc207, .a=0x11, .x=0x32, .y=0x27, .sp=0x66, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xb9}, {.addr=0xc206, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc206, .value=0x8e, .type=IO_READ},
        {.addr=0xc207, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0383) {
    const struct CPU_State initial_cpu = {.pc=0xbca6, .a=0xb7, .x=0xcd, .y=0xeb, .sp=0x76, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x2e}, {.addr=0xbca6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbca7, .a=0xb7, .x=0xcd, .y=0xeb, .sp=0x77, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x2e}, {.addr=0xbca6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbca6, .value=0x8e, .type=IO_READ},
        {.addr=0xbca7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0384) {
    const struct CPU_State initial_cpu = {.pc=0x3501, .a=0x12, .x=0xde, .y=0xae, .sp=0x99, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xb7}, {.addr=0x3501, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3502, .a=0x12, .x=0xde, .y=0xae, .sp=0x9a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb7}, {.addr=0x3501, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3501, .value=0x8e, .type=IO_READ},
        {.addr=0x3502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0385) {
    const struct CPU_State initial_cpu = {.pc=0x367d, .a=0x11, .x=0x7c, .y=0x9e, .sp=0xbf, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xe5}, {.addr=0x367d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x367e, .a=0x11, .x=0x7c, .y=0x9e, .sp=0xc0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xe5}, {.addr=0x367d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x367d, .value=0x8e, .type=IO_READ},
        {.addr=0x367e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0fa1, .a=0xc9, .x=0x1d, .y=0xae, .sp=0xb3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x0e}, {.addr=0x0fa1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0fa2, .a=0xc9, .x=0x1d, .y=0xae, .sp=0xb4, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x0e}, {.addr=0x0fa1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0fa1, .value=0x8e, .type=IO_READ},
        {.addr=0x0fa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0387) {
    const struct CPU_State initial_cpu = {.pc=0xcab2, .a=0xb0, .x=0x6c, .y=0x0e, .sp=0x81, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xcab2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcab3, .a=0xb0, .x=0x6c, .y=0x0e, .sp=0x82, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xcab2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcab2, .value=0x8e, .type=IO_READ},
        {.addr=0xcab3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0388) {
    const struct CPU_State initial_cpu = {.pc=0xae59, .a=0x85, .x=0x1f, .y=0xc8, .sp=0x92, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xa0}, {.addr=0xae59, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xae5a, .a=0x85, .x=0x1f, .y=0xc8, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xa0}, {.addr=0xae59, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xae59, .value=0x8e, .type=IO_READ},
        {.addr=0xae5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0389) {
    const struct CPU_State initial_cpu = {.pc=0x6f8c, .a=0x0d, .x=0xd2, .y=0x0c, .sp=0x5a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x77}, {.addr=0x6f8c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6f8d, .a=0x0d, .x=0xd2, .y=0x0c, .sp=0x5b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x77}, {.addr=0x6f8c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6f8c, .value=0x8e, .type=IO_READ},
        {.addr=0x6f8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038A) {
    const struct CPU_State initial_cpu = {.pc=0xf96f, .a=0x7c, .x=0xbc, .y=0x7e, .sp=0x98, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x5a}, {.addr=0xf96f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf970, .a=0x7c, .x=0xbc, .y=0x7e, .sp=0x99, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x5a}, {.addr=0xf96f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf96f, .value=0x8e, .type=IO_READ},
        {.addr=0xf970, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038B) {
    const struct CPU_State initial_cpu = {.pc=0x42c9, .a=0x4a, .x=0x4b, .y=0x17, .sp=0x65, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xa6}, {.addr=0x42c9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x42ca, .a=0x4a, .x=0x4b, .y=0x17, .sp=0x66, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xa6}, {.addr=0x42c9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x42c9, .value=0x8e, .type=IO_READ},
        {.addr=0x42ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1b65, .a=0x59, .x=0x2c, .y=0x6b, .sp=0x43, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x40}, {.addr=0x1b65, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1b66, .a=0x59, .x=0x2c, .y=0x6b, .sp=0x44, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x40}, {.addr=0x1b65, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1b65, .value=0x8e, .type=IO_READ},
        {.addr=0x1b66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038D) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x3b, .x=0x71, .y=0xdb, .sp=0x02, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x1f}, {.addr=0x46cd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x46ce, .a=0x3b, .x=0x71, .y=0xdb, .sp=0x03, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x1f}, {.addr=0x46cd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0x8e, .type=IO_READ},
        {.addr=0x46ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038E) {
    const struct CPU_State initial_cpu = {.pc=0x5cad, .a=0x35, .x=0xb2, .y=0x66, .sp=0x5c, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xe1}, {.addr=0x5cad, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5cae, .a=0x35, .x=0xb2, .y=0x66, .sp=0x5d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xe1}, {.addr=0x5cad, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5cad, .value=0x8e, .type=IO_READ},
        {.addr=0x5cae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_038F) {
    const struct CPU_State initial_cpu = {.pc=0xc916, .a=0x08, .x=0x8c, .y=0xc3, .sp=0x36, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x3c}, {.addr=0xc916, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc917, .a=0x08, .x=0x8c, .y=0xc3, .sp=0x37, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x3c}, {.addr=0xc916, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc916, .value=0x8e, .type=IO_READ},
        {.addr=0xc917, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0390) {
    const struct CPU_State initial_cpu = {.pc=0xb862, .a=0x14, .x=0x91, .y=0x63, .sp=0xba, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xb1}, {.addr=0xb862, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb863, .a=0x14, .x=0x91, .y=0x63, .sp=0xbb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xb1}, {.addr=0xb862, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb862, .value=0x8e, .type=IO_READ},
        {.addr=0xb863, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0391) {
    const struct CPU_State initial_cpu = {.pc=0x96ee, .a=0xe3, .x=0x1b, .y=0x45, .sp=0xa4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x19}, {.addr=0x96ee, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x96ef, .a=0xe3, .x=0x1b, .y=0x45, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x19}, {.addr=0x96ee, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x96ee, .value=0x8e, .type=IO_READ},
        {.addr=0x96ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0392) {
    const struct CPU_State initial_cpu = {.pc=0x5a49, .a=0x6a, .x=0x88, .y=0x64, .sp=0x74, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x06}, {.addr=0x5a49, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5a4a, .a=0x6a, .x=0x88, .y=0x64, .sp=0x75, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x06}, {.addr=0x5a49, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5a49, .value=0x8e, .type=IO_READ},
        {.addr=0x5a4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0393) {
    const struct CPU_State initial_cpu = {.pc=0x5c9b, .a=0xb4, .x=0x49, .y=0x69, .sp=0x74, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x0e}, {.addr=0x5c9b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5c9c, .a=0xb4, .x=0x49, .y=0x69, .sp=0x75, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x0e}, {.addr=0x5c9b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5c9b, .value=0x8e, .type=IO_READ},
        {.addr=0x5c9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0394) {
    const struct CPU_State initial_cpu = {.pc=0x2158, .a=0xdc, .x=0x20, .y=0x97, .sp=0xb9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xdb}, {.addr=0x2158, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2159, .a=0xdc, .x=0x20, .y=0x97, .sp=0xba, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xdb}, {.addr=0x2158, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2158, .value=0x8e, .type=IO_READ},
        {.addr=0x2159, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0395) {
    const struct CPU_State initial_cpu = {.pc=0x95c0, .a=0xe9, .x=0x48, .y=0x54, .sp=0xf0, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xef}, {.addr=0x95c0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x95c1, .a=0xe9, .x=0x48, .y=0x54, .sp=0xf1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xef}, {.addr=0x95c0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x95c0, .value=0x8e, .type=IO_READ},
        {.addr=0x95c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0396) {
    const struct CPU_State initial_cpu = {.pc=0x25d4, .a=0x24, .x=0x23, .y=0xf4, .sp=0xf4, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x19}, {.addr=0x25d4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x25d5, .a=0x24, .x=0x23, .y=0xf4, .sp=0xf5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x19}, {.addr=0x25d4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x25d4, .value=0x8e, .type=IO_READ},
        {.addr=0x25d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0397) {
    const struct CPU_State initial_cpu = {.pc=0xbf0c, .a=0x0d, .x=0xf4, .y=0x05, .sp=0xff, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x4b}, {.addr=0xbf0c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbf0d, .a=0x0d, .x=0xf4, .y=0x05, .sp=0x00, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x4b}, {.addr=0xbf0c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbf0c, .value=0x8e, .type=IO_READ},
        {.addr=0xbf0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0398) {
    const struct CPU_State initial_cpu = {.pc=0x2831, .a=0xff, .x=0x4a, .y=0x04, .sp=0x8d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x18}, {.addr=0x2831, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2832, .a=0xff, .x=0x4a, .y=0x04, .sp=0x8e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x18}, {.addr=0x2831, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2831, .value=0x8e, .type=IO_READ},
        {.addr=0x2832, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_0399) {
    const struct CPU_State initial_cpu = {.pc=0xe95f, .a=0xd8, .x=0xde, .y=0x98, .sp=0x09, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xa1}, {.addr=0xe95f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe960, .a=0xd8, .x=0xde, .y=0x98, .sp=0x0a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xa1}, {.addr=0xe95f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe95f, .value=0x8e, .type=IO_READ},
        {.addr=0xe960, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd33a, .a=0xb1, .x=0x10, .y=0xca, .sp=0xc0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xab}, {.addr=0xd33a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd33b, .a=0xb1, .x=0x10, .y=0xca, .sp=0xc1, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xab}, {.addr=0xd33a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd33a, .value=0x8e, .type=IO_READ},
        {.addr=0xd33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039B) {
    const struct CPU_State initial_cpu = {.pc=0x1eae, .a=0x57, .x=0x7b, .y=0xd2, .sp=0xc2, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x49}, {.addr=0x1eae, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1eaf, .a=0x57, .x=0x7b, .y=0xd2, .sp=0xc3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x49}, {.addr=0x1eae, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1eae, .value=0x8e, .type=IO_READ},
        {.addr=0x1eaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039C) {
    const struct CPU_State initial_cpu = {.pc=0x617e, .a=0x0e, .x=0x5c, .y=0x2d, .sp=0xdb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xa4}, {.addr=0x617e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x617f, .a=0x0e, .x=0x5c, .y=0x2d, .sp=0xdc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xa4}, {.addr=0x617e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x617e, .value=0x8e, .type=IO_READ},
        {.addr=0x617f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039D) {
    const struct CPU_State initial_cpu = {.pc=0x29b3, .a=0x40, .x=0xdc, .y=0x03, .sp=0x27, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x42}, {.addr=0x29b3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x29b4, .a=0x40, .x=0xdc, .y=0x03, .sp=0x28, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x42}, {.addr=0x29b3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x29b3, .value=0x8e, .type=IO_READ},
        {.addr=0x29b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4f33, .a=0xf4, .x=0x70, .y=0xec, .sp=0x99, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x74}, {.addr=0x4f33, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f34, .a=0xf4, .x=0x70, .y=0xec, .sp=0x9a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x74}, {.addr=0x4f33, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4f33, .value=0x8e, .type=IO_READ},
        {.addr=0x4f34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_039F) {
    const struct CPU_State initial_cpu = {.pc=0xc616, .a=0xbd, .x=0xf3, .y=0xcd, .sp=0x45, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xf7}, {.addr=0xc616, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc617, .a=0xbd, .x=0xf3, .y=0xcd, .sp=0x46, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xf7}, {.addr=0xc616, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc616, .value=0x8e, .type=IO_READ},
        {.addr=0xc617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x2eb2, .a=0x0d, .x=0x4f, .y=0x52, .sp=0x9d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x25}, {.addr=0x2eb2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2eb3, .a=0x0d, .x=0x4f, .y=0x52, .sp=0x9e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x25}, {.addr=0x2eb2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2eb2, .value=0x8e, .type=IO_READ},
        {.addr=0x2eb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7a0d, .a=0xe2, .x=0x85, .y=0x99, .sp=0xd3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x56}, {.addr=0x7a0d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7a0e, .a=0xe2, .x=0x85, .y=0x99, .sp=0xd4, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x56}, {.addr=0x7a0d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7a0d, .value=0x8e, .type=IO_READ},
        {.addr=0x7a0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xb53d, .a=0xac, .x=0xcf, .y=0xe0, .sp=0xe4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x04}, {.addr=0xb53d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb53e, .a=0xac, .x=0xcf, .y=0xe0, .sp=0xe5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x04}, {.addr=0xb53d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb53d, .value=0x8e, .type=IO_READ},
        {.addr=0xb53e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x731b, .a=0xa2, .x=0xb8, .y=0x68, .sp=0xe8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x71}, {.addr=0x731b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x731c, .a=0xa2, .x=0xb8, .y=0x68, .sp=0xe9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x71}, {.addr=0x731b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x731b, .value=0x8e, .type=IO_READ},
        {.addr=0x731c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x6078, .a=0xde, .x=0x51, .y=0x37, .sp=0x5c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x0a}, {.addr=0x6078, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6079, .a=0xde, .x=0x51, .y=0x37, .sp=0x5d, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x0a}, {.addr=0x6078, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6078, .value=0x8e, .type=IO_READ},
        {.addr=0x6079, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x4149, .a=0xd9, .x=0x45, .y=0x03, .sp=0x65, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x03}, {.addr=0x4149, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x414a, .a=0xd9, .x=0x45, .y=0x03, .sp=0x66, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x03}, {.addr=0x4149, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4149, .value=0x8e, .type=IO_READ},
        {.addr=0x414a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x0758, .a=0xb5, .x=0x4f, .y=0x81, .sp=0xc5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x33}, {.addr=0x0758, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0759, .a=0xb5, .x=0x4f, .y=0x81, .sp=0xc6, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x33}, {.addr=0x0758, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0758, .value=0x8e, .type=IO_READ},
        {.addr=0x0759, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x58ec, .a=0xfc, .x=0x2e, .y=0x83, .sp=0xbf, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x2a}, {.addr=0x58ec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x58ed, .a=0xfc, .x=0x2e, .y=0x83, .sp=0xc0, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x2a}, {.addr=0x58ec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x58ec, .value=0x8e, .type=IO_READ},
        {.addr=0x58ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3944, .a=0x7c, .x=0x22, .y=0xa7, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x6b}, {.addr=0x3944, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3945, .a=0x7c, .x=0x22, .y=0xa7, .sp=0xac, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x6b}, {.addr=0x3944, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3944, .value=0x8e, .type=IO_READ},
        {.addr=0x3945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x2bcd, .a=0x2f, .x=0x43, .y=0x8e, .sp=0xb0, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xa6}, {.addr=0x2bcd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bce, .a=0x2f, .x=0x43, .y=0x8e, .sp=0xb1, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xa6}, {.addr=0x2bcd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bcd, .value=0x8e, .type=IO_READ},
        {.addr=0x2bce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xfd55, .a=0xa3, .x=0xa9, .y=0x1b, .sp=0xe8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x52}, {.addr=0xfd55, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfd56, .a=0xa3, .x=0xa9, .y=0x1b, .sp=0xe9, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x52}, {.addr=0xfd55, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfd55, .value=0x8e, .type=IO_READ},
        {.addr=0xfd56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xbc9e, .a=0x44, .x=0x1a, .y=0xe8, .sp=0xe7, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x58}, {.addr=0xbc9e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbc9f, .a=0x44, .x=0x1a, .y=0xe8, .sp=0xe8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x58}, {.addr=0xbc9e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbc9e, .value=0x8e, .type=IO_READ},
        {.addr=0xbc9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xb1ec, .a=0x6e, .x=0xa4, .y=0xe9, .sp=0x99, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xc7}, {.addr=0xb1ec, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb1ed, .a=0x6e, .x=0xa4, .y=0xe9, .sp=0x9a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xc7}, {.addr=0xb1ec, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb1ec, .value=0x8e, .type=IO_READ},
        {.addr=0xb1ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xf822, .a=0x1c, .x=0xea, .y=0x1a, .sp=0xc9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xf6}, {.addr=0xf822, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf823, .a=0x1c, .x=0xea, .y=0x1a, .sp=0xca, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xf6}, {.addr=0xf822, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf822, .value=0x8e, .type=IO_READ},
        {.addr=0xf823, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x8d30, .a=0x82, .x=0x47, .y=0x8b, .sp=0x6d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x5c}, {.addr=0x8d30, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8d31, .a=0x82, .x=0x47, .y=0x8b, .sp=0x6e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x5c}, {.addr=0x8d30, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8d30, .value=0x8e, .type=IO_READ},
        {.addr=0x8d31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xeb46, .a=0x1e, .x=0x60, .y=0x8c, .sp=0x7f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x59}, {.addr=0xeb46, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xeb47, .a=0x1e, .x=0x60, .y=0x8c, .sp=0x80, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x59}, {.addr=0xeb46, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xeb46, .value=0x8e, .type=IO_READ},
        {.addr=0xeb47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x7328, .a=0x5a, .x=0x85, .y=0x32, .sp=0x81, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xdd}, {.addr=0x7328, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7329, .a=0x5a, .x=0x85, .y=0x32, .sp=0x82, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xdd}, {.addr=0x7328, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7328, .value=0x8e, .type=IO_READ},
        {.addr=0x7329, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5e9e, .a=0x28, .x=0x29, .y=0x84, .sp=0x07, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x9d}, {.addr=0x5e9e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5e9f, .a=0x28, .x=0x29, .y=0x84, .sp=0x08, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x9d}, {.addr=0x5e9e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5e9e, .value=0x8e, .type=IO_READ},
        {.addr=0x5e9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xadaf, .a=0x90, .x=0x61, .y=0x9c, .sp=0xaa, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x6d}, {.addr=0xadaf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xadb0, .a=0x90, .x=0x61, .y=0x9c, .sp=0xab, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x6d}, {.addr=0xadaf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xadaf, .value=0x8e, .type=IO_READ},
        {.addr=0xadb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xe462, .a=0xa8, .x=0x7b, .y=0x60, .sp=0x7b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x5f}, {.addr=0xe462, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe463, .a=0xa8, .x=0x7b, .y=0x60, .sp=0x7c, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x5f}, {.addr=0xe462, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe462, .value=0x8e, .type=IO_READ},
        {.addr=0xe463, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x1361, .a=0xc4, .x=0xa0, .y=0x5a, .sp=0x0c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x68}, {.addr=0x1361, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1362, .a=0xc4, .x=0xa0, .y=0x5a, .sp=0x0d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x68}, {.addr=0x1361, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1361, .value=0x8e, .type=IO_READ},
        {.addr=0x1362, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x0a0e, .a=0x73, .x=0x9c, .y=0xbe, .sp=0x3b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xea}, {.addr=0x0a0e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0a0f, .a=0x73, .x=0x9c, .y=0xbe, .sp=0x3c, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xea}, {.addr=0x0a0e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0a0e, .value=0x8e, .type=IO_READ},
        {.addr=0x0a0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x52d6, .a=0x60, .x=0x3e, .y=0x12, .sp=0xa0, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xac}, {.addr=0x52d6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x52d7, .a=0x60, .x=0x3e, .y=0x12, .sp=0xa1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xac}, {.addr=0x52d6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x52d6, .value=0x8e, .type=IO_READ},
        {.addr=0x52d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xf41c, .a=0x6a, .x=0x2e, .y=0x2e, .sp=0x6b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xe6}, {.addr=0xf41c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf41d, .a=0x6a, .x=0x2e, .y=0x2e, .sp=0x6c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xe6}, {.addr=0xf41c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf41c, .value=0x8e, .type=IO_READ},
        {.addr=0xf41d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x5196, .a=0x28, .x=0x2c, .y=0xf1, .sp=0xaf, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x3f}, {.addr=0x5196, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x5197, .a=0x28, .x=0x2c, .y=0xf1, .sp=0xb0, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x3f}, {.addr=0x5196, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5196, .value=0x8e, .type=IO_READ},
        {.addr=0x5197, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x4bd1, .a=0x9f, .x=0x19, .y=0x89, .sp=0x5d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x23}, {.addr=0x4bd1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4bd2, .a=0x9f, .x=0x19, .y=0x89, .sp=0x5e, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x23}, {.addr=0x4bd1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4bd1, .value=0x8e, .type=IO_READ},
        {.addr=0x4bd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xd679, .a=0x47, .x=0x34, .y=0x03, .sp=0x75, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xbc}, {.addr=0xd679, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd67a, .a=0x47, .x=0x34, .y=0x03, .sp=0x76, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xbc}, {.addr=0xd679, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd679, .value=0x8e, .type=IO_READ},
        {.addr=0xd67a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x95a3, .a=0xc8, .x=0x94, .y=0xb8, .sp=0x4e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xde}, {.addr=0x95a3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x95a4, .a=0xc8, .x=0x94, .y=0xb8, .sp=0x4f, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xde}, {.addr=0x95a3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x95a3, .value=0x8e, .type=IO_READ},
        {.addr=0x95a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x42b9, .a=0x68, .x=0x9c, .y=0x76, .sp=0xcd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x2e}, {.addr=0x42b9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x42ba, .a=0x68, .x=0x9c, .y=0x76, .sp=0xce, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x2e}, {.addr=0x42b9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x42b9, .value=0x8e, .type=IO_READ},
        {.addr=0x42ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xe6d6, .a=0xff, .x=0x9c, .y=0xc7, .sp=0x5a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x82}, {.addr=0xe6d6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe6d7, .a=0xff, .x=0x9c, .y=0xc7, .sp=0x5b, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x82}, {.addr=0xe6d6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe6d6, .value=0x8e, .type=IO_READ},
        {.addr=0xe6d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xf79d, .a=0x84, .x=0x4c, .y=0x12, .sp=0x94, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x0d}, {.addr=0xf79d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf79e, .a=0x84, .x=0x4c, .y=0x12, .sp=0x95, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x0d}, {.addr=0xf79d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf79d, .value=0x8e, .type=IO_READ},
        {.addr=0xf79e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x8656, .a=0x8d, .x=0x31, .y=0x68, .sp=0x39, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xd3}, {.addr=0x8656, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8657, .a=0x8d, .x=0x31, .y=0x68, .sp=0x3a, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xd3}, {.addr=0x8656, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8656, .value=0x8e, .type=IO_READ},
        {.addr=0x8657, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xcbb5, .a=0x5e, .x=0x3c, .y=0xe0, .sp=0xab, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x99}, {.addr=0xcbb5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcbb6, .a=0x5e, .x=0x3c, .y=0xe0, .sp=0xac, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x99}, {.addr=0xcbb5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcbb5, .value=0x8e, .type=IO_READ},
        {.addr=0xcbb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe035, .a=0xa5, .x=0x72, .y=0x72, .sp=0x3b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xa8}, {.addr=0xe035, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe036, .a=0xa5, .x=0x72, .y=0x72, .sp=0x3c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xa8}, {.addr=0xe035, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe035, .value=0x8e, .type=IO_READ},
        {.addr=0xe036, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xed6e, .a=0x33, .x=0x52, .y=0x69, .sp=0x79, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xdd}, {.addr=0xed6e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xed6f, .a=0x33, .x=0x52, .y=0x69, .sp=0x7a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xdd}, {.addr=0xed6e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xed6e, .value=0x8e, .type=IO_READ},
        {.addr=0xed6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xcd78, .a=0x17, .x=0x6f, .y=0xa5, .sp=0x72, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x83}, {.addr=0xcd78, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xcd79, .a=0x17, .x=0x6f, .y=0xa5, .sp=0x73, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x83}, {.addr=0xcd78, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xcd78, .value=0x8e, .type=IO_READ},
        {.addr=0xcd79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x1c3c, .a=0xde, .x=0x28, .y=0x15, .sp=0xc7, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xd5}, {.addr=0x1c3c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1c3d, .a=0xde, .x=0x28, .y=0x15, .sp=0xc8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xd5}, {.addr=0x1c3c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1c3c, .value=0x8e, .type=IO_READ},
        {.addr=0x1c3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xea52, .a=0x51, .x=0x10, .y=0x01, .sp=0xba, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x10}, {.addr=0xea52, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xea53, .a=0x51, .x=0x10, .y=0x01, .sp=0xbb, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x10}, {.addr=0xea52, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xea52, .value=0x8e, .type=IO_READ},
        {.addr=0xea53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x6127, .a=0x0d, .x=0xea, .y=0x4d, .sp=0xff, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x6127, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6128, .a=0x0d, .x=0xea, .y=0x4d, .sp=0x00, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x6127, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x6127, .value=0x8e, .type=IO_READ},
        {.addr=0x6128, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x062b, .a=0x65, .x=0x63, .y=0x83, .sp=0xef, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x01}, {.addr=0x062b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x062c, .a=0x65, .x=0x63, .y=0x83, .sp=0xf0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x01}, {.addr=0x062b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x062b, .value=0x8e, .type=IO_READ},
        {.addr=0x062c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xdc41, .a=0x9d, .x=0x7d, .y=0x15, .sp=0x42, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xdb}, {.addr=0xdc41, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xdc42, .a=0x9d, .x=0x7d, .y=0x15, .sp=0x43, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xdb}, {.addr=0xdc41, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xdc41, .value=0x8e, .type=IO_READ},
        {.addr=0xdc42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xe43a, .a=0xd3, .x=0x06, .y=0xd0, .sp=0x77, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x51}, {.addr=0xe43a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe43b, .a=0xd3, .x=0x06, .y=0xd0, .sp=0x78, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x51}, {.addr=0xe43a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe43a, .value=0x8e, .type=IO_READ},
        {.addr=0xe43b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x76ff, .a=0x09, .x=0xb6, .y=0x81, .sp=0x59, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x03}, {.addr=0x76ff, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7700, .a=0x09, .x=0xb6, .y=0x81, .sp=0x5a, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x03}, {.addr=0x76ff, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x76ff, .value=0x8e, .type=IO_READ},
        {.addr=0x7700, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x8a6e, .a=0x26, .x=0xa5, .y=0x0a, .sp=0x16, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xca}, {.addr=0x8a6e, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8a6f, .a=0x26, .x=0xa5, .y=0x0a, .sp=0x17, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xca}, {.addr=0x8a6e, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8a6e, .value=0x8e, .type=IO_READ},
        {.addr=0x8a6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x2bbf, .a=0x18, .x=0x46, .y=0x9e, .sp=0x64, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x6a}, {.addr=0x2bbf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2bc0, .a=0x18, .x=0x46, .y=0x9e, .sp=0x65, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x6a}, {.addr=0x2bbf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2bbf, .value=0x8e, .type=IO_READ},
        {.addr=0x2bc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x1481, .a=0x7d, .x=0xab, .y=0xcb, .sp=0xd1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x6d}, {.addr=0x1481, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1482, .a=0x7d, .x=0xab, .y=0xcb, .sp=0xd2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x6d}, {.addr=0x1481, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1481, .value=0x8e, .type=IO_READ},
        {.addr=0x1482, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x0757, .a=0x46, .x=0x79, .y=0xa8, .sp=0x86, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xbc}, {.addr=0x0757, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0758, .a=0x46, .x=0x79, .y=0xa8, .sp=0x87, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xbc}, {.addr=0x0757, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0757, .value=0x8e, .type=IO_READ},
        {.addr=0x0758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x47e4, .a=0x71, .x=0x1d, .y=0xab, .sp=0x63, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x6f}, {.addr=0x47e4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x47e5, .a=0x71, .x=0x1d, .y=0xab, .sp=0x64, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x6f}, {.addr=0x47e4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x47e4, .value=0x8e, .type=IO_READ},
        {.addr=0x47e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x13b2, .a=0xc0, .x=0xf2, .y=0xf1, .sp=0x47, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x9a}, {.addr=0x13b2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x13b3, .a=0xc0, .x=0xf2, .y=0xf1, .sp=0x48, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x9a}, {.addr=0x13b2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x13b2, .value=0x8e, .type=IO_READ},
        {.addr=0x13b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x9063, .a=0x96, .x=0x6d, .y=0xed, .sp=0xb9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xc9}, {.addr=0x9063, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9064, .a=0x96, .x=0x6d, .y=0xed, .sp=0xba, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xc9}, {.addr=0x9063, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9063, .value=0x8e, .type=IO_READ},
        {.addr=0x9064, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x3448, .a=0x6c, .x=0xd8, .y=0x8a, .sp=0x78, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x02}, {.addr=0x3448, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3449, .a=0x6c, .x=0xd8, .y=0x8a, .sp=0x79, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x02}, {.addr=0x3448, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x3448, .value=0x8e, .type=IO_READ},
        {.addr=0x3449, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x16f2, .a=0xbf, .x=0xe7, .y=0x99, .sp=0xb4, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x0f}, {.addr=0x16f2, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x16f3, .a=0xbf, .x=0xe7, .y=0x99, .sp=0xb5, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x0f}, {.addr=0x16f2, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x16f2, .value=0x8e, .type=IO_READ},
        {.addr=0x16f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xa4d3, .a=0xee, .x=0x43, .y=0xc4, .sp=0x80, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x94}, {.addr=0xa4d3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa4d4, .a=0xee, .x=0x43, .y=0xc4, .sp=0x81, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x94}, {.addr=0xa4d3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa4d3, .value=0x8e, .type=IO_READ},
        {.addr=0xa4d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x787d, .a=0xb1, .x=0xf4, .y=0x1d, .sp=0x8b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xa1}, {.addr=0x787d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x787e, .a=0xb1, .x=0xf4, .y=0x1d, .sp=0x8c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xa1}, {.addr=0x787d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x787d, .value=0x8e, .type=IO_READ},
        {.addr=0x787e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xc8cf, .a=0x98, .x=0x56, .y=0xa8, .sp=0x50, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x2c}, {.addr=0xc8cf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc8d0, .a=0x98, .x=0x56, .y=0xa8, .sp=0x51, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x2c}, {.addr=0xc8cf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc8cf, .value=0x8e, .type=IO_READ},
        {.addr=0xc8d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x683a, .a=0xf2, .x=0x83, .y=0xbf, .sp=0x8c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x05}, {.addr=0x683a, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x683b, .a=0xf2, .x=0x83, .y=0xbf, .sp=0x8d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x05}, {.addr=0x683a, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x683a, .value=0x8e, .type=IO_READ},
        {.addr=0x683b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x687f, .a=0x1c, .x=0x23, .y=0x93, .sp=0x43, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xbb}, {.addr=0x687f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x6880, .a=0x1c, .x=0x23, .y=0x93, .sp=0x44, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xbb}, {.addr=0x687f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x687f, .value=0x8e, .type=IO_READ},
        {.addr=0x6880, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x35f9, .a=0x2f, .x=0x97, .y=0xf0, .sp=0x39, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xcb}, {.addr=0x35f9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x35fa, .a=0x2f, .x=0x97, .y=0xf0, .sp=0x3a, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xcb}, {.addr=0x35f9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x35f9, .value=0x8e, .type=IO_READ},
        {.addr=0x35fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x13f4, .a=0x5b, .x=0x9a, .y=0xaa, .sp=0x49, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xf4}, {.addr=0x13f4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x13f5, .a=0x5b, .x=0x9a, .y=0xaa, .sp=0x4a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xf4}, {.addr=0x13f4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x13f4, .value=0x8e, .type=IO_READ},
        {.addr=0x13f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x8625, .a=0xa7, .x=0xc0, .y=0x38, .sp=0x81, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x18}, {.addr=0x8625, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8626, .a=0xa7, .x=0xc0, .y=0x38, .sp=0x82, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x18}, {.addr=0x8625, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8625, .value=0x8e, .type=IO_READ},
        {.addr=0x8626, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x4f76, .a=0x25, .x=0xc9, .y=0x4a, .sp=0x82, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xee}, {.addr=0x4f76, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f77, .a=0x25, .x=0xc9, .y=0x4a, .sp=0x83, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xee}, {.addr=0x4f76, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4f76, .value=0x8e, .type=IO_READ},
        {.addr=0x4f77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x0dc7, .a=0x99, .x=0x86, .y=0xb9, .sp=0xe1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x7c}, {.addr=0x0dc7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0dc8, .a=0x99, .x=0x86, .y=0xb9, .sp=0xe2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x7c}, {.addr=0x0dc7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0dc7, .value=0x8e, .type=IO_READ},
        {.addr=0x0dc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x4bff, .a=0x90, .x=0x22, .y=0x9b, .sp=0x3c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x57}, {.addr=0x4bff, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4c00, .a=0x90, .x=0x22, .y=0x9b, .sp=0x3d, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x57}, {.addr=0x4bff, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4bff, .value=0x8e, .type=IO_READ},
        {.addr=0x4c00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x734b, .a=0x94, .x=0xe3, .y=0xb0, .sp=0x62, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x35}, {.addr=0x734b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x734c, .a=0x94, .x=0xe3, .y=0xb0, .sp=0x63, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x35}, {.addr=0x734b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x734b, .value=0x8e, .type=IO_READ},
        {.addr=0x734c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xccf4, .a=0x32, .x=0x8c, .y=0x29, .sp=0x2d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0xccf4, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xccf5, .a=0x32, .x=0x8c, .y=0x29, .sp=0x2e, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0xccf4, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xccf4, .value=0x8e, .type=IO_READ},
        {.addr=0xccf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x7620, .a=0x9e, .x=0xea, .y=0xee, .sp=0x70, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xf8}, {.addr=0x7620, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7621, .a=0x9e, .x=0xea, .y=0xee, .sp=0x71, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xf8}, {.addr=0x7620, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7620, .value=0x8e, .type=IO_READ},
        {.addr=0x7621, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x9f06, .a=0x3c, .x=0x1e, .y=0x5e, .sp=0x3c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x91}, {.addr=0x9f06, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x9f07, .a=0x3c, .x=0x1e, .y=0x5e, .sp=0x3d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x91}, {.addr=0x9f06, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x9f06, .value=0x8e, .type=IO_READ},
        {.addr=0x9f07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x8222, .a=0xd6, .x=0x27, .y=0x6e, .sp=0xc6, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x59}, {.addr=0x8222, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8223, .a=0xd6, .x=0x27, .y=0x6e, .sp=0xc7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x59}, {.addr=0x8222, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8222, .value=0x8e, .type=IO_READ},
        {.addr=0x8223, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x26ff, .a=0xbc, .x=0xd4, .y=0xa8, .sp=0x32, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xd2}, {.addr=0x26ff, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2700, .a=0xbc, .x=0xd4, .y=0xa8, .sp=0x33, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xd2}, {.addr=0x26ff, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x26ff, .value=0x8e, .type=IO_READ},
        {.addr=0x2700, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xb1ee, .a=0xac, .x=0xad, .y=0x4a, .sp=0xf0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x0d}, {.addr=0xb1ee, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb1ef, .a=0xac, .x=0xad, .y=0x4a, .sp=0xf1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x0d}, {.addr=0xb1ee, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb1ee, .value=0x8e, .type=IO_READ},
        {.addr=0xb1ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x0a14, .a=0xb1, .x=0x52, .y=0xc1, .sp=0x6b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x84}, {.addr=0x0a14, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0a15, .a=0xb1, .x=0x52, .y=0xc1, .sp=0x6c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x84}, {.addr=0x0a14, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0a14, .value=0x8e, .type=IO_READ},
        {.addr=0x0a15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8E, _8E_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xce5c, .a=0x1b, .x=0x9e, .y=0x6b, .sp=0x08, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x10}, {.addr=0xce5c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xce5d, .a=0x1b, .x=0x9e, .y=0x6b, .sp=0x09, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x10}, {.addr=0xce5c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xce5c, .value=0x8e, .type=IO_READ},
        {.addr=0xce5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8E 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
