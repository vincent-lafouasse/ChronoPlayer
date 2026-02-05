#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_48, _48_0000) {
    const struct CPU_State initial_cpu = {.pc=0xe67d, .a=0xb0, .x=0x97, .y=0x12, .sp=0x32, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe67d, .value=0x48}, {.addr=0xe67e, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe67f, .a=0x0c, .x=0x97, .y=0x12, .sp=0x32, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe67d, .value=0x48}, {.addr=0xe67e, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe67d, .value=0x48, .type=IO_READ},
        {.addr=0xe67e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0001) {
    const struct CPU_State initial_cpu = {.pc=0x7328, .a=0x2e, .x=0xae, .y=0x1c, .sp=0x81, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7328, .value=0x48}, {.addr=0x7329, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x732a, .a=0x2b, .x=0xae, .y=0x1c, .sp=0x81, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7328, .value=0x48}, {.addr=0x7329, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x7328, .value=0x48, .type=IO_READ},
        {.addr=0x7329, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2903, .a=0x45, .x=0xd5, .y=0x70, .sp=0xb2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2903, .value=0x48}, {.addr=0x2904, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2905, .a=0x45, .x=0xd5, .y=0x70, .sp=0xb2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2903, .value=0x48}, {.addr=0x2904, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2903, .value=0x48, .type=IO_READ},
        {.addr=0x2904, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0003) {
    const struct CPU_State initial_cpu = {.pc=0x3c6a, .a=0x31, .x=0xb1, .y=0x89, .sp=0x1d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3c6a, .value=0x48}, {.addr=0x3c6b, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x3c6c, .a=0x68, .x=0xb1, .y=0x89, .sp=0x1d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3c6a, .value=0x48}, {.addr=0x3c6b, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x3c6a, .value=0x48, .type=IO_READ},
        {.addr=0x3c6b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa8ad, .a=0x36, .x=0x72, .y=0x7f, .sp=0x78, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ad, .value=0x48}, {.addr=0xa8ae, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xa8af, .a=0xa7, .x=0x72, .y=0x7f, .sp=0x78, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa8ad, .value=0x48}, {.addr=0xa8ae, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xa8ad, .value=0x48, .type=IO_READ},
        {.addr=0xa8ae, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0005) {
    const struct CPU_State initial_cpu = {.pc=0xe417, .a=0x34, .x=0x4f, .y=0xfa, .sp=0x45, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe417, .value=0x48}, {.addr=0xe418, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xe419, .a=0x11, .x=0x4f, .y=0xfa, .sp=0x45, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe417, .value=0x48}, {.addr=0xe418, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xe417, .value=0x48, .type=IO_READ},
        {.addr=0xe418, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0006) {
    const struct CPU_State initial_cpu = {.pc=0x086f, .a=0x8a, .x=0x0c, .y=0x2e, .sp=0x5d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x086f, .value=0x48}, {.addr=0x0870, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x0871, .a=0x2f, .x=0x0c, .y=0x2e, .sp=0x5d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x086f, .value=0x48}, {.addr=0x0870, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x086f, .value=0x48, .type=IO_READ},
        {.addr=0x0870, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0007) {
    const struct CPU_State initial_cpu = {.pc=0x693d, .a=0xeb, .x=0x27, .y=0x3e, .sp=0x88, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x693d, .value=0x48}, {.addr=0x693e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x693f, .a=0x8d, .x=0x27, .y=0x3e, .sp=0x88, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x693d, .value=0x48}, {.addr=0x693e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x693d, .value=0x48, .type=IO_READ},
        {.addr=0x693e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0008) {
    const struct CPU_State initial_cpu = {.pc=0xfae8, .a=0x52, .x=0xf9, .y=0xe9, .sp=0x32, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xfae8, .value=0x48}, {.addr=0xfae9, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xfaea, .a=0x33, .x=0xf9, .y=0xe9, .sp=0x32, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfae8, .value=0x48}, {.addr=0xfae9, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xfae8, .value=0x48, .type=IO_READ},
        {.addr=0xfae9, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0009) {
    const struct CPU_State initial_cpu = {.pc=0xe8ae, .a=0x6a, .x=0x83, .y=0x70, .sp=0xc6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ae, .value=0x48}, {.addr=0xe8af, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xe8b0, .a=0x23, .x=0x83, .y=0x70, .sp=0xc6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe8ae, .value=0x48}, {.addr=0xe8af, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xe8ae, .value=0x48, .type=IO_READ},
        {.addr=0xe8af, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000A) {
    const struct CPU_State initial_cpu = {.pc=0xbedc, .a=0x22, .x=0x82, .y=0x8a, .sp=0x99, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xbedc, .value=0x48}, {.addr=0xbedd, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbede, .a=0xc1, .x=0x82, .y=0x8a, .sp=0x99, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbedc, .value=0x48}, {.addr=0xbedd, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbedc, .value=0x48, .type=IO_READ},
        {.addr=0xbedd, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000B) {
    const struct CPU_State initial_cpu = {.pc=0x85a0, .a=0x9d, .x=0xa4, .y=0xae, .sp=0xa3, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x85a0, .value=0x48}, {.addr=0x85a1, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x85a2, .a=0x09, .x=0xa4, .y=0xae, .sp=0xa3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x85a0, .value=0x48}, {.addr=0x85a1, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x85a0, .value=0x48, .type=IO_READ},
        {.addr=0x85a1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000C) {
    const struct CPU_State initial_cpu = {.pc=0x11cc, .a=0x20, .x=0x81, .y=0x2d, .sp=0x66, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x11cc, .value=0x48}, {.addr=0x11cd, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x11ce, .a=0x8c, .x=0x81, .y=0x2d, .sp=0x66, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x11cc, .value=0x48}, {.addr=0x11cd, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x11cc, .value=0x48, .type=IO_READ},
        {.addr=0x11cd, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000D) {
    const struct CPU_State initial_cpu = {.pc=0xc98a, .a=0x1c, .x=0xbe, .y=0xc1, .sp=0x9d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc98a, .value=0x48}, {.addr=0xc98b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc98c, .a=0x6f, .x=0xbe, .y=0xc1, .sp=0x9d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc98a, .value=0x48}, {.addr=0xc98b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xc98a, .value=0x48, .type=IO_READ},
        {.addr=0xc98b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000E) {
    const struct CPU_State initial_cpu = {.pc=0x6c33, .a=0x25, .x=0xaa, .y=0x76, .sp=0x92, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6c33, .value=0x48}, {.addr=0x6c34, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6c35, .a=0xa3, .x=0xaa, .y=0x76, .sp=0x92, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6c33, .value=0x48}, {.addr=0x6c34, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6c33, .value=0x48, .type=IO_READ},
        {.addr=0x6c34, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_000F) {
    const struct CPU_State initial_cpu = {.pc=0xd723, .a=0x3e, .x=0xd5, .y=0xcb, .sp=0x93, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd723, .value=0x48}, {.addr=0xd724, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xd725, .a=0xcd, .x=0xd5, .y=0xcb, .sp=0x93, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd723, .value=0x48}, {.addr=0xd724, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xd723, .value=0x48, .type=IO_READ},
        {.addr=0xd724, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0010) {
    const struct CPU_State initial_cpu = {.pc=0x28a7, .a=0x6b, .x=0x0a, .y=0x68, .sp=0xc7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x28a7, .value=0x48}, {.addr=0x28a8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x28a9, .a=0xa5, .x=0x0a, .y=0x68, .sp=0xc7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x28a7, .value=0x48}, {.addr=0x28a8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x28a7, .value=0x48, .type=IO_READ},
        {.addr=0x28a8, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0011) {
    const struct CPU_State initial_cpu = {.pc=0x7e31, .a=0xb9, .x=0x8b, .y=0x5f, .sp=0x99, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7e31, .value=0x48}, {.addr=0x7e32, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x7e33, .a=0x87, .x=0x8b, .y=0x5f, .sp=0x99, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7e31, .value=0x48}, {.addr=0x7e32, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x7e31, .value=0x48, .type=IO_READ},
        {.addr=0x7e32, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0012) {
    const struct CPU_State initial_cpu = {.pc=0xc6f7, .a=0xd9, .x=0x91, .y=0x6f, .sp=0x6c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f7, .value=0x48}, {.addr=0xc6f8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc6f9, .a=0x99, .x=0x91, .y=0x6f, .sp=0x6c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc6f7, .value=0x48}, {.addr=0xc6f8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc6f7, .value=0x48, .type=IO_READ},
        {.addr=0xc6f8, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0013) {
    const struct CPU_State initial_cpu = {.pc=0xf37d, .a=0x2c, .x=0xfc, .y=0x72, .sp=0xbe, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf37d, .value=0x48}, {.addr=0xf37e, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xf37f, .a=0xc5, .x=0xfc, .y=0x72, .sp=0xbe, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf37d, .value=0x48}, {.addr=0xf37e, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xf37d, .value=0x48, .type=IO_READ},
        {.addr=0xf37e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0014) {
    const struct CPU_State initial_cpu = {.pc=0x60c1, .a=0xb3, .x=0xd0, .y=0x86, .sp=0x5c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x60c1, .value=0x48}, {.addr=0x60c2, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x60c3, .a=0xf6, .x=0xd0, .y=0x86, .sp=0x5c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x60c1, .value=0x48}, {.addr=0x60c2, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x60c1, .value=0x48, .type=IO_READ},
        {.addr=0x60c2, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0015) {
    const struct CPU_State initial_cpu = {.pc=0xe263, .a=0xfc, .x=0xc0, .y=0xd2, .sp=0x73, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xe263, .value=0x48}, {.addr=0xe264, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xe265, .a=0xa2, .x=0xc0, .y=0xd2, .sp=0x73, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe263, .value=0x48}, {.addr=0xe264, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xe263, .value=0x48, .type=IO_READ},
        {.addr=0xe264, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0016) {
    const struct CPU_State initial_cpu = {.pc=0x5e2d, .a=0x5b, .x=0x3e, .y=0xb5, .sp=0xf8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5e2d, .value=0x48}, {.addr=0x5e2e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5e2f, .a=0xb6, .x=0x3e, .y=0xb5, .sp=0xf8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5e2d, .value=0x48}, {.addr=0x5e2e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5e2d, .value=0x48, .type=IO_READ},
        {.addr=0x5e2e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4c0d, .a=0x13, .x=0x63, .y=0xf4, .sp=0x12, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x4c0d, .value=0x48}, {.addr=0x4c0e, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4c0f, .a=0xce, .x=0x63, .y=0xf4, .sp=0x12, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x4c0d, .value=0x48}, {.addr=0x4c0e, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4c0d, .value=0x48, .type=IO_READ},
        {.addr=0x4c0e, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0018) {
    const struct CPU_State initial_cpu = {.pc=0x0e02, .a=0xde, .x=0x14, .y=0x10, .sp=0xc0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0e02, .value=0x48}, {.addr=0x0e03, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0e04, .a=0x6c, .x=0x14, .y=0x10, .sp=0xc0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0e02, .value=0x48}, {.addr=0x0e03, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0e02, .value=0x48, .type=IO_READ},
        {.addr=0x0e03, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0019) {
    const struct CPU_State initial_cpu = {.pc=0x41a9, .a=0xe6, .x=0x27, .y=0x69, .sp=0xd1, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x41a9, .value=0x48}, {.addr=0x41aa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0x3a, .x=0x27, .y=0x69, .sp=0xd1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x41a9, .value=0x48}, {.addr=0x41aa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x41a9, .value=0x48, .type=IO_READ},
        {.addr=0x41aa, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001A) {
    const struct CPU_State initial_cpu = {.pc=0x230b, .a=0x8a, .x=0xc1, .y=0x75, .sp=0xfd, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x230b, .value=0x48}, {.addr=0x230c, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x230d, .a=0xdb, .x=0xc1, .y=0x75, .sp=0xfd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x230b, .value=0x48}, {.addr=0x230c, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x230b, .value=0x48, .type=IO_READ},
        {.addr=0x230c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001B) {
    const struct CPU_State initial_cpu = {.pc=0xb186, .a=0x08, .x=0x70, .y=0xca, .sp=0xaa, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb186, .value=0x48}, {.addr=0xb187, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xb188, .a=0x1a, .x=0x70, .y=0xca, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb186, .value=0x48}, {.addr=0xb187, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xb186, .value=0x48, .type=IO_READ},
        {.addr=0xb187, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001C) {
    const struct CPU_State initial_cpu = {.pc=0xe0c5, .a=0x25, .x=0xa2, .y=0x05, .sp=0x38, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c5, .value=0x48}, {.addr=0xe0c6, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xe0c7, .a=0xc9, .x=0xa2, .y=0x05, .sp=0x38, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe0c5, .value=0x48}, {.addr=0xe0c6, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xe0c5, .value=0x48, .type=IO_READ},
        {.addr=0xe0c6, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001D) {
    const struct CPU_State initial_cpu = {.pc=0x28c0, .a=0xa9, .x=0xa1, .y=0x60, .sp=0x12, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x28c0, .value=0x48}, {.addr=0x28c1, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x28c2, .a=0x3c, .x=0xa1, .y=0x60, .sp=0x12, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x28c0, .value=0x48}, {.addr=0x28c1, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x28c0, .value=0x48, .type=IO_READ},
        {.addr=0x28c1, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001E) {
    const struct CPU_State initial_cpu = {.pc=0x52c8, .a=0xc5, .x=0x01, .y=0x74, .sp=0x80, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x52c8, .value=0x48}, {.addr=0x52c9, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x52ca, .a=0xcc, .x=0x01, .y=0x74, .sp=0x80, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x52c8, .value=0x48}, {.addr=0x52c9, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x52c8, .value=0x48, .type=IO_READ},
        {.addr=0x52c9, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_001F) {
    const struct CPU_State initial_cpu = {.pc=0xf675, .a=0x95, .x=0x1b, .y=0x32, .sp=0x53, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf675, .value=0x48}, {.addr=0xf676, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xf677, .a=0xec, .x=0x1b, .y=0x32, .sp=0x53, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf675, .value=0x48}, {.addr=0xf676, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xf675, .value=0x48, .type=IO_READ},
        {.addr=0xf676, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0020) {
    const struct CPU_State initial_cpu = {.pc=0x8d9f, .a=0x8e, .x=0x51, .y=0x60, .sp=0x8f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8d9f, .value=0x48}, {.addr=0x8da0, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x8da1, .a=0xf7, .x=0x51, .y=0x60, .sp=0x8f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8d9f, .value=0x48}, {.addr=0x8da0, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x8d9f, .value=0x48, .type=IO_READ},
        {.addr=0x8da0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0021) {
    const struct CPU_State initial_cpu = {.pc=0x188a, .a=0xd1, .x=0xb5, .y=0x97, .sp=0x58, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x188a, .value=0x48}, {.addr=0x188b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x188c, .a=0x25, .x=0xb5, .y=0x97, .sp=0x58, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x188a, .value=0x48}, {.addr=0x188b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x188a, .value=0x48, .type=IO_READ},
        {.addr=0x188b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0022) {
    const struct CPU_State initial_cpu = {.pc=0xa3c0, .a=0xfe, .x=0xfa, .y=0x1b, .sp=0xe9, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c0, .value=0x48}, {.addr=0xa3c1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xa3c2, .a=0x53, .x=0xfa, .y=0x1b, .sp=0xe9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa3c0, .value=0x48}, {.addr=0xa3c1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xa3c0, .value=0x48, .type=IO_READ},
        {.addr=0xa3c1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0023) {
    const struct CPU_State initial_cpu = {.pc=0xfc68, .a=0xe8, .x=0x9d, .y=0x2b, .sp=0x16, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xfc68, .value=0x48}, {.addr=0xfc69, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc6a, .a=0xb5, .x=0x9d, .y=0x2b, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfc68, .value=0x48}, {.addr=0xfc69, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc68, .value=0x48, .type=IO_READ},
        {.addr=0xfc69, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf150, .a=0x15, .x=0x49, .y=0x5f, .sp=0x73, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf150, .value=0x48}, {.addr=0xf151, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf152, .a=0xdb, .x=0x49, .y=0x5f, .sp=0x73, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf150, .value=0x48}, {.addr=0xf151, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf150, .value=0x48, .type=IO_READ},
        {.addr=0xf151, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0025) {
    const struct CPU_State initial_cpu = {.pc=0xa62d, .a=0x23, .x=0x72, .y=0x89, .sp=0xda, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa62d, .value=0x48}, {.addr=0xa62e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa62f, .a=0x3f, .x=0x72, .y=0x89, .sp=0xda, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa62d, .value=0x48}, {.addr=0xa62e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa62d, .value=0x48, .type=IO_READ},
        {.addr=0xa62e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0026) {
    const struct CPU_State initial_cpu = {.pc=0x7425, .a=0xaf, .x=0xd0, .y=0xc3, .sp=0x0c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7425, .value=0x48}, {.addr=0x7426, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7427, .a=0xc1, .x=0xd0, .y=0xc3, .sp=0x0c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7425, .value=0x48}, {.addr=0x7426, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7425, .value=0x48, .type=IO_READ},
        {.addr=0x7426, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0027) {
    const struct CPU_State initial_cpu = {.pc=0x04ed, .a=0x1a, .x=0xe6, .y=0xc2, .sp=0xfa, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x04ed, .value=0x48}, {.addr=0x04ee, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x04ef, .a=0x2a, .x=0xe6, .y=0xc2, .sp=0xfa, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x04ed, .value=0x48}, {.addr=0x04ee, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x04ed, .value=0x48, .type=IO_READ},
        {.addr=0x04ee, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0028) {
    const struct CPU_State initial_cpu = {.pc=0xa534, .a=0xe3, .x=0x79, .y=0xc3, .sp=0x4c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa534, .value=0x48}, {.addr=0xa535, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa536, .a=0x1b, .x=0x79, .y=0xc3, .sp=0x4c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa534, .value=0x48}, {.addr=0xa535, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa534, .value=0x48, .type=IO_READ},
        {.addr=0xa535, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0029) {
    const struct CPU_State initial_cpu = {.pc=0xd487, .a=0x52, .x=0x32, .y=0x32, .sp=0xe0, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd487, .value=0x48}, {.addr=0xd488, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd489, .a=0x32, .x=0x32, .y=0x32, .sp=0xe0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd487, .value=0x48}, {.addr=0xd488, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd487, .value=0x48, .type=IO_READ},
        {.addr=0xd488, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002A) {
    const struct CPU_State initial_cpu = {.pc=0x0fd4, .a=0x44, .x=0xa6, .y=0x98, .sp=0xa9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0fd4, .value=0x48}, {.addr=0x0fd5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0fd6, .a=0x29, .x=0xa6, .y=0x98, .sp=0xa9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0fd4, .value=0x48}, {.addr=0x0fd5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0fd4, .value=0x48, .type=IO_READ},
        {.addr=0x0fd5, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002B) {
    const struct CPU_State initial_cpu = {.pc=0x7bf9, .a=0xd0, .x=0xf0, .y=0x99, .sp=0x1d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf9, .value=0x48}, {.addr=0x7bfa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7bfb, .a=0x4d, .x=0xf0, .y=0x99, .sp=0x1d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7bf9, .value=0x48}, {.addr=0x7bfa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7bf9, .value=0x48, .type=IO_READ},
        {.addr=0x7bfa, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002C) {
    const struct CPU_State initial_cpu = {.pc=0xc196, .a=0xd8, .x=0xa5, .y=0xd4, .sp=0x4a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc196, .value=0x48}, {.addr=0xc197, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xc198, .a=0xcb, .x=0xa5, .y=0xd4, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc196, .value=0x48}, {.addr=0xc197, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xc196, .value=0x48, .type=IO_READ},
        {.addr=0xc197, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002D) {
    const struct CPU_State initial_cpu = {.pc=0x6a7c, .a=0xf2, .x=0x1a, .y=0xd7, .sp=0x2a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7c, .value=0x48}, {.addr=0x6a7d, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6a7e, .a=0xa5, .x=0x1a, .y=0xd7, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6a7c, .value=0x48}, {.addr=0x6a7d, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6a7c, .value=0x48, .type=IO_READ},
        {.addr=0x6a7d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002E) {
    const struct CPU_State initial_cpu = {.pc=0xec04, .a=0xca, .x=0x45, .y=0xc4, .sp=0x9e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xec04, .value=0x48}, {.addr=0xec05, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xec06, .a=0x4f, .x=0x45, .y=0xc4, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xec04, .value=0x48}, {.addr=0xec05, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xec04, .value=0x48, .type=IO_READ},
        {.addr=0xec05, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_002F) {
    const struct CPU_State initial_cpu = {.pc=0x4a52, .a=0xbe, .x=0xdd, .y=0xe9, .sp=0xf4, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4a52, .value=0x48}, {.addr=0x4a53, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x4a54, .a=0x20, .x=0xdd, .y=0xe9, .sp=0xf4, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4a52, .value=0x48}, {.addr=0x4a53, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x4a52, .value=0x48, .type=IO_READ},
        {.addr=0x4a53, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0030) {
    const struct CPU_State initial_cpu = {.pc=0xb8c2, .a=0xf8, .x=0x4e, .y=0x42, .sp=0xfa, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c2, .value=0x48}, {.addr=0xb8c3, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xb8c4, .a=0x40, .x=0x4e, .y=0x42, .sp=0xfa, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb8c2, .value=0x48}, {.addr=0xb8c3, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xb8c2, .value=0x48, .type=IO_READ},
        {.addr=0xb8c3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0031) {
    const struct CPU_State initial_cpu = {.pc=0xd390, .a=0x1e, .x=0xe8, .y=0x23, .sp=0xc2, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd390, .value=0x48}, {.addr=0xd391, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xd392, .a=0xcf, .x=0xe8, .y=0x23, .sp=0xc2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd390, .value=0x48}, {.addr=0xd391, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xd390, .value=0x48, .type=IO_READ},
        {.addr=0xd391, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0032) {
    const struct CPU_State initial_cpu = {.pc=0xb4d8, .a=0xcf, .x=0xb1, .y=0x34, .sp=0xdb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d8, .value=0x48}, {.addr=0xb4d9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb4da, .a=0x69, .x=0xb1, .y=0x34, .sp=0xdb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb4d8, .value=0x48}, {.addr=0xb4d9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb4d8, .value=0x48, .type=IO_READ},
        {.addr=0xb4d9, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0033) {
    const struct CPU_State initial_cpu = {.pc=0x78d8, .a=0x7c, .x=0xa0, .y=0xed, .sp=0xf9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x78d8, .value=0x48}, {.addr=0x78d9, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x78da, .a=0x85, .x=0xa0, .y=0xed, .sp=0xf9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x78d8, .value=0x48}, {.addr=0x78d9, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x78d8, .value=0x48, .type=IO_READ},
        {.addr=0x78d9, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0034) {
    const struct CPU_State initial_cpu = {.pc=0x0fbf, .a=0x1f, .x=0xf1, .y=0x0c, .sp=0x63, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbf, .value=0x48}, {.addr=0x0fc0, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x0fc1, .a=0xa9, .x=0xf1, .y=0x0c, .sp=0x63, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0fbf, .value=0x48}, {.addr=0x0fc0, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0fbf, .value=0x48, .type=IO_READ},
        {.addr=0x0fc0, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0886, .a=0xad, .x=0x27, .y=0xd1, .sp=0x27, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0886, .value=0x48}, {.addr=0x0887, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x0888, .a=0x7b, .x=0x27, .y=0xd1, .sp=0x27, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0886, .value=0x48}, {.addr=0x0887, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x0886, .value=0x48, .type=IO_READ},
        {.addr=0x0887, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0036) {
    const struct CPU_State initial_cpu = {.pc=0xafae, .a=0xf3, .x=0x92, .y=0x55, .sp=0xfc, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xafae, .value=0x48}, {.addr=0xafaf, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xafb0, .a=0x7d, .x=0x92, .y=0x55, .sp=0xfc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xafae, .value=0x48}, {.addr=0xafaf, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xafae, .value=0x48, .type=IO_READ},
        {.addr=0xafaf, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0037) {
    const struct CPU_State initial_cpu = {.pc=0x13b8, .a=0x93, .x=0xee, .y=0xbd, .sp=0xa6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x13b8, .value=0x48}, {.addr=0x13b9, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x13ba, .a=0x89, .x=0xee, .y=0xbd, .sp=0xa6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x13b8, .value=0x48}, {.addr=0x13b9, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x13b8, .value=0x48, .type=IO_READ},
        {.addr=0x13b9, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0038) {
    const struct CPU_State initial_cpu = {.pc=0x2b76, .a=0x84, .x=0xc2, .y=0xce, .sp=0x1e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2b76, .value=0x48}, {.addr=0x2b77, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x2b78, .a=0x49, .x=0xc2, .y=0xce, .sp=0x1e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2b76, .value=0x48}, {.addr=0x2b77, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x2b76, .value=0x48, .type=IO_READ},
        {.addr=0x2b77, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0039) {
    const struct CPU_State initial_cpu = {.pc=0xbf8d, .a=0x08, .x=0x61, .y=0x38, .sp=0x99, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8d, .value=0x48}, {.addr=0xbf8e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbf8f, .a=0x74, .x=0x61, .y=0x38, .sp=0x99, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbf8d, .value=0x48}, {.addr=0xbf8e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbf8d, .value=0x48, .type=IO_READ},
        {.addr=0xbf8e, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2378, .a=0x18, .x=0xab, .y=0x6d, .sp=0xcc, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2378, .value=0x48}, {.addr=0x2379, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x237a, .a=0x90, .x=0xab, .y=0x6d, .sp=0xcc, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2378, .value=0x48}, {.addr=0x2379, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2378, .value=0x48, .type=IO_READ},
        {.addr=0x2379, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003B) {
    const struct CPU_State initial_cpu = {.pc=0x55d6, .a=0x0f, .x=0xc9, .y=0x3e, .sp=0x39, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x55d6, .value=0x48}, {.addr=0x55d7, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x55d8, .a=0x50, .x=0xc9, .y=0x3e, .sp=0x39, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x55d6, .value=0x48}, {.addr=0x55d7, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x55d6, .value=0x48, .type=IO_READ},
        {.addr=0x55d7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003C) {
    const struct CPU_State initial_cpu = {.pc=0x0b8b, .a=0xfe, .x=0xa8, .y=0xc6, .sp=0x0a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8b, .value=0x48}, {.addr=0x0b8c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x0b8d, .a=0xdd, .x=0xa8, .y=0xc6, .sp=0x0a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0b8b, .value=0x48}, {.addr=0x0b8c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x0b8b, .value=0x48, .type=IO_READ},
        {.addr=0x0b8c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003D) {
    const struct CPU_State initial_cpu = {.pc=0x76fb, .a=0xfe, .x=0xe8, .y=0xd0, .sp=0x5d, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x76fb, .value=0x48}, {.addr=0x76fc, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x76fd, .a=0xd6, .x=0xe8, .y=0xd0, .sp=0x5d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x76fb, .value=0x48}, {.addr=0x76fc, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x76fb, .value=0x48, .type=IO_READ},
        {.addr=0x76fc, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003E) {
    const struct CPU_State initial_cpu = {.pc=0x62f8, .a=0x0f, .x=0x0d, .y=0x7b, .sp=0x24, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x62f8, .value=0x48}, {.addr=0x62f9, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x62fa, .a=0x78, .x=0x0d, .y=0x7b, .sp=0x24, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x62f8, .value=0x48}, {.addr=0x62f9, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x62f8, .value=0x48, .type=IO_READ},
        {.addr=0x62f9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_003F) {
    const struct CPU_State initial_cpu = {.pc=0x82fc, .a=0x3d, .x=0xfa, .y=0x7c, .sp=0x9f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x82fc, .value=0x48}, {.addr=0x82fd, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x82fe, .a=0xa9, .x=0xfa, .y=0x7c, .sp=0x9f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x82fc, .value=0x48}, {.addr=0x82fd, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x82fc, .value=0x48, .type=IO_READ},
        {.addr=0x82fd, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0040) {
    const struct CPU_State initial_cpu = {.pc=0x07ed, .a=0x13, .x=0xc7, .y=0xbd, .sp=0x57, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x07ed, .value=0x48}, {.addr=0x07ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x07ef, .a=0x0f, .x=0xc7, .y=0xbd, .sp=0x57, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x07ed, .value=0x48}, {.addr=0x07ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x07ed, .value=0x48, .type=IO_READ},
        {.addr=0x07ee, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0041) {
    const struct CPU_State initial_cpu = {.pc=0xc11d, .a=0x35, .x=0x7d, .y=0xce, .sp=0xa6, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc11d, .value=0x48}, {.addr=0xc11e, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc11f, .a=0x9f, .x=0x7d, .y=0xce, .sp=0xa6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc11d, .value=0x48}, {.addr=0xc11e, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc11d, .value=0x48, .type=IO_READ},
        {.addr=0xc11e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0042) {
    const struct CPU_State initial_cpu = {.pc=0x7137, .a=0xe3, .x=0x0f, .y=0x35, .sp=0x2e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7137, .value=0x48}, {.addr=0x7138, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x7139, .a=0x70, .x=0x0f, .y=0x35, .sp=0x2e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7137, .value=0x48}, {.addr=0x7138, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x7137, .value=0x48, .type=IO_READ},
        {.addr=0x7138, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0043) {
    const struct CPU_State initial_cpu = {.pc=0xee79, .a=0xe9, .x=0x2e, .y=0x17, .sp=0xb5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xee79, .value=0x48}, {.addr=0xee7a, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xee7b, .a=0x3b, .x=0x2e, .y=0x17, .sp=0xb5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xee79, .value=0x48}, {.addr=0xee7a, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xee79, .value=0x48, .type=IO_READ},
        {.addr=0xee7a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0e91, .a=0xfa, .x=0x55, .y=0x9d, .sp=0xac, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0e91, .value=0x48}, {.addr=0x0e92, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0e93, .a=0x45, .x=0x55, .y=0x9d, .sp=0xac, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0e91, .value=0x48}, {.addr=0x0e92, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0e91, .value=0x48, .type=IO_READ},
        {.addr=0x0e92, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0045) {
    const struct CPU_State initial_cpu = {.pc=0x416f, .a=0x5c, .x=0x53, .y=0x43, .sp=0xfc, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x416f, .value=0x48}, {.addr=0x4170, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x4171, .a=0x55, .x=0x53, .y=0x43, .sp=0xfc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x416f, .value=0x48}, {.addr=0x4170, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x416f, .value=0x48, .type=IO_READ},
        {.addr=0x4170, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0046) {
    const struct CPU_State initial_cpu = {.pc=0xc128, .a=0x29, .x=0x5f, .y=0x86, .sp=0x8c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc128, .value=0x48}, {.addr=0xc129, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc12a, .a=0x0b, .x=0x5f, .y=0x86, .sp=0x8c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc128, .value=0x48}, {.addr=0xc129, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc128, .value=0x48, .type=IO_READ},
        {.addr=0xc129, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2113, .a=0xed, .x=0x42, .y=0xef, .sp=0xa4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2113, .value=0x48}, {.addr=0x2114, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x2115, .a=0xe4, .x=0x42, .y=0xef, .sp=0xa4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2113, .value=0x48}, {.addr=0x2114, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x2113, .value=0x48, .type=IO_READ},
        {.addr=0x2114, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0048) {
    const struct CPU_State initial_cpu = {.pc=0x6b5e, .a=0xd4, .x=0xc8, .y=0x8a, .sp=0xda, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5e, .value=0x48}, {.addr=0x6b5f, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x6b60, .a=0x2f, .x=0xc8, .y=0x8a, .sp=0xda, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6b5e, .value=0x48}, {.addr=0x6b5f, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x6b5e, .value=0x48, .type=IO_READ},
        {.addr=0x6b5f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0049) {
    const struct CPU_State initial_cpu = {.pc=0x8f50, .a=0xfa, .x=0x44, .y=0x1c, .sp=0x38, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8f50, .value=0x48}, {.addr=0x8f51, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x8f52, .a=0x4f, .x=0x44, .y=0x1c, .sp=0x38, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8f50, .value=0x48}, {.addr=0x8f51, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x8f50, .value=0x48, .type=IO_READ},
        {.addr=0x8f51, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004A) {
    const struct CPU_State initial_cpu = {.pc=0x4076, .a=0x14, .x=0x67, .y=0x87, .sp=0x59, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4076, .value=0x48}, {.addr=0x4077, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x4078, .a=0x10, .x=0x67, .y=0x87, .sp=0x59, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4076, .value=0x48}, {.addr=0x4077, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x4076, .value=0x48, .type=IO_READ},
        {.addr=0x4077, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004B) {
    const struct CPU_State initial_cpu = {.pc=0x3650, .a=0xeb, .x=0x5a, .y=0xbe, .sp=0x75, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3650, .value=0x48}, {.addr=0x3651, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3652, .a=0x25, .x=0x5a, .y=0xbe, .sp=0x75, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3650, .value=0x48}, {.addr=0x3651, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3650, .value=0x48, .type=IO_READ},
        {.addr=0x3651, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004C) {
    const struct CPU_State initial_cpu = {.pc=0x559d, .a=0x68, .x=0xbb, .y=0x45, .sp=0x34, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x559d, .value=0x48}, {.addr=0x559e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x559f, .a=0x30, .x=0xbb, .y=0x45, .sp=0x34, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x559d, .value=0x48}, {.addr=0x559e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x559d, .value=0x48, .type=IO_READ},
        {.addr=0x559e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9b2e, .a=0xa5, .x=0x10, .y=0x41, .sp=0xc2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x9b2e, .value=0x48}, {.addr=0x9b2f, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x9b30, .a=0xbb, .x=0x10, .y=0x41, .sp=0xc2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9b2e, .value=0x48}, {.addr=0x9b2f, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x9b2e, .value=0x48, .type=IO_READ},
        {.addr=0x9b2f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3721, .a=0xf1, .x=0xc9, .y=0xcb, .sp=0x93, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3721, .value=0x48}, {.addr=0x3722, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x3723, .a=0x42, .x=0xc9, .y=0xcb, .sp=0x93, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3721, .value=0x48}, {.addr=0x3722, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x3721, .value=0x48, .type=IO_READ},
        {.addr=0x3722, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_004F) {
    const struct CPU_State initial_cpu = {.pc=0x1c73, .a=0xd7, .x=0xe5, .y=0x52, .sp=0x4e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1c73, .value=0x48}, {.addr=0x1c74, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x1c75, .a=0xec, .x=0xe5, .y=0x52, .sp=0x4e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1c73, .value=0x48}, {.addr=0x1c74, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x1c73, .value=0x48, .type=IO_READ},
        {.addr=0x1c74, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0050) {
    const struct CPU_State initial_cpu = {.pc=0xc9a8, .a=0x6e, .x=0xf3, .y=0x27, .sp=0xdf, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a8, .value=0x48}, {.addr=0xc9a9, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc9aa, .a=0x9c, .x=0xf3, .y=0x27, .sp=0xdf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc9a8, .value=0x48}, {.addr=0xc9a9, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc9a8, .value=0x48, .type=IO_READ},
        {.addr=0xc9a9, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0051) {
    const struct CPU_State initial_cpu = {.pc=0x0b9b, .a=0x2c, .x=0xf2, .y=0xa1, .sp=0x5f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9b, .value=0x48}, {.addr=0x0b9c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0b9d, .a=0xe2, .x=0xf2, .y=0xa1, .sp=0x5f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0b9b, .value=0x48}, {.addr=0x0b9c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0b9b, .value=0x48, .type=IO_READ},
        {.addr=0x0b9c, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0052) {
    const struct CPU_State initial_cpu = {.pc=0x470a, .a=0x94, .x=0x2b, .y=0xc8, .sp=0x73, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x470a, .value=0x48}, {.addr=0x470b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x470c, .a=0x21, .x=0x2b, .y=0xc8, .sp=0x73, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x470a, .value=0x48}, {.addr=0x470b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x470a, .value=0x48, .type=IO_READ},
        {.addr=0x470b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0053) {
    const struct CPU_State initial_cpu = {.pc=0x201f, .a=0xdf, .x=0x57, .y=0x3e, .sp=0x53, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x201f, .value=0x48}, {.addr=0x2020, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x2021, .a=0x5b, .x=0x57, .y=0x3e, .sp=0x53, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x201f, .value=0x48}, {.addr=0x2020, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x201f, .value=0x48, .type=IO_READ},
        {.addr=0x2020, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0054) {
    const struct CPU_State initial_cpu = {.pc=0x1f75, .a=0x88, .x=0xd0, .y=0x9e, .sp=0xdd, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1f75, .value=0x48}, {.addr=0x1f76, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x1f77, .a=0x1e, .x=0xd0, .y=0x9e, .sp=0xdd, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1f75, .value=0x48}, {.addr=0x1f76, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x1f75, .value=0x48, .type=IO_READ},
        {.addr=0x1f76, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0055) {
    const struct CPU_State initial_cpu = {.pc=0xa912, .a=0xc8, .x=0x18, .y=0x94, .sp=0xdb, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa912, .value=0x48}, {.addr=0xa913, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xa914, .a=0x24, .x=0x18, .y=0x94, .sp=0xdb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa912, .value=0x48}, {.addr=0xa913, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xa912, .value=0x48, .type=IO_READ},
        {.addr=0xa913, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0056) {
    const struct CPU_State initial_cpu = {.pc=0xea88, .a=0x9b, .x=0x43, .y=0x8c, .sp=0xc2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xea88, .value=0x48}, {.addr=0xea89, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xea8a, .a=0x6b, .x=0x43, .y=0x8c, .sp=0xc2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xea88, .value=0x48}, {.addr=0xea89, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xea88, .value=0x48, .type=IO_READ},
        {.addr=0xea89, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0057) {
    const struct CPU_State initial_cpu = {.pc=0x86df, .a=0x53, .x=0x67, .y=0x61, .sp=0x9e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x86df, .value=0x48}, {.addr=0x86e0, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x86e1, .a=0x1a, .x=0x67, .y=0x61, .sp=0x9e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x86df, .value=0x48}, {.addr=0x86e0, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x86df, .value=0x48, .type=IO_READ},
        {.addr=0x86e0, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0058) {
    const struct CPU_State initial_cpu = {.pc=0xecd8, .a=0xff, .x=0x1b, .y=0xb3, .sp=0x68, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xecd8, .value=0x48}, {.addr=0xecd9, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xecda, .a=0x6c, .x=0x1b, .y=0xb3, .sp=0x68, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xecd8, .value=0x48}, {.addr=0xecd9, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xecd8, .value=0x48, .type=IO_READ},
        {.addr=0xecd9, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0059) {
    const struct CPU_State initial_cpu = {.pc=0xb673, .a=0x50, .x=0xd8, .y=0xe7, .sp=0xe8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xb673, .value=0x48}, {.addr=0xb674, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xb675, .a=0x97, .x=0xd8, .y=0xe7, .sp=0xe8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb673, .value=0x48}, {.addr=0xb674, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xb673, .value=0x48, .type=IO_READ},
        {.addr=0xb674, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf9e9, .a=0xe9, .x=0xa8, .y=0x72, .sp=0xef, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e9, .value=0x48}, {.addr=0xf9ea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf9eb, .a=0xf5, .x=0xa8, .y=0x72, .sp=0xef, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf9e9, .value=0x48}, {.addr=0xf9ea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf9e9, .value=0x48, .type=IO_READ},
        {.addr=0xf9ea, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005B) {
    const struct CPU_State initial_cpu = {.pc=0xb141, .a=0xc6, .x=0x76, .y=0xbd, .sp=0x2a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb141, .value=0x48}, {.addr=0xb142, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xb143, .a=0x91, .x=0x76, .y=0xbd, .sp=0x2a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb141, .value=0x48}, {.addr=0xb142, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xb141, .value=0x48, .type=IO_READ},
        {.addr=0xb142, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005C) {
    const struct CPU_State initial_cpu = {.pc=0x90d5, .a=0x79, .x=0x51, .y=0x5b, .sp=0x8e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x90d5, .value=0x48}, {.addr=0x90d6, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x90d7, .a=0x68, .x=0x51, .y=0x5b, .sp=0x8e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x90d5, .value=0x48}, {.addr=0x90d6, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x90d5, .value=0x48, .type=IO_READ},
        {.addr=0x90d6, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005D) {
    const struct CPU_State initial_cpu = {.pc=0xcfa5, .a=0xd7, .x=0xf2, .y=0xff, .sp=0xc3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa5, .value=0x48}, {.addr=0xcfa6, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xcfa7, .a=0x63, .x=0xf2, .y=0xff, .sp=0xc3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xcfa5, .value=0x48}, {.addr=0xcfa6, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xcfa5, .value=0x48, .type=IO_READ},
        {.addr=0xcfa6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005E) {
    const struct CPU_State initial_cpu = {.pc=0xa76a, .a=0xfe, .x=0xee, .y=0xab, .sp=0x3f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa76a, .value=0x48}, {.addr=0xa76b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xa76c, .a=0x1c, .x=0xee, .y=0xab, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa76a, .value=0x48}, {.addr=0xa76b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xa76a, .value=0x48, .type=IO_READ},
        {.addr=0xa76b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_005F) {
    const struct CPU_State initial_cpu = {.pc=0x273a, .a=0x3f, .x=0x4f, .y=0xec, .sp=0x7f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x273a, .value=0x48}, {.addr=0x273b, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x273c, .a=0x85, .x=0x4f, .y=0xec, .sp=0x7f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x273a, .value=0x48}, {.addr=0x273b, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x273a, .value=0x48, .type=IO_READ},
        {.addr=0x273b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0060) {
    const struct CPU_State initial_cpu = {.pc=0x010b, .a=0xac, .x=0xdd, .y=0xe9, .sp=0xa5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x48}, {.addr=0x010c, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x010d, .a=0x5f, .x=0xdd, .y=0xe9, .sp=0xa5, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x48}, {.addr=0x010c, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x010b, .value=0x48, .type=IO_READ},
        {.addr=0x010c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0061) {
    const struct CPU_State initial_cpu = {.pc=0xced2, .a=0xdb, .x=0x52, .y=0xb3, .sp=0xaf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xced2, .value=0x48}, {.addr=0xced3, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xced4, .a=0x2b, .x=0x52, .y=0xb3, .sp=0xaf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xced2, .value=0x48}, {.addr=0xced3, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xced2, .value=0x48, .type=IO_READ},
        {.addr=0xced3, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0062) {
    const struct CPU_State initial_cpu = {.pc=0x7779, .a=0x96, .x=0xe4, .y=0xf8, .sp=0x1d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7779, .value=0x48}, {.addr=0x777a, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x777b, .a=0x5f, .x=0xe4, .y=0xf8, .sp=0x1d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7779, .value=0x48}, {.addr=0x777a, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x7779, .value=0x48, .type=IO_READ},
        {.addr=0x777a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0063) {
    const struct CPU_State initial_cpu = {.pc=0x4c5d, .a=0x67, .x=0x1a, .y=0xa7, .sp=0x24, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c5d, .value=0x48}, {.addr=0x4c5e, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x4c5f, .a=0xcb, .x=0x1a, .y=0xa7, .sp=0x24, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4c5d, .value=0x48}, {.addr=0x4c5e, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x4c5d, .value=0x48, .type=IO_READ},
        {.addr=0x4c5e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0064) {
    const struct CPU_State initial_cpu = {.pc=0x592e, .a=0xc6, .x=0x40, .y=0xe4, .sp=0xca, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x592e, .value=0x48}, {.addr=0x592f, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5930, .a=0xe5, .x=0x40, .y=0xe4, .sp=0xca, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x592e, .value=0x48}, {.addr=0x592f, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x592e, .value=0x48, .type=IO_READ},
        {.addr=0x592f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0065) {
    const struct CPU_State initial_cpu = {.pc=0x04f9, .a=0x29, .x=0xfd, .y=0x77, .sp=0x9e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x04f9, .value=0x48}, {.addr=0x04fa, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x04fb, .a=0xbb, .x=0xfd, .y=0x77, .sp=0x9e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x04f9, .value=0x48}, {.addr=0x04fa, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x04f9, .value=0x48, .type=IO_READ},
        {.addr=0x04fa, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0066) {
    const struct CPU_State initial_cpu = {.pc=0xa978, .a=0x88, .x=0xdb, .y=0xa1, .sp=0x8d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa978, .value=0x48}, {.addr=0xa979, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xa97a, .a=0x44, .x=0xdb, .y=0xa1, .sp=0x8d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa978, .value=0x48}, {.addr=0xa979, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xa978, .value=0x48, .type=IO_READ},
        {.addr=0xa979, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0067) {
    const struct CPU_State initial_cpu = {.pc=0x3550, .a=0x6c, .x=0x11, .y=0x5f, .sp=0xb8, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3550, .value=0x48}, {.addr=0x3551, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x3552, .a=0x27, .x=0x11, .y=0x5f, .sp=0xb8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3550, .value=0x48}, {.addr=0x3551, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x3550, .value=0x48, .type=IO_READ},
        {.addr=0x3551, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0068) {
    const struct CPU_State initial_cpu = {.pc=0x44fa, .a=0x42, .x=0x72, .y=0x1a, .sp=0xfc, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x44fa, .value=0x48}, {.addr=0x44fb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x44fc, .a=0xde, .x=0x72, .y=0x1a, .sp=0xfc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x44fa, .value=0x48}, {.addr=0x44fb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x44fa, .value=0x48, .type=IO_READ},
        {.addr=0x44fb, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0069) {
    const struct CPU_State initial_cpu = {.pc=0xe294, .a=0xa4, .x=0x81, .y=0x6a, .sp=0x4a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe294, .value=0x48}, {.addr=0xe295, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xe296, .a=0xf3, .x=0x81, .y=0x6a, .sp=0x4a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe294, .value=0x48}, {.addr=0xe295, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xe294, .value=0x48, .type=IO_READ},
        {.addr=0xe295, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5dd0, .a=0xbd, .x=0x96, .y=0x46, .sp=0x09, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd0, .value=0x48}, {.addr=0x5dd1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5dd2, .a=0x22, .x=0x96, .y=0x46, .sp=0x09, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5dd0, .value=0x48}, {.addr=0x5dd1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5dd0, .value=0x48, .type=IO_READ},
        {.addr=0x5dd1, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006B) {
    const struct CPU_State initial_cpu = {.pc=0xdc86, .a=0x9c, .x=0x67, .y=0xbb, .sp=0x17, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xdc86, .value=0x48}, {.addr=0xdc87, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xdc88, .a=0x24, .x=0x67, .y=0xbb, .sp=0x17, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdc86, .value=0x48}, {.addr=0xdc87, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xdc86, .value=0x48, .type=IO_READ},
        {.addr=0xdc87, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006C) {
    const struct CPU_State initial_cpu = {.pc=0xba64, .a=0xc4, .x=0xf3, .y=0x4b, .sp=0x9c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xba64, .value=0x48}, {.addr=0xba65, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xba66, .a=0x27, .x=0xf3, .y=0x4b, .sp=0x9c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xba64, .value=0x48}, {.addr=0xba65, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xba64, .value=0x48, .type=IO_READ},
        {.addr=0xba65, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006D) {
    const struct CPU_State initial_cpu = {.pc=0xcc80, .a=0xdd, .x=0xae, .y=0x80, .sp=0x69, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xcc80, .value=0x48}, {.addr=0xcc81, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xcc82, .a=0x35, .x=0xae, .y=0x80, .sp=0x69, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xcc80, .value=0x48}, {.addr=0xcc81, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xcc80, .value=0x48, .type=IO_READ},
        {.addr=0xcc81, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006E) {
    const struct CPU_State initial_cpu = {.pc=0xbfc3, .a=0x88, .x=0xfa, .y=0x9d, .sp=0x78, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc3, .value=0x48}, {.addr=0xbfc4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbfc5, .a=0xe8, .x=0xfa, .y=0x9d, .sp=0x78, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbfc3, .value=0x48}, {.addr=0xbfc4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbfc3, .value=0x48, .type=IO_READ},
        {.addr=0xbfc4, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_006F) {
    const struct CPU_State initial_cpu = {.pc=0x8ff4, .a=0xd8, .x=0x15, .y=0xe9, .sp=0x01, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff4, .value=0x48}, {.addr=0x8ff5, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8ff6, .a=0xcd, .x=0x15, .y=0xe9, .sp=0x01, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8ff4, .value=0x48}, {.addr=0x8ff5, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x8ff4, .value=0x48, .type=IO_READ},
        {.addr=0x8ff5, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0070) {
    const struct CPU_State initial_cpu = {.pc=0xc707, .a=0x7c, .x=0x21, .y=0xa3, .sp=0x68, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc707, .value=0x48}, {.addr=0xc708, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xc709, .a=0x10, .x=0x21, .y=0xa3, .sp=0x68, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc707, .value=0x48}, {.addr=0xc708, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xc707, .value=0x48, .type=IO_READ},
        {.addr=0xc708, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6e12, .a=0x7c, .x=0x30, .y=0x51, .sp=0x32, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6e12, .value=0x48}, {.addr=0x6e13, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x6e14, .a=0x10, .x=0x30, .y=0x51, .sp=0x32, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6e12, .value=0x48}, {.addr=0x6e13, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x6e12, .value=0x48, .type=IO_READ},
        {.addr=0x6e13, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0072) {
    const struct CPU_State initial_cpu = {.pc=0x1b89, .a=0x05, .x=0x00, .y=0xd5, .sp=0xf2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1b89, .value=0x48}, {.addr=0x1b8a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1b8b, .a=0x68, .x=0x00, .y=0xd5, .sp=0xf2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1b89, .value=0x48}, {.addr=0x1b8a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1b89, .value=0x48, .type=IO_READ},
        {.addr=0x1b8a, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0073) {
    const struct CPU_State initial_cpu = {.pc=0x276e, .a=0x14, .x=0x8d, .y=0x4a, .sp=0x57, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x276e, .value=0x48}, {.addr=0x276f, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0x6c, .x=0x8d, .y=0x4a, .sp=0x57, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x276e, .value=0x48}, {.addr=0x276f, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x276e, .value=0x48, .type=IO_READ},
        {.addr=0x276f, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7c18, .a=0x4c, .x=0x7c, .y=0xec, .sp=0xcd, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7c18, .value=0x48}, {.addr=0x7c19, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x7c1a, .a=0x55, .x=0x7c, .y=0xec, .sp=0xcd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7c18, .value=0x48}, {.addr=0x7c19, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x7c18, .value=0x48, .type=IO_READ},
        {.addr=0x7c19, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0075) {
    const struct CPU_State initial_cpu = {.pc=0xaaf0, .a=0xc4, .x=0x1e, .y=0xeb, .sp=0x9e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf0, .value=0x48}, {.addr=0xaaf1, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xaaf2, .a=0xa8, .x=0x1e, .y=0xeb, .sp=0x9e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xaaf0, .value=0x48}, {.addr=0xaaf1, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xaaf0, .value=0x48, .type=IO_READ},
        {.addr=0xaaf1, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0076) {
    const struct CPU_State initial_cpu = {.pc=0xcd5c, .a=0x7b, .x=0x58, .y=0xa1, .sp=0x49, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5c, .value=0x48}, {.addr=0xcd5d, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xcd5e, .a=0xbe, .x=0x58, .y=0xa1, .sp=0x49, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcd5c, .value=0x48}, {.addr=0xcd5d, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xcd5c, .value=0x48, .type=IO_READ},
        {.addr=0xcd5d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0077) {
    const struct CPU_State initial_cpu = {.pc=0x49c2, .a=0x67, .x=0xdc, .y=0x4a, .sp=0xde, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x49c2, .value=0x48}, {.addr=0x49c3, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x49c4, .a=0x53, .x=0xdc, .y=0x4a, .sp=0xde, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x49c2, .value=0x48}, {.addr=0x49c3, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x49c2, .value=0x48, .type=IO_READ},
        {.addr=0x49c3, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0078) {
    const struct CPU_State initial_cpu = {.pc=0xb8b7, .a=0x76, .x=0xf6, .y=0x8c, .sp=0xc6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b7, .value=0x48}, {.addr=0xb8b8, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xb8b9, .a=0x4c, .x=0xf6, .y=0x8c, .sp=0xc6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb8b7, .value=0x48}, {.addr=0xb8b8, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xb8b7, .value=0x48, .type=IO_READ},
        {.addr=0xb8b8, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0079) {
    const struct CPU_State initial_cpu = {.pc=0xbd38, .a=0xa3, .x=0x9c, .y=0xcc, .sp=0xea, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xbd38, .value=0x48}, {.addr=0xbd39, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xbd3a, .a=0x0f, .x=0x9c, .y=0xcc, .sp=0xea, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbd38, .value=0x48}, {.addr=0xbd39, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xbd38, .value=0x48, .type=IO_READ},
        {.addr=0xbd39, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0d15, .a=0x93, .x=0x80, .y=0x55, .sp=0xa7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0d15, .value=0x48}, {.addr=0x0d16, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x0d17, .a=0x87, .x=0x80, .y=0x55, .sp=0xa7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0d15, .value=0x48}, {.addr=0x0d16, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x0d15, .value=0x48, .type=IO_READ},
        {.addr=0x0d16, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007B) {
    const struct CPU_State initial_cpu = {.pc=0x18c2, .a=0xa1, .x=0x6a, .y=0x90, .sp=0xa5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x18c2, .value=0x48}, {.addr=0x18c3, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x18c4, .a=0x69, .x=0x6a, .y=0x90, .sp=0xa5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x18c2, .value=0x48}, {.addr=0x18c3, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x18c2, .value=0x48, .type=IO_READ},
        {.addr=0x18c3, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007C) {
    const struct CPU_State initial_cpu = {.pc=0x382c, .a=0xc5, .x=0xf2, .y=0xd2, .sp=0xdb, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x382c, .value=0x48}, {.addr=0x382d, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x382e, .a=0x06, .x=0xf2, .y=0xd2, .sp=0xdb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x382c, .value=0x48}, {.addr=0x382d, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x382c, .value=0x48, .type=IO_READ},
        {.addr=0x382d, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007D) {
    const struct CPU_State initial_cpu = {.pc=0xb244, .a=0x6b, .x=0xd2, .y=0x4b, .sp=0x75, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb244, .value=0x48}, {.addr=0xb245, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb246, .a=0x0f, .x=0xd2, .y=0x4b, .sp=0x75, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb244, .value=0x48}, {.addr=0xb245, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb244, .value=0x48, .type=IO_READ},
        {.addr=0xb245, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007E) {
    const struct CPU_State initial_cpu = {.pc=0xa925, .a=0x95, .x=0x83, .y=0xbc, .sp=0xe6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa925, .value=0x48}, {.addr=0xa926, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa927, .a=0x22, .x=0x83, .y=0xbc, .sp=0xe6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa925, .value=0x48}, {.addr=0xa926, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa925, .value=0x48, .type=IO_READ},
        {.addr=0xa926, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_007F) {
    const struct CPU_State initial_cpu = {.pc=0xb654, .a=0x67, .x=0x69, .y=0x5e, .sp=0xf2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb654, .value=0x48}, {.addr=0xb655, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xb656, .a=0x77, .x=0x69, .y=0x5e, .sp=0xf2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb654, .value=0x48}, {.addr=0xb655, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xb654, .value=0x48, .type=IO_READ},
        {.addr=0xb655, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0080) {
    const struct CPU_State initial_cpu = {.pc=0xd5b0, .a=0xf8, .x=0x34, .y=0xcf, .sp=0xb1, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b0, .value=0x48}, {.addr=0xd5b1, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xd5b2, .a=0x88, .x=0x34, .y=0xcf, .sp=0xb1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd5b0, .value=0x48}, {.addr=0xd5b1, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xd5b0, .value=0x48, .type=IO_READ},
        {.addr=0xd5b1, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0081) {
    const struct CPU_State initial_cpu = {.pc=0x42c6, .a=0xb3, .x=0x3c, .y=0x2c, .sp=0xfc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x42c6, .value=0x48}, {.addr=0x42c7, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x42c8, .a=0x41, .x=0x3c, .y=0x2c, .sp=0xfc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x42c6, .value=0x48}, {.addr=0x42c7, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x42c6, .value=0x48, .type=IO_READ},
        {.addr=0x42c7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0082) {
    const struct CPU_State initial_cpu = {.pc=0x53b8, .a=0x63, .x=0x0f, .y=0x7d, .sp=0x19, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x53b8, .value=0x48}, {.addr=0x53b9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x53ba, .a=0xa5, .x=0x0f, .y=0x7d, .sp=0x19, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x53b8, .value=0x48}, {.addr=0x53b9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x53b8, .value=0x48, .type=IO_READ},
        {.addr=0x53b9, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0083) {
    const struct CPU_State initial_cpu = {.pc=0x86f3, .a=0xcf, .x=0x9e, .y=0x79, .sp=0xcc, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x86f3, .value=0x48}, {.addr=0x86f4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x86f5, .a=0xe9, .x=0x9e, .y=0x79, .sp=0xcc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x86f3, .value=0x48}, {.addr=0x86f4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x86f3, .value=0x48, .type=IO_READ},
        {.addr=0x86f4, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0084) {
    const struct CPU_State initial_cpu = {.pc=0x5d8f, .a=0x0a, .x=0x04, .y=0x87, .sp=0xb8, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5d8f, .value=0x48}, {.addr=0x5d90, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5d91, .a=0x5c, .x=0x04, .y=0x87, .sp=0xb8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5d8f, .value=0x48}, {.addr=0x5d90, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5d8f, .value=0x48, .type=IO_READ},
        {.addr=0x5d90, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0085) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0x05, .x=0x97, .y=0xbe, .sp=0x0f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8707, .value=0x48}, {.addr=0x8708, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x8709, .a=0x64, .x=0x97, .y=0xbe, .sp=0x0f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8707, .value=0x48}, {.addr=0x8708, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0x48, .type=IO_READ},
        {.addr=0x8708, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0086) {
    const struct CPU_State initial_cpu = {.pc=0x3ba5, .a=0xa7, .x=0x2f, .y=0x27, .sp=0x6f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba5, .value=0x48}, {.addr=0x3ba6, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x3ba7, .a=0xb5, .x=0x2f, .y=0x27, .sp=0x6f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3ba5, .value=0x48}, {.addr=0x3ba6, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x3ba5, .value=0x48, .type=IO_READ},
        {.addr=0x3ba6, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0087) {
    const struct CPU_State initial_cpu = {.pc=0x7c93, .a=0x5c, .x=0x0b, .y=0xf8, .sp=0xb4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x7c93, .value=0x48}, {.addr=0x7c94, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7c95, .a=0x04, .x=0x0b, .y=0xf8, .sp=0xb4, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7c93, .value=0x48}, {.addr=0x7c94, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x7c93, .value=0x48, .type=IO_READ},
        {.addr=0x7c94, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0088) {
    const struct CPU_State initial_cpu = {.pc=0xeb0b, .a=0x81, .x=0xba, .y=0x06, .sp=0xea, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb0b, .value=0x48}, {.addr=0xeb0c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xeb0d, .a=0x7b, .x=0xba, .y=0x06, .sp=0xea, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xeb0b, .value=0x48}, {.addr=0xeb0c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xeb0b, .value=0x48, .type=IO_READ},
        {.addr=0xeb0c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0089) {
    const struct CPU_State initial_cpu = {.pc=0x2a2f, .a=0x9e, .x=0x74, .y=0x04, .sp=0xc1, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x2a2f, .value=0x48}, {.addr=0x2a30, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x2a31, .a=0xab, .x=0x74, .y=0x04, .sp=0xc1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2a2f, .value=0x48}, {.addr=0x2a30, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x2a2f, .value=0x48, .type=IO_READ},
        {.addr=0x2a30, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008A) {
    const struct CPU_State initial_cpu = {.pc=0xb582, .a=0x15, .x=0x6e, .y=0xd4, .sp=0x60, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb582, .value=0x48}, {.addr=0xb583, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xb584, .a=0x84, .x=0x6e, .y=0xd4, .sp=0x60, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb582, .value=0x48}, {.addr=0xb583, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xb582, .value=0x48, .type=IO_READ},
        {.addr=0xb583, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008B) {
    const struct CPU_State initial_cpu = {.pc=0xbc09, .a=0x38, .x=0xc7, .y=0xe0, .sp=0xe8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xbc09, .value=0x48}, {.addr=0xbc0a, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xbc0b, .a=0xce, .x=0xc7, .y=0xe0, .sp=0xe8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbc09, .value=0x48}, {.addr=0xbc0a, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xbc09, .value=0x48, .type=IO_READ},
        {.addr=0xbc0a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3dac, .a=0x53, .x=0x17, .y=0x63, .sp=0xd2, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3dac, .value=0x48}, {.addr=0x3dad, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x3dae, .a=0xc8, .x=0x17, .y=0x63, .sp=0xd2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3dac, .value=0x48}, {.addr=0x3dad, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x3dac, .value=0x48, .type=IO_READ},
        {.addr=0x3dad, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8d8a, .a=0x36, .x=0x27, .y=0xb5, .sp=0xbd, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8a, .value=0x48}, {.addr=0x8d8b, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x8d8c, .a=0x64, .x=0x27, .y=0xb5, .sp=0xbd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8d8a, .value=0x48}, {.addr=0x8d8b, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x8d8a, .value=0x48, .type=IO_READ},
        {.addr=0x8d8b, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008E) {
    const struct CPU_State initial_cpu = {.pc=0xbdd9, .a=0x95, .x=0x33, .y=0x91, .sp=0x89, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd9, .value=0x48}, {.addr=0xbdda, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xbddb, .a=0x8f, .x=0x33, .y=0x91, .sp=0x89, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbdd9, .value=0x48}, {.addr=0xbdda, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xbdd9, .value=0x48, .type=IO_READ},
        {.addr=0xbdda, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3b31, .a=0xc1, .x=0x79, .y=0x8a, .sp=0x4d, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3b31, .value=0x48}, {.addr=0x3b32, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3b33, .a=0x27, .x=0x79, .y=0x8a, .sp=0x4d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3b31, .value=0x48}, {.addr=0x3b32, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3b31, .value=0x48, .type=IO_READ},
        {.addr=0x3b32, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0090) {
    const struct CPU_State initial_cpu = {.pc=0xe18c, .a=0xfc, .x=0xfd, .y=0xaf, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe18c, .value=0x48}, {.addr=0xe18d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xe18e, .a=0xf0, .x=0xfd, .y=0xaf, .sp=0x1d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe18c, .value=0x48}, {.addr=0xe18d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xe18c, .value=0x48, .type=IO_READ},
        {.addr=0xe18d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0091) {
    const struct CPU_State initial_cpu = {.pc=0xb3d5, .a=0x35, .x=0x5c, .y=0xa2, .sp=0xbb, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d5, .value=0x48}, {.addr=0xb3d6, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb3d7, .a=0xbe, .x=0x5c, .y=0xa2, .sp=0xbb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb3d5, .value=0x48}, {.addr=0xb3d6, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb3d5, .value=0x48, .type=IO_READ},
        {.addr=0xb3d6, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0092) {
    const struct CPU_State initial_cpu = {.pc=0xcf06, .a=0x92, .x=0xfb, .y=0xeb, .sp=0xa8, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xcf06, .value=0x48}, {.addr=0xcf07, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcf08, .a=0x06, .x=0xfb, .y=0xeb, .sp=0xa8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcf06, .value=0x48}, {.addr=0xcf07, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcf06, .value=0x48, .type=IO_READ},
        {.addr=0xcf07, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7dd0, .a=0xf9, .x=0x2f, .y=0x6c, .sp=0x04, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd0, .value=0x48}, {.addr=0x7dd1, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x7dd2, .a=0x07, .x=0x2f, .y=0x6c, .sp=0x04, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7dd0, .value=0x48}, {.addr=0x7dd1, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x7dd0, .value=0x48, .type=IO_READ},
        {.addr=0x7dd1, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0094) {
    const struct CPU_State initial_cpu = {.pc=0x2b82, .a=0x0c, .x=0xb2, .y=0x03, .sp=0x20, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2b82, .value=0x48}, {.addr=0x2b83, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x2b84, .a=0x57, .x=0xb2, .y=0x03, .sp=0x20, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2b82, .value=0x48}, {.addr=0x2b83, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x2b82, .value=0x48, .type=IO_READ},
        {.addr=0x2b83, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0095) {
    const struct CPU_State initial_cpu = {.pc=0x8bb1, .a=0xae, .x=0xe6, .y=0xef, .sp=0x88, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb1, .value=0x48}, {.addr=0x8bb2, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x8bb3, .a=0x19, .x=0xe6, .y=0xef, .sp=0x88, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8bb1, .value=0x48}, {.addr=0x8bb2, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x8bb1, .value=0x48, .type=IO_READ},
        {.addr=0x8bb2, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0096) {
    const struct CPU_State initial_cpu = {.pc=0xeb7e, .a=0x78, .x=0x90, .y=0xd8, .sp=0x4b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xeb7e, .value=0x48}, {.addr=0xeb7f, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xeb80, .a=0x8e, .x=0x90, .y=0xd8, .sp=0x4b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeb7e, .value=0x48}, {.addr=0xeb7f, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xeb7e, .value=0x48, .type=IO_READ},
        {.addr=0xeb7f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0097) {
    const struct CPU_State initial_cpu = {.pc=0x4371, .a=0xc4, .x=0x6a, .y=0xcf, .sp=0x82, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4371, .value=0x48}, {.addr=0x4372, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x4373, .a=0xde, .x=0x6a, .y=0xcf, .sp=0x82, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4371, .value=0x48}, {.addr=0x4372, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x4371, .value=0x48, .type=IO_READ},
        {.addr=0x4372, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0098) {
    const struct CPU_State initial_cpu = {.pc=0xf5ec, .a=0x95, .x=0x50, .y=0x25, .sp=0x03, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ec, .value=0x48}, {.addr=0xf5ed, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xf5ee, .a=0x29, .x=0x50, .y=0x25, .sp=0x03, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf5ec, .value=0x48}, {.addr=0xf5ed, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xf5ec, .value=0x48, .type=IO_READ},
        {.addr=0xf5ed, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0099) {
    const struct CPU_State initial_cpu = {.pc=0xfc70, .a=0x67, .x=0x53, .y=0x7e, .sp=0xad, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xfc70, .value=0x48}, {.addr=0xfc71, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xfc72, .a=0x20, .x=0x53, .y=0x7e, .sp=0xad, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfc70, .value=0x48}, {.addr=0xfc71, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xfc70, .value=0x48, .type=IO_READ},
        {.addr=0xfc71, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009A) {
    const struct CPU_State initial_cpu = {.pc=0xaed5, .a=0x1f, .x=0x92, .y=0xc6, .sp=0x0e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xaed5, .value=0x48}, {.addr=0xaed6, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xaed7, .a=0x6c, .x=0x92, .y=0xc6, .sp=0x0e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xaed5, .value=0x48}, {.addr=0xaed6, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xaed5, .value=0x48, .type=IO_READ},
        {.addr=0xaed6, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009B) {
    const struct CPU_State initial_cpu = {.pc=0xfbb1, .a=0xc1, .x=0x9b, .y=0x3b, .sp=0x3f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb1, .value=0x48}, {.addr=0xfbb2, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xfbb3, .a=0x55, .x=0x9b, .y=0x3b, .sp=0x3f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfbb1, .value=0x48}, {.addr=0xfbb2, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xfbb1, .value=0x48, .type=IO_READ},
        {.addr=0xfbb2, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009C) {
    const struct CPU_State initial_cpu = {.pc=0x37b9, .a=0x64, .x=0x38, .y=0x8b, .sp=0x36, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x37b9, .value=0x48}, {.addr=0x37ba, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37bb, .a=0x19, .x=0x38, .y=0x8b, .sp=0x36, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x37b9, .value=0x48}, {.addr=0x37ba, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37b9, .value=0x48, .type=IO_READ},
        {.addr=0x37ba, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009D) {
    const struct CPU_State initial_cpu = {.pc=0x1b99, .a=0xec, .x=0x8c, .y=0x0e, .sp=0xed, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1b99, .value=0x48}, {.addr=0x1b9a, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x1b9b, .a=0xe5, .x=0x8c, .y=0x0e, .sp=0xed, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1b99, .value=0x48}, {.addr=0x1b9a, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x1b99, .value=0x48, .type=IO_READ},
        {.addr=0x1b9a, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009E) {
    const struct CPU_State initial_cpu = {.pc=0xb3cb, .a=0x6d, .x=0xc6, .y=0x1c, .sp=0xe6, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb3cb, .value=0x48}, {.addr=0xb3cc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb3cd, .a=0x11, .x=0xc6, .y=0x1c, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb3cb, .value=0x48}, {.addr=0xb3cc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb3cb, .value=0x48, .type=IO_READ},
        {.addr=0xb3cc, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_009F) {
    const struct CPU_State initial_cpu = {.pc=0x7605, .a=0x21, .x=0xd8, .y=0x3b, .sp=0x39, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7605, .value=0x48}, {.addr=0x7606, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x7607, .a=0xa2, .x=0xd8, .y=0x3b, .sp=0x39, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7605, .value=0x48}, {.addr=0x7606, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x7605, .value=0x48, .type=IO_READ},
        {.addr=0x7606, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x1915, .a=0xb2, .x=0x74, .y=0xc4, .sp=0x73, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1915, .value=0x48}, {.addr=0x1916, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x1917, .a=0x61, .x=0x74, .y=0xc4, .sp=0x73, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1915, .value=0x48}, {.addr=0x1916, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x1915, .value=0x48, .type=IO_READ},
        {.addr=0x1916, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x53cc, .a=0x36, .x=0xb8, .y=0xa5, .sp=0xd7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x53cc, .value=0x48}, {.addr=0x53cd, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x53ce, .a=0xe1, .x=0xb8, .y=0xa5, .sp=0xd7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x53cc, .value=0x48}, {.addr=0x53cd, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x53cc, .value=0x48, .type=IO_READ},
        {.addr=0x53cd, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x9583, .a=0x77, .x=0xae, .y=0x99, .sp=0xfe, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9583, .value=0x48}, {.addr=0x9584, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x9585, .a=0xd3, .x=0xae, .y=0x99, .sp=0xfe, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9583, .value=0x48}, {.addr=0x9584, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x9583, .value=0x48, .type=IO_READ},
        {.addr=0x9584, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xfd67, .a=0xd2, .x=0x53, .y=0x82, .sp=0x21, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfd67, .value=0x48}, {.addr=0xfd68, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfd69, .a=0x7d, .x=0x53, .y=0x82, .sp=0x21, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfd67, .value=0x48}, {.addr=0xfd68, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfd67, .value=0x48, .type=IO_READ},
        {.addr=0xfd68, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xe915, .a=0x5e, .x=0xcf, .y=0x87, .sp=0x68, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe915, .value=0x48}, {.addr=0xe916, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xe917, .a=0xa5, .x=0xcf, .y=0x87, .sp=0x68, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe915, .value=0x48}, {.addr=0xe916, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xe915, .value=0x48, .type=IO_READ},
        {.addr=0xe916, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x9f55, .a=0x97, .x=0x6a, .y=0x3b, .sp=0x76, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f55, .value=0x48}, {.addr=0x9f56, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x9f57, .a=0x25, .x=0x6a, .y=0x3b, .sp=0x76, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9f55, .value=0x48}, {.addr=0x9f56, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x9f55, .value=0x48, .type=IO_READ},
        {.addr=0x9f56, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x2898, .a=0x3b, .x=0x00, .y=0xe4, .sp=0x66, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2898, .value=0x48}, {.addr=0x2899, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x289a, .a=0x2f, .x=0x00, .y=0xe4, .sp=0x66, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2898, .value=0x48}, {.addr=0x2899, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x2898, .value=0x48, .type=IO_READ},
        {.addr=0x2899, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x2763, .a=0x74, .x=0x7a, .y=0x6c, .sp=0x8a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2763, .value=0x48}, {.addr=0x2764, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2765, .a=0x32, .x=0x7a, .y=0x6c, .sp=0x8a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2763, .value=0x48}, {.addr=0x2764, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2763, .value=0x48, .type=IO_READ},
        {.addr=0x2764, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x1351, .a=0xf0, .x=0x7b, .y=0xbb, .sp=0x40, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x1351, .value=0x48}, {.addr=0x1352, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x1353, .a=0xb9, .x=0x7b, .y=0xbb, .sp=0x40, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x1351, .value=0x48}, {.addr=0x1352, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1351, .value=0x48, .type=IO_READ},
        {.addr=0x1352, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xdf90, .a=0xb3, .x=0xd1, .y=0xd4, .sp=0xc7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xdf90, .value=0x48}, {.addr=0xdf91, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xdf92, .a=0x1b, .x=0xd1, .y=0xd4, .sp=0xc7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdf90, .value=0x48}, {.addr=0xdf91, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xdf90, .value=0x48, .type=IO_READ},
        {.addr=0xdf91, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x9e84, .a=0xd4, .x=0x42, .y=0x90, .sp=0x21, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9e84, .value=0x48}, {.addr=0x9e85, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x9e86, .a=0xbb, .x=0x42, .y=0x90, .sp=0x21, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9e84, .value=0x48}, {.addr=0x9e85, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x9e84, .value=0x48, .type=IO_READ},
        {.addr=0x9e85, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3431, .a=0x7c, .x=0xa0, .y=0x4f, .sp=0x1e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3431, .value=0x48}, {.addr=0x3432, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x3433, .a=0xaf, .x=0xa0, .y=0x4f, .sp=0x1e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3431, .value=0x48}, {.addr=0x3432, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x3431, .value=0x48, .type=IO_READ},
        {.addr=0x3432, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x30ff, .a=0x39, .x=0x4e, .y=0xc3, .sp=0x3d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x30ff, .value=0x48}, {.addr=0x3100, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x3101, .a=0x26, .x=0x4e, .y=0xc3, .sp=0x3d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x30ff, .value=0x48}, {.addr=0x3100, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x30ff, .value=0x48, .type=IO_READ},
        {.addr=0x3100, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x2581, .a=0xb2, .x=0xff, .y=0xd3, .sp=0x5a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2581, .value=0x48}, {.addr=0x2582, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x2583, .a=0xc0, .x=0xff, .y=0xd3, .sp=0x5a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2581, .value=0x48}, {.addr=0x2582, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x2581, .value=0x48, .type=IO_READ},
        {.addr=0x2582, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x10f0, .a=0x17, .x=0xf8, .y=0x8f, .sp=0xa0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x10f0, .value=0x48}, {.addr=0x10f1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x10f2, .a=0x2b, .x=0xf8, .y=0x8f, .sp=0xa0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x10f0, .value=0x48}, {.addr=0x10f1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x10f0, .value=0x48, .type=IO_READ},
        {.addr=0x10f1, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x621c, .a=0x71, .x=0xce, .y=0xaa, .sp=0xee, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x621c, .value=0x48}, {.addr=0x621d, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x621e, .a=0x54, .x=0xce, .y=0xaa, .sp=0xee, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x621c, .value=0x48}, {.addr=0x621d, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x621c, .value=0x48, .type=IO_READ},
        {.addr=0x621d, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x2eb1, .a=0xf3, .x=0x2a, .y=0x1f, .sp=0xde, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2eb1, .value=0x48}, {.addr=0x2eb2, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x2eb3, .a=0x77, .x=0x2a, .y=0x1f, .sp=0xde, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2eb1, .value=0x48}, {.addr=0x2eb2, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x2eb1, .value=0x48, .type=IO_READ},
        {.addr=0x2eb2, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xb09e, .a=0x95, .x=0xb1, .y=0xe3, .sp=0x98, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xb09e, .value=0x48}, {.addr=0xb09f, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb0a0, .a=0x23, .x=0xb1, .y=0xe3, .sp=0x98, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb09e, .value=0x48}, {.addr=0xb09f, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb09e, .value=0x48, .type=IO_READ},
        {.addr=0xb09f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x1e5c, .a=0xbf, .x=0xb0, .y=0x6e, .sp=0x06, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1e5c, .value=0x48}, {.addr=0x1e5d, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x1e5e, .a=0x0f, .x=0xb0, .y=0x6e, .sp=0x06, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1e5c, .value=0x48}, {.addr=0x1e5d, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x1e5c, .value=0x48, .type=IO_READ},
        {.addr=0x1e5d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x9af4, .a=0x97, .x=0xe0, .y=0xe6, .sp=0x63, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9af4, .value=0x48}, {.addr=0x9af5, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x9af6, .a=0x22, .x=0xe0, .y=0xe6, .sp=0x63, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9af4, .value=0x48}, {.addr=0x9af5, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x9af4, .value=0x48, .type=IO_READ},
        {.addr=0x9af5, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xc2fc, .a=0x78, .x=0xd4, .y=0x2f, .sp=0x38, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc2fc, .value=0x48}, {.addr=0xc2fd, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xc2fe, .a=0x2b, .x=0xd4, .y=0x2f, .sp=0x38, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc2fc, .value=0x48}, {.addr=0xc2fd, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xc2fc, .value=0x48, .type=IO_READ},
        {.addr=0xc2fd, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x4311, .a=0xda, .x=0x0f, .y=0xa8, .sp=0x2d, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4311, .value=0x48}, {.addr=0x4312, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x4313, .a=0x89, .x=0x0f, .y=0xa8, .sp=0x2d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4311, .value=0x48}, {.addr=0x4312, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x4311, .value=0x48, .type=IO_READ},
        {.addr=0x4312, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4b0a, .a=0x5f, .x=0xb6, .y=0xf1, .sp=0x8f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0a, .value=0x48}, {.addr=0x4b0b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4b0c, .a=0xb2, .x=0xb6, .y=0xf1, .sp=0x8f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4b0a, .value=0x48}, {.addr=0x4b0b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4b0a, .value=0x48, .type=IO_READ},
        {.addr=0x4b0b, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xeea7, .a=0x48, .x=0xbe, .y=0xe4, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xeea7, .value=0x48}, {.addr=0xeea8, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xeea9, .a=0x77, .x=0xbe, .y=0xe4, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeea7, .value=0x48}, {.addr=0xeea8, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xeea7, .value=0x48, .type=IO_READ},
        {.addr=0xeea8, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xa66e, .a=0x18, .x=0x2b, .y=0x45, .sp=0x7d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa66e, .value=0x48}, {.addr=0xa66f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xa670, .a=0x07, .x=0x2b, .y=0x45, .sp=0x7d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa66e, .value=0x48}, {.addr=0xa66f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xa66e, .value=0x48, .type=IO_READ},
        {.addr=0xa66f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x9185, .a=0x69, .x=0x70, .y=0x08, .sp=0x92, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9185, .value=0x48}, {.addr=0x9186, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x9187, .a=0x6e, .x=0x70, .y=0x08, .sp=0x92, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9185, .value=0x48}, {.addr=0x9186, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x9185, .value=0x48, .type=IO_READ},
        {.addr=0x9186, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x4168, .a=0xdd, .x=0xba, .y=0xba, .sp=0x12, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x4168, .value=0x48}, {.addr=0x4169, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x416a, .a=0xde, .x=0xba, .y=0xba, .sp=0x12, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4168, .value=0x48}, {.addr=0x4169, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x4168, .value=0x48, .type=IO_READ},
        {.addr=0x4169, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb974, .a=0x7d, .x=0xa5, .y=0x13, .sp=0x05, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb974, .value=0x48}, {.addr=0xb975, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xb976, .a=0xc7, .x=0xa5, .y=0x13, .sp=0x05, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb974, .value=0x48}, {.addr=0xb975, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xb974, .value=0x48, .type=IO_READ},
        {.addr=0xb975, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x4dd4, .a=0xdf, .x=0x7f, .y=0xa4, .sp=0x89, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd4, .value=0x48}, {.addr=0x4dd5, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x4dd6, .a=0xab, .x=0x7f, .y=0xa4, .sp=0x89, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4dd4, .value=0x48}, {.addr=0x4dd5, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x4dd4, .value=0x48, .type=IO_READ},
        {.addr=0x4dd5, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x5e70, .a=0x56, .x=0xae, .y=0x4e, .sp=0xc0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5e70, .value=0x48}, {.addr=0x5e71, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5e72, .a=0x64, .x=0xae, .y=0x4e, .sp=0xc0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5e70, .value=0x48}, {.addr=0x5e71, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5e70, .value=0x48, .type=IO_READ},
        {.addr=0x5e71, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xf971, .a=0x12, .x=0x4f, .y=0xc1, .sp=0x19, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf971, .value=0x48}, {.addr=0xf972, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf973, .a=0xbe, .x=0x4f, .y=0xc1, .sp=0x19, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf971, .value=0x48}, {.addr=0xf972, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf971, .value=0x48, .type=IO_READ},
        {.addr=0xf972, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xaa1a, .a=0x4c, .x=0x68, .y=0x0c, .sp=0x3c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1a, .value=0x48}, {.addr=0xaa1b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xaa1c, .a=0x84, .x=0x68, .y=0x0c, .sp=0x3c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xaa1a, .value=0x48}, {.addr=0xaa1b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xaa1a, .value=0x48, .type=IO_READ},
        {.addr=0xaa1b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xa11b, .a=0x7f, .x=0xd0, .y=0xc8, .sp=0x81, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa11b, .value=0x48}, {.addr=0xa11c, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xa11d, .a=0xf7, .x=0xd0, .y=0xc8, .sp=0x81, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa11b, .value=0x48}, {.addr=0xa11c, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xa11b, .value=0x48, .type=IO_READ},
        {.addr=0xa11c, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x31cb, .a=0x47, .x=0xfa, .y=0xe0, .sp=0x81, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x31cb, .value=0x48}, {.addr=0x31cc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x31cd, .a=0x01, .x=0xfa, .y=0xe0, .sp=0x81, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x31cb, .value=0x48}, {.addr=0x31cc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x31cb, .value=0x48, .type=IO_READ},
        {.addr=0x31cc, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x6086, .a=0xee, .x=0xaf, .y=0xb6, .sp=0x9f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6086, .value=0x48}, {.addr=0x6087, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x6088, .a=0x6d, .x=0xaf, .y=0xb6, .sp=0x9f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6086, .value=0x48}, {.addr=0x6087, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x6086, .value=0x48, .type=IO_READ},
        {.addr=0x6087, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5078, .a=0xb8, .x=0x07, .y=0x4d, .sp=0xcf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x5078, .value=0x48}, {.addr=0x5079, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x507a, .a=0x62, .x=0x07, .y=0x4d, .sp=0xcf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5078, .value=0x48}, {.addr=0x5079, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x5078, .value=0x48, .type=IO_READ},
        {.addr=0x5079, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x4e40, .a=0xd1, .x=0xfe, .y=0x67, .sp=0xb5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4e40, .value=0x48}, {.addr=0x4e41, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4e42, .a=0x8b, .x=0xfe, .y=0x67, .sp=0xb5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4e40, .value=0x48}, {.addr=0x4e41, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4e40, .value=0x48, .type=IO_READ},
        {.addr=0x4e41, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x00e6, .a=0x5b, .x=0x15, .y=0x0c, .sp=0xbe, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x48}, {.addr=0x00e7, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x00e8, .a=0xbf, .x=0x15, .y=0x0c, .sp=0xbe, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x48}, {.addr=0x00e7, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x00e6, .value=0x48, .type=IO_READ},
        {.addr=0x00e7, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x61a9, .a=0x13, .x=0xbd, .y=0xd0, .sp=0xef, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x61a9, .value=0x48}, {.addr=0x61aa, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x61ab, .a=0xfc, .x=0xbd, .y=0xd0, .sp=0xef, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x61a9, .value=0x48}, {.addr=0x61aa, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x61a9, .value=0x48, .type=IO_READ},
        {.addr=0x61aa, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb35f, .a=0x76, .x=0xe2, .y=0x63, .sp=0xfb, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb35f, .value=0x48}, {.addr=0xb360, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xb361, .a=0x53, .x=0xe2, .y=0x63, .sp=0xfb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb35f, .value=0x48}, {.addr=0xb360, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xb35f, .value=0x48, .type=IO_READ},
        {.addr=0xb360, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x71c8, .a=0xa7, .x=0xd8, .y=0x4a, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x71c8, .value=0x48}, {.addr=0x71c9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x71ca, .a=0xaa, .x=0xd8, .y=0x4a, .sp=0x62, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x71c8, .value=0x48}, {.addr=0x71c9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x71c8, .value=0x48, .type=IO_READ},
        {.addr=0x71c9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x0efd, .a=0x46, .x=0x42, .y=0x04, .sp=0xbf, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0efd, .value=0x48}, {.addr=0x0efe, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x0eff, .a=0xae, .x=0x42, .y=0x04, .sp=0xbf, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0efd, .value=0x48}, {.addr=0x0efe, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x0efd, .value=0x48, .type=IO_READ},
        {.addr=0x0efe, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xd181, .a=0x9b, .x=0xf6, .y=0x73, .sp=0x4a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd181, .value=0x48}, {.addr=0xd182, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd183, .a=0xa7, .x=0xf6, .y=0x73, .sp=0x4a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd181, .value=0x48}, {.addr=0xd182, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd181, .value=0x48, .type=IO_READ},
        {.addr=0xd182, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xa7d8, .a=0x06, .x=0x2d, .y=0xa5, .sp=0xca, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa7d8, .value=0x48}, {.addr=0xa7d9, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xa7da, .a=0x31, .x=0x2d, .y=0xa5, .sp=0xca, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa7d8, .value=0x48}, {.addr=0xa7d9, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xa7d8, .value=0x48, .type=IO_READ},
        {.addr=0xa7d9, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xf1ed, .a=0x4c, .x=0x9c, .y=0xf2, .sp=0xc3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ed, .value=0x48}, {.addr=0xf1ee, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xf1ef, .a=0xb4, .x=0x9c, .y=0xf2, .sp=0xc3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf1ed, .value=0x48}, {.addr=0xf1ee, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xf1ed, .value=0x48, .type=IO_READ},
        {.addr=0xf1ee, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x109c, .a=0x9c, .x=0xec, .y=0x64, .sp=0x89, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x109c, .value=0x48}, {.addr=0x109d, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x109e, .a=0xe4, .x=0xec, .y=0x64, .sp=0x89, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x109c, .value=0x48}, {.addr=0x109d, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x109c, .value=0x48, .type=IO_READ},
        {.addr=0x109d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x4efa, .a=0x08, .x=0xb1, .y=0xa1, .sp=0xf3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4efa, .value=0x48}, {.addr=0x4efb, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x4efc, .a=0x2d, .x=0xb1, .y=0xa1, .sp=0xf3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4efa, .value=0x48}, {.addr=0x4efb, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4efa, .value=0x48, .type=IO_READ},
        {.addr=0x4efb, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xf15a, .a=0x6e, .x=0xd8, .y=0x3a, .sp=0xb3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xf15a, .value=0x48}, {.addr=0xf15b, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf15c, .a=0x89, .x=0xd8, .y=0x3a, .sp=0xb3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf15a, .value=0x48}, {.addr=0xf15b, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf15a, .value=0x48, .type=IO_READ},
        {.addr=0xf15b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x138e, .a=0xa6, .x=0x53, .y=0x83, .sp=0x99, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x138e, .value=0x48}, {.addr=0x138f, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1390, .a=0x76, .x=0x53, .y=0x83, .sp=0x99, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x138e, .value=0x48}, {.addr=0x138f, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x138e, .value=0x48, .type=IO_READ},
        {.addr=0x138f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x3b3d, .a=0xe9, .x=0x68, .y=0x5b, .sp=0xc8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b3d, .value=0x48}, {.addr=0x3b3e, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x3b3f, .a=0xf9, .x=0x68, .y=0x5b, .sp=0xc8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3b3d, .value=0x48}, {.addr=0x3b3e, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x3b3d, .value=0x48, .type=IO_READ},
        {.addr=0x3b3e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xa0e6, .a=0xff, .x=0xae, .y=0x1f, .sp=0x43, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e6, .value=0x48}, {.addr=0xa0e7, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xa0e8, .a=0x98, .x=0xae, .y=0x1f, .sp=0x43, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa0e6, .value=0x48}, {.addr=0xa0e7, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xa0e6, .value=0x48, .type=IO_READ},
        {.addr=0xa0e7, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x0f3b, .a=0x07, .x=0xd2, .y=0xd1, .sp=0xfb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0f3b, .value=0x48}, {.addr=0x0f3c, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x0f3d, .a=0x25, .x=0xd2, .y=0xd1, .sp=0xfb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0f3b, .value=0x48}, {.addr=0x0f3c, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x0f3b, .value=0x48, .type=IO_READ},
        {.addr=0x0f3c, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xc0fe, .a=0x4f, .x=0xff, .y=0xcd, .sp=0x44, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fe, .value=0x48}, {.addr=0xc0ff, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc100, .a=0x6f, .x=0xff, .y=0xcd, .sp=0x44, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc0fe, .value=0x48}, {.addr=0xc0ff, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc0fe, .value=0x48, .type=IO_READ},
        {.addr=0xc0ff, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x847e, .a=0x67, .x=0xa8, .y=0x0b, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x847e, .value=0x48}, {.addr=0x847f, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x8480, .a=0xbc, .x=0xa8, .y=0x0b, .sp=0x68, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x847e, .value=0x48}, {.addr=0x847f, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x847e, .value=0x48, .type=IO_READ},
        {.addr=0x847f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xb190, .a=0xfb, .x=0x2e, .y=0xb3, .sp=0xe1, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb190, .value=0x48}, {.addr=0xb191, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb192, .a=0x9f, .x=0x2e, .y=0xb3, .sp=0xe1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb190, .value=0x48}, {.addr=0xb191, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb190, .value=0x48, .type=IO_READ},
        {.addr=0xb191, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xe9da, .a=0xd5, .x=0x78, .y=0x89, .sp=0xd6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe9da, .value=0x48}, {.addr=0xe9db, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe9dc, .a=0xc9, .x=0x78, .y=0x89, .sp=0xd6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe9da, .value=0x48}, {.addr=0xe9db, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe9da, .value=0x48, .type=IO_READ},
        {.addr=0xe9db, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x99b9, .a=0x0d, .x=0x6a, .y=0x07, .sp=0x16, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x99b9, .value=0x48}, {.addr=0x99ba, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x99bb, .a=0xbb, .x=0x6a, .y=0x07, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x99b9, .value=0x48}, {.addr=0x99ba, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x99b9, .value=0x48, .type=IO_READ},
        {.addr=0x99ba, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xae08, .a=0xca, .x=0x4b, .y=0x06, .sp=0x82, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xae08, .value=0x48}, {.addr=0xae09, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xae0a, .a=0x90, .x=0x4b, .y=0x06, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xae08, .value=0x48}, {.addr=0xae09, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xae08, .value=0x48, .type=IO_READ},
        {.addr=0xae09, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x1b14, .a=0x6d, .x=0xef, .y=0xf6, .sp=0x8b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x1b14, .value=0x48}, {.addr=0x1b15, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x1b16, .a=0x8a, .x=0xef, .y=0xf6, .sp=0x8b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1b14, .value=0x48}, {.addr=0x1b15, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x1b14, .value=0x48, .type=IO_READ},
        {.addr=0x1b15, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x479a, .a=0x19, .x=0x0d, .y=0x61, .sp=0x0f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x479a, .value=0x48}, {.addr=0x479b, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x479c, .a=0x68, .x=0x0d, .y=0x61, .sp=0x0f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x479a, .value=0x48}, {.addr=0x479b, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x479a, .value=0x48, .type=IO_READ},
        {.addr=0x479b, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x505c, .a=0x1e, .x=0x67, .y=0x27, .sp=0x2f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x505c, .value=0x48}, {.addr=0x505d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x505e, .a=0x4c, .x=0x67, .y=0x27, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x505c, .value=0x48}, {.addr=0x505d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x505c, .value=0x48, .type=IO_READ},
        {.addr=0x505d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x94c3, .a=0x89, .x=0x07, .y=0xe2, .sp=0x7b, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x94c3, .value=0x48}, {.addr=0x94c4, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x94c5, .a=0xbb, .x=0x07, .y=0xe2, .sp=0x7b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x94c3, .value=0x48}, {.addr=0x94c4, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x94c3, .value=0x48, .type=IO_READ},
        {.addr=0x94c4, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x775b, .a=0x2a, .x=0x18, .y=0xdf, .sp=0x52, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x775b, .value=0x48}, {.addr=0x775c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x775d, .a=0xf6, .x=0x18, .y=0xdf, .sp=0x52, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x775b, .value=0x48}, {.addr=0x775c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x775b, .value=0x48, .type=IO_READ},
        {.addr=0x775c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xc36b, .a=0x76, .x=0x4a, .y=0x00, .sp=0xd5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc36b, .value=0x48}, {.addr=0xc36c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xc36d, .a=0x15, .x=0x4a, .y=0x00, .sp=0xd5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc36b, .value=0x48}, {.addr=0xc36c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xc36b, .value=0x48, .type=IO_READ},
        {.addr=0xc36c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc4d1, .a=0x7d, .x=0xee, .y=0x2b, .sp=0xe2, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d1, .value=0x48}, {.addr=0xc4d2, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xc4d3, .a=0xe9, .x=0xee, .y=0x2b, .sp=0xe2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc4d1, .value=0x48}, {.addr=0xc4d2, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xc4d1, .value=0x48, .type=IO_READ},
        {.addr=0xc4d2, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xd4e1, .a=0x21, .x=0x9f, .y=0x87, .sp=0x4b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e1, .value=0x48}, {.addr=0xd4e2, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xd4e3, .a=0x2f, .x=0x9f, .y=0x87, .sp=0x4b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd4e1, .value=0x48}, {.addr=0xd4e2, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xd4e1, .value=0x48, .type=IO_READ},
        {.addr=0xd4e2, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x54d1, .a=0xe8, .x=0xd8, .y=0xf3, .sp=0x4e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x54d1, .value=0x48}, {.addr=0x54d2, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x54d3, .a=0xa4, .x=0xd8, .y=0xf3, .sp=0x4e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x54d1, .value=0x48}, {.addr=0x54d2, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x54d1, .value=0x48, .type=IO_READ},
        {.addr=0x54d2, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x8729, .a=0xfe, .x=0x8e, .y=0x0a, .sp=0x8b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8729, .value=0x48}, {.addr=0x872a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x872b, .a=0xd9, .x=0x8e, .y=0x0a, .sp=0x8b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8729, .value=0x48}, {.addr=0x872a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x8729, .value=0x48, .type=IO_READ},
        {.addr=0x872a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x33e0, .a=0x59, .x=0xba, .y=0x26, .sp=0xee, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x33e0, .value=0x48}, {.addr=0x33e1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33e2, .a=0x04, .x=0xba, .y=0x26, .sp=0xee, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x33e0, .value=0x48}, {.addr=0x33e1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33e0, .value=0x48, .type=IO_READ},
        {.addr=0x33e1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x26f7, .a=0x58, .x=0x3a, .y=0xda, .sp=0x95, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x26f7, .value=0x48}, {.addr=0x26f8, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x26f9, .a=0xb4, .x=0x3a, .y=0xda, .sp=0x95, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x26f7, .value=0x48}, {.addr=0x26f8, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x26f7, .value=0x48, .type=IO_READ},
        {.addr=0x26f8, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xfd68, .a=0xb3, .x=0xde, .y=0xd4, .sp=0xc3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xfd68, .value=0x48}, {.addr=0xfd69, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xfd6a, .a=0x9d, .x=0xde, .y=0xd4, .sp=0xc3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfd68, .value=0x48}, {.addr=0xfd69, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xfd68, .value=0x48, .type=IO_READ},
        {.addr=0xfd69, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x143f, .a=0xcb, .x=0x80, .y=0x1d, .sp=0x4a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x143f, .value=0x48}, {.addr=0x1440, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1441, .a=0x74, .x=0x80, .y=0x1d, .sp=0x4a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x143f, .value=0x48}, {.addr=0x1440, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x143f, .value=0x48, .type=IO_READ},
        {.addr=0x1440, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x96b4, .a=0xe3, .x=0x42, .y=0x3d, .sp=0xd4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x96b4, .value=0x48}, {.addr=0x96b5, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x96b6, .a=0x98, .x=0x42, .y=0x3d, .sp=0xd4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x96b4, .value=0x48}, {.addr=0x96b5, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x96b4, .value=0x48, .type=IO_READ},
        {.addr=0x96b5, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x136f, .a=0x2e, .x=0x4c, .y=0x22, .sp=0xb9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x136f, .value=0x48}, {.addr=0x1370, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x1371, .a=0x8c, .x=0x4c, .y=0x22, .sp=0xb9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x136f, .value=0x48}, {.addr=0x1370, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x136f, .value=0x48, .type=IO_READ},
        {.addr=0x1370, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xe2df, .a=0x73, .x=0x1d, .y=0x37, .sp=0x81, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe2df, .value=0x48}, {.addr=0xe2e0, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe2e1, .a=0xfe, .x=0x1d, .y=0x37, .sp=0x81, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe2df, .value=0x48}, {.addr=0xe2e0, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe2df, .value=0x48, .type=IO_READ},
        {.addr=0xe2e0, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xd2d2, .a=0x01, .x=0x2f, .y=0xfe, .sp=0x74, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d2, .value=0x48}, {.addr=0xd2d3, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xd2d4, .a=0xe8, .x=0x2f, .y=0xfe, .sp=0x74, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd2d2, .value=0x48}, {.addr=0xd2d3, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xd2d2, .value=0x48, .type=IO_READ},
        {.addr=0xd2d3, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xef9d, .a=0xcd, .x=0xdd, .y=0xfa, .sp=0xcf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xef9d, .value=0x48}, {.addr=0xef9e, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xef9f, .a=0x07, .x=0xdd, .y=0xfa, .sp=0xcf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xef9d, .value=0x48}, {.addr=0xef9e, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xef9d, .value=0x48, .type=IO_READ},
        {.addr=0xef9e, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xf4b8, .a=0x67, .x=0xe7, .y=0x00, .sp=0xfd, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b8, .value=0x48}, {.addr=0xf4b9, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xf4ba, .a=0x60, .x=0xe7, .y=0x00, .sp=0xfd, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf4b8, .value=0x48}, {.addr=0xf4b9, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xf4b8, .value=0x48, .type=IO_READ},
        {.addr=0xf4b9, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x9d31, .a=0xb2, .x=0x45, .y=0x9d, .sp=0xb4, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9d31, .value=0x48}, {.addr=0x9d32, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x9d33, .a=0xa4, .x=0x45, .y=0x9d, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9d31, .value=0x48}, {.addr=0x9d32, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x9d31, .value=0x48, .type=IO_READ},
        {.addr=0x9d32, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x4f17, .a=0x7d, .x=0x6f, .y=0xd0, .sp=0x64, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4f17, .value=0x48}, {.addr=0x4f18, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x4f19, .a=0x0a, .x=0x6f, .y=0xd0, .sp=0x64, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4f17, .value=0x48}, {.addr=0x4f18, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x4f17, .value=0x48, .type=IO_READ},
        {.addr=0x4f18, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x3ef9, .a=0xec, .x=0x7a, .y=0x4a, .sp=0x6c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef9, .value=0x48}, {.addr=0x3efa, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x3efb, .a=0x89, .x=0x7a, .y=0x4a, .sp=0x6c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3ef9, .value=0x48}, {.addr=0x3efa, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x3ef9, .value=0x48, .type=IO_READ},
        {.addr=0x3efa, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0ba5, .a=0xf6, .x=0x3b, .y=0xfe, .sp=0xf6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba5, .value=0x48}, {.addr=0x0ba6, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x0ba7, .a=0xa2, .x=0x3b, .y=0xfe, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0ba5, .value=0x48}, {.addr=0x0ba6, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x0ba5, .value=0x48, .type=IO_READ},
        {.addr=0x0ba6, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8e8c, .a=0xf3, .x=0x34, .y=0xe8, .sp=0x08, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8e8c, .value=0x48}, {.addr=0x8e8d, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x8e8e, .a=0xa3, .x=0x34, .y=0xe8, .sp=0x08, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8e8c, .value=0x48}, {.addr=0x8e8d, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x8e8c, .value=0x48, .type=IO_READ},
        {.addr=0x8e8d, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x3147, .a=0xbc, .x=0xc6, .y=0x7f, .sp=0x3e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3147, .value=0x48}, {.addr=0x3148, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x3149, .a=0x27, .x=0xc6, .y=0x7f, .sp=0x3e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3147, .value=0x48}, {.addr=0x3148, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x3147, .value=0x48, .type=IO_READ},
        {.addr=0x3148, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xa21e, .a=0x34, .x=0x18, .y=0x7e, .sp=0x04, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa21e, .value=0x48}, {.addr=0xa21f, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xa220, .a=0xa3, .x=0x18, .y=0x7e, .sp=0x04, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa21e, .value=0x48}, {.addr=0xa21f, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xa21e, .value=0x48, .type=IO_READ},
        {.addr=0xa21f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5310, .a=0x15, .x=0xb5, .y=0xd4, .sp=0xdb, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5310, .value=0x48}, {.addr=0x5311, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x5312, .a=0x16, .x=0xb5, .y=0xd4, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5310, .value=0x48}, {.addr=0x5311, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x5310, .value=0x48, .type=IO_READ},
        {.addr=0x5311, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xadb4, .a=0x18, .x=0x78, .y=0x83, .sp=0x71, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xadb4, .value=0x48}, {.addr=0xadb5, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xadb6, .a=0x8b, .x=0x78, .y=0x83, .sp=0x71, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xadb4, .value=0x48}, {.addr=0xadb5, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xadb4, .value=0x48, .type=IO_READ},
        {.addr=0xadb5, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x954d, .a=0x90, .x=0x49, .y=0x15, .sp=0x3a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x954d, .value=0x48}, {.addr=0x954e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x954f, .a=0xa4, .x=0x49, .y=0x15, .sp=0x3a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x954d, .value=0x48}, {.addr=0x954e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x954d, .value=0x48, .type=IO_READ},
        {.addr=0x954e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xf7c6, .a=0x49, .x=0x02, .y=0x95, .sp=0xbb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c6, .value=0x48}, {.addr=0xf7c7, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xf7c8, .a=0x8b, .x=0x02, .y=0x95, .sp=0xbb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf7c6, .value=0x48}, {.addr=0xf7c7, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xf7c6, .value=0x48, .type=IO_READ},
        {.addr=0xf7c7, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0xeb, .x=0xea, .y=0xf7, .sp=0x64, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0x48}, {.addr=0x0747, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x0748, .a=0xa1, .x=0xea, .y=0xf7, .sp=0x64, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0x48}, {.addr=0x0747, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x48, .type=IO_READ},
        {.addr=0x0747, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x938d, .a=0xf1, .x=0x15, .y=0x6f, .sp=0x22, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x938d, .value=0x48}, {.addr=0x938e, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x938f, .a=0x85, .x=0x15, .y=0x6f, .sp=0x22, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x938d, .value=0x48}, {.addr=0x938e, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x938d, .value=0x48, .type=IO_READ},
        {.addr=0x938e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0x8a, .x=0x38, .y=0x63, .sp=0x68, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8d, .value=0x48}, {.addr=0xbd8e, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xbd8f, .a=0x1b, .x=0x38, .y=0x63, .sp=0x68, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbd8d, .value=0x48}, {.addr=0xbd8e, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0x48, .type=IO_READ},
        {.addr=0xbd8e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xc170, .a=0x22, .x=0x21, .y=0x5f, .sp=0xf4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xc170, .value=0x48}, {.addr=0xc171, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xc172, .a=0x59, .x=0x21, .y=0x5f, .sp=0xf4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc170, .value=0x48}, {.addr=0xc171, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xc170, .value=0x48, .type=IO_READ},
        {.addr=0xc171, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xf16c, .a=0x91, .x=0x79, .y=0x98, .sp=0x65, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf16c, .value=0x48}, {.addr=0xf16d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xf16e, .a=0xfa, .x=0x79, .y=0x98, .sp=0x65, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf16c, .value=0x48}, {.addr=0xf16d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xf16c, .value=0x48, .type=IO_READ},
        {.addr=0xf16d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x4ec7, .a=0xef, .x=0x5e, .y=0xaf, .sp=0x9c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec7, .value=0x48}, {.addr=0x4ec8, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x4ec9, .a=0x83, .x=0x5e, .y=0xaf, .sp=0x9c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4ec7, .value=0x48}, {.addr=0x4ec8, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x4ec7, .value=0x48, .type=IO_READ},
        {.addr=0x4ec8, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xad0e, .a=0xe0, .x=0x8d, .y=0xce, .sp=0x0f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xad0e, .value=0x48}, {.addr=0xad0f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xad10, .a=0xce, .x=0x8d, .y=0xce, .sp=0x0f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xad0e, .value=0x48}, {.addr=0xad0f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xad0e, .value=0x48, .type=IO_READ},
        {.addr=0xad0f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0100) {
    const struct CPU_State initial_cpu = {.pc=0x7cb7, .a=0xd6, .x=0x50, .y=0xb8, .sp=0x88, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7cb7, .value=0x48}, {.addr=0x7cb8, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x7cb9, .a=0x4c, .x=0x50, .y=0xb8, .sp=0x88, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7cb7, .value=0x48}, {.addr=0x7cb8, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7cb7, .value=0x48, .type=IO_READ},
        {.addr=0x7cb8, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0101) {
    const struct CPU_State initial_cpu = {.pc=0x2ba6, .a=0x09, .x=0x62, .y=0x89, .sp=0x76, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba6, .value=0x48}, {.addr=0x2ba7, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x2ba8, .a=0xad, .x=0x62, .y=0x89, .sp=0x76, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2ba6, .value=0x48}, {.addr=0x2ba7, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x2ba6, .value=0x48, .type=IO_READ},
        {.addr=0x2ba7, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0102) {
    const struct CPU_State initial_cpu = {.pc=0x643c, .a=0x67, .x=0x19, .y=0x77, .sp=0xd2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x643c, .value=0x48}, {.addr=0x643d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x643e, .a=0x1a, .x=0x19, .y=0x77, .sp=0xd2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x643c, .value=0x48}, {.addr=0x643d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x643c, .value=0x48, .type=IO_READ},
        {.addr=0x643d, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0103) {
    const struct CPU_State initial_cpu = {.pc=0x9612, .a=0x30, .x=0x90, .y=0x64, .sp=0x9d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9612, .value=0x48}, {.addr=0x9613, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9614, .a=0x16, .x=0x90, .y=0x64, .sp=0x9d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9612, .value=0x48}, {.addr=0x9613, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9612, .value=0x48, .type=IO_READ},
        {.addr=0x9613, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0104) {
    const struct CPU_State initial_cpu = {.pc=0x361e, .a=0xcb, .x=0xca, .y=0x19, .sp=0x71, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x361e, .value=0x48}, {.addr=0x361f, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x3620, .a=0x3f, .x=0xca, .y=0x19, .sp=0x71, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x361e, .value=0x48}, {.addr=0x361f, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x361e, .value=0x48, .type=IO_READ},
        {.addr=0x361f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0105) {
    const struct CPU_State initial_cpu = {.pc=0x538c, .a=0xdf, .x=0x80, .y=0x8a, .sp=0x50, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x538c, .value=0x48}, {.addr=0x538d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x538e, .a=0x46, .x=0x80, .y=0x8a, .sp=0x50, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x538c, .value=0x48}, {.addr=0x538d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x538c, .value=0x48, .type=IO_READ},
        {.addr=0x538d, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0106) {
    const struct CPU_State initial_cpu = {.pc=0x276e, .a=0xbe, .x=0x8f, .y=0xf6, .sp=0x52, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x276e, .value=0x48}, {.addr=0x276f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0xb4, .x=0x8f, .y=0xf6, .sp=0x52, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x276e, .value=0x48}, {.addr=0x276f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x276e, .value=0x48, .type=IO_READ},
        {.addr=0x276f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0107) {
    const struct CPU_State initial_cpu = {.pc=0x2df3, .a=0x8e, .x=0xe3, .y=0x99, .sp=0x25, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2df3, .value=0x48}, {.addr=0x2df4, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x2df5, .a=0x0c, .x=0xe3, .y=0x99, .sp=0x25, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2df3, .value=0x48}, {.addr=0x2df4, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2df3, .value=0x48, .type=IO_READ},
        {.addr=0x2df4, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0108) {
    const struct CPU_State initial_cpu = {.pc=0x61c3, .a=0x85, .x=0xdb, .y=0x10, .sp=0x80, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x61c3, .value=0x48}, {.addr=0x61c4, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x61c5, .a=0xcf, .x=0xdb, .y=0x10, .sp=0x80, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x61c3, .value=0x48}, {.addr=0x61c4, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x61c3, .value=0x48, .type=IO_READ},
        {.addr=0x61c4, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0109) {
    const struct CPU_State initial_cpu = {.pc=0xde83, .a=0x9e, .x=0x85, .y=0x9a, .sp=0x92, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xde83, .value=0x48}, {.addr=0xde84, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xde85, .a=0xbd, .x=0x85, .y=0x9a, .sp=0x92, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xde83, .value=0x48}, {.addr=0xde84, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xde83, .value=0x48, .type=IO_READ},
        {.addr=0xde84, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010A) {
    const struct CPU_State initial_cpu = {.pc=0x6da2, .a=0x00, .x=0x1c, .y=0x83, .sp=0xd0, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6da2, .value=0x48}, {.addr=0x6da3, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x6da4, .a=0x65, .x=0x1c, .y=0x83, .sp=0xd0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6da2, .value=0x48}, {.addr=0x6da3, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x6da2, .value=0x48, .type=IO_READ},
        {.addr=0x6da3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010B) {
    const struct CPU_State initial_cpu = {.pc=0x39be, .a=0xa2, .x=0x8a, .y=0x46, .sp=0x3f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x39be, .value=0x48}, {.addr=0x39bf, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x39c0, .a=0xb6, .x=0x8a, .y=0x46, .sp=0x3f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x39be, .value=0x48}, {.addr=0x39bf, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x39be, .value=0x48, .type=IO_READ},
        {.addr=0x39bf, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010C) {
    const struct CPU_State initial_cpu = {.pc=0x2661, .a=0x42, .x=0xba, .y=0x9b, .sp=0x70, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2661, .value=0x48}, {.addr=0x2662, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2663, .a=0x82, .x=0xba, .y=0x9b, .sp=0x70, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2661, .value=0x48}, {.addr=0x2662, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2661, .value=0x48, .type=IO_READ},
        {.addr=0x2662, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010D) {
    const struct CPU_State initial_cpu = {.pc=0xb184, .a=0x21, .x=0x6d, .y=0xaf, .sp=0x7d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb184, .value=0x48}, {.addr=0xb185, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xb186, .a=0x59, .x=0x6d, .y=0xaf, .sp=0x7d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb184, .value=0x48}, {.addr=0xb185, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xb184, .value=0x48, .type=IO_READ},
        {.addr=0xb185, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010E) {
    const struct CPU_State initial_cpu = {.pc=0xef51, .a=0x68, .x=0x6c, .y=0xa2, .sp=0xf6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xef51, .value=0x48}, {.addr=0xef52, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xef53, .a=0xe3, .x=0x6c, .y=0xa2, .sp=0xf6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xef51, .value=0x48}, {.addr=0xef52, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xef51, .value=0x48, .type=IO_READ},
        {.addr=0xef52, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_010F) {
    const struct CPU_State initial_cpu = {.pc=0xb63b, .a=0x76, .x=0x8d, .y=0xcd, .sp=0xe1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb63b, .value=0x48}, {.addr=0xb63c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb63d, .a=0x2f, .x=0x8d, .y=0xcd, .sp=0xe1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb63b, .value=0x48}, {.addr=0xb63c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb63b, .value=0x48, .type=IO_READ},
        {.addr=0xb63c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0110) {
    const struct CPU_State initial_cpu = {.pc=0x1778, .a=0xf4, .x=0x6c, .y=0xbf, .sp=0x93, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x1778, .value=0x48}, {.addr=0x1779, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x177a, .a=0x99, .x=0x6c, .y=0xbf, .sp=0x93, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1778, .value=0x48}, {.addr=0x1779, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1778, .value=0x48, .type=IO_READ},
        {.addr=0x1779, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0111) {
    const struct CPU_State initial_cpu = {.pc=0xce64, .a=0xbf, .x=0x5a, .y=0xc0, .sp=0xa5, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xce64, .value=0x48}, {.addr=0xce65, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xce66, .a=0x9d, .x=0x5a, .y=0xc0, .sp=0xa5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xce64, .value=0x48}, {.addr=0xce65, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xce64, .value=0x48, .type=IO_READ},
        {.addr=0xce65, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0112) {
    const struct CPU_State initial_cpu = {.pc=0x4578, .a=0x90, .x=0x8e, .y=0xd9, .sp=0x13, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4578, .value=0x48}, {.addr=0x4579, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x457a, .a=0x1b, .x=0x8e, .y=0xd9, .sp=0x13, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4578, .value=0x48}, {.addr=0x4579, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x4578, .value=0x48, .type=IO_READ},
        {.addr=0x4579, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0113) {
    const struct CPU_State initial_cpu = {.pc=0xb1f3, .a=0x43, .x=0x7a, .y=0x8b, .sp=0xa8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f3, .value=0x48}, {.addr=0xb1f4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb1f5, .a=0x63, .x=0x7a, .y=0x8b, .sp=0xa8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb1f3, .value=0x48}, {.addr=0xb1f4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb1f3, .value=0x48, .type=IO_READ},
        {.addr=0xb1f4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0114) {
    const struct CPU_State initial_cpu = {.pc=0x0d77, .a=0x7d, .x=0xfd, .y=0x09, .sp=0xe1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0d77, .value=0x48}, {.addr=0x0d78, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0d79, .a=0x6c, .x=0xfd, .y=0x09, .sp=0xe1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0d77, .value=0x48}, {.addr=0x0d78, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0d77, .value=0x48, .type=IO_READ},
        {.addr=0x0d78, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0115) {
    const struct CPU_State initial_cpu = {.pc=0x01e5, .a=0x20, .x=0xba, .y=0xa0, .sp=0xb9, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x48}, {.addr=0x01e6, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x01e7, .a=0x8c, .x=0xba, .y=0xa0, .sp=0xb9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x48}, {.addr=0x01e6, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x01e5, .value=0x48, .type=IO_READ},
        {.addr=0x01e6, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0116) {
    const struct CPU_State initial_cpu = {.pc=0x03a4, .a=0x16, .x=0x20, .y=0x69, .sp=0x03, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x03a4, .value=0x48}, {.addr=0x03a5, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x03a6, .a=0x26, .x=0x20, .y=0x69, .sp=0x03, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x03a4, .value=0x48}, {.addr=0x03a5, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x03a4, .value=0x48, .type=IO_READ},
        {.addr=0x03a5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2596, .a=0xbb, .x=0xc6, .y=0x49, .sp=0xb4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2596, .value=0x48}, {.addr=0x2597, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x2598, .a=0xb8, .x=0xc6, .y=0x49, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2596, .value=0x48}, {.addr=0x2597, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2596, .value=0x48, .type=IO_READ},
        {.addr=0x2597, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0118) {
    const struct CPU_State initial_cpu = {.pc=0x10dc, .a=0x16, .x=0x5b, .y=0xf1, .sp=0x3f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x10dc, .value=0x48}, {.addr=0x10dd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x10de, .a=0xf0, .x=0x5b, .y=0xf1, .sp=0x3f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x10dc, .value=0x48}, {.addr=0x10dd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x10dc, .value=0x48, .type=IO_READ},
        {.addr=0x10dd, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0119) {
    const struct CPU_State initial_cpu = {.pc=0x66fb, .a=0xc8, .x=0x7b, .y=0x6a, .sp=0x44, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x66fb, .value=0x48}, {.addr=0x66fc, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x66fd, .a=0xa0, .x=0x7b, .y=0x6a, .sp=0x44, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x66fb, .value=0x48}, {.addr=0x66fc, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x66fb, .value=0x48, .type=IO_READ},
        {.addr=0x66fc, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011A) {
    const struct CPU_State initial_cpu = {.pc=0xe3de, .a=0xeb, .x=0x5c, .y=0x4e, .sp=0xae, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe3de, .value=0x48}, {.addr=0xe3df, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xe3e0, .a=0xa4, .x=0x5c, .y=0x4e, .sp=0xae, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe3de, .value=0x48}, {.addr=0xe3df, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xe3de, .value=0x48, .type=IO_READ},
        {.addr=0xe3df, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011B) {
    const struct CPU_State initial_cpu = {.pc=0x8cb0, .a=0x98, .x=0x62, .y=0x50, .sp=0x0a, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb0, .value=0x48}, {.addr=0x8cb1, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x8cb2, .a=0x6e, .x=0x62, .y=0x50, .sp=0x0a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8cb0, .value=0x48}, {.addr=0x8cb1, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x8cb0, .value=0x48, .type=IO_READ},
        {.addr=0x8cb1, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011C) {
    const struct CPU_State initial_cpu = {.pc=0x0af7, .a=0x80, .x=0xb5, .y=0xf0, .sp=0xa0, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0af7, .value=0x48}, {.addr=0x0af8, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x0af9, .a=0xb2, .x=0xb5, .y=0xf0, .sp=0xa0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0af7, .value=0x48}, {.addr=0x0af8, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x0af7, .value=0x48, .type=IO_READ},
        {.addr=0x0af8, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011D) {
    const struct CPU_State initial_cpu = {.pc=0xa37e, .a=0x8e, .x=0x40, .y=0xc1, .sp=0x18, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xa37e, .value=0x48}, {.addr=0xa37f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa380, .a=0xc6, .x=0x40, .y=0xc1, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa37e, .value=0x48}, {.addr=0xa37f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa37e, .value=0x48, .type=IO_READ},
        {.addr=0xa37f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011E) {
    const struct CPU_State initial_cpu = {.pc=0x1ec1, .a=0xe3, .x=0x70, .y=0x1a, .sp=0x92, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec1, .value=0x48}, {.addr=0x1ec2, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1ec3, .a=0x33, .x=0x70, .y=0x1a, .sp=0x92, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1ec1, .value=0x48}, {.addr=0x1ec2, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x1ec1, .value=0x48, .type=IO_READ},
        {.addr=0x1ec2, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_011F) {
    const struct CPU_State initial_cpu = {.pc=0xbb61, .a=0x97, .x=0x63, .y=0x2c, .sp=0x6d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbb61, .value=0x48}, {.addr=0xbb62, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xbb63, .a=0xc1, .x=0x63, .y=0x2c, .sp=0x6d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbb61, .value=0x48}, {.addr=0xbb62, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xbb61, .value=0x48, .type=IO_READ},
        {.addr=0xbb62, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0120) {
    const struct CPU_State initial_cpu = {.pc=0x0930, .a=0x88, .x=0xd1, .y=0x37, .sp=0x83, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0930, .value=0x48}, {.addr=0x0931, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0932, .a=0x12, .x=0xd1, .y=0x37, .sp=0x83, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0930, .value=0x48}, {.addr=0x0931, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x0930, .value=0x48, .type=IO_READ},
        {.addr=0x0931, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0121) {
    const struct CPU_State initial_cpu = {.pc=0x82c4, .a=0x52, .x=0xa5, .y=0xde, .sp=0xa7, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x82c4, .value=0x48}, {.addr=0x82c5, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x82c6, .a=0x6e, .x=0xa5, .y=0xde, .sp=0xa7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x82c4, .value=0x48}, {.addr=0x82c5, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x82c4, .value=0x48, .type=IO_READ},
        {.addr=0x82c5, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0122) {
    const struct CPU_State initial_cpu = {.pc=0x80aa, .a=0xce, .x=0x0d, .y=0x20, .sp=0xd6, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x80aa, .value=0x48}, {.addr=0x80ab, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x80ac, .a=0xf4, .x=0x0d, .y=0x20, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x80aa, .value=0x48}, {.addr=0x80ab, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x80aa, .value=0x48, .type=IO_READ},
        {.addr=0x80ab, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0123) {
    const struct CPU_State initial_cpu = {.pc=0x4d5e, .a=0x93, .x=0x5d, .y=0xd6, .sp=0x6b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4d5e, .value=0x48}, {.addr=0x4d5f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4d60, .a=0x8e, .x=0x5d, .y=0xd6, .sp=0x6b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4d5e, .value=0x48}, {.addr=0x4d5f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4d5e, .value=0x48, .type=IO_READ},
        {.addr=0x4d5f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0124) {
    const struct CPU_State initial_cpu = {.pc=0x7c7a, .a=0x51, .x=0x8f, .y=0xc4, .sp=0x79, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7c7a, .value=0x48}, {.addr=0x7c7b, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7c7c, .a=0xf6, .x=0x8f, .y=0xc4, .sp=0x79, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7c7a, .value=0x48}, {.addr=0x7c7b, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7c7a, .value=0x48, .type=IO_READ},
        {.addr=0x7c7b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0125) {
    const struct CPU_State initial_cpu = {.pc=0x40e3, .a=0xce, .x=0x24, .y=0x4c, .sp=0xdc, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x40e3, .value=0x48}, {.addr=0x40e4, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x40e5, .a=0xe9, .x=0x24, .y=0x4c, .sp=0xdc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x40e3, .value=0x48}, {.addr=0x40e4, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x40e3, .value=0x48, .type=IO_READ},
        {.addr=0x40e4, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0126) {
    const struct CPU_State initial_cpu = {.pc=0xf617, .a=0xc8, .x=0x9a, .y=0x8d, .sp=0x92, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf617, .value=0x48}, {.addr=0xf618, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xf619, .a=0xa4, .x=0x9a, .y=0x8d, .sp=0x92, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf617, .value=0x48}, {.addr=0xf618, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xf617, .value=0x48, .type=IO_READ},
        {.addr=0xf618, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0127) {
    const struct CPU_State initial_cpu = {.pc=0xd551, .a=0x19, .x=0x5a, .y=0x47, .sp=0xc2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xd551, .value=0x48}, {.addr=0xd552, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xd553, .a=0x1c, .x=0x5a, .y=0x47, .sp=0xc2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd551, .value=0x48}, {.addr=0xd552, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xd551, .value=0x48, .type=IO_READ},
        {.addr=0xd552, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0128) {
    const struct CPU_State initial_cpu = {.pc=0x83b6, .a=0x34, .x=0xc1, .y=0x74, .sp=0xa2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x83b6, .value=0x48}, {.addr=0x83b7, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x83b8, .a=0xf8, .x=0xc1, .y=0x74, .sp=0xa2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x83b6, .value=0x48}, {.addr=0x83b7, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x83b6, .value=0x48, .type=IO_READ},
        {.addr=0x83b7, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0129) {
    const struct CPU_State initial_cpu = {.pc=0x1dfb, .a=0xf8, .x=0xdf, .y=0x9f, .sp=0x6d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1dfb, .value=0x48}, {.addr=0x1dfc, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x1dfd, .a=0x55, .x=0xdf, .y=0x9f, .sp=0x6d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1dfb, .value=0x48}, {.addr=0x1dfc, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x1dfb, .value=0x48, .type=IO_READ},
        {.addr=0x1dfc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012A) {
    const struct CPU_State initial_cpu = {.pc=0x2d14, .a=0xc3, .x=0x2a, .y=0x29, .sp=0xef, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d14, .value=0x48}, {.addr=0x2d15, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x2d16, .a=0xdc, .x=0x2a, .y=0x29, .sp=0xef, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2d14, .value=0x48}, {.addr=0x2d15, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x2d14, .value=0x48, .type=IO_READ},
        {.addr=0x2d15, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012B) {
    const struct CPU_State initial_cpu = {.pc=0xde4a, .a=0xcb, .x=0xaa, .y=0x5d, .sp=0xa8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xde4a, .value=0x48}, {.addr=0xde4b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xde4c, .a=0xcd, .x=0xaa, .y=0x5d, .sp=0xa8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xde4a, .value=0x48}, {.addr=0xde4b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xde4a, .value=0x48, .type=IO_READ},
        {.addr=0xde4b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012C) {
    const struct CPU_State initial_cpu = {.pc=0x32ce, .a=0x5b, .x=0x38, .y=0x07, .sp=0x38, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x32ce, .value=0x48}, {.addr=0x32cf, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x32d0, .a=0x99, .x=0x38, .y=0x07, .sp=0x38, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x32ce, .value=0x48}, {.addr=0x32cf, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x32ce, .value=0x48, .type=IO_READ},
        {.addr=0x32cf, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012D) {
    const struct CPU_State initial_cpu = {.pc=0x6062, .a=0x0c, .x=0x1e, .y=0xad, .sp=0xaa, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6062, .value=0x48}, {.addr=0x6063, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x6064, .a=0x4f, .x=0x1e, .y=0xad, .sp=0xaa, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6062, .value=0x48}, {.addr=0x6063, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6062, .value=0x48, .type=IO_READ},
        {.addr=0x6063, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012E) {
    const struct CPU_State initial_cpu = {.pc=0x4164, .a=0x62, .x=0xe4, .y=0xd6, .sp=0x14, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4164, .value=0x48}, {.addr=0x4165, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4166, .a=0xfd, .x=0xe4, .y=0xd6, .sp=0x14, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4164, .value=0x48}, {.addr=0x4165, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4164, .value=0x48, .type=IO_READ},
        {.addr=0x4165, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_012F) {
    const struct CPU_State initial_cpu = {.pc=0xd993, .a=0x10, .x=0x25, .y=0x08, .sp=0xea, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd993, .value=0x48}, {.addr=0xd994, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd995, .a=0xcd, .x=0x25, .y=0x08, .sp=0xea, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd993, .value=0x48}, {.addr=0xd994, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd993, .value=0x48, .type=IO_READ},
        {.addr=0xd994, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0130) {
    const struct CPU_State initial_cpu = {.pc=0x29c1, .a=0x3e, .x=0xdf, .y=0xce, .sp=0x24, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x29c1, .value=0x48}, {.addr=0x29c2, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x29c3, .a=0xea, .x=0xdf, .y=0xce, .sp=0x24, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x29c1, .value=0x48}, {.addr=0x29c2, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x29c1, .value=0x48, .type=IO_READ},
        {.addr=0x29c2, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0131) {
    const struct CPU_State initial_cpu = {.pc=0x217f, .a=0xd9, .x=0x34, .y=0xbc, .sp=0xa0, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x217f, .value=0x48}, {.addr=0x2180, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2181, .a=0x53, .x=0x34, .y=0xbc, .sp=0xa0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x217f, .value=0x48}, {.addr=0x2180, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x217f, .value=0x48, .type=IO_READ},
        {.addr=0x2180, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0132) {
    const struct CPU_State initial_cpu = {.pc=0xc341, .a=0x95, .x=0x0a, .y=0x58, .sp=0xc7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc341, .value=0x48}, {.addr=0xc342, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xc343, .a=0x9c, .x=0x0a, .y=0x58, .sp=0xc7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc341, .value=0x48}, {.addr=0xc342, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xc341, .value=0x48, .type=IO_READ},
        {.addr=0xc342, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0133) {
    const struct CPU_State initial_cpu = {.pc=0xaee9, .a=0x0d, .x=0x4c, .y=0xf3, .sp=0x79, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xaee9, .value=0x48}, {.addr=0xaeea, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xaeeb, .a=0x9a, .x=0x4c, .y=0xf3, .sp=0x79, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xaee9, .value=0x48}, {.addr=0xaeea, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xaee9, .value=0x48, .type=IO_READ},
        {.addr=0xaeea, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0134) {
    const struct CPU_State initial_cpu = {.pc=0xd0f7, .a=0x5f, .x=0xab, .y=0xf0, .sp=0xb9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f7, .value=0x48}, {.addr=0xd0f8, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xd0f9, .a=0x4f, .x=0xab, .y=0xf0, .sp=0xb9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd0f7, .value=0x48}, {.addr=0xd0f8, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xd0f7, .value=0x48, .type=IO_READ},
        {.addr=0xd0f8, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0135) {
    const struct CPU_State initial_cpu = {.pc=0x3193, .a=0x53, .x=0x42, .y=0x20, .sp=0xa5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3193, .value=0x48}, {.addr=0x3194, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3195, .a=0x95, .x=0x42, .y=0x20, .sp=0xa5, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3193, .value=0x48}, {.addr=0x3194, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3193, .value=0x48, .type=IO_READ},
        {.addr=0x3194, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0136) {
    const struct CPU_State initial_cpu = {.pc=0x1851, .a=0x88, .x=0x1d, .y=0xed, .sp=0x1a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1851, .value=0x48}, {.addr=0x1852, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x1853, .a=0x2b, .x=0x1d, .y=0xed, .sp=0x1a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1851, .value=0x48}, {.addr=0x1852, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x1851, .value=0x48, .type=IO_READ},
        {.addr=0x1852, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0137) {
    const struct CPU_State initial_cpu = {.pc=0x873e, .a=0xc2, .x=0x91, .y=0x9e, .sp=0x31, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x873e, .value=0x48}, {.addr=0x873f, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8740, .a=0xd7, .x=0x91, .y=0x9e, .sp=0x31, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x873e, .value=0x48}, {.addr=0x873f, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x873e, .value=0x48, .type=IO_READ},
        {.addr=0x873f, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0138) {
    const struct CPU_State initial_cpu = {.pc=0xb0d4, .a=0x4f, .x=0xb7, .y=0x72, .sp=0x44, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb0d4, .value=0x48}, {.addr=0xb0d5, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb0d6, .a=0x0c, .x=0xb7, .y=0x72, .sp=0x44, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb0d4, .value=0x48}, {.addr=0xb0d5, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb0d4, .value=0x48, .type=IO_READ},
        {.addr=0xb0d5, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0139) {
    const struct CPU_State initial_cpu = {.pc=0xab8a, .a=0xa3, .x=0x2d, .y=0xba, .sp=0x5e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xab8a, .value=0x48}, {.addr=0xab8b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xab8c, .a=0xb0, .x=0x2d, .y=0xba, .sp=0x5e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xab8a, .value=0x48}, {.addr=0xab8b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xab8a, .value=0x48, .type=IO_READ},
        {.addr=0xab8b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013A) {
    const struct CPU_State initial_cpu = {.pc=0x0fb0, .a=0x8f, .x=0x97, .y=0x14, .sp=0x1f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0fb0, .value=0x48}, {.addr=0x0fb1, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x0fb2, .a=0xcc, .x=0x97, .y=0x14, .sp=0x1f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0fb0, .value=0x48}, {.addr=0x0fb1, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x0fb0, .value=0x48, .type=IO_READ},
        {.addr=0x0fb1, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013B) {
    const struct CPU_State initial_cpu = {.pc=0xf8f8, .a=0xb2, .x=0x1e, .y=0x70, .sp=0x25, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf8f8, .value=0x48}, {.addr=0xf8f9, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf8fa, .a=0xf1, .x=0x1e, .y=0x70, .sp=0x25, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf8f8, .value=0x48}, {.addr=0xf8f9, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf8f8, .value=0x48, .type=IO_READ},
        {.addr=0xf8f9, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013C) {
    const struct CPU_State initial_cpu = {.pc=0x3526, .a=0x1a, .x=0xfb, .y=0xb6, .sp=0xeb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3526, .value=0x48}, {.addr=0x3527, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3528, .a=0x35, .x=0xfb, .y=0xb6, .sp=0xeb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3526, .value=0x48}, {.addr=0x3527, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3526, .value=0x48, .type=IO_READ},
        {.addr=0x3527, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013D) {
    const struct CPU_State initial_cpu = {.pc=0xd0e4, .a=0x29, .x=0x56, .y=0x47, .sp=0xb2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e4, .value=0x48}, {.addr=0xd0e5, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd0e6, .a=0xc8, .x=0x56, .y=0x47, .sp=0xb2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd0e4, .value=0x48}, {.addr=0xd0e5, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd0e4, .value=0x48, .type=IO_READ},
        {.addr=0xd0e5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013E) {
    const struct CPU_State initial_cpu = {.pc=0x25ee, .a=0xab, .x=0x63, .y=0x00, .sp=0x9c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x25ee, .value=0x48}, {.addr=0x25ef, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x25f0, .a=0x06, .x=0x63, .y=0x00, .sp=0x9c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x25ee, .value=0x48}, {.addr=0x25ef, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x25ee, .value=0x48, .type=IO_READ},
        {.addr=0x25ef, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6fe5, .a=0x9c, .x=0x82, .y=0xc1, .sp=0x2b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6fe5, .value=0x48}, {.addr=0x6fe6, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x6fe7, .a=0x19, .x=0x82, .y=0xc1, .sp=0x2b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6fe5, .value=0x48}, {.addr=0x6fe6, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x6fe5, .value=0x48, .type=IO_READ},
        {.addr=0x6fe6, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0140) {
    const struct CPU_State initial_cpu = {.pc=0x3e0b, .a=0x19, .x=0xba, .y=0xe6, .sp=0x33, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3e0b, .value=0x48}, {.addr=0x3e0c, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x3e0d, .a=0x12, .x=0xba, .y=0xe6, .sp=0x33, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3e0b, .value=0x48}, {.addr=0x3e0c, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x3e0b, .value=0x48, .type=IO_READ},
        {.addr=0x3e0c, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0141) {
    const struct CPU_State initial_cpu = {.pc=0x8f05, .a=0xdf, .x=0x4b, .y=0xf1, .sp=0xc6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8f05, .value=0x48}, {.addr=0x8f06, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x8f07, .a=0x7a, .x=0x4b, .y=0xf1, .sp=0xc6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8f05, .value=0x48}, {.addr=0x8f06, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x8f05, .value=0x48, .type=IO_READ},
        {.addr=0x8f06, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0142) {
    const struct CPU_State initial_cpu = {.pc=0x4f3d, .a=0x20, .x=0xce, .y=0x04, .sp=0x61, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3d, .value=0x48}, {.addr=0x4f3e, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x4f3f, .a=0x61, .x=0xce, .y=0x04, .sp=0x61, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4f3d, .value=0x48}, {.addr=0x4f3e, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x4f3d, .value=0x48, .type=IO_READ},
        {.addr=0x4f3e, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0143) {
    const struct CPU_State initial_cpu = {.pc=0x6259, .a=0x5c, .x=0x20, .y=0x5c, .sp=0x32, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6259, .value=0x48}, {.addr=0x625a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x625b, .a=0x11, .x=0x20, .y=0x5c, .sp=0x32, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6259, .value=0x48}, {.addr=0x625a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6259, .value=0x48, .type=IO_READ},
        {.addr=0x625a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0144) {
    const struct CPU_State initial_cpu = {.pc=0xb29e, .a=0x1d, .x=0x81, .y=0xa7, .sp=0x86, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb29e, .value=0x48}, {.addr=0xb29f, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb2a0, .a=0xa3, .x=0x81, .y=0xa7, .sp=0x86, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb29e, .value=0x48}, {.addr=0xb29f, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb29e, .value=0x48, .type=IO_READ},
        {.addr=0xb29f, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0145) {
    const struct CPU_State initial_cpu = {.pc=0x684d, .a=0x85, .x=0x7b, .y=0x43, .sp=0x29, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x684d, .value=0x48}, {.addr=0x684e, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x684f, .a=0x77, .x=0x7b, .y=0x43, .sp=0x29, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x684d, .value=0x48}, {.addr=0x684e, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x684d, .value=0x48, .type=IO_READ},
        {.addr=0x684e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0146) {
    const struct CPU_State initial_cpu = {.pc=0x4409, .a=0x04, .x=0x0b, .y=0x24, .sp=0x47, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4409, .value=0x48}, {.addr=0x440a, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x440b, .a=0x01, .x=0x0b, .y=0x24, .sp=0x47, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4409, .value=0x48}, {.addr=0x440a, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x4409, .value=0x48, .type=IO_READ},
        {.addr=0x440a, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0147) {
    const struct CPU_State initial_cpu = {.pc=0xca2c, .a=0x68, .x=0x80, .y=0xbd, .sp=0x64, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xca2c, .value=0x48}, {.addr=0xca2d, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xca2e, .a=0x6d, .x=0x80, .y=0xbd, .sp=0x64, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xca2c, .value=0x48}, {.addr=0xca2d, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xca2c, .value=0x48, .type=IO_READ},
        {.addr=0xca2d, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0148) {
    const struct CPU_State initial_cpu = {.pc=0x957d, .a=0x3c, .x=0x3f, .y=0xbd, .sp=0x1e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x957d, .value=0x48}, {.addr=0x957e, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x957f, .a=0xaf, .x=0x3f, .y=0xbd, .sp=0x1e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x957d, .value=0x48}, {.addr=0x957e, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x957d, .value=0x48, .type=IO_READ},
        {.addr=0x957e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0149) {
    const struct CPU_State initial_cpu = {.pc=0xfee6, .a=0xd8, .x=0x1e, .y=0x11, .sp=0x5d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xfee6, .value=0x48}, {.addr=0xfee7, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xfee8, .a=0x4b, .x=0x1e, .y=0x11, .sp=0x5d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfee6, .value=0x48}, {.addr=0xfee7, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xfee6, .value=0x48, .type=IO_READ},
        {.addr=0xfee7, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014A) {
    const struct CPU_State initial_cpu = {.pc=0x3061, .a=0x81, .x=0x18, .y=0xb9, .sp=0x83, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3061, .value=0x48}, {.addr=0x3062, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3063, .a=0x7d, .x=0x18, .y=0xb9, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3061, .value=0x48}, {.addr=0x3062, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3061, .value=0x48, .type=IO_READ},
        {.addr=0x3062, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014B) {
    const struct CPU_State initial_cpu = {.pc=0xb537, .a=0x10, .x=0xd0, .y=0x97, .sp=0x7d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb537, .value=0x48}, {.addr=0xb538, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xb539, .a=0xcb, .x=0xd0, .y=0x97, .sp=0x7d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb537, .value=0x48}, {.addr=0xb538, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xb537, .value=0x48, .type=IO_READ},
        {.addr=0xb538, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014C) {
    const struct CPU_State initial_cpu = {.pc=0xac0a, .a=0xc1, .x=0xe9, .y=0xf1, .sp=0x2d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xac0a, .value=0x48}, {.addr=0xac0b, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xac0c, .a=0xbb, .x=0xe9, .y=0xf1, .sp=0x2d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xac0a, .value=0x48}, {.addr=0xac0b, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xac0a, .value=0x48, .type=IO_READ},
        {.addr=0xac0b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014D) {
    const struct CPU_State initial_cpu = {.pc=0x33f7, .a=0x0a, .x=0xea, .y=0x5e, .sp=0x2e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x33f7, .value=0x48}, {.addr=0x33f8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x33f9, .a=0xe4, .x=0xea, .y=0x5e, .sp=0x2e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x33f7, .value=0x48}, {.addr=0x33f8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x33f7, .value=0x48, .type=IO_READ},
        {.addr=0x33f8, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014E) {
    const struct CPU_State initial_cpu = {.pc=0x7c9b, .a=0x18, .x=0x3a, .y=0x79, .sp=0xb9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c9b, .value=0x48}, {.addr=0x7c9c, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x7c9d, .a=0xf2, .x=0x3a, .y=0x79, .sp=0xb9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7c9b, .value=0x48}, {.addr=0x7c9c, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x7c9b, .value=0x48, .type=IO_READ},
        {.addr=0x7c9c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_014F) {
    const struct CPU_State initial_cpu = {.pc=0x54a4, .a=0x4e, .x=0x3e, .y=0x72, .sp=0x28, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x54a4, .value=0x48}, {.addr=0x54a5, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x54a6, .a=0xd8, .x=0x3e, .y=0x72, .sp=0x28, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x54a4, .value=0x48}, {.addr=0x54a5, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x54a4, .value=0x48, .type=IO_READ},
        {.addr=0x54a5, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0150) {
    const struct CPU_State initial_cpu = {.pc=0x7d8f, .a=0x9c, .x=0x3a, .y=0xbd, .sp=0x86, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x7d8f, .value=0x48}, {.addr=0x7d90, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x7d91, .a=0x31, .x=0x3a, .y=0xbd, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7d8f, .value=0x48}, {.addr=0x7d90, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x7d8f, .value=0x48, .type=IO_READ},
        {.addr=0x7d90, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0151) {
    const struct CPU_State initial_cpu = {.pc=0x479a, .a=0xd4, .x=0xe0, .y=0x7d, .sp=0xc0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x479a, .value=0x48}, {.addr=0x479b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x479c, .a=0x92, .x=0xe0, .y=0x7d, .sp=0xc0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x479a, .value=0x48}, {.addr=0x479b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x479a, .value=0x48, .type=IO_READ},
        {.addr=0x479b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0152) {
    const struct CPU_State initial_cpu = {.pc=0x5f24, .a=0xa8, .x=0x81, .y=0xa7, .sp=0x47, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5f24, .value=0x48}, {.addr=0x5f25, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5f26, .a=0x14, .x=0x81, .y=0xa7, .sp=0x47, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5f24, .value=0x48}, {.addr=0x5f25, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5f24, .value=0x48, .type=IO_READ},
        {.addr=0x5f25, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0153) {
    const struct CPU_State initial_cpu = {.pc=0x46ef, .a=0x7d, .x=0xd0, .y=0x8d, .sp=0x9b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x46ef, .value=0x48}, {.addr=0x46f0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x46f1, .a=0x17, .x=0xd0, .y=0x8d, .sp=0x9b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x46ef, .value=0x48}, {.addr=0x46f0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x46ef, .value=0x48, .type=IO_READ},
        {.addr=0x46f0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0154) {
    const struct CPU_State initial_cpu = {.pc=0x9e78, .a=0x70, .x=0xcf, .y=0xaa, .sp=0xf4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9e78, .value=0x48}, {.addr=0x9e79, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x9e7a, .a=0x27, .x=0xcf, .y=0xaa, .sp=0xf4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9e78, .value=0x48}, {.addr=0x9e79, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x9e78, .value=0x48, .type=IO_READ},
        {.addr=0x9e79, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0155) {
    const struct CPU_State initial_cpu = {.pc=0x2d17, .a=0x71, .x=0x0e, .y=0x26, .sp=0x58, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2d17, .value=0x48}, {.addr=0x2d18, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d19, .a=0xec, .x=0x0e, .y=0x26, .sp=0x58, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2d17, .value=0x48}, {.addr=0x2d18, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d17, .value=0x48, .type=IO_READ},
        {.addr=0x2d18, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0156) {
    const struct CPU_State initial_cpu = {.pc=0x715e, .a=0x9e, .x=0xf0, .y=0x87, .sp=0x0f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x715e, .value=0x48}, {.addr=0x715f, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x7160, .a=0x68, .x=0xf0, .y=0x87, .sp=0x0f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x715e, .value=0x48}, {.addr=0x715f, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x715e, .value=0x48, .type=IO_READ},
        {.addr=0x715f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0157) {
    const struct CPU_State initial_cpu = {.pc=0xc10c, .a=0xdd, .x=0x1c, .y=0x32, .sp=0x92, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc10c, .value=0x48}, {.addr=0xc10d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xc10e, .a=0x99, .x=0x1c, .y=0x32, .sp=0x92, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc10c, .value=0x48}, {.addr=0xc10d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xc10c, .value=0x48, .type=IO_READ},
        {.addr=0xc10d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0158) {
    const struct CPU_State initial_cpu = {.pc=0x1883, .a=0x4f, .x=0xdf, .y=0x35, .sp=0xff, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x1883, .value=0x48}, {.addr=0x1884, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x1885, .a=0x78, .x=0xdf, .y=0x35, .sp=0xff, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1883, .value=0x48}, {.addr=0x1884, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x1883, .value=0x48, .type=IO_READ},
        {.addr=0x1884, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0159) {
    const struct CPU_State initial_cpu = {.pc=0x0a40, .a=0x43, .x=0xd3, .y=0x17, .sp=0x3c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a40, .value=0x48}, {.addr=0x0a41, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0a42, .a=0xfc, .x=0xd3, .y=0x17, .sp=0x3c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0a40, .value=0x48}, {.addr=0x0a41, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0a40, .value=0x48, .type=IO_READ},
        {.addr=0x0a41, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015A) {
    const struct CPU_State initial_cpu = {.pc=0x7bd6, .a=0x51, .x=0xed, .y=0x14, .sp=0xda, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd6, .value=0x48}, {.addr=0x7bd7, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x7bd8, .a=0x5a, .x=0xed, .y=0x14, .sp=0xda, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7bd6, .value=0x48}, {.addr=0x7bd7, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x7bd6, .value=0x48, .type=IO_READ},
        {.addr=0x7bd7, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015B) {
    const struct CPU_State initial_cpu = {.pc=0x1c3f, .a=0xa3, .x=0xee, .y=0xff, .sp=0x3a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3f, .value=0x48}, {.addr=0x1c40, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x1c41, .a=0xaa, .x=0xee, .y=0xff, .sp=0x3a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1c3f, .value=0x48}, {.addr=0x1c40, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x1c3f, .value=0x48, .type=IO_READ},
        {.addr=0x1c40, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4e53, .a=0x9b, .x=0xa8, .y=0x2a, .sp=0xae, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e53, .value=0x48}, {.addr=0x4e54, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x4e55, .a=0xf1, .x=0xa8, .y=0x2a, .sp=0xae, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4e53, .value=0x48}, {.addr=0x4e54, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x4e53, .value=0x48, .type=IO_READ},
        {.addr=0x4e54, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd098, .a=0xb7, .x=0x00, .y=0xce, .sp=0x79, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd098, .value=0x48}, {.addr=0xd099, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xd09a, .a=0x0c, .x=0x00, .y=0xce, .sp=0x79, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd098, .value=0x48}, {.addr=0xd099, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xd098, .value=0x48, .type=IO_READ},
        {.addr=0xd099, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3095, .a=0xe0, .x=0xdd, .y=0x50, .sp=0xf1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3095, .value=0x48}, {.addr=0x3096, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3097, .a=0x94, .x=0xdd, .y=0x50, .sp=0xf1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3095, .value=0x48}, {.addr=0x3096, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3095, .value=0x48, .type=IO_READ},
        {.addr=0x3096, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_015F) {
    const struct CPU_State initial_cpu = {.pc=0xdf25, .a=0xe3, .x=0x39, .y=0xc4, .sp=0x70, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdf25, .value=0x48}, {.addr=0xdf26, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xdf27, .a=0x0f, .x=0x39, .y=0xc4, .sp=0x70, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xdf25, .value=0x48}, {.addr=0xdf26, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xdf25, .value=0x48, .type=IO_READ},
        {.addr=0xdf26, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1921, .a=0x17, .x=0xfe, .y=0x80, .sp=0xa3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1921, .value=0x48}, {.addr=0x1922, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x1923, .a=0x9c, .x=0xfe, .y=0x80, .sp=0xa3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1921, .value=0x48}, {.addr=0x1922, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x1921, .value=0x48, .type=IO_READ},
        {.addr=0x1922, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0161) {
    const struct CPU_State initial_cpu = {.pc=0x712f, .a=0xe2, .x=0x3c, .y=0x6a, .sp=0x02, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x712f, .value=0x48}, {.addr=0x7130, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7131, .a=0x9f, .x=0x3c, .y=0x6a, .sp=0x02, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x712f, .value=0x48}, {.addr=0x7130, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x712f, .value=0x48, .type=IO_READ},
        {.addr=0x7130, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0162) {
    const struct CPU_State initial_cpu = {.pc=0x7c6f, .a=0x00, .x=0xa4, .y=0x72, .sp=0xd7, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6f, .value=0x48}, {.addr=0x7c70, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7c71, .a=0x60, .x=0xa4, .y=0x72, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7c6f, .value=0x48}, {.addr=0x7c70, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7c6f, .value=0x48, .type=IO_READ},
        {.addr=0x7c70, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0163) {
    const struct CPU_State initial_cpu = {.pc=0x43a4, .a=0xaf, .x=0xaf, .y=0xe1, .sp=0x31, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x43a4, .value=0x48}, {.addr=0x43a5, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x43a6, .a=0x51, .x=0xaf, .y=0xe1, .sp=0x31, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x43a4, .value=0x48}, {.addr=0x43a5, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x43a4, .value=0x48, .type=IO_READ},
        {.addr=0x43a5, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe328, .a=0xe9, .x=0x61, .y=0xb2, .sp=0x08, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe328, .value=0x48}, {.addr=0xe329, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe32a, .a=0xef, .x=0x61, .y=0xb2, .sp=0x08, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe328, .value=0x48}, {.addr=0xe329, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe328, .value=0x48, .type=IO_READ},
        {.addr=0xe329, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0165) {
    const struct CPU_State initial_cpu = {.pc=0x6144, .a=0xc7, .x=0xdf, .y=0x8e, .sp=0xb4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x6144, .value=0x48}, {.addr=0x6145, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x6146, .a=0xcf, .x=0xdf, .y=0x8e, .sp=0xb4, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6144, .value=0x48}, {.addr=0x6145, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x6144, .value=0x48, .type=IO_READ},
        {.addr=0x6145, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0166) {
    const struct CPU_State initial_cpu = {.pc=0x58e0, .a=0xc6, .x=0xe8, .y=0xb9, .sp=0x3e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x58e0, .value=0x48}, {.addr=0x58e1, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x58e2, .a=0x43, .x=0xe8, .y=0xb9, .sp=0x3e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x58e0, .value=0x48}, {.addr=0x58e1, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x58e0, .value=0x48, .type=IO_READ},
        {.addr=0x58e1, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0167) {
    const struct CPU_State initial_cpu = {.pc=0x222e, .a=0xd4, .x=0xe2, .y=0x0d, .sp=0x10, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x222e, .value=0x48}, {.addr=0x222f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x2230, .a=0xba, .x=0xe2, .y=0x0d, .sp=0x10, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x222e, .value=0x48}, {.addr=0x222f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x222e, .value=0x48, .type=IO_READ},
        {.addr=0x222f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0168) {
    const struct CPU_State initial_cpu = {.pc=0xdb34, .a=0xc3, .x=0x48, .y=0xe4, .sp=0xdc, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xdb34, .value=0x48}, {.addr=0xdb35, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xdb36, .a=0x3b, .x=0x48, .y=0xe4, .sp=0xdc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdb34, .value=0x48}, {.addr=0xdb35, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xdb34, .value=0x48, .type=IO_READ},
        {.addr=0xdb35, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0169) {
    const struct CPU_State initial_cpu = {.pc=0xd92b, .a=0x1e, .x=0x1a, .y=0x04, .sp=0xb4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd92b, .value=0x48}, {.addr=0xd92c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xd92d, .a=0x1b, .x=0x1a, .y=0x04, .sp=0xb4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd92b, .value=0x48}, {.addr=0xd92c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xd92b, .value=0x48, .type=IO_READ},
        {.addr=0xd92c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016A) {
    const struct CPU_State initial_cpu = {.pc=0xcf9f, .a=0xa7, .x=0xdc, .y=0xfb, .sp=0x64, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcf9f, .value=0x48}, {.addr=0xcfa0, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xcfa1, .a=0x26, .x=0xdc, .y=0xfb, .sp=0x64, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcf9f, .value=0x48}, {.addr=0xcfa0, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xcf9f, .value=0x48, .type=IO_READ},
        {.addr=0xcfa0, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016B) {
    const struct CPU_State initial_cpu = {.pc=0x4f63, .a=0x0d, .x=0x63, .y=0x92, .sp=0xc9, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4f63, .value=0x48}, {.addr=0x4f64, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4f65, .a=0xad, .x=0x63, .y=0x92, .sp=0xc9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4f63, .value=0x48}, {.addr=0x4f64, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4f63, .value=0x48, .type=IO_READ},
        {.addr=0x4f64, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016C) {
    const struct CPU_State initial_cpu = {.pc=0x1344, .a=0x72, .x=0x0d, .y=0xcf, .sp=0x38, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1344, .value=0x48}, {.addr=0x1345, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x1346, .a=0x91, .x=0x0d, .y=0xcf, .sp=0x38, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1344, .value=0x48}, {.addr=0x1345, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x1344, .value=0x48, .type=IO_READ},
        {.addr=0x1345, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016D) {
    const struct CPU_State initial_cpu = {.pc=0xfdff, .a=0xec, .x=0xff, .y=0x5e, .sp=0xe5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xfdff, .value=0x48}, {.addr=0xfe00, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xfe01, .a=0xb5, .x=0xff, .y=0x5e, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xfdff, .value=0x48}, {.addr=0xfe00, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xfdff, .value=0x48, .type=IO_READ},
        {.addr=0xfe00, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016E) {
    const struct CPU_State initial_cpu = {.pc=0x18f3, .a=0x83, .x=0xcb, .y=0x50, .sp=0x61, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x18f3, .value=0x48}, {.addr=0x18f4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x18f5, .a=0xfe, .x=0xcb, .y=0x50, .sp=0x61, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x18f3, .value=0x48}, {.addr=0x18f4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x18f3, .value=0x48, .type=IO_READ},
        {.addr=0x18f4, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_016F) {
    const struct CPU_State initial_cpu = {.pc=0x3be2, .a=0x59, .x=0x39, .y=0x1e, .sp=0xe1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3be2, .value=0x48}, {.addr=0x3be3, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3be4, .a=0x20, .x=0x39, .y=0x1e, .sp=0xe1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3be2, .value=0x48}, {.addr=0x3be3, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3be2, .value=0x48, .type=IO_READ},
        {.addr=0x3be3, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0170) {
    const struct CPU_State initial_cpu = {.pc=0xca47, .a=0xe3, .x=0x61, .y=0xec, .sp=0x55, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xca47, .value=0x48}, {.addr=0xca48, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xca49, .a=0x44, .x=0x61, .y=0xec, .sp=0x55, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xca47, .value=0x48}, {.addr=0xca48, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xca47, .value=0x48, .type=IO_READ},
        {.addr=0xca48, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0171) {
    const struct CPU_State initial_cpu = {.pc=0x0137, .a=0x3c, .x=0x97, .y=0x51, .sp=0xaa, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x48}, {.addr=0x0138, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x0139, .a=0x4c, .x=0x97, .y=0x51, .sp=0xaa, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x48}, {.addr=0x0138, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x0137, .value=0x48, .type=IO_READ},
        {.addr=0x0138, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0172) {
    const struct CPU_State initial_cpu = {.pc=0xb028, .a=0x2e, .x=0x00, .y=0xaf, .sp=0xfa, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb028, .value=0x48}, {.addr=0xb029, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xb02a, .a=0x5c, .x=0x00, .y=0xaf, .sp=0xfa, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb028, .value=0x48}, {.addr=0xb029, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xb028, .value=0x48, .type=IO_READ},
        {.addr=0xb029, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0173) {
    const struct CPU_State initial_cpu = {.pc=0x08a7, .a=0x68, .x=0x45, .y=0xc7, .sp=0xca, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x08a7, .value=0x48}, {.addr=0x08a8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x08a9, .a=0xf8, .x=0x45, .y=0xc7, .sp=0xca, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x08a7, .value=0x48}, {.addr=0x08a8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x08a7, .value=0x48, .type=IO_READ},
        {.addr=0x08a8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0174) {
    const struct CPU_State initial_cpu = {.pc=0x63e2, .a=0xec, .x=0xc7, .y=0xf3, .sp=0xb1, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x63e2, .value=0x48}, {.addr=0x63e3, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x63e4, .a=0x86, .x=0xc7, .y=0xf3, .sp=0xb1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x63e2, .value=0x48}, {.addr=0x63e3, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x63e2, .value=0x48, .type=IO_READ},
        {.addr=0x63e3, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0175) {
    const struct CPU_State initial_cpu = {.pc=0x1146, .a=0x29, .x=0x6a, .y=0xf5, .sp=0x36, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1146, .value=0x48}, {.addr=0x1147, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1148, .a=0x7a, .x=0x6a, .y=0xf5, .sp=0x36, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1146, .value=0x48}, {.addr=0x1147, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1146, .value=0x48, .type=IO_READ},
        {.addr=0x1147, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0176) {
    const struct CPU_State initial_cpu = {.pc=0xf7c7, .a=0x44, .x=0x5e, .y=0x91, .sp=0x7b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c7, .value=0x48}, {.addr=0xf7c8, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xf7c9, .a=0x90, .x=0x5e, .y=0x91, .sp=0x7b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf7c7, .value=0x48}, {.addr=0xf7c8, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xf7c7, .value=0x48, .type=IO_READ},
        {.addr=0xf7c8, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0177) {
    const struct CPU_State initial_cpu = {.pc=0xc482, .a=0x33, .x=0x41, .y=0x9a, .sp=0x69, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc482, .value=0x48}, {.addr=0xc483, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xc484, .a=0x58, .x=0x41, .y=0x9a, .sp=0x69, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc482, .value=0x48}, {.addr=0xc483, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xc482, .value=0x48, .type=IO_READ},
        {.addr=0xc483, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0178) {
    const struct CPU_State initial_cpu = {.pc=0x57b7, .a=0x48, .x=0x88, .y=0x89, .sp=0xe0, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x57b7, .value=0x48}, {.addr=0x57b8, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x57b9, .a=0xd0, .x=0x88, .y=0x89, .sp=0xe0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x57b7, .value=0x48}, {.addr=0x57b8, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x57b7, .value=0x48, .type=IO_READ},
        {.addr=0x57b8, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0179) {
    const struct CPU_State initial_cpu = {.pc=0x56cc, .a=0x4b, .x=0xf1, .y=0x27, .sp=0x9c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x56cc, .value=0x48}, {.addr=0x56cd, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x56ce, .a=0x3a, .x=0xf1, .y=0x27, .sp=0x9c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x56cc, .value=0x48}, {.addr=0x56cd, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x56cc, .value=0x48, .type=IO_READ},
        {.addr=0x56cd, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017A) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0xd1, .x=0xb3, .y=0xcf, .sp=0x83, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x3733, .value=0x48}, {.addr=0x3734, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x3735, .a=0xa3, .x=0xb3, .y=0xcf, .sp=0x83, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3733, .value=0x48}, {.addr=0x3734, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0x48, .type=IO_READ},
        {.addr=0x3734, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017B) {
    const struct CPU_State initial_cpu = {.pc=0xef90, .a=0xee, .x=0x45, .y=0xdc, .sp=0x02, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xef90, .value=0x48}, {.addr=0xef91, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xef92, .a=0x72, .x=0x45, .y=0xdc, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xef90, .value=0x48}, {.addr=0xef91, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xef90, .value=0x48, .type=IO_READ},
        {.addr=0xef91, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe9ff, .a=0xf9, .x=0xe1, .y=0x63, .sp=0x2b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ff, .value=0x48}, {.addr=0xea00, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xea01, .a=0xa2, .x=0xe1, .y=0x63, .sp=0x2b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xe9ff, .value=0x48}, {.addr=0xea00, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe9ff, .value=0x48, .type=IO_READ},
        {.addr=0xea00, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017D) {
    const struct CPU_State initial_cpu = {.pc=0x0ec9, .a=0xd2, .x=0x96, .y=0xa5, .sp=0x16, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec9, .value=0x48}, {.addr=0x0eca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0ecb, .a=0x7d, .x=0x96, .y=0xa5, .sp=0x16, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0ec9, .value=0x48}, {.addr=0x0eca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0ec9, .value=0x48, .type=IO_READ},
        {.addr=0x0eca, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4bbf, .a=0x9e, .x=0x4f, .y=0xa7, .sp=0xab, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4bbf, .value=0x48}, {.addr=0x4bc0, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x4bc1, .a=0xb1, .x=0x4f, .y=0xa7, .sp=0xab, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4bbf, .value=0x48}, {.addr=0x4bc0, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x4bbf, .value=0x48, .type=IO_READ},
        {.addr=0x4bc0, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_017F) {
    const struct CPU_State initial_cpu = {.pc=0xf812, .a=0x27, .x=0xbe, .y=0x6e, .sp=0xca, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf812, .value=0x48}, {.addr=0xf813, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xf814, .a=0x53, .x=0xbe, .y=0x6e, .sp=0xca, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf812, .value=0x48}, {.addr=0xf813, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xf812, .value=0x48, .type=IO_READ},
        {.addr=0xf813, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0180) {
    const struct CPU_State initial_cpu = {.pc=0xeef6, .a=0x86, .x=0x70, .y=0x94, .sp=0x09, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xeef6, .value=0x48}, {.addr=0xeef7, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xeef8, .a=0x77, .x=0x70, .y=0x94, .sp=0x09, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xeef6, .value=0x48}, {.addr=0xeef7, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xeef6, .value=0x48, .type=IO_READ},
        {.addr=0xeef7, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0181) {
    const struct CPU_State initial_cpu = {.pc=0xf471, .a=0x2c, .x=0x4f, .y=0xb5, .sp=0x99, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf471, .value=0x48}, {.addr=0xf472, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xf473, .a=0x28, .x=0x4f, .y=0xb5, .sp=0x99, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf471, .value=0x48}, {.addr=0xf472, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xf471, .value=0x48, .type=IO_READ},
        {.addr=0xf472, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0182) {
    const struct CPU_State initial_cpu = {.pc=0xc0fe, .a=0x46, .x=0x32, .y=0xe4, .sp=0xcb, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fe, .value=0x48}, {.addr=0xc0ff, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xc100, .a=0x1c, .x=0x32, .y=0xe4, .sp=0xcb, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc0fe, .value=0x48}, {.addr=0xc0ff, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xc0fe, .value=0x48, .type=IO_READ},
        {.addr=0xc0ff, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0183) {
    const struct CPU_State initial_cpu = {.pc=0x875c, .a=0x09, .x=0x2a, .y=0x81, .sp=0x4f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x875c, .value=0x48}, {.addr=0x875d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x875e, .a=0x34, .x=0x2a, .y=0x81, .sp=0x4f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x875c, .value=0x48}, {.addr=0x875d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x875c, .value=0x48, .type=IO_READ},
        {.addr=0x875d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0184) {
    const struct CPU_State initial_cpu = {.pc=0xdf63, .a=0x28, .x=0xae, .y=0xc5, .sp=0xc0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdf63, .value=0x48}, {.addr=0xdf64, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xdf65, .a=0xc2, .x=0xae, .y=0xc5, .sp=0xc0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xdf63, .value=0x48}, {.addr=0xdf64, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xdf63, .value=0x48, .type=IO_READ},
        {.addr=0xdf64, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0185) {
    const struct CPU_State initial_cpu = {.pc=0x5e12, .a=0x16, .x=0xd6, .y=0xeb, .sp=0x0f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5e12, .value=0x48}, {.addr=0x5e13, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x5e14, .a=0xa4, .x=0xd6, .y=0xeb, .sp=0x0f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5e12, .value=0x48}, {.addr=0x5e13, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x5e12, .value=0x48, .type=IO_READ},
        {.addr=0x5e13, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0186) {
    const struct CPU_State initial_cpu = {.pc=0xe656, .a=0xcb, .x=0x55, .y=0x99, .sp=0x3d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe656, .value=0x48}, {.addr=0xe657, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xe658, .a=0xe7, .x=0x55, .y=0x99, .sp=0x3d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe656, .value=0x48}, {.addr=0xe657, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xe656, .value=0x48, .type=IO_READ},
        {.addr=0xe657, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0187) {
    const struct CPU_State initial_cpu = {.pc=0x3d0e, .a=0x17, .x=0x15, .y=0x4e, .sp=0x3e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0e, .value=0x48}, {.addr=0x3d0f, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3d10, .a=0x5e, .x=0x15, .y=0x4e, .sp=0x3e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3d0e, .value=0x48}, {.addr=0x3d0f, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x3d0e, .value=0x48, .type=IO_READ},
        {.addr=0x3d0f, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0188) {
    const struct CPU_State initial_cpu = {.pc=0x06fe, .a=0x0f, .x=0x0b, .y=0x7d, .sp=0x29, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x06fe, .value=0x48}, {.addr=0x06ff, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x0700, .a=0x17, .x=0x0b, .y=0x7d, .sp=0x29, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x06fe, .value=0x48}, {.addr=0x06ff, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x06fe, .value=0x48, .type=IO_READ},
        {.addr=0x06ff, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0189) {
    const struct CPU_State initial_cpu = {.pc=0xeb3c, .a=0x1c, .x=0xc2, .y=0x39, .sp=0x6b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3c, .value=0x48}, {.addr=0xeb3d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xeb3e, .a=0x10, .x=0xc2, .y=0x39, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xeb3c, .value=0x48}, {.addr=0xeb3d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xeb3c, .value=0x48, .type=IO_READ},
        {.addr=0xeb3d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018A) {
    const struct CPU_State initial_cpu = {.pc=0x18ff, .a=0x83, .x=0xdd, .y=0x66, .sp=0xc0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x18ff, .value=0x48}, {.addr=0x1900, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1901, .a=0x7e, .x=0xdd, .y=0x66, .sp=0xc0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x18ff, .value=0x48}, {.addr=0x1900, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x18ff, .value=0x48, .type=IO_READ},
        {.addr=0x1900, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018B) {
    const struct CPU_State initial_cpu = {.pc=0x673a, .a=0x34, .x=0x06, .y=0x10, .sp=0x14, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x673a, .value=0x48}, {.addr=0x673b, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x673c, .a=0xb7, .x=0x06, .y=0x10, .sp=0x14, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x673a, .value=0x48}, {.addr=0x673b, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x673a, .value=0x48, .type=IO_READ},
        {.addr=0x673b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018C) {
    const struct CPU_State initial_cpu = {.pc=0x7edd, .a=0x06, .x=0x12, .y=0x86, .sp=0x59, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7edd, .value=0x48}, {.addr=0x7ede, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x7edf, .a=0x45, .x=0x12, .y=0x86, .sp=0x59, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7edd, .value=0x48}, {.addr=0x7ede, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x7edd, .value=0x48, .type=IO_READ},
        {.addr=0x7ede, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018D) {
    const struct CPU_State initial_cpu = {.pc=0x42d5, .a=0x13, .x=0x57, .y=0x86, .sp=0xf3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x42d5, .value=0x48}, {.addr=0x42d6, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x42d7, .a=0x6a, .x=0x57, .y=0x86, .sp=0xf3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x42d5, .value=0x48}, {.addr=0x42d6, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x42d5, .value=0x48, .type=IO_READ},
        {.addr=0x42d6, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018E) {
    const struct CPU_State initial_cpu = {.pc=0x9285, .a=0xa8, .x=0xbd, .y=0x6e, .sp=0xd8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9285, .value=0x48}, {.addr=0x9286, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x9287, .a=0x11, .x=0xbd, .y=0x6e, .sp=0xd8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9285, .value=0x48}, {.addr=0x9286, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x9285, .value=0x48, .type=IO_READ},
        {.addr=0x9286, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_018F) {
    const struct CPU_State initial_cpu = {.pc=0xf560, .a=0xaf, .x=0x4d, .y=0xbf, .sp=0xc1, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf560, .value=0x48}, {.addr=0xf561, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf562, .a=0x30, .x=0x4d, .y=0xbf, .sp=0xc1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf560, .value=0x48}, {.addr=0xf561, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf560, .value=0x48, .type=IO_READ},
        {.addr=0xf561, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0190) {
    const struct CPU_State initial_cpu = {.pc=0x17d1, .a=0x92, .x=0x51, .y=0x0b, .sp=0x06, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x17d1, .value=0x48}, {.addr=0x17d2, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x17d3, .a=0xd9, .x=0x51, .y=0x0b, .sp=0x06, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x17d1, .value=0x48}, {.addr=0x17d2, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x17d1, .value=0x48, .type=IO_READ},
        {.addr=0x17d2, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0191) {
    const struct CPU_State initial_cpu = {.pc=0x93b1, .a=0xc4, .x=0x3f, .y=0x6f, .sp=0x4a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x93b1, .value=0x48}, {.addr=0x93b2, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x93b3, .a=0x3a, .x=0x3f, .y=0x6f, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x93b1, .value=0x48}, {.addr=0x93b2, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x93b1, .value=0x48, .type=IO_READ},
        {.addr=0x93b2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1998, .a=0xce, .x=0xf8, .y=0xe2, .sp=0xe5, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1998, .value=0x48}, {.addr=0x1999, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x199a, .a=0xa3, .x=0xf8, .y=0xe2, .sp=0xe5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1998, .value=0x48}, {.addr=0x1999, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1998, .value=0x48, .type=IO_READ},
        {.addr=0x1999, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0193) {
    const struct CPU_State initial_cpu = {.pc=0xe852, .a=0xd0, .x=0xee, .y=0x88, .sp=0x57, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe852, .value=0x48}, {.addr=0xe853, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xe854, .a=0x57, .x=0xee, .y=0x88, .sp=0x57, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe852, .value=0x48}, {.addr=0xe853, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xe852, .value=0x48, .type=IO_READ},
        {.addr=0xe853, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0194) {
    const struct CPU_State initial_cpu = {.pc=0xbdc7, .a=0xbd, .x=0x7a, .y=0xd8, .sp=0xf2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc7, .value=0x48}, {.addr=0xbdc8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbdc9, .a=0xc0, .x=0x7a, .y=0xd8, .sp=0xf2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xbdc7, .value=0x48}, {.addr=0xbdc8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbdc7, .value=0x48, .type=IO_READ},
        {.addr=0xbdc8, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0195) {
    const struct CPU_State initial_cpu = {.pc=0x81ee, .a=0xdb, .x=0x85, .y=0x73, .sp=0x7b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x81ee, .value=0x48}, {.addr=0x81ef, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x81f0, .a=0x47, .x=0x85, .y=0x73, .sp=0x7b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x81ee, .value=0x48}, {.addr=0x81ef, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x81ee, .value=0x48, .type=IO_READ},
        {.addr=0x81ef, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0196) {
    const struct CPU_State initial_cpu = {.pc=0x04a1, .a=0x2b, .x=0xe1, .y=0xd8, .sp=0xe1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x04a1, .value=0x48}, {.addr=0x04a2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x04a3, .a=0x8b, .x=0xe1, .y=0xd8, .sp=0xe1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x04a1, .value=0x48}, {.addr=0x04a2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x04a1, .value=0x48, .type=IO_READ},
        {.addr=0x04a2, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0197) {
    const struct CPU_State initial_cpu = {.pc=0x9ebe, .a=0x4b, .x=0x98, .y=0x3d, .sp=0x33, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9ebe, .value=0x48}, {.addr=0x9ebf, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x9ec0, .a=0x7f, .x=0x98, .y=0x3d, .sp=0x33, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9ebe, .value=0x48}, {.addr=0x9ebf, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x9ebe, .value=0x48, .type=IO_READ},
        {.addr=0x9ebf, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0198) {
    const struct CPU_State initial_cpu = {.pc=0x08ba, .a=0x1e, .x=0xbf, .y=0x42, .sp=0xde, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x08ba, .value=0x48}, {.addr=0x08bb, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x08bc, .a=0xa6, .x=0xbf, .y=0x42, .sp=0xde, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x08ba, .value=0x48}, {.addr=0x08bb, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x08ba, .value=0x48, .type=IO_READ},
        {.addr=0x08bb, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0199) {
    const struct CPU_State initial_cpu = {.pc=0x2bf1, .a=0x19, .x=0x8d, .y=0x58, .sp=0x32, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2bf1, .value=0x48}, {.addr=0x2bf2, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x2bf3, .a=0xbd, .x=0x8d, .y=0x58, .sp=0x32, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2bf1, .value=0x48}, {.addr=0x2bf2, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x2bf1, .value=0x48, .type=IO_READ},
        {.addr=0x2bf2, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019A) {
    const struct CPU_State initial_cpu = {.pc=0xca02, .a=0xb2, .x=0xe7, .y=0x94, .sp=0xc9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xca02, .value=0x48}, {.addr=0xca03, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xca04, .a=0xca, .x=0xe7, .y=0x94, .sp=0xc9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xca02, .value=0x48}, {.addr=0xca03, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xca02, .value=0x48, .type=IO_READ},
        {.addr=0xca03, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019B) {
    const struct CPU_State initial_cpu = {.pc=0x4009, .a=0x5c, .x=0x36, .y=0x28, .sp=0x08, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4009, .value=0x48}, {.addr=0x400a, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x400b, .a=0x67, .x=0x36, .y=0x28, .sp=0x08, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4009, .value=0x48}, {.addr=0x400a, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x4009, .value=0x48, .type=IO_READ},
        {.addr=0x400a, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019C) {
    const struct CPU_State initial_cpu = {.pc=0xdaa3, .a=0x7e, .x=0x9e, .y=0x5e, .sp=0x5b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa3, .value=0x48}, {.addr=0xdaa4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdaa5, .a=0xd1, .x=0x9e, .y=0x5e, .sp=0x5b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xdaa3, .value=0x48}, {.addr=0xdaa4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdaa3, .value=0x48, .type=IO_READ},
        {.addr=0xdaa4, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019D) {
    const struct CPU_State initial_cpu = {.pc=0x9f45, .a=0x63, .x=0x69, .y=0x6b, .sp=0xcd, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9f45, .value=0x48}, {.addr=0x9f46, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x9f47, .a=0xf0, .x=0x69, .y=0x6b, .sp=0xcd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9f45, .value=0x48}, {.addr=0x9f46, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x9f45, .value=0x48, .type=IO_READ},
        {.addr=0x9f46, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019E) {
    const struct CPU_State initial_cpu = {.pc=0x3c63, .a=0x35, .x=0x24, .y=0xc3, .sp=0x7f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3c63, .value=0x48}, {.addr=0x3c64, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x3c65, .a=0xaf, .x=0x24, .y=0xc3, .sp=0x7f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3c63, .value=0x48}, {.addr=0x3c64, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x3c63, .value=0x48, .type=IO_READ},
        {.addr=0x3c64, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_019F) {
    const struct CPU_State initial_cpu = {.pc=0xf6ef, .a=0xc2, .x=0xe2, .y=0xba, .sp=0x30, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ef, .value=0x48}, {.addr=0xf6f0, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xf6f1, .a=0x21, .x=0xe2, .y=0xba, .sp=0x30, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf6ef, .value=0x48}, {.addr=0xf6f0, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xf6ef, .value=0x48, .type=IO_READ},
        {.addr=0xf6f0, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xbc45, .a=0x99, .x=0x9d, .y=0x77, .sp=0xf2, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbc45, .value=0x48}, {.addr=0xbc46, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xbc47, .a=0x71, .x=0x9d, .y=0x77, .sp=0xf2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbc45, .value=0x48}, {.addr=0xbc46, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xbc45, .value=0x48, .type=IO_READ},
        {.addr=0xbc46, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xc084, .a=0x23, .x=0xff, .y=0xd3, .sp=0x09, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc084, .value=0x48}, {.addr=0xc085, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc086, .a=0xcb, .x=0xff, .y=0xd3, .sp=0x09, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc084, .value=0x48}, {.addr=0xc085, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc084, .value=0x48, .type=IO_READ},
        {.addr=0xc085, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xe14c, .a=0x6c, .x=0x7a, .y=0x64, .sp=0xe5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe14c, .value=0x48}, {.addr=0xe14d, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe14e, .a=0xa0, .x=0x7a, .y=0x64, .sp=0xe5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe14c, .value=0x48}, {.addr=0xe14d, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe14c, .value=0x48, .type=IO_READ},
        {.addr=0xe14d, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xa59a, .a=0x18, .x=0x33, .y=0xe4, .sp=0x0a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa59a, .value=0x48}, {.addr=0xa59b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa59c, .a=0xa7, .x=0x33, .y=0xe4, .sp=0x0a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa59a, .value=0x48}, {.addr=0xa59b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa59a, .value=0x48, .type=IO_READ},
        {.addr=0xa59b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd01c, .a=0x03, .x=0x1d, .y=0x92, .sp=0x93, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xd01c, .value=0x48}, {.addr=0xd01d, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xd01e, .a=0xe7, .x=0x1d, .y=0x92, .sp=0x93, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd01c, .value=0x48}, {.addr=0xd01d, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xd01c, .value=0x48, .type=IO_READ},
        {.addr=0xd01d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x0b82, .a=0xc9, .x=0xca, .y=0x43, .sp=0xbf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0b82, .value=0x48}, {.addr=0x0b83, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x0b84, .a=0x97, .x=0xca, .y=0x43, .sp=0xbf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0b82, .value=0x48}, {.addr=0x0b83, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x0b82, .value=0x48, .type=IO_READ},
        {.addr=0x0b83, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9c89, .a=0x8a, .x=0xb1, .y=0x5e, .sp=0xb2, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x9c89, .value=0x48}, {.addr=0x9c8a, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x9c8b, .a=0xb4, .x=0xb1, .y=0x5e, .sp=0xb2, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9c89, .value=0x48}, {.addr=0x9c8a, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x9c89, .value=0x48, .type=IO_READ},
        {.addr=0x9c8a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xd84e, .a=0x06, .x=0x85, .y=0x9f, .sp=0x82, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd84e, .value=0x48}, {.addr=0xd84f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xd850, .a=0x28, .x=0x85, .y=0x9f, .sp=0x82, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd84e, .value=0x48}, {.addr=0xd84f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xd84e, .value=0x48, .type=IO_READ},
        {.addr=0xd84f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe3a4, .a=0x09, .x=0x5b, .y=0xdd, .sp=0x2b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a4, .value=0x48}, {.addr=0xe3a5, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xe3a6, .a=0xf3, .x=0x5b, .y=0xdd, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe3a4, .value=0x48}, {.addr=0xe3a5, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xe3a4, .value=0x48, .type=IO_READ},
        {.addr=0xe3a5, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xce08, .a=0x0f, .x=0x63, .y=0x8e, .sp=0xd8, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xce08, .value=0x48}, {.addr=0xce09, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xce0a, .a=0x7f, .x=0x63, .y=0x8e, .sp=0xd8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xce08, .value=0x48}, {.addr=0xce09, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xce08, .value=0x48, .type=IO_READ},
        {.addr=0xce09, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xd92c, .a=0xe2, .x=0x74, .y=0x88, .sp=0x00, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd92c, .value=0x48}, {.addr=0xd92d, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xd92e, .a=0x81, .x=0x74, .y=0x88, .sp=0x00, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd92c, .value=0x48}, {.addr=0xd92d, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xd92c, .value=0x48, .type=IO_READ},
        {.addr=0xd92d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x7b56, .a=0x3a, .x=0x6f, .y=0xbd, .sp=0xf8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b56, .value=0x48}, {.addr=0x7b57, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x7b58, .a=0x0e, .x=0x6f, .y=0xbd, .sp=0xf8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7b56, .value=0x48}, {.addr=0x7b57, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x7b56, .value=0x48, .type=IO_READ},
        {.addr=0x7b57, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x1c9a, .a=0x22, .x=0x2e, .y=0x95, .sp=0x4a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1c9a, .value=0x48}, {.addr=0x1c9b, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x1c9c, .a=0xb0, .x=0x2e, .y=0x95, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1c9a, .value=0x48}, {.addr=0x1c9b, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x1c9a, .value=0x48, .type=IO_READ},
        {.addr=0x1c9b, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x11c6, .a=0x28, .x=0x58, .y=0xe8, .sp=0x87, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x11c6, .value=0x48}, {.addr=0x11c7, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x11c8, .a=0xa2, .x=0x58, .y=0xe8, .sp=0x87, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x11c6, .value=0x48}, {.addr=0x11c7, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x11c6, .value=0x48, .type=IO_READ},
        {.addr=0x11c7, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xbea7, .a=0xe3, .x=0x35, .y=0x04, .sp=0x88, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbea7, .value=0x48}, {.addr=0xbea8, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xbea9, .a=0x40, .x=0x35, .y=0x04, .sp=0x88, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbea7, .value=0x48}, {.addr=0xbea8, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xbea7, .value=0x48, .type=IO_READ},
        {.addr=0xbea8, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xc07b, .a=0x26, .x=0x4d, .y=0x7a, .sp=0xdc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xc07b, .value=0x48}, {.addr=0xc07c, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xc07d, .a=0x28, .x=0x4d, .y=0x7a, .sp=0xdc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc07b, .value=0x48}, {.addr=0xc07c, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xc07b, .value=0x48, .type=IO_READ},
        {.addr=0xc07c, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x9331, .a=0xde, .x=0x5f, .y=0xb6, .sp=0x1b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9331, .value=0x48}, {.addr=0x9332, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x9333, .a=0xc9, .x=0x5f, .y=0xb6, .sp=0x1b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9331, .value=0x48}, {.addr=0x9332, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x9331, .value=0x48, .type=IO_READ},
        {.addr=0x9332, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x8b7d, .a=0x9d, .x=0x74, .y=0x8e, .sp=0x4a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8b7d, .value=0x48}, {.addr=0x8b7e, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x8b7f, .a=0x0f, .x=0x74, .y=0x8e, .sp=0x4a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8b7d, .value=0x48}, {.addr=0x8b7e, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x8b7d, .value=0x48, .type=IO_READ},
        {.addr=0x8b7e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x2a3e, .a=0x7e, .x=0xd8, .y=0x00, .sp=0xcd, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a3e, .value=0x48}, {.addr=0x2a3f, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x2a40, .a=0x8e, .x=0xd8, .y=0x00, .sp=0xcd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2a3e, .value=0x48}, {.addr=0x2a3f, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x2a3e, .value=0x48, .type=IO_READ},
        {.addr=0x2a3f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xeedd, .a=0x05, .x=0xca, .y=0x48, .sp=0xa8, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xeedd, .value=0x48}, {.addr=0xeede, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeedf, .a=0x03, .x=0xca, .y=0x48, .sp=0xa8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xeedd, .value=0x48}, {.addr=0xeede, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeedd, .value=0x48, .type=IO_READ},
        {.addr=0xeede, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5028, .a=0xd1, .x=0xdd, .y=0x7a, .sp=0xe6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5028, .value=0x48}, {.addr=0x5029, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x502a, .a=0x18, .x=0xdd, .y=0x7a, .sp=0xe6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5028, .value=0x48}, {.addr=0x5029, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5028, .value=0x48, .type=IO_READ},
        {.addr=0x5029, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xde8a, .a=0x8e, .x=0xcf, .y=0xb6, .sp=0xef, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xde8a, .value=0x48}, {.addr=0xde8b, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xde8c, .a=0x5e, .x=0xcf, .y=0xb6, .sp=0xef, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xde8a, .value=0x48}, {.addr=0xde8b, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xde8a, .value=0x48, .type=IO_READ},
        {.addr=0xde8b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x1957, .a=0x06, .x=0x75, .y=0x7e, .sp=0x81, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1957, .value=0x48}, {.addr=0x1958, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x1959, .a=0x10, .x=0x75, .y=0x7e, .sp=0x81, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1957, .value=0x48}, {.addr=0x1958, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x1957, .value=0x48, .type=IO_READ},
        {.addr=0x1958, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xd1bc, .a=0xd3, .x=0x09, .y=0x8c, .sp=0x7e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xd1bc, .value=0x48}, {.addr=0xd1bd, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xd1be, .a=0x08, .x=0x09, .y=0x8c, .sp=0x7e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd1bc, .value=0x48}, {.addr=0xd1bd, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xd1bc, .value=0x48, .type=IO_READ},
        {.addr=0xd1bd, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb579, .a=0x02, .x=0x64, .y=0x54, .sp=0xed, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb579, .value=0x48}, {.addr=0xb57a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xb57b, .a=0x0c, .x=0x64, .y=0x54, .sp=0xed, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb579, .value=0x48}, {.addr=0xb57a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xb579, .value=0x48, .type=IO_READ},
        {.addr=0xb57a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x573b, .a=0xf8, .x=0xa6, .y=0xf8, .sp=0x1a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x573b, .value=0x48}, {.addr=0x573c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x573d, .a=0xa1, .x=0xa6, .y=0xf8, .sp=0x1a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x573b, .value=0x48}, {.addr=0x573c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x573b, .value=0x48, .type=IO_READ},
        {.addr=0x573c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x9fa7, .a=0x32, .x=0xa1, .y=0x64, .sp=0x01, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa7, .value=0x48}, {.addr=0x9fa8, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x9fa9, .a=0xbe, .x=0xa1, .y=0x64, .sp=0x01, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9fa7, .value=0x48}, {.addr=0x9fa8, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x9fa7, .value=0x48, .type=IO_READ},
        {.addr=0x9fa8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x44f3, .a=0x3b, .x=0x99, .y=0x30, .sp=0x45, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x44f3, .value=0x48}, {.addr=0x44f4, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x44f5, .a=0x0e, .x=0x99, .y=0x30, .sp=0x45, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x44f3, .value=0x48}, {.addr=0x44f4, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x44f3, .value=0x48, .type=IO_READ},
        {.addr=0x44f4, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5cbe, .a=0x61, .x=0x5f, .y=0x31, .sp=0xb8, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbe, .value=0x48}, {.addr=0x5cbf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5cc0, .a=0xfc, .x=0x5f, .y=0x31, .sp=0xb8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5cbe, .value=0x48}, {.addr=0x5cbf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5cbe, .value=0x48, .type=IO_READ},
        {.addr=0x5cbf, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf068, .a=0xf6, .x=0x1e, .y=0xad, .sp=0xbf, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xf068, .value=0x48}, {.addr=0xf069, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf06a, .a=0x0b, .x=0x1e, .y=0xad, .sp=0xbf, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf068, .value=0x48}, {.addr=0xf069, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf068, .value=0x48, .type=IO_READ},
        {.addr=0xf069, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x1c0b, .a=0x04, .x=0x54, .y=0xe8, .sp=0x87, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1c0b, .value=0x48}, {.addr=0x1c0c, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x1c0d, .a=0x43, .x=0x54, .y=0xe8, .sp=0x87, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1c0b, .value=0x48}, {.addr=0x1c0c, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x1c0b, .value=0x48, .type=IO_READ},
        {.addr=0x1c0c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x4ee7, .a=0xf4, .x=0xe8, .y=0xc4, .sp=0xb9, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee7, .value=0x48}, {.addr=0x4ee8, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x4ee9, .a=0x05, .x=0xe8, .y=0xc4, .sp=0xb9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4ee7, .value=0x48}, {.addr=0x4ee8, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x4ee7, .value=0x48, .type=IO_READ},
        {.addr=0x4ee8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xcf75, .a=0x45, .x=0xd3, .y=0xb1, .sp=0x2f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xcf75, .value=0x48}, {.addr=0xcf76, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xcf77, .a=0xe6, .x=0xd3, .y=0xb1, .sp=0x2f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xcf75, .value=0x48}, {.addr=0xcf76, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xcf75, .value=0x48, .type=IO_READ},
        {.addr=0xcf76, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x4918, .a=0xa8, .x=0xbe, .y=0x44, .sp=0x76, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4918, .value=0x48}, {.addr=0x4919, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x491a, .a=0x46, .x=0xbe, .y=0x44, .sp=0x76, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4918, .value=0x48}, {.addr=0x4919, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4918, .value=0x48, .type=IO_READ},
        {.addr=0x4919, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xa428, .a=0x2a, .x=0x81, .y=0x66, .sp=0x97, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa428, .value=0x48}, {.addr=0xa429, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa42a, .a=0xec, .x=0x81, .y=0x66, .sp=0x97, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa428, .value=0x48}, {.addr=0xa429, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa428, .value=0x48, .type=IO_READ},
        {.addr=0xa429, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x1140, .a=0x1e, .x=0x9e, .y=0xc9, .sp=0xf8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1140, .value=0x48}, {.addr=0x1141, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x1142, .a=0x12, .x=0x9e, .y=0xc9, .sp=0xf8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1140, .value=0x48}, {.addr=0x1141, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x1140, .value=0x48, .type=IO_READ},
        {.addr=0x1141, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x433d, .a=0xa7, .x=0x63, .y=0xca, .sp=0xf9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x433d, .value=0x48}, {.addr=0x433e, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x433f, .a=0x42, .x=0x63, .y=0xca, .sp=0xf9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x433d, .value=0x48}, {.addr=0x433e, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x433d, .value=0x48, .type=IO_READ},
        {.addr=0x433e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x2e73, .a=0x7c, .x=0xae, .y=0x8e, .sp=0x92, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2e73, .value=0x48}, {.addr=0x2e74, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x2e75, .a=0x1b, .x=0xae, .y=0x8e, .sp=0x92, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2e73, .value=0x48}, {.addr=0x2e74, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x2e73, .value=0x48, .type=IO_READ},
        {.addr=0x2e74, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x36df, .a=0x74, .x=0x47, .y=0xc3, .sp=0xc8, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x36df, .value=0x48}, {.addr=0x36e0, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x36e1, .a=0xb1, .x=0x47, .y=0xc3, .sp=0xc8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x36df, .value=0x48}, {.addr=0x36e0, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x36df, .value=0x48, .type=IO_READ},
        {.addr=0x36e0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xa83e, .a=0x17, .x=0x49, .y=0x8e, .sp=0x66, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa83e, .value=0x48}, {.addr=0xa83f, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xa840, .a=0xc3, .x=0x49, .y=0x8e, .sp=0x66, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa83e, .value=0x48}, {.addr=0xa83f, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xa83e, .value=0x48, .type=IO_READ},
        {.addr=0xa83f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xb258, .a=0xaa, .x=0x7c, .y=0x34, .sp=0x4f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb258, .value=0x48}, {.addr=0xb259, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xb25a, .a=0x79, .x=0x7c, .y=0x34, .sp=0x4f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb258, .value=0x48}, {.addr=0xb259, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xb258, .value=0x48, .type=IO_READ},
        {.addr=0xb259, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xef25, .a=0xe9, .x=0x2a, .y=0x48, .sp=0x08, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xef25, .value=0x48}, {.addr=0xef26, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xef27, .a=0x91, .x=0x2a, .y=0x48, .sp=0x08, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xef25, .value=0x48}, {.addr=0xef26, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xef25, .value=0x48, .type=IO_READ},
        {.addr=0xef26, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5f34, .a=0xf6, .x=0x41, .y=0x76, .sp=0x34, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5f34, .value=0x48}, {.addr=0x5f35, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5f36, .a=0xbb, .x=0x41, .y=0x76, .sp=0x34, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5f34, .value=0x48}, {.addr=0x5f35, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5f34, .value=0x48, .type=IO_READ},
        {.addr=0x5f35, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xdf88, .a=0x3e, .x=0xc7, .y=0x9a, .sp=0x83, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdf88, .value=0x48}, {.addr=0xdf89, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdf8a, .a=0x23, .x=0xc7, .y=0x9a, .sp=0x83, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xdf88, .value=0x48}, {.addr=0xdf89, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdf88, .value=0x48, .type=IO_READ},
        {.addr=0xdf89, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x3fc4, .a=0x73, .x=0x76, .y=0x7a, .sp=0x26, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc4, .value=0x48}, {.addr=0x3fc5, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x3fc6, .a=0xaa, .x=0x76, .y=0x7a, .sp=0x26, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3fc4, .value=0x48}, {.addr=0x3fc5, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x3fc4, .value=0x48, .type=IO_READ},
        {.addr=0x3fc5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xd3b9, .a=0xab, .x=0x61, .y=0xdf, .sp=0x38, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b9, .value=0x48}, {.addr=0xd3ba, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xd3bb, .a=0xa7, .x=0x61, .y=0xdf, .sp=0x38, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd3b9, .value=0x48}, {.addr=0xd3ba, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xd3b9, .value=0x48, .type=IO_READ},
        {.addr=0xd3ba, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x522e, .a=0x59, .x=0x24, .y=0xa1, .sp=0xb5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x522e, .value=0x48}, {.addr=0x522f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5230, .a=0x14, .x=0x24, .y=0xa1, .sp=0xb5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x522e, .value=0x48}, {.addr=0x522f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x522e, .value=0x48, .type=IO_READ},
        {.addr=0x522f, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x495d, .a=0xfd, .x=0x31, .y=0xd2, .sp=0xf4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x495d, .value=0x48}, {.addr=0x495e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x495f, .a=0x9e, .x=0x31, .y=0xd2, .sp=0xf4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x495d, .value=0x48}, {.addr=0x495e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x495d, .value=0x48, .type=IO_READ},
        {.addr=0x495e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x518f, .a=0xfa, .x=0x0c, .y=0x2d, .sp=0x1e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x518f, .value=0x48}, {.addr=0x5190, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5191, .a=0xb9, .x=0x0c, .y=0x2d, .sp=0x1e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x518f, .value=0x48}, {.addr=0x5190, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x518f, .value=0x48, .type=IO_READ},
        {.addr=0x5190, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xf7a3, .a=0x43, .x=0xa6, .y=0x5c, .sp=0x95, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a3, .value=0x48}, {.addr=0xf7a4, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xf7a5, .a=0x0b, .x=0xa6, .y=0x5c, .sp=0x95, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf7a3, .value=0x48}, {.addr=0xf7a4, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xf7a3, .value=0x48, .type=IO_READ},
        {.addr=0xf7a4, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xe509, .a=0x72, .x=0x33, .y=0x9f, .sp=0xef, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe509, .value=0x48}, {.addr=0xe50a, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xe50b, .a=0x01, .x=0x33, .y=0x9f, .sp=0xef, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe509, .value=0x48}, {.addr=0xe50a, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xe509, .value=0x48, .type=IO_READ},
        {.addr=0xe50a, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xd9c5, .a=0x2e, .x=0x7f, .y=0x8c, .sp=0x41, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c5, .value=0x48}, {.addr=0xd9c6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd9c7, .a=0x12, .x=0x7f, .y=0x8c, .sp=0x41, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd9c5, .value=0x48}, {.addr=0xd9c6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd9c5, .value=0x48, .type=IO_READ},
        {.addr=0xd9c6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x95e2, .a=0xcc, .x=0xe0, .y=0xe3, .sp=0x98, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x95e2, .value=0x48}, {.addr=0x95e3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x95e4, .a=0x4c, .x=0xe0, .y=0xe3, .sp=0x98, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x95e2, .value=0x48}, {.addr=0x95e3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x95e2, .value=0x48, .type=IO_READ},
        {.addr=0x95e3, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x65d2, .a=0x80, .x=0x7c, .y=0xf4, .sp=0x4c, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x65d2, .value=0x48}, {.addr=0x65d3, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x65d4, .a=0x53, .x=0x7c, .y=0xf4, .sp=0x4c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x65d2, .value=0x48}, {.addr=0x65d3, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x65d2, .value=0x48, .type=IO_READ},
        {.addr=0x65d3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x4175, .a=0xb9, .x=0x09, .y=0xff, .sp=0x15, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4175, .value=0x48}, {.addr=0x4176, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4177, .a=0xe3, .x=0x09, .y=0xff, .sp=0x15, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4175, .value=0x48}, {.addr=0x4176, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4175, .value=0x48, .type=IO_READ},
        {.addr=0x4176, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x381c, .a=0x61, .x=0x29, .y=0x5a, .sp=0x31, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x381c, .value=0x48}, {.addr=0x381d, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x381e, .a=0xae, .x=0x29, .y=0x5a, .sp=0x31, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x381c, .value=0x48}, {.addr=0x381d, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x381c, .value=0x48, .type=IO_READ},
        {.addr=0x381d, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xa0b4, .a=0xd9, .x=0xd7, .y=0x10, .sp=0xae, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b4, .value=0x48}, {.addr=0xa0b5, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xa0b6, .a=0x87, .x=0xd7, .y=0x10, .sp=0xae, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa0b4, .value=0x48}, {.addr=0xa0b5, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xa0b4, .value=0x48, .type=IO_READ},
        {.addr=0xa0b5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x57f2, .a=0xbb, .x=0x49, .y=0x34, .sp=0x1d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x57f2, .value=0x48}, {.addr=0x57f3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x57f4, .a=0xae, .x=0x49, .y=0x34, .sp=0x1d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x57f2, .value=0x48}, {.addr=0x57f3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x57f2, .value=0x48, .type=IO_READ},
        {.addr=0x57f3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xf2a7, .a=0xaf, .x=0x50, .y=0x54, .sp=0xa7, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a7, .value=0x48}, {.addr=0xf2a8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf2a9, .a=0xb2, .x=0x50, .y=0x54, .sp=0xa7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf2a7, .value=0x48}, {.addr=0xf2a8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf2a7, .value=0x48, .type=IO_READ},
        {.addr=0xf2a8, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x767f, .a=0x03, .x=0x2a, .y=0x6e, .sp=0x89, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x767f, .value=0x48}, {.addr=0x7680, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x7681, .a=0x29, .x=0x2a, .y=0x6e, .sp=0x89, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x767f, .value=0x48}, {.addr=0x7680, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x767f, .value=0x48, .type=IO_READ},
        {.addr=0x7680, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x4de7, .a=0xa7, .x=0x20, .y=0x20, .sp=0xa9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4de7, .value=0x48}, {.addr=0x4de8, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x4de9, .a=0x46, .x=0x20, .y=0x20, .sp=0xa9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x4de7, .value=0x48}, {.addr=0x4de8, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x4de7, .value=0x48, .type=IO_READ},
        {.addr=0x4de8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x871e, .a=0xbe, .x=0xda, .y=0xb2, .sp=0x39, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x871e, .value=0x48}, {.addr=0x871f, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x8720, .a=0x07, .x=0xda, .y=0xb2, .sp=0x39, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x871e, .value=0x48}, {.addr=0x871f, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x871e, .value=0x48, .type=IO_READ},
        {.addr=0x871f, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x4ec8, .a=0x10, .x=0x12, .y=0xff, .sp=0x15, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec8, .value=0x48}, {.addr=0x4ec9, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x4eca, .a=0x9c, .x=0x12, .y=0xff, .sp=0x15, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4ec8, .value=0x48}, {.addr=0x4ec9, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x4ec8, .value=0x48, .type=IO_READ},
        {.addr=0x4ec9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x9322, .a=0x4f, .x=0xf3, .y=0xef, .sp=0x56, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9322, .value=0x48}, {.addr=0x9323, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x9324, .a=0xe4, .x=0xf3, .y=0xef, .sp=0x56, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9322, .value=0x48}, {.addr=0x9323, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x9322, .value=0x48, .type=IO_READ},
        {.addr=0x9323, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x7505, .a=0xe6, .x=0x6a, .y=0xdb, .sp=0x5f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7505, .value=0x48}, {.addr=0x7506, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7507, .a=0x41, .x=0x6a, .y=0xdb, .sp=0x5f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7505, .value=0x48}, {.addr=0x7506, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7505, .value=0x48, .type=IO_READ},
        {.addr=0x7506, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xe933, .a=0x6e, .x=0x0a, .y=0xfb, .sp=0x09, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe933, .value=0x48}, {.addr=0xe934, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xe935, .a=0xa1, .x=0x0a, .y=0xfb, .sp=0x09, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe933, .value=0x48}, {.addr=0xe934, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xe933, .value=0x48, .type=IO_READ},
        {.addr=0xe934, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x64ef, .a=0x2e, .x=0x1d, .y=0x7b, .sp=0xd3, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x64ef, .value=0x48}, {.addr=0x64f0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x64f1, .a=0x91, .x=0x1d, .y=0x7b, .sp=0xd3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x64ef, .value=0x48}, {.addr=0x64f0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x64ef, .value=0x48, .type=IO_READ},
        {.addr=0x64f0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xe608, .a=0x18, .x=0xb9, .y=0x3b, .sp=0x16, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe608, .value=0x48}, {.addr=0xe609, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe60a, .a=0x30, .x=0xb9, .y=0x3b, .sp=0x16, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe608, .value=0x48}, {.addr=0xe609, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe608, .value=0x48, .type=IO_READ},
        {.addr=0xe609, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x8171, .a=0xf0, .x=0x6c, .y=0xd2, .sp=0x0a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8171, .value=0x48}, {.addr=0x8172, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8173, .a=0xdc, .x=0x6c, .y=0xd2, .sp=0x0a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8171, .value=0x48}, {.addr=0x8172, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8171, .value=0x48, .type=IO_READ},
        {.addr=0x8172, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x21c9, .a=0xbf, .x=0x20, .y=0x46, .sp=0xf0, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x21c9, .value=0x48}, {.addr=0x21ca, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x21cb, .a=0xef, .x=0x20, .y=0x46, .sp=0xf0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x21c9, .value=0x48}, {.addr=0x21ca, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x21c9, .value=0x48, .type=IO_READ},
        {.addr=0x21ca, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xc084, .a=0xa9, .x=0xc0, .y=0x33, .sp=0x22, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc084, .value=0x48}, {.addr=0xc085, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xc086, .a=0x42, .x=0xc0, .y=0x33, .sp=0x22, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc084, .value=0x48}, {.addr=0xc085, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xc084, .value=0x48, .type=IO_READ},
        {.addr=0xc085, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xf492, .a=0xb6, .x=0xde, .y=0x7e, .sp=0x44, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf492, .value=0x48}, {.addr=0xf493, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xf494, .a=0xf4, .x=0xde, .y=0x7e, .sp=0x44, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf492, .value=0x48}, {.addr=0xf493, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xf492, .value=0x48, .type=IO_READ},
        {.addr=0xf493, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x3fdf, .a=0x5b, .x=0xeb, .y=0xc2, .sp=0xdd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3fdf, .value=0x48}, {.addr=0x3fe0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x3fe1, .a=0x31, .x=0xeb, .y=0xc2, .sp=0xdd, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3fdf, .value=0x48}, {.addr=0x3fe0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x3fdf, .value=0x48, .type=IO_READ},
        {.addr=0x3fe0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xe96b, .a=0xa7, .x=0xd4, .y=0x3d, .sp=0x6d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe96b, .value=0x48}, {.addr=0xe96c, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0x8c, .x=0xd4, .y=0x3d, .sp=0x6d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe96b, .value=0x48}, {.addr=0xe96c, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe96b, .value=0x48, .type=IO_READ},
        {.addr=0xe96c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd4f9, .a=0x7d, .x=0x4b, .y=0x74, .sp=0x7d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f9, .value=0x48}, {.addr=0xd4fa, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd4fb, .a=0xa7, .x=0x4b, .y=0x74, .sp=0x7d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd4f9, .value=0x48}, {.addr=0xd4fa, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd4f9, .value=0x48, .type=IO_READ},
        {.addr=0xd4fa, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xd1ea, .a=0x4c, .x=0xdb, .y=0xef, .sp=0x07, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ea, .value=0x48}, {.addr=0xd1eb, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xd1ec, .a=0xef, .x=0xdb, .y=0xef, .sp=0x07, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd1ea, .value=0x48}, {.addr=0xd1eb, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xd1ea, .value=0x48, .type=IO_READ},
        {.addr=0xd1eb, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x1c29, .a=0x73, .x=0x87, .y=0x6a, .sp=0xb5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1c29, .value=0x48}, {.addr=0x1c2a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1c2b, .a=0x6f, .x=0x87, .y=0x6a, .sp=0xb5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1c29, .value=0x48}, {.addr=0x1c2a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1c29, .value=0x48, .type=IO_READ},
        {.addr=0x1c2a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x070d, .a=0xcb, .x=0x01, .y=0x6f, .sp=0x96, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x070d, .value=0x48}, {.addr=0x070e, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x070f, .a=0xba, .x=0x01, .y=0x6f, .sp=0x96, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x070d, .value=0x48}, {.addr=0x070e, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x070d, .value=0x48, .type=IO_READ},
        {.addr=0x070e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x3ea8, .a=0x37, .x=0x5e, .y=0x9a, .sp=0x81, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea8, .value=0x48}, {.addr=0x3ea9, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x3eaa, .a=0x49, .x=0x5e, .y=0x9a, .sp=0x81, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3ea8, .value=0x48}, {.addr=0x3ea9, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x3ea8, .value=0x48, .type=IO_READ},
        {.addr=0x3ea9, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x53eb, .a=0xdc, .x=0x93, .y=0xef, .sp=0x73, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x53eb, .value=0x48}, {.addr=0x53ec, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x53ed, .a=0xa4, .x=0x93, .y=0xef, .sp=0x73, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x53eb, .value=0x48}, {.addr=0x53ec, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x53eb, .value=0x48, .type=IO_READ},
        {.addr=0x53ec, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x34b1, .a=0x41, .x=0xa9, .y=0x27, .sp=0x94, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x34b1, .value=0x48}, {.addr=0x34b2, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x34b3, .a=0xa2, .x=0xa9, .y=0x27, .sp=0x94, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x34b1, .value=0x48}, {.addr=0x34b2, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x34b1, .value=0x48, .type=IO_READ},
        {.addr=0x34b2, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x5a4f, .a=0xed, .x=0xb1, .y=0xc6, .sp=0xd2, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5a4f, .value=0x48}, {.addr=0x5a50, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5a51, .a=0x42, .x=0xb1, .y=0xc6, .sp=0xd2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5a4f, .value=0x48}, {.addr=0x5a50, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5a4f, .value=0x48, .type=IO_READ},
        {.addr=0x5a50, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xb681, .a=0x47, .x=0x19, .y=0xf8, .sp=0xdd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb681, .value=0x48}, {.addr=0xb682, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xb683, .a=0xf2, .x=0x19, .y=0xf8, .sp=0xdd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb681, .value=0x48}, {.addr=0xb682, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xb681, .value=0x48, .type=IO_READ},
        {.addr=0xb682, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc871, .a=0xbd, .x=0x13, .y=0x74, .sp=0x8c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc871, .value=0x48}, {.addr=0xc872, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc873, .a=0xf1, .x=0x13, .y=0x74, .sp=0x8c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc871, .value=0x48}, {.addr=0xc872, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc871, .value=0x48, .type=IO_READ},
        {.addr=0xc872, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x8a87, .a=0xad, .x=0x5e, .y=0x6a, .sp=0x8c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8a87, .value=0x48}, {.addr=0x8a88, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8a89, .a=0xc8, .x=0x5e, .y=0x6a, .sp=0x8c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8a87, .value=0x48}, {.addr=0x8a88, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8a87, .value=0x48, .type=IO_READ},
        {.addr=0x8a88, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xa2ac, .a=0x32, .x=0x33, .y=0xa8, .sp=0x99, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ac, .value=0x48}, {.addr=0xa2ad, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xa2ae, .a=0x3c, .x=0x33, .y=0xa8, .sp=0x99, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa2ac, .value=0x48}, {.addr=0xa2ad, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xa2ac, .value=0x48, .type=IO_READ},
        {.addr=0xa2ad, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x3f2b, .a=0x8d, .x=0xf1, .y=0x03, .sp=0xc4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2b, .value=0x48}, {.addr=0x3f2c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x3f2d, .a=0xb8, .x=0xf1, .y=0x03, .sp=0xc4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3f2b, .value=0x48}, {.addr=0x3f2c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x3f2b, .value=0x48, .type=IO_READ},
        {.addr=0x3f2c, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x8698, .a=0x8d, .x=0xb8, .y=0xf4, .sp=0xeb, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8698, .value=0x48}, {.addr=0x8699, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x869a, .a=0xdd, .x=0xb8, .y=0xf4, .sp=0xeb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8698, .value=0x48}, {.addr=0x8699, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x8698, .value=0x48, .type=IO_READ},
        {.addr=0x8699, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xed5f, .a=0x71, .x=0x4b, .y=0x19, .sp=0x21, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xed5f, .value=0x48}, {.addr=0xed60, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xed61, .a=0x1f, .x=0x4b, .y=0x19, .sp=0x21, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xed5f, .value=0x48}, {.addr=0xed60, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xed5f, .value=0x48, .type=IO_READ},
        {.addr=0xed60, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x4d08, .a=0x62, .x=0xd1, .y=0xa4, .sp=0x59, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4d08, .value=0x48}, {.addr=0x4d09, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4d0a, .a=0x27, .x=0xd1, .y=0xa4, .sp=0x59, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4d08, .value=0x48}, {.addr=0x4d09, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4d08, .value=0x48, .type=IO_READ},
        {.addr=0x4d09, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe99b, .a=0x8b, .x=0xd6, .y=0x4b, .sp=0x42, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe99b, .value=0x48}, {.addr=0xe99c, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xe99d, .a=0xcc, .x=0xd6, .y=0x4b, .sp=0x42, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe99b, .value=0x48}, {.addr=0xe99c, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xe99b, .value=0x48, .type=IO_READ},
        {.addr=0xe99c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xbe0e, .a=0xbe, .x=0x91, .y=0xed, .sp=0xfb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbe0e, .value=0x48}, {.addr=0xbe0f, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xbe10, .a=0x69, .x=0x91, .y=0xed, .sp=0xfb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbe0e, .value=0x48}, {.addr=0xbe0f, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xbe0e, .value=0x48, .type=IO_READ},
        {.addr=0xbe0f, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x9d86, .a=0x80, .x=0x84, .y=0xd8, .sp=0xba, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x9d86, .value=0x48}, {.addr=0x9d87, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x9d88, .a=0xde, .x=0x84, .y=0xd8, .sp=0xba, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9d86, .value=0x48}, {.addr=0x9d87, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x9d86, .value=0x48, .type=IO_READ},
        {.addr=0x9d87, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xe16a, .a=0x1b, .x=0x8c, .y=0x59, .sp=0xb6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe16a, .value=0x48}, {.addr=0xe16b, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xe16c, .a=0xbb, .x=0x8c, .y=0x59, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe16a, .value=0x48}, {.addr=0xe16b, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xe16a, .value=0x48, .type=IO_READ},
        {.addr=0xe16b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x3338, .a=0x20, .x=0x64, .y=0xee, .sp=0x35, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3338, .value=0x48}, {.addr=0x3339, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x333a, .a=0xda, .x=0x64, .y=0xee, .sp=0x35, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3338, .value=0x48}, {.addr=0x3339, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x3338, .value=0x48, .type=IO_READ},
        {.addr=0x3339, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x2659, .a=0xce, .x=0x61, .y=0x32, .sp=0x47, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2659, .value=0x48}, {.addr=0x265a, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x265b, .a=0x39, .x=0x61, .y=0x32, .sp=0x47, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2659, .value=0x48}, {.addr=0x265a, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x2659, .value=0x48, .type=IO_READ},
        {.addr=0x265a, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0200) {
    const struct CPU_State initial_cpu = {.pc=0xad91, .a=0xbb, .x=0x85, .y=0x74, .sp=0x79, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xad91, .value=0x48}, {.addr=0xad92, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xad93, .a=0xc6, .x=0x85, .y=0x74, .sp=0x79, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xad91, .value=0x48}, {.addr=0xad92, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xad91, .value=0x48, .type=IO_READ},
        {.addr=0xad92, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0201) {
    const struct CPU_State initial_cpu = {.pc=0x110d, .a=0xd5, .x=0x14, .y=0x76, .sp=0x19, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x110d, .value=0x48}, {.addr=0x110e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x110f, .a=0x22, .x=0x14, .y=0x76, .sp=0x19, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x110d, .value=0x48}, {.addr=0x110e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x110d, .value=0x48, .type=IO_READ},
        {.addr=0x110e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0202) {
    const struct CPU_State initial_cpu = {.pc=0xc0c6, .a=0x0a, .x=0x3b, .y=0xe2, .sp=0x59, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c6, .value=0x48}, {.addr=0xc0c7, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xc0c8, .a=0xbc, .x=0x3b, .y=0xe2, .sp=0x59, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc0c6, .value=0x48}, {.addr=0xc0c7, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xc0c6, .value=0x48, .type=IO_READ},
        {.addr=0xc0c7, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0203) {
    const struct CPU_State initial_cpu = {.pc=0xbacd, .a=0x3d, .x=0xea, .y=0x43, .sp=0x2b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xbacd, .value=0x48}, {.addr=0xbace, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xbacf, .a=0xcc, .x=0xea, .y=0x43, .sp=0x2b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xbacd, .value=0x48}, {.addr=0xbace, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xbacd, .value=0x48, .type=IO_READ},
        {.addr=0xbace, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5392, .a=0xc3, .x=0x8b, .y=0x01, .sp=0x91, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5392, .value=0x48}, {.addr=0x5393, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x5394, .a=0x6b, .x=0x8b, .y=0x01, .sp=0x91, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5392, .value=0x48}, {.addr=0x5393, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x5392, .value=0x48, .type=IO_READ},
        {.addr=0x5393, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0205) {
    const struct CPU_State initial_cpu = {.pc=0x900b, .a=0xfd, .x=0xd7, .y=0x6f, .sp=0x5c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x900b, .value=0x48}, {.addr=0x900c, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x900d, .a=0xc6, .x=0xd7, .y=0x6f, .sp=0x5c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x900b, .value=0x48}, {.addr=0x900c, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x900b, .value=0x48, .type=IO_READ},
        {.addr=0x900c, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0206) {
    const struct CPU_State initial_cpu = {.pc=0x2821, .a=0x21, .x=0x31, .y=0x20, .sp=0x55, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2821, .value=0x48}, {.addr=0x2822, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x2823, .a=0xf3, .x=0x31, .y=0x20, .sp=0x55, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2821, .value=0x48}, {.addr=0x2822, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2821, .value=0x48, .type=IO_READ},
        {.addr=0x2822, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb0a4, .a=0x2b, .x=0x06, .y=0xcd, .sp=0x77, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a4, .value=0x48}, {.addr=0xb0a5, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xb0a6, .a=0x90, .x=0x06, .y=0xcd, .sp=0x77, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb0a4, .value=0x48}, {.addr=0xb0a5, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xb0a4, .value=0x48, .type=IO_READ},
        {.addr=0xb0a5, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0208) {
    const struct CPU_State initial_cpu = {.pc=0x9f21, .a=0x4b, .x=0x54, .y=0x12, .sp=0xd0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9f21, .value=0x48}, {.addr=0x9f22, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9f23, .a=0xa4, .x=0x54, .y=0x12, .sp=0xd0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9f21, .value=0x48}, {.addr=0x9f22, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9f21, .value=0x48, .type=IO_READ},
        {.addr=0x9f22, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0209) {
    const struct CPU_State initial_cpu = {.pc=0x4ceb, .a=0x23, .x=0x88, .y=0x19, .sp=0x98, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4ceb, .value=0x48}, {.addr=0x4cec, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4ced, .a=0xed, .x=0x88, .y=0x19, .sp=0x98, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4ceb, .value=0x48}, {.addr=0x4cec, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4ceb, .value=0x48, .type=IO_READ},
        {.addr=0x4cec, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020A) {
    const struct CPU_State initial_cpu = {.pc=0x9796, .a=0xc9, .x=0xec, .y=0x08, .sp=0x8e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9796, .value=0x48}, {.addr=0x9797, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x9798, .a=0x0b, .x=0xec, .y=0x08, .sp=0x8e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9796, .value=0x48}, {.addr=0x9797, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x9796, .value=0x48, .type=IO_READ},
        {.addr=0x9797, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020B) {
    const struct CPU_State initial_cpu = {.pc=0x8db3, .a=0xe8, .x=0x42, .y=0x36, .sp=0xda, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8db3, .value=0x48}, {.addr=0x8db4, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8db5, .a=0xd3, .x=0x42, .y=0x36, .sp=0xda, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8db3, .value=0x48}, {.addr=0x8db4, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x8db3, .value=0x48, .type=IO_READ},
        {.addr=0x8db4, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020C) {
    const struct CPU_State initial_cpu = {.pc=0x01d4, .a=0x79, .x=0x55, .y=0xf1, .sp=0xa2, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x48}, {.addr=0x01d5, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x01d6, .a=0x67, .x=0x55, .y=0xf1, .sp=0xa2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x48}, {.addr=0x01d5, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x01d4, .value=0x48, .type=IO_READ},
        {.addr=0x01d5, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020D) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0x78, .x=0x6d, .y=0xbf, .sp=0x4c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1274, .value=0x48}, {.addr=0x1275, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x1276, .a=0x77, .x=0x6d, .y=0xbf, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1274, .value=0x48}, {.addr=0x1275, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0x48, .type=IO_READ},
        {.addr=0x1275, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020E) {
    const struct CPU_State initial_cpu = {.pc=0x2c36, .a=0x06, .x=0x3a, .y=0x6e, .sp=0x11, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2c36, .value=0x48}, {.addr=0x2c37, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x2c38, .a=0xfd, .x=0x3a, .y=0x6e, .sp=0x11, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2c36, .value=0x48}, {.addr=0x2c37, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x2c36, .value=0x48, .type=IO_READ},
        {.addr=0x2c37, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_020F) {
    const struct CPU_State initial_cpu = {.pc=0xac21, .a=0xb7, .x=0x5c, .y=0x2e, .sp=0xef, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xac21, .value=0x48}, {.addr=0xac22, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xac23, .a=0x99, .x=0x5c, .y=0x2e, .sp=0xef, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xac21, .value=0x48}, {.addr=0xac22, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xac21, .value=0x48, .type=IO_READ},
        {.addr=0xac22, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0210) {
    const struct CPU_State initial_cpu = {.pc=0x2b31, .a=0xff, .x=0x00, .y=0x45, .sp=0x23, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2b31, .value=0x48}, {.addr=0x2b32, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x2b33, .a=0x53, .x=0x00, .y=0x45, .sp=0x23, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2b31, .value=0x48}, {.addr=0x2b32, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x2b31, .value=0x48, .type=IO_READ},
        {.addr=0x2b32, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0211) {
    const struct CPU_State initial_cpu = {.pc=0x34f1, .a=0xd4, .x=0x10, .y=0x2a, .sp=0xbd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x34f1, .value=0x48}, {.addr=0x34f2, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x34f3, .a=0x3f, .x=0x10, .y=0x2a, .sp=0xbd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x34f1, .value=0x48}, {.addr=0x34f2, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x34f1, .value=0x48, .type=IO_READ},
        {.addr=0x34f2, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0212) {
    const struct CPU_State initial_cpu = {.pc=0xcf13, .a=0x00, .x=0x8c, .y=0xf1, .sp=0x36, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xcf13, .value=0x48}, {.addr=0xcf14, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xcf15, .a=0xba, .x=0x8c, .y=0xf1, .sp=0x36, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xcf13, .value=0x48}, {.addr=0xcf14, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xcf13, .value=0x48, .type=IO_READ},
        {.addr=0xcf14, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0213) {
    const struct CPU_State initial_cpu = {.pc=0x844c, .a=0x52, .x=0x93, .y=0xfe, .sp=0x70, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x844c, .value=0x48}, {.addr=0x844d, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x844e, .a=0x3c, .x=0x93, .y=0xfe, .sp=0x70, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x844c, .value=0x48}, {.addr=0x844d, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x844c, .value=0x48, .type=IO_READ},
        {.addr=0x844d, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0214) {
    const struct CPU_State initial_cpu = {.pc=0xdf89, .a=0x49, .x=0x91, .y=0xc4, .sp=0x2e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf89, .value=0x48}, {.addr=0xdf8a, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xdf8b, .a=0x5c, .x=0x91, .y=0xc4, .sp=0x2e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdf89, .value=0x48}, {.addr=0xdf8a, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xdf89, .value=0x48, .type=IO_READ},
        {.addr=0xdf8a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0215) {
    const struct CPU_State initial_cpu = {.pc=0x0c89, .a=0x7c, .x=0xcf, .y=0x25, .sp=0x4f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0c89, .value=0x48}, {.addr=0x0c8a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x0c8b, .a=0xe4, .x=0xcf, .y=0x25, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0c89, .value=0x48}, {.addr=0x0c8a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x0c89, .value=0x48, .type=IO_READ},
        {.addr=0x0c8a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0216) {
    const struct CPU_State initial_cpu = {.pc=0x697a, .a=0x9e, .x=0x0c, .y=0x2c, .sp=0xd2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x697a, .value=0x48}, {.addr=0x697b, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x697c, .a=0x51, .x=0x0c, .y=0x2c, .sp=0xd2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x697a, .value=0x48}, {.addr=0x697b, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x697a, .value=0x48, .type=IO_READ},
        {.addr=0x697b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0217) {
    const struct CPU_State initial_cpu = {.pc=0x2299, .a=0x46, .x=0x46, .y=0xd6, .sp=0x2f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2299, .value=0x48}, {.addr=0x229a, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x229b, .a=0x62, .x=0x46, .y=0xd6, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2299, .value=0x48}, {.addr=0x229a, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x2299, .value=0x48, .type=IO_READ},
        {.addr=0x229a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0218) {
    const struct CPU_State initial_cpu = {.pc=0x780d, .a=0x9a, .x=0x8a, .y=0xf5, .sp=0x90, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x780d, .value=0x48}, {.addr=0x780e, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x780f, .a=0x3e, .x=0x8a, .y=0xf5, .sp=0x90, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x780d, .value=0x48}, {.addr=0x780e, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x780d, .value=0x48, .type=IO_READ},
        {.addr=0x780e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0219) {
    const struct CPU_State initial_cpu = {.pc=0x6631, .a=0x1a, .x=0xa7, .y=0x5c, .sp=0xbc, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6631, .value=0x48}, {.addr=0x6632, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x6633, .a=0xfb, .x=0xa7, .y=0x5c, .sp=0xbc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6631, .value=0x48}, {.addr=0x6632, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x6631, .value=0x48, .type=IO_READ},
        {.addr=0x6632, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021A) {
    const struct CPU_State initial_cpu = {.pc=0x0806, .a=0xba, .x=0x9a, .y=0xfa, .sp=0xa7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0806, .value=0x48}, {.addr=0x0807, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x0808, .a=0x16, .x=0x9a, .y=0xfa, .sp=0xa7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0806, .value=0x48}, {.addr=0x0807, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x0806, .value=0x48, .type=IO_READ},
        {.addr=0x0807, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021B) {
    const struct CPU_State initial_cpu = {.pc=0xa566, .a=0x99, .x=0x70, .y=0xf0, .sp=0x5f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa566, .value=0x48}, {.addr=0xa567, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa568, .a=0x2e, .x=0x70, .y=0xf0, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa566, .value=0x48}, {.addr=0xa567, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa566, .value=0x48, .type=IO_READ},
        {.addr=0xa567, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021C) {
    const struct CPU_State initial_cpu = {.pc=0xb8e0, .a=0x7d, .x=0x72, .y=0xfe, .sp=0x59, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e0, .value=0x48}, {.addr=0xb8e1, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xb8e2, .a=0xf9, .x=0x72, .y=0xfe, .sp=0x59, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb8e0, .value=0x48}, {.addr=0xb8e1, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xb8e0, .value=0x48, .type=IO_READ},
        {.addr=0xb8e1, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021D) {
    const struct CPU_State initial_cpu = {.pc=0x7d30, .a=0x92, .x=0xf3, .y=0xfd, .sp=0xc1, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7d30, .value=0x48}, {.addr=0x7d31, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7d32, .a=0x9c, .x=0xf3, .y=0xfd, .sp=0xc1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7d30, .value=0x48}, {.addr=0x7d31, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7d30, .value=0x48, .type=IO_READ},
        {.addr=0x7d31, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021E) {
    const struct CPU_State initial_cpu = {.pc=0xdfe8, .a=0x5d, .x=0xfc, .y=0xa4, .sp=0xee, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe8, .value=0x48}, {.addr=0xdfe9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdfea, .a=0x30, .x=0xfc, .y=0xa4, .sp=0xee, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdfe8, .value=0x48}, {.addr=0xdfe9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdfe8, .value=0x48, .type=IO_READ},
        {.addr=0xdfe9, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_021F) {
    const struct CPU_State initial_cpu = {.pc=0xebe0, .a=0x86, .x=0xdc, .y=0x81, .sp=0xf3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xebe0, .value=0x48}, {.addr=0xebe1, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xebe2, .a=0xd3, .x=0xdc, .y=0x81, .sp=0xf3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xebe0, .value=0x48}, {.addr=0xebe1, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xebe0, .value=0x48, .type=IO_READ},
        {.addr=0xebe1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7586, .a=0xf7, .x=0x5a, .y=0xfd, .sp=0x15, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7586, .value=0x48}, {.addr=0x7587, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x7588, .a=0x6d, .x=0x5a, .y=0xfd, .sp=0x15, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7586, .value=0x48}, {.addr=0x7587, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7586, .value=0x48, .type=IO_READ},
        {.addr=0x7587, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0221) {
    const struct CPU_State initial_cpu = {.pc=0x09db, .a=0x43, .x=0x7f, .y=0xc0, .sp=0xab, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x09db, .value=0x48}, {.addr=0x09dc, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x09dd, .a=0x16, .x=0x7f, .y=0xc0, .sp=0xab, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x09db, .value=0x48}, {.addr=0x09dc, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x09db, .value=0x48, .type=IO_READ},
        {.addr=0x09dc, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0222) {
    const struct CPU_State initial_cpu = {.pc=0x2a32, .a=0x29, .x=0x54, .y=0xb2, .sp=0x48, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a32, .value=0x48}, {.addr=0x2a33, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x2a34, .a=0x60, .x=0x54, .y=0xb2, .sp=0x48, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2a32, .value=0x48}, {.addr=0x2a33, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x2a32, .value=0x48, .type=IO_READ},
        {.addr=0x2a33, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0223) {
    const struct CPU_State initial_cpu = {.pc=0x5654, .a=0x47, .x=0x8d, .y=0xfa, .sp=0xf4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5654, .value=0x48}, {.addr=0x5655, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x5656, .a=0x05, .x=0x8d, .y=0xfa, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5654, .value=0x48}, {.addr=0x5655, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x5654, .value=0x48, .type=IO_READ},
        {.addr=0x5655, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0224) {
    const struct CPU_State initial_cpu = {.pc=0x8479, .a=0xb1, .x=0x0b, .y=0x47, .sp=0x0a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8479, .value=0x48}, {.addr=0x847a, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x847b, .a=0x49, .x=0x0b, .y=0x47, .sp=0x0a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8479, .value=0x48}, {.addr=0x847a, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x8479, .value=0x48, .type=IO_READ},
        {.addr=0x847a, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0225) {
    const struct CPU_State initial_cpu = {.pc=0xbe58, .a=0xaa, .x=0xbd, .y=0xc9, .sp=0x58, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbe58, .value=0x48}, {.addr=0xbe59, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xbe5a, .a=0xf5, .x=0xbd, .y=0xc9, .sp=0x58, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbe58, .value=0x48}, {.addr=0xbe59, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xbe58, .value=0x48, .type=IO_READ},
        {.addr=0xbe59, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0226) {
    const struct CPU_State initial_cpu = {.pc=0x9c7a, .a=0x7a, .x=0xed, .y=0x4f, .sp=0x2d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9c7a, .value=0x48}, {.addr=0x9c7b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9c7c, .a=0xa5, .x=0xed, .y=0x4f, .sp=0x2d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9c7a, .value=0x48}, {.addr=0x9c7b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9c7a, .value=0x48, .type=IO_READ},
        {.addr=0x9c7b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0227) {
    const struct CPU_State initial_cpu = {.pc=0x6448, .a=0x10, .x=0x6a, .y=0x24, .sp=0xdf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6448, .value=0x48}, {.addr=0x6449, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x644a, .a=0x80, .x=0x6a, .y=0x24, .sp=0xdf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6448, .value=0x48}, {.addr=0x6449, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x6448, .value=0x48, .type=IO_READ},
        {.addr=0x6449, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0228) {
    const struct CPU_State initial_cpu = {.pc=0x4eb2, .a=0xa9, .x=0x4f, .y=0x77, .sp=0x71, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb2, .value=0x48}, {.addr=0x4eb3, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x4eb4, .a=0x63, .x=0x4f, .y=0x77, .sp=0x71, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4eb2, .value=0x48}, {.addr=0x4eb3, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x4eb2, .value=0x48, .type=IO_READ},
        {.addr=0x4eb3, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0229) {
    const struct CPU_State initial_cpu = {.pc=0x5aa5, .a=0xc2, .x=0x81, .y=0x54, .sp=0x0e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa5, .value=0x48}, {.addr=0x5aa6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5aa7, .a=0xfe, .x=0x81, .y=0x54, .sp=0x0e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5aa5, .value=0x48}, {.addr=0x5aa6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5aa5, .value=0x48, .type=IO_READ},
        {.addr=0x5aa6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022A) {
    const struct CPU_State initial_cpu = {.pc=0x3f9e, .a=0xad, .x=0xbd, .y=0x95, .sp=0xee, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3f9e, .value=0x48}, {.addr=0x3f9f, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x3fa0, .a=0x81, .x=0xbd, .y=0x95, .sp=0xee, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3f9e, .value=0x48}, {.addr=0x3f9f, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x3f9e, .value=0x48, .type=IO_READ},
        {.addr=0x3f9f, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022B) {
    const struct CPU_State initial_cpu = {.pc=0xcd7c, .a=0xd5, .x=0x96, .y=0xf8, .sp=0x2c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd7c, .value=0x48}, {.addr=0xcd7d, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xcd7e, .a=0xe4, .x=0x96, .y=0xf8, .sp=0x2c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xcd7c, .value=0x48}, {.addr=0xcd7d, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xcd7c, .value=0x48, .type=IO_READ},
        {.addr=0xcd7d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7d2c, .a=0xb9, .x=0x0b, .y=0x96, .sp=0x3f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7d2c, .value=0x48}, {.addr=0x7d2d, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x7d2e, .a=0xbb, .x=0x0b, .y=0x96, .sp=0x3f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7d2c, .value=0x48}, {.addr=0x7d2d, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x7d2c, .value=0x48, .type=IO_READ},
        {.addr=0x7d2d, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022D) {
    const struct CPU_State initial_cpu = {.pc=0x0706, .a=0xf5, .x=0x18, .y=0xe1, .sp=0xd9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0706, .value=0x48}, {.addr=0x0707, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x0708, .a=0x30, .x=0x18, .y=0xe1, .sp=0xd9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0706, .value=0x48}, {.addr=0x0707, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x0706, .value=0x48, .type=IO_READ},
        {.addr=0x0707, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022E) {
    const struct CPU_State initial_cpu = {.pc=0xae38, .a=0xb4, .x=0x20, .y=0x01, .sp=0x29, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xae38, .value=0x48}, {.addr=0xae39, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xae3a, .a=0xe1, .x=0x20, .y=0x01, .sp=0x29, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xae38, .value=0x48}, {.addr=0xae39, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xae38, .value=0x48, .type=IO_READ},
        {.addr=0xae39, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_022F) {
    const struct CPU_State initial_cpu = {.pc=0x570b, .a=0x50, .x=0x49, .y=0xf8, .sp=0x47, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x570b, .value=0x48}, {.addr=0x570c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x570d, .a=0x00, .x=0x49, .y=0xf8, .sp=0x47, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x570b, .value=0x48}, {.addr=0x570c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x570b, .value=0x48, .type=IO_READ},
        {.addr=0x570c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0230) {
    const struct CPU_State initial_cpu = {.pc=0x404d, .a=0x79, .x=0x44, .y=0x8d, .sp=0x46, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x404d, .value=0x48}, {.addr=0x404e, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x404f, .a=0x56, .x=0x44, .y=0x8d, .sp=0x46, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x404d, .value=0x48}, {.addr=0x404e, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x404d, .value=0x48, .type=IO_READ},
        {.addr=0x404e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0231) {
    const struct CPU_State initial_cpu = {.pc=0x90fe, .a=0x44, .x=0xbf, .y=0xb3, .sp=0x69, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x90fe, .value=0x48}, {.addr=0x90ff, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x9100, .a=0x25, .x=0xbf, .y=0xb3, .sp=0x69, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x90fe, .value=0x48}, {.addr=0x90ff, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x90fe, .value=0x48, .type=IO_READ},
        {.addr=0x90ff, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0232) {
    const struct CPU_State initial_cpu = {.pc=0x294e, .a=0x9f, .x=0x96, .y=0xa3, .sp=0x89, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x294e, .value=0x48}, {.addr=0x294f, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x2950, .a=0x1e, .x=0x96, .y=0xa3, .sp=0x89, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x294e, .value=0x48}, {.addr=0x294f, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x294e, .value=0x48, .type=IO_READ},
        {.addr=0x294f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0233) {
    const struct CPU_State initial_cpu = {.pc=0xdefc, .a=0xf1, .x=0xd0, .y=0xee, .sp=0x09, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xdefc, .value=0x48}, {.addr=0xdefd, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xdefe, .a=0xab, .x=0xd0, .y=0xee, .sp=0x09, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdefc, .value=0x48}, {.addr=0xdefd, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xdefc, .value=0x48, .type=IO_READ},
        {.addr=0xdefd, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0234) {
    const struct CPU_State initial_cpu = {.pc=0xb407, .a=0x14, .x=0xed, .y=0x15, .sp=0x0a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb407, .value=0x48}, {.addr=0xb408, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb409, .a=0xb6, .x=0xed, .y=0x15, .sp=0x0a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb407, .value=0x48}, {.addr=0xb408, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb407, .value=0x48, .type=IO_READ},
        {.addr=0xb408, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0235) {
    const struct CPU_State initial_cpu = {.pc=0x4779, .a=0xaa, .x=0xeb, .y=0x8b, .sp=0x58, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4779, .value=0x48}, {.addr=0x477a, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x477b, .a=0x42, .x=0xeb, .y=0x8b, .sp=0x58, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4779, .value=0x48}, {.addr=0x477a, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x4779, .value=0x48, .type=IO_READ},
        {.addr=0x477a, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0236) {
    const struct CPU_State initial_cpu = {.pc=0x869b, .a=0x1c, .x=0x30, .y=0x90, .sp=0x17, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x869b, .value=0x48}, {.addr=0x869c, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x869d, .a=0x5f, .x=0x30, .y=0x90, .sp=0x17, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x869b, .value=0x48}, {.addr=0x869c, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x869b, .value=0x48, .type=IO_READ},
        {.addr=0x869c, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0237) {
    const struct CPU_State initial_cpu = {.pc=0x60fa, .a=0x0a, .x=0xfd, .y=0x8e, .sp=0x4c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x60fa, .value=0x48}, {.addr=0x60fb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x60fc, .a=0xea, .x=0xfd, .y=0x8e, .sp=0x4c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x60fa, .value=0x48}, {.addr=0x60fb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x60fa, .value=0x48, .type=IO_READ},
        {.addr=0x60fb, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0238) {
    const struct CPU_State initial_cpu = {.pc=0x4951, .a=0x5f, .x=0xc8, .y=0x33, .sp=0x0c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4951, .value=0x48}, {.addr=0x4952, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x4953, .a=0x28, .x=0xc8, .y=0x33, .sp=0x0c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4951, .value=0x48}, {.addr=0x4952, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x4951, .value=0x48, .type=IO_READ},
        {.addr=0x4952, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0239) {
    const struct CPU_State initial_cpu = {.pc=0xcadc, .a=0x04, .x=0x99, .y=0x79, .sp=0x8b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xcadc, .value=0x48}, {.addr=0xcadd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcade, .a=0x04, .x=0x99, .y=0x79, .sp=0x8b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xcadc, .value=0x48}, {.addr=0xcadd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcadc, .value=0x48, .type=IO_READ},
        {.addr=0xcadd, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023A) {
    const struct CPU_State initial_cpu = {.pc=0x3775, .a=0x14, .x=0x86, .y=0x16, .sp=0xe6, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3775, .value=0x48}, {.addr=0x3776, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3777, .a=0x6d, .x=0x86, .y=0x16, .sp=0xe6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3775, .value=0x48}, {.addr=0x3776, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3775, .value=0x48, .type=IO_READ},
        {.addr=0x3776, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023B) {
    const struct CPU_State initial_cpu = {.pc=0x6184, .a=0x74, .x=0xe5, .y=0xea, .sp=0xcf, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6184, .value=0x48}, {.addr=0x6185, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x6186, .a=0xfe, .x=0xe5, .y=0xea, .sp=0xcf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6184, .value=0x48}, {.addr=0x6185, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x6184, .value=0x48, .type=IO_READ},
        {.addr=0x6185, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3839, .a=0x50, .x=0x5d, .y=0x57, .sp=0x26, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3839, .value=0x48}, {.addr=0x383a, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x383b, .a=0xdf, .x=0x5d, .y=0x57, .sp=0x26, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3839, .value=0x48}, {.addr=0x383a, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x3839, .value=0x48, .type=IO_READ},
        {.addr=0x383a, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023D) {
    const struct CPU_State initial_cpu = {.pc=0x8716, .a=0xf2, .x=0x58, .y=0x9b, .sp=0x1a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8716, .value=0x48}, {.addr=0x8717, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x8718, .a=0x10, .x=0x58, .y=0x9b, .sp=0x1a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8716, .value=0x48}, {.addr=0x8717, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x8716, .value=0x48, .type=IO_READ},
        {.addr=0x8717, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023E) {
    const struct CPU_State initial_cpu = {.pc=0xbe9d, .a=0x4b, .x=0x0f, .y=0xd6, .sp=0x5d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe9d, .value=0x48}, {.addr=0xbe9e, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xbe9f, .a=0x12, .x=0x0f, .y=0xd6, .sp=0x5d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbe9d, .value=0x48}, {.addr=0xbe9e, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xbe9d, .value=0x48, .type=IO_READ},
        {.addr=0xbe9e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_023F) {
    const struct CPU_State initial_cpu = {.pc=0x5dcf, .a=0x61, .x=0x64, .y=0xf4, .sp=0xb6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcf, .value=0x48}, {.addr=0x5dd0, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5dd1, .a=0x6e, .x=0x64, .y=0xf4, .sp=0xb6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5dcf, .value=0x48}, {.addr=0x5dd0, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5dcf, .value=0x48, .type=IO_READ},
        {.addr=0x5dd0, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0240) {
    const struct CPU_State initial_cpu = {.pc=0x05d2, .a=0x24, .x=0x07, .y=0x33, .sp=0xbb, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x05d2, .value=0x48}, {.addr=0x05d3, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x05d4, .a=0x5f, .x=0x07, .y=0x33, .sp=0xbb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x05d2, .value=0x48}, {.addr=0x05d3, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x05d2, .value=0x48, .type=IO_READ},
        {.addr=0x05d3, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0241) {
    const struct CPU_State initial_cpu = {.pc=0xeb3f, .a=0xa9, .x=0x02, .y=0x6e, .sp=0xb9, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3f, .value=0x48}, {.addr=0xeb40, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xeb41, .a=0x43, .x=0x02, .y=0x6e, .sp=0xb9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xeb3f, .value=0x48}, {.addr=0xeb40, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xeb3f, .value=0x48, .type=IO_READ},
        {.addr=0xeb40, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0242) {
    const struct CPU_State initial_cpu = {.pc=0x7b77, .a=0xe5, .x=0x0b, .y=0x8c, .sp=0xb8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x7b77, .value=0x48}, {.addr=0x7b78, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x7b79, .a=0x29, .x=0x0b, .y=0x8c, .sp=0xb8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7b77, .value=0x48}, {.addr=0x7b78, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x7b77, .value=0x48, .type=IO_READ},
        {.addr=0x7b78, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0243) {
    const struct CPU_State initial_cpu = {.pc=0x6822, .a=0x10, .x=0x1b, .y=0x98, .sp=0x10, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6822, .value=0x48}, {.addr=0x6823, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x6824, .a=0x17, .x=0x1b, .y=0x98, .sp=0x10, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6822, .value=0x48}, {.addr=0x6823, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x6822, .value=0x48, .type=IO_READ},
        {.addr=0x6823, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0244) {
    const struct CPU_State initial_cpu = {.pc=0x52d8, .a=0x0c, .x=0xac, .y=0x58, .sp=0x30, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x52d8, .value=0x48}, {.addr=0x52d9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x52da, .a=0x6a, .x=0xac, .y=0x58, .sp=0x30, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x52d8, .value=0x48}, {.addr=0x52d9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x52d8, .value=0x48, .type=IO_READ},
        {.addr=0x52d9, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0245) {
    const struct CPU_State initial_cpu = {.pc=0x9be7, .a=0xff, .x=0x2d, .y=0x48, .sp=0xd0, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9be7, .value=0x48}, {.addr=0x9be8, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9be9, .a=0x55, .x=0x2d, .y=0x48, .sp=0xd0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9be7, .value=0x48}, {.addr=0x9be8, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x9be7, .value=0x48, .type=IO_READ},
        {.addr=0x9be8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0246) {
    const struct CPU_State initial_cpu = {.pc=0xeda0, .a=0xc2, .x=0x70, .y=0xc7, .sp=0xeb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xeda0, .value=0x48}, {.addr=0xeda1, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xeda2, .a=0x2e, .x=0x70, .y=0xc7, .sp=0xeb, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xeda0, .value=0x48}, {.addr=0xeda1, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xeda0, .value=0x48, .type=IO_READ},
        {.addr=0xeda1, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8953, .a=0x49, .x=0xc9, .y=0xf9, .sp=0x91, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8953, .value=0x48}, {.addr=0x8954, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8955, .a=0x72, .x=0xc9, .y=0xf9, .sp=0x91, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8953, .value=0x48}, {.addr=0x8954, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x8953, .value=0x48, .type=IO_READ},
        {.addr=0x8954, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8b6c, .a=0x7e, .x=0xc6, .y=0x92, .sp=0xde, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6c, .value=0x48}, {.addr=0x8b6d, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8b6e, .a=0x52, .x=0xc6, .y=0x92, .sp=0xde, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8b6c, .value=0x48}, {.addr=0x8b6d, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8b6c, .value=0x48, .type=IO_READ},
        {.addr=0x8b6d, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0249) {
    const struct CPU_State initial_cpu = {.pc=0x77f5, .a=0xee, .x=0xf8, .y=0x19, .sp=0xf6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x77f5, .value=0x48}, {.addr=0x77f6, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x77f7, .a=0x9f, .x=0xf8, .y=0x19, .sp=0xf6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x77f5, .value=0x48}, {.addr=0x77f6, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x77f5, .value=0x48, .type=IO_READ},
        {.addr=0x77f6, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024A) {
    const struct CPU_State initial_cpu = {.pc=0x88b8, .a=0x1c, .x=0x2d, .y=0x9f, .sp=0x76, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x88b8, .value=0x48}, {.addr=0x88b9, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x88ba, .a=0x8e, .x=0x2d, .y=0x9f, .sp=0x76, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x88b8, .value=0x48}, {.addr=0x88b9, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x88b8, .value=0x48, .type=IO_READ},
        {.addr=0x88b9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024B) {
    const struct CPU_State initial_cpu = {.pc=0xbd0b, .a=0x6e, .x=0x91, .y=0xef, .sp=0x93, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0b, .value=0x48}, {.addr=0xbd0c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xbd0d, .a=0x0d, .x=0x91, .y=0xef, .sp=0x93, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbd0b, .value=0x48}, {.addr=0xbd0c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xbd0b, .value=0x48, .type=IO_READ},
        {.addr=0xbd0c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024C) {
    const struct CPU_State initial_cpu = {.pc=0x6fc4, .a=0x7e, .x=0xe0, .y=0xd6, .sp=0x07, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6fc4, .value=0x48}, {.addr=0x6fc5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6fc6, .a=0xc1, .x=0xe0, .y=0xd6, .sp=0x07, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6fc4, .value=0x48}, {.addr=0x6fc5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6fc4, .value=0x48, .type=IO_READ},
        {.addr=0x6fc5, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024D) {
    const struct CPU_State initial_cpu = {.pc=0xd5a1, .a=0x62, .x=0xba, .y=0x1e, .sp=0x1f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a1, .value=0x48}, {.addr=0xd5a2, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xd5a3, .a=0xea, .x=0xba, .y=0x1e, .sp=0x1f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd5a1, .value=0x48}, {.addr=0xd5a2, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xd5a1, .value=0x48, .type=IO_READ},
        {.addr=0xd5a2, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024E) {
    const struct CPU_State initial_cpu = {.pc=0x717f, .a=0xf5, .x=0x2b, .y=0xbf, .sp=0x8c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x717f, .value=0x48}, {.addr=0x7180, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7181, .a=0x93, .x=0x2b, .y=0xbf, .sp=0x8c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x717f, .value=0x48}, {.addr=0x7180, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x717f, .value=0x48, .type=IO_READ},
        {.addr=0x7180, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf223, .a=0xa3, .x=0x26, .y=0x15, .sp=0xda, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf223, .value=0x48}, {.addr=0xf224, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xf225, .a=0xcc, .x=0x26, .y=0x15, .sp=0xda, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf223, .value=0x48}, {.addr=0xf224, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xf223, .value=0x48, .type=IO_READ},
        {.addr=0xf224, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0250) {
    const struct CPU_State initial_cpu = {.pc=0xeb0e, .a=0x2f, .x=0x1c, .y=0x86, .sp=0x6f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xeb0e, .value=0x48}, {.addr=0xeb0f, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xeb10, .a=0x0c, .x=0x1c, .y=0x86, .sp=0x6f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xeb0e, .value=0x48}, {.addr=0xeb0f, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xeb0e, .value=0x48, .type=IO_READ},
        {.addr=0xeb0f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0251) {
    const struct CPU_State initial_cpu = {.pc=0x6c65, .a=0x84, .x=0x48, .y=0x1c, .sp=0xcd, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6c65, .value=0x48}, {.addr=0x6c66, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x6c67, .a=0xee, .x=0x48, .y=0x1c, .sp=0xcd, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6c65, .value=0x48}, {.addr=0x6c66, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x6c65, .value=0x48, .type=IO_READ},
        {.addr=0x6c66, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0252) {
    const struct CPU_State initial_cpu = {.pc=0x84fd, .a=0x4a, .x=0x60, .y=0x2e, .sp=0x29, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x84fd, .value=0x48}, {.addr=0x84fe, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x84ff, .a=0xdb, .x=0x60, .y=0x2e, .sp=0x29, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x84fd, .value=0x48}, {.addr=0x84fe, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x84fd, .value=0x48, .type=IO_READ},
        {.addr=0x84fe, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0253) {
    const struct CPU_State initial_cpu = {.pc=0xd0dd, .a=0x99, .x=0x35, .y=0xcb, .sp=0xa9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xd0dd, .value=0x48}, {.addr=0xd0de, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xd0df, .a=0x4b, .x=0x35, .y=0xcb, .sp=0xa9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd0dd, .value=0x48}, {.addr=0xd0de, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xd0dd, .value=0x48, .type=IO_READ},
        {.addr=0xd0de, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0254) {
    const struct CPU_State initial_cpu = {.pc=0x30a1, .a=0xee, .x=0x24, .y=0x88, .sp=0x8b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x30a1, .value=0x48}, {.addr=0x30a2, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x30a3, .a=0xde, .x=0x24, .y=0x88, .sp=0x8b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x30a1, .value=0x48}, {.addr=0x30a2, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x30a1, .value=0x48, .type=IO_READ},
        {.addr=0x30a2, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0255) {
    const struct CPU_State initial_cpu = {.pc=0xd8f4, .a=0xb8, .x=0xd4, .y=0xb9, .sp=0x07, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f4, .value=0x48}, {.addr=0xd8f5, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xd8f6, .a=0xff, .x=0xd4, .y=0xb9, .sp=0x07, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd8f4, .value=0x48}, {.addr=0xd8f5, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xd8f4, .value=0x48, .type=IO_READ},
        {.addr=0xd8f5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0256) {
    const struct CPU_State initial_cpu = {.pc=0xffd9, .a=0x80, .x=0xed, .y=0x11, .sp=0xd2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xffd9, .value=0x48}, {.addr=0xffda, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xffdb, .a=0x7d, .x=0xed, .y=0x11, .sp=0xd2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xffd9, .value=0x48}, {.addr=0xffda, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xffd9, .value=0x48, .type=IO_READ},
        {.addr=0xffda, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0257) {
    const struct CPU_State initial_cpu = {.pc=0xcd54, .a=0x95, .x=0x66, .y=0xac, .sp=0x91, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xcd54, .value=0x48}, {.addr=0xcd55, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcd56, .a=0x08, .x=0x66, .y=0xac, .sp=0x91, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xcd54, .value=0x48}, {.addr=0xcd55, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcd54, .value=0x48, .type=IO_READ},
        {.addr=0xcd55, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9d75, .a=0xa7, .x=0x89, .y=0xce, .sp=0x62, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9d75, .value=0x48}, {.addr=0x9d76, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9d77, .a=0x01, .x=0x89, .y=0xce, .sp=0x62, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9d75, .value=0x48}, {.addr=0x9d76, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9d75, .value=0x48, .type=IO_READ},
        {.addr=0x9d76, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0259) {
    const struct CPU_State initial_cpu = {.pc=0x3b5b, .a=0x22, .x=0xbc, .y=0x64, .sp=0x53, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3b5b, .value=0x48}, {.addr=0x3b5c, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x3b5d, .a=0x73, .x=0xbc, .y=0x64, .sp=0x53, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3b5b, .value=0x48}, {.addr=0x3b5c, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x3b5b, .value=0x48, .type=IO_READ},
        {.addr=0x3b5c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025A) {
    const struct CPU_State initial_cpu = {.pc=0x2df6, .a=0x54, .x=0x71, .y=0x51, .sp=0x72, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2df6, .value=0x48}, {.addr=0x2df7, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x2df8, .a=0xa1, .x=0x71, .y=0x51, .sp=0x72, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2df6, .value=0x48}, {.addr=0x2df7, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x2df6, .value=0x48, .type=IO_READ},
        {.addr=0x2df7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025B) {
    const struct CPU_State initial_cpu = {.pc=0x6e58, .a=0xea, .x=0xa4, .y=0x7f, .sp=0x49, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x6e58, .value=0x48}, {.addr=0x6e59, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x6e5a, .a=0x1e, .x=0xa4, .y=0x7f, .sp=0x49, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6e58, .value=0x48}, {.addr=0x6e59, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x6e58, .value=0x48, .type=IO_READ},
        {.addr=0x6e59, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025C) {
    const struct CPU_State initial_cpu = {.pc=0xeee2, .a=0x18, .x=0xd6, .y=0x17, .sp=0xdd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xeee2, .value=0x48}, {.addr=0xeee3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeee4, .a=0x3e, .x=0xd6, .y=0x17, .sp=0xdd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xeee2, .value=0x48}, {.addr=0xeee3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeee2, .value=0x48, .type=IO_READ},
        {.addr=0xeee3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025D) {
    const struct CPU_State initial_cpu = {.pc=0x5d91, .a=0xdd, .x=0x08, .y=0x92, .sp=0x2c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5d91, .value=0x48}, {.addr=0x5d92, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x5d93, .a=0x83, .x=0x08, .y=0x92, .sp=0x2c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5d91, .value=0x48}, {.addr=0x5d92, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x5d91, .value=0x48, .type=IO_READ},
        {.addr=0x5d92, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025E) {
    const struct CPU_State initial_cpu = {.pc=0x68d1, .a=0x7f, .x=0x52, .y=0x68, .sp=0x2e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x68d1, .value=0x48}, {.addr=0x68d2, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x68d3, .a=0x8e, .x=0x52, .y=0x68, .sp=0x2e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x68d1, .value=0x48}, {.addr=0x68d2, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x68d1, .value=0x48, .type=IO_READ},
        {.addr=0x68d2, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_025F) {
    const struct CPU_State initial_cpu = {.pc=0xae68, .a=0xc3, .x=0xb5, .y=0x00, .sp=0xf7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xae68, .value=0x48}, {.addr=0xae69, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xae6a, .a=0x05, .x=0xb5, .y=0x00, .sp=0xf7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xae68, .value=0x48}, {.addr=0xae69, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae68, .value=0x48, .type=IO_READ},
        {.addr=0xae69, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0260) {
    const struct CPU_State initial_cpu = {.pc=0x8d06, .a=0x70, .x=0xe0, .y=0x79, .sp=0xa7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8d06, .value=0x48}, {.addr=0x8d07, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d08, .a=0xed, .x=0xe0, .y=0x79, .sp=0xa7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8d06, .value=0x48}, {.addr=0x8d07, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d06, .value=0x48, .type=IO_READ},
        {.addr=0x8d07, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0261) {
    const struct CPU_State initial_cpu = {.pc=0xa7b2, .a=0x92, .x=0xe8, .y=0x96, .sp=0x9b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa7b2, .value=0x48}, {.addr=0xa7b3, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa7b4, .a=0x35, .x=0xe8, .y=0x96, .sp=0x9b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa7b2, .value=0x48}, {.addr=0xa7b3, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa7b2, .value=0x48, .type=IO_READ},
        {.addr=0xa7b3, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0262) {
    const struct CPU_State initial_cpu = {.pc=0x0d0a, .a=0xdf, .x=0xe0, .y=0xa1, .sp=0x4f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0d0a, .value=0x48}, {.addr=0x0d0b, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0d0c, .a=0xa7, .x=0xe0, .y=0xa1, .sp=0x4f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0d0a, .value=0x48}, {.addr=0x0d0b, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0d0a, .value=0x48, .type=IO_READ},
        {.addr=0x0d0b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0263) {
    const struct CPU_State initial_cpu = {.pc=0x24b8, .a=0xfe, .x=0xba, .y=0xb3, .sp=0xa1, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x24b8, .value=0x48}, {.addr=0x24b9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x24ba, .a=0x13, .x=0xba, .y=0xb3, .sp=0xa1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x24b8, .value=0x48}, {.addr=0x24b9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x24b8, .value=0x48, .type=IO_READ},
        {.addr=0x24b9, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0264) {
    const struct CPU_State initial_cpu = {.pc=0xa0e6, .a=0xd6, .x=0xae, .y=0x7c, .sp=0xeb, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e6, .value=0x48}, {.addr=0xa0e7, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xa0e8, .a=0x73, .x=0xae, .y=0x7c, .sp=0xeb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa0e6, .value=0x48}, {.addr=0xa0e7, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xa0e6, .value=0x48, .type=IO_READ},
        {.addr=0xa0e7, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0265) {
    const struct CPU_State initial_cpu = {.pc=0x5c62, .a=0xc9, .x=0xa4, .y=0x83, .sp=0x87, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5c62, .value=0x48}, {.addr=0x5c63, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0xb1, .x=0xa4, .y=0x83, .sp=0x87, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5c62, .value=0x48}, {.addr=0x5c63, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x5c62, .value=0x48, .type=IO_READ},
        {.addr=0x5c63, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0266) {
    const struct CPU_State initial_cpu = {.pc=0x0c02, .a=0xaa, .x=0xc7, .y=0x31, .sp=0x40, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0c02, .value=0x48}, {.addr=0x0c03, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x0c04, .a=0x58, .x=0xc7, .y=0x31, .sp=0x40, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0c02, .value=0x48}, {.addr=0x0c03, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x0c02, .value=0x48, .type=IO_READ},
        {.addr=0x0c03, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0267) {
    const struct CPU_State initial_cpu = {.pc=0x0e06, .a=0x90, .x=0x6b, .y=0x4a, .sp=0x08, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0e06, .value=0x48}, {.addr=0x0e07, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0e08, .a=0x3e, .x=0x6b, .y=0x4a, .sp=0x08, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0e06, .value=0x48}, {.addr=0x0e07, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0e06, .value=0x48, .type=IO_READ},
        {.addr=0x0e07, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0268) {
    const struct CPU_State initial_cpu = {.pc=0x7b8a, .a=0xfd, .x=0xee, .y=0xe0, .sp=0x29, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8a, .value=0x48}, {.addr=0x7b8b, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x7b8c, .a=0xa4, .x=0xee, .y=0xe0, .sp=0x29, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7b8a, .value=0x48}, {.addr=0x7b8b, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x7b8a, .value=0x48, .type=IO_READ},
        {.addr=0x7b8b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0269) {
    const struct CPU_State initial_cpu = {.pc=0xbf53, .a=0x39, .x=0x74, .y=0xd8, .sp=0x70, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbf53, .value=0x48}, {.addr=0xbf54, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xbf55, .a=0xae, .x=0x74, .y=0xd8, .sp=0x70, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbf53, .value=0x48}, {.addr=0xbf54, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xbf53, .value=0x48, .type=IO_READ},
        {.addr=0xbf54, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026A) {
    const struct CPU_State initial_cpu = {.pc=0x96c2, .a=0xf3, .x=0x07, .y=0x94, .sp=0x0b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x96c2, .value=0x48}, {.addr=0x96c3, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x96c4, .a=0x56, .x=0x07, .y=0x94, .sp=0x0b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x96c2, .value=0x48}, {.addr=0x96c3, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x96c2, .value=0x48, .type=IO_READ},
        {.addr=0x96c3, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026B) {
    const struct CPU_State initial_cpu = {.pc=0x7ec5, .a=0x21, .x=0x15, .y=0xba, .sp=0x1d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec5, .value=0x48}, {.addr=0x7ec6, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7ec7, .a=0x4f, .x=0x15, .y=0xba, .sp=0x1d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7ec5, .value=0x48}, {.addr=0x7ec6, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7ec5, .value=0x48, .type=IO_READ},
        {.addr=0x7ec6, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026C) {
    const struct CPU_State initial_cpu = {.pc=0xdd5b, .a=0x77, .x=0xcd, .y=0x97, .sp=0x8e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdd5b, .value=0x48}, {.addr=0xdd5c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdd5d, .a=0x3a, .x=0xcd, .y=0x97, .sp=0x8e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdd5b, .value=0x48}, {.addr=0xdd5c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdd5b, .value=0x48, .type=IO_READ},
        {.addr=0xdd5c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026D) {
    const struct CPU_State initial_cpu = {.pc=0x5a15, .a=0x2f, .x=0x13, .y=0xcd, .sp=0x95, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5a15, .value=0x48}, {.addr=0x5a16, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5a17, .a=0x79, .x=0x13, .y=0xcd, .sp=0x95, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5a15, .value=0x48}, {.addr=0x5a16, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5a15, .value=0x48, .type=IO_READ},
        {.addr=0x5a16, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026E) {
    const struct CPU_State initial_cpu = {.pc=0x7d77, .a=0xcd, .x=0xf4, .y=0x94, .sp=0x70, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7d77, .value=0x48}, {.addr=0x7d78, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x7d79, .a=0xfc, .x=0xf4, .y=0x94, .sp=0x70, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7d77, .value=0x48}, {.addr=0x7d78, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x7d77, .value=0x48, .type=IO_READ},
        {.addr=0x7d78, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_026F) {
    const struct CPU_State initial_cpu = {.pc=0x8e0f, .a=0xda, .x=0xd0, .y=0x5a, .sp=0x79, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8e0f, .value=0x48}, {.addr=0x8e10, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8e11, .a=0xd7, .x=0xd0, .y=0x5a, .sp=0x79, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8e0f, .value=0x48}, {.addr=0x8e10, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8e0f, .value=0x48, .type=IO_READ},
        {.addr=0x8e10, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0270) {
    const struct CPU_State initial_cpu = {.pc=0xdc58, .a=0xb2, .x=0xe7, .y=0xb2, .sp=0xef, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xdc58, .value=0x48}, {.addr=0xdc59, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xdc5a, .a=0x41, .x=0xe7, .y=0xb2, .sp=0xef, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xdc58, .value=0x48}, {.addr=0xdc59, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xdc58, .value=0x48, .type=IO_READ},
        {.addr=0xdc59, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0271) {
    const struct CPU_State initial_cpu = {.pc=0xdd27, .a=0xe1, .x=0x27, .y=0xb5, .sp=0xc6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xdd27, .value=0x48}, {.addr=0xdd28, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xdd29, .a=0xef, .x=0x27, .y=0xb5, .sp=0xc6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdd27, .value=0x48}, {.addr=0xdd28, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xdd27, .value=0x48, .type=IO_READ},
        {.addr=0xdd28, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0272) {
    const struct CPU_State initial_cpu = {.pc=0xef6c, .a=0x1b, .x=0xad, .y=0x0b, .sp=0xfd, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xef6c, .value=0x48}, {.addr=0xef6d, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xef6e, .a=0x4a, .x=0xad, .y=0x0b, .sp=0xfd, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xef6c, .value=0x48}, {.addr=0xef6d, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xef6c, .value=0x48, .type=IO_READ},
        {.addr=0xef6d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0273) {
    const struct CPU_State initial_cpu = {.pc=0x83d5, .a=0x9a, .x=0xcc, .y=0x99, .sp=0x69, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x83d5, .value=0x48}, {.addr=0x83d6, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x83d7, .a=0x6a, .x=0xcc, .y=0x99, .sp=0x69, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x83d5, .value=0x48}, {.addr=0x83d6, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x83d5, .value=0x48, .type=IO_READ},
        {.addr=0x83d6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0274) {
    const struct CPU_State initial_cpu = {.pc=0xf537, .a=0xdd, .x=0x1b, .y=0x63, .sp=0x6c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf537, .value=0x48}, {.addr=0xf538, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xf539, .a=0x24, .x=0x1b, .y=0x63, .sp=0x6c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf537, .value=0x48}, {.addr=0xf538, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xf537, .value=0x48, .type=IO_READ},
        {.addr=0xf538, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0275) {
    const struct CPU_State initial_cpu = {.pc=0xd8fd, .a=0x68, .x=0xb6, .y=0xf7, .sp=0x89, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd8fd, .value=0x48}, {.addr=0xd8fe, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xd8ff, .a=0x81, .x=0xb6, .y=0xf7, .sp=0x89, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd8fd, .value=0x48}, {.addr=0xd8fe, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xd8fd, .value=0x48, .type=IO_READ},
        {.addr=0xd8fe, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9c8f, .a=0x37, .x=0x78, .y=0xbc, .sp=0x13, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8f, .value=0x48}, {.addr=0x9c90, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x9c91, .a=0xa1, .x=0x78, .y=0xbc, .sp=0x13, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9c8f, .value=0x48}, {.addr=0x9c90, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x9c8f, .value=0x48, .type=IO_READ},
        {.addr=0x9c90, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0277) {
    const struct CPU_State initial_cpu = {.pc=0x4894, .a=0xad, .x=0xca, .y=0x6c, .sp=0xb7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4894, .value=0x48}, {.addr=0x4895, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x4896, .a=0x85, .x=0xca, .y=0x6c, .sp=0xb7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4894, .value=0x48}, {.addr=0x4895, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x4894, .value=0x48, .type=IO_READ},
        {.addr=0x4895, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0278) {
    const struct CPU_State initial_cpu = {.pc=0x0e71, .a=0x39, .x=0x63, .y=0x56, .sp=0x3c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0e71, .value=0x48}, {.addr=0x0e72, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0e73, .a=0x96, .x=0x63, .y=0x56, .sp=0x3c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0e71, .value=0x48}, {.addr=0x0e72, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0e71, .value=0x48, .type=IO_READ},
        {.addr=0x0e72, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0279) {
    const struct CPU_State initial_cpu = {.pc=0xab02, .a=0x35, .x=0x2c, .y=0x0b, .sp=0x1d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xab02, .value=0x48}, {.addr=0xab03, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xab04, .a=0xea, .x=0x2c, .y=0x0b, .sp=0x1d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xab02, .value=0x48}, {.addr=0xab03, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xab02, .value=0x48, .type=IO_READ},
        {.addr=0xab03, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027A) {
    const struct CPU_State initial_cpu = {.pc=0x8e1e, .a=0x0a, .x=0xe4, .y=0x4e, .sp=0x73, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8e1e, .value=0x48}, {.addr=0x8e1f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8e20, .a=0x4a, .x=0xe4, .y=0x4e, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8e1e, .value=0x48}, {.addr=0x8e1f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8e1e, .value=0x48, .type=IO_READ},
        {.addr=0x8e1f, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027B) {
    const struct CPU_State initial_cpu = {.pc=0x4458, .a=0xa4, .x=0xbb, .y=0x45, .sp=0x96, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x4458, .value=0x48}, {.addr=0x4459, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x445a, .a=0x92, .x=0xbb, .y=0x45, .sp=0x96, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4458, .value=0x48}, {.addr=0x4459, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x4458, .value=0x48, .type=IO_READ},
        {.addr=0x4459, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027C) {
    const struct CPU_State initial_cpu = {.pc=0x9e40, .a=0xab, .x=0xd1, .y=0x5a, .sp=0x36, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9e40, .value=0x48}, {.addr=0x9e41, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9e42, .a=0x4b, .x=0xd1, .y=0x5a, .sp=0x36, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9e40, .value=0x48}, {.addr=0x9e41, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9e40, .value=0x48, .type=IO_READ},
        {.addr=0x9e41, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027D) {
    const struct CPU_State initial_cpu = {.pc=0x6517, .a=0x2f, .x=0xa5, .y=0x8b, .sp=0x92, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6517, .value=0x48}, {.addr=0x6518, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x6519, .a=0x9f, .x=0xa5, .y=0x8b, .sp=0x92, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6517, .value=0x48}, {.addr=0x6518, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x6517, .value=0x48, .type=IO_READ},
        {.addr=0x6518, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027E) {
    const struct CPU_State initial_cpu = {.pc=0x85c6, .a=0xdc, .x=0x48, .y=0x5c, .sp=0x29, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x85c6, .value=0x48}, {.addr=0x85c7, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x85c8, .a=0x09, .x=0x48, .y=0x5c, .sp=0x29, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x85c6, .value=0x48}, {.addr=0x85c7, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x85c6, .value=0x48, .type=IO_READ},
        {.addr=0x85c7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_027F) {
    const struct CPU_State initial_cpu = {.pc=0xd401, .a=0x85, .x=0xcf, .y=0x67, .sp=0xb7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd401, .value=0x48}, {.addr=0xd402, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd403, .a=0xc4, .x=0xcf, .y=0x67, .sp=0xb7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd401, .value=0x48}, {.addr=0xd402, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd401, .value=0x48, .type=IO_READ},
        {.addr=0xd402, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0280) {
    const struct CPU_State initial_cpu = {.pc=0x9764, .a=0xf1, .x=0x37, .y=0x8d, .sp=0xe4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9764, .value=0x48}, {.addr=0x9765, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x9766, .a=0x48, .x=0x37, .y=0x8d, .sp=0xe4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9764, .value=0x48}, {.addr=0x9765, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x9764, .value=0x48, .type=IO_READ},
        {.addr=0x9765, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0281) {
    const struct CPU_State initial_cpu = {.pc=0x92ca, .a=0xf2, .x=0x5a, .y=0x1f, .sp=0xb7, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x92ca, .value=0x48}, {.addr=0x92cb, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x92cc, .a=0xb0, .x=0x5a, .y=0x1f, .sp=0xb7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x92ca, .value=0x48}, {.addr=0x92cb, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x92ca, .value=0x48, .type=IO_READ},
        {.addr=0x92cb, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0282) {
    const struct CPU_State initial_cpu = {.pc=0xa3fd, .a=0x3a, .x=0x06, .y=0x71, .sp=0x3f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fd, .value=0x48}, {.addr=0xa3fe, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa3ff, .a=0x2f, .x=0x06, .y=0x71, .sp=0x3f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa3fd, .value=0x48}, {.addr=0xa3fe, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa3fd, .value=0x48, .type=IO_READ},
        {.addr=0xa3fe, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0283) {
    const struct CPU_State initial_cpu = {.pc=0x555e, .a=0x6c, .x=0x57, .y=0x7c, .sp=0x6c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x555e, .value=0x48}, {.addr=0x555f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x5560, .a=0x24, .x=0x57, .y=0x7c, .sp=0x6c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x555e, .value=0x48}, {.addr=0x555f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x555e, .value=0x48, .type=IO_READ},
        {.addr=0x555f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0284) {
    const struct CPU_State initial_cpu = {.pc=0xdd7f, .a=0xac, .x=0xd4, .y=0xd2, .sp=0x48, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xdd7f, .value=0x48}, {.addr=0xdd80, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdd81, .a=0x33, .x=0xd4, .y=0xd2, .sp=0x48, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdd7f, .value=0x48}, {.addr=0xdd80, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdd7f, .value=0x48, .type=IO_READ},
        {.addr=0xdd80, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0285) {
    const struct CPU_State initial_cpu = {.pc=0x0b1d, .a=0x28, .x=0xd0, .y=0x7e, .sp=0xce, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0b1d, .value=0x48}, {.addr=0x0b1e, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0b1f, .a=0x90, .x=0xd0, .y=0x7e, .sp=0xce, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0b1d, .value=0x48}, {.addr=0x0b1e, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0b1d, .value=0x48, .type=IO_READ},
        {.addr=0x0b1e, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0287) {
    const struct CPU_State initial_cpu = {.pc=0xbce7, .a=0x56, .x=0x26, .y=0x49, .sp=0x8d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbce7, .value=0x48}, {.addr=0xbce8, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xbce9, .a=0x13, .x=0x26, .y=0x49, .sp=0x8d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbce7, .value=0x48}, {.addr=0xbce8, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xbce7, .value=0x48, .type=IO_READ},
        {.addr=0xbce8, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0288) {
    const struct CPU_State initial_cpu = {.pc=0x90f5, .a=0xf9, .x=0xba, .y=0x1e, .sp=0xf3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x90f5, .value=0x48}, {.addr=0x90f6, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x90f7, .a=0xb6, .x=0xba, .y=0x1e, .sp=0xf3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x90f5, .value=0x48}, {.addr=0x90f6, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x90f5, .value=0x48, .type=IO_READ},
        {.addr=0x90f6, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0289) {
    const struct CPU_State initial_cpu = {.pc=0x7296, .a=0xa2, .x=0x8b, .y=0x17, .sp=0xc0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7296, .value=0x48}, {.addr=0x7297, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7298, .a=0x1c, .x=0x8b, .y=0x17, .sp=0xc0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7296, .value=0x48}, {.addr=0x7297, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7296, .value=0x48, .type=IO_READ},
        {.addr=0x7297, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028A) {
    const struct CPU_State initial_cpu = {.pc=0xb22c, .a=0x20, .x=0x3a, .y=0x99, .sp=0x8b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xb22c, .value=0x48}, {.addr=0xb22d, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb22e, .a=0x01, .x=0x3a, .y=0x99, .sp=0x8b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb22c, .value=0x48}, {.addr=0xb22d, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb22c, .value=0x48, .type=IO_READ},
        {.addr=0xb22d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028B) {
    const struct CPU_State initial_cpu = {.pc=0xf924, .a=0xf9, .x=0x31, .y=0x78, .sp=0x4a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf924, .value=0x48}, {.addr=0xf925, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xf926, .a=0xc0, .x=0x31, .y=0x78, .sp=0x4a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf924, .value=0x48}, {.addr=0xf925, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xf924, .value=0x48, .type=IO_READ},
        {.addr=0xf925, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028C) {
    const struct CPU_State initial_cpu = {.pc=0xdb38, .a=0xd3, .x=0x8a, .y=0x31, .sp=0x90, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xdb38, .value=0x48}, {.addr=0xdb39, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xdb3a, .a=0xa4, .x=0x8a, .y=0x31, .sp=0x90, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdb38, .value=0x48}, {.addr=0xdb39, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xdb38, .value=0x48, .type=IO_READ},
        {.addr=0xdb39, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028D) {
    const struct CPU_State initial_cpu = {.pc=0x07d2, .a=0xb0, .x=0x4f, .y=0x12, .sp=0xa8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x07d2, .value=0x48}, {.addr=0x07d3, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x07d4, .a=0x81, .x=0x4f, .y=0x12, .sp=0xa8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x07d2, .value=0x48}, {.addr=0x07d3, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x07d2, .value=0x48, .type=IO_READ},
        {.addr=0x07d3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028E) {
    const struct CPU_State initial_cpu = {.pc=0xf4d8, .a=0x53, .x=0x8d, .y=0xbf, .sp=0xd2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d8, .value=0x48}, {.addr=0xf4d9, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xf4da, .a=0xa2, .x=0x8d, .y=0xbf, .sp=0xd2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf4d8, .value=0x48}, {.addr=0xf4d9, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xf4d8, .value=0x48, .type=IO_READ},
        {.addr=0xf4d9, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_028F) {
    const struct CPU_State initial_cpu = {.pc=0xee4e, .a=0x29, .x=0x53, .y=0x04, .sp=0x9b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xee4e, .value=0x48}, {.addr=0xee4f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xee50, .a=0xce, .x=0x53, .y=0x04, .sp=0x9b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xee4e, .value=0x48}, {.addr=0xee4f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xee4e, .value=0x48, .type=IO_READ},
        {.addr=0xee4f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0290) {
    const struct CPU_State initial_cpu = {.pc=0x8aad, .a=0x64, .x=0x06, .y=0xbd, .sp=0xdf, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8aad, .value=0x48}, {.addr=0x8aae, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8aaf, .a=0x09, .x=0x06, .y=0xbd, .sp=0xdf, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8aad, .value=0x48}, {.addr=0x8aae, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8aad, .value=0x48, .type=IO_READ},
        {.addr=0x8aae, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0291) {
    const struct CPU_State initial_cpu = {.pc=0x5ab0, .a=0x51, .x=0x53, .y=0x46, .sp=0x48, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab0, .value=0x48}, {.addr=0x5ab1, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x5ab2, .a=0xb9, .x=0x53, .y=0x46, .sp=0x48, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5ab0, .value=0x48}, {.addr=0x5ab1, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x5ab0, .value=0x48, .type=IO_READ},
        {.addr=0x5ab1, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0292) {
    const struct CPU_State initial_cpu = {.pc=0x8b32, .a=0x90, .x=0x8b, .y=0x40, .sp=0xee, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8b32, .value=0x48}, {.addr=0x8b33, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x8b34, .a=0xc2, .x=0x8b, .y=0x40, .sp=0xee, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8b32, .value=0x48}, {.addr=0x8b33, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x8b32, .value=0x48, .type=IO_READ},
        {.addr=0x8b33, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0293) {
    const struct CPU_State initial_cpu = {.pc=0xd9f6, .a=0x18, .x=0x3b, .y=0x8c, .sp=0x43, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f6, .value=0x48}, {.addr=0xd9f7, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xd9f8, .a=0x29, .x=0x3b, .y=0x8c, .sp=0x43, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd9f6, .value=0x48}, {.addr=0xd9f7, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xd9f6, .value=0x48, .type=IO_READ},
        {.addr=0xd9f7, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3b95, .a=0xa4, .x=0x21, .y=0x43, .sp=0xe2, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x3b95, .value=0x48}, {.addr=0x3b96, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3b97, .a=0x8b, .x=0x21, .y=0x43, .sp=0xe2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3b95, .value=0x48}, {.addr=0x3b96, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3b95, .value=0x48, .type=IO_READ},
        {.addr=0x3b96, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0295) {
    const struct CPU_State initial_cpu = {.pc=0x0bf6, .a=0x49, .x=0xd1, .y=0x9e, .sp=0xc0, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf6, .value=0x48}, {.addr=0x0bf7, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x0bf8, .a=0xa1, .x=0xd1, .y=0x9e, .sp=0xc0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0bf6, .value=0x48}, {.addr=0x0bf7, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x0bf6, .value=0x48, .type=IO_READ},
        {.addr=0x0bf7, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0296) {
    const struct CPU_State initial_cpu = {.pc=0xf40c, .a=0x64, .x=0x5d, .y=0x9c, .sp=0x05, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf40c, .value=0x48}, {.addr=0xf40d, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xf40e, .a=0xac, .x=0x5d, .y=0x9c, .sp=0x05, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf40c, .value=0x48}, {.addr=0xf40d, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xf40c, .value=0x48, .type=IO_READ},
        {.addr=0xf40d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0297) {
    const struct CPU_State initial_cpu = {.pc=0x7355, .a=0x09, .x=0x76, .y=0xb7, .sp=0xe3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7355, .value=0x48}, {.addr=0x7356, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x7357, .a=0x72, .x=0x76, .y=0xb7, .sp=0xe3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7355, .value=0x48}, {.addr=0x7356, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x7355, .value=0x48, .type=IO_READ},
        {.addr=0x7356, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0298) {
    const struct CPU_State initial_cpu = {.pc=0x3425, .a=0xff, .x=0xca, .y=0x45, .sp=0xf2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3425, .value=0x48}, {.addr=0x3426, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3427, .a=0x31, .x=0xca, .y=0x45, .sp=0xf2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3425, .value=0x48}, {.addr=0x3426, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3425, .value=0x48, .type=IO_READ},
        {.addr=0x3426, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0299) {
    const struct CPU_State initial_cpu = {.pc=0xc5c3, .a=0xcb, .x=0xa5, .y=0x9f, .sp=0x88, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c3, .value=0x48}, {.addr=0xc5c4, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xc5c5, .a=0x81, .x=0xa5, .y=0x9f, .sp=0x88, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc5c3, .value=0x48}, {.addr=0xc5c4, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xc5c3, .value=0x48, .type=IO_READ},
        {.addr=0xc5c4, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029A) {
    const struct CPU_State initial_cpu = {.pc=0xf4c2, .a=0x5f, .x=0x90, .y=0x76, .sp=0x55, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c2, .value=0x48}, {.addr=0xf4c3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf4c4, .a=0x63, .x=0x90, .y=0x76, .sp=0x55, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf4c2, .value=0x48}, {.addr=0xf4c3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf4c2, .value=0x48, .type=IO_READ},
        {.addr=0xf4c3, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029B) {
    const struct CPU_State initial_cpu = {.pc=0xd221, .a=0x75, .x=0x0c, .y=0x96, .sp=0x43, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd221, .value=0x48}, {.addr=0xd222, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xd223, .a=0xbd, .x=0x0c, .y=0x96, .sp=0x43, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd221, .value=0x48}, {.addr=0xd222, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xd221, .value=0x48, .type=IO_READ},
        {.addr=0xd222, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029C) {
    const struct CPU_State initial_cpu = {.pc=0xb5fa, .a=0x9b, .x=0x46, .y=0x21, .sp=0x49, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xb5fa, .value=0x48}, {.addr=0xb5fb, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xb5fc, .a=0x93, .x=0x46, .y=0x21, .sp=0x49, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb5fa, .value=0x48}, {.addr=0xb5fb, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xb5fa, .value=0x48, .type=IO_READ},
        {.addr=0xb5fb, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029D) {
    const struct CPU_State initial_cpu = {.pc=0xf1a9, .a=0x24, .x=0xb4, .y=0x5e, .sp=0x2a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf1a9, .value=0x48}, {.addr=0xf1aa, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xf1ab, .a=0xce, .x=0xb4, .y=0x5e, .sp=0x2a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf1a9, .value=0x48}, {.addr=0xf1aa, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xf1a9, .value=0x48, .type=IO_READ},
        {.addr=0xf1aa, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa2d5, .a=0x36, .x=0x68, .y=0xb2, .sp=0xae, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d5, .value=0x48}, {.addr=0xa2d6, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xa2d7, .a=0x26, .x=0x68, .y=0xb2, .sp=0xae, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa2d5, .value=0x48}, {.addr=0xa2d6, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xa2d5, .value=0x48, .type=IO_READ},
        {.addr=0xa2d6, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_029F) {
    const struct CPU_State initial_cpu = {.pc=0x8288, .a=0x86, .x=0xa1, .y=0x26, .sp=0xa2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8288, .value=0x48}, {.addr=0x8289, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x828a, .a=0xcd, .x=0xa1, .y=0x26, .sp=0xa2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8288, .value=0x48}, {.addr=0x8289, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x8288, .value=0x48, .type=IO_READ},
        {.addr=0x8289, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x4f50, .a=0xca, .x=0x66, .y=0x02, .sp=0x65, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f50, .value=0x48}, {.addr=0x4f51, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4f52, .a=0xb6, .x=0x66, .y=0x02, .sp=0x65, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4f50, .value=0x48}, {.addr=0x4f51, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4f50, .value=0x48, .type=IO_READ},
        {.addr=0x4f51, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xf1d3, .a=0x2f, .x=0xfb, .y=0x8c, .sp=0x61, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d3, .value=0x48}, {.addr=0xf1d4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf1d5, .a=0x0f, .x=0xfb, .y=0x8c, .sp=0x61, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf1d3, .value=0x48}, {.addr=0xf1d4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf1d3, .value=0x48, .type=IO_READ},
        {.addr=0xf1d4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x3fdb, .a=0xce, .x=0x72, .y=0x95, .sp=0x1d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3fdb, .value=0x48}, {.addr=0x3fdc, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x3fdd, .a=0x9c, .x=0x72, .y=0x95, .sp=0x1d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3fdb, .value=0x48}, {.addr=0x3fdc, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x3fdb, .value=0x48, .type=IO_READ},
        {.addr=0x3fdc, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0xf4, .x=0x13, .y=0x41, .sp=0x0c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1882, .value=0x48}, {.addr=0x1883, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x1884, .a=0x83, .x=0x13, .y=0x41, .sp=0x0c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1882, .value=0x48}, {.addr=0x1883, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0x48, .type=IO_READ},
        {.addr=0x1883, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xfd93, .a=0x55, .x=0xf4, .y=0x91, .sp=0xf6, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd93, .value=0x48}, {.addr=0xfd94, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfd95, .a=0x49, .x=0xf4, .y=0x91, .sp=0xf6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfd93, .value=0x48}, {.addr=0xfd94, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfd93, .value=0x48, .type=IO_READ},
        {.addr=0xfd94, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xe8e1, .a=0x01, .x=0x2b, .y=0x4d, .sp=0x86, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e1, .value=0x48}, {.addr=0xe8e2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe8e3, .a=0x27, .x=0x2b, .y=0x4d, .sp=0x86, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe8e1, .value=0x48}, {.addr=0xe8e2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe8e1, .value=0x48, .type=IO_READ},
        {.addr=0xe8e2, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x830d, .a=0x8b, .x=0x8e, .y=0x99, .sp=0xb6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x830d, .value=0x48}, {.addr=0x830e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x830f, .a=0x50, .x=0x8e, .y=0x99, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x830d, .value=0x48}, {.addr=0x830e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x830d, .value=0x48, .type=IO_READ},
        {.addr=0x830e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x885d, .a=0x82, .x=0xa3, .y=0x41, .sp=0x28, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x885d, .value=0x48}, {.addr=0x885e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x885f, .a=0xde, .x=0xa3, .y=0x41, .sp=0x28, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x885d, .value=0x48}, {.addr=0x885e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x885d, .value=0x48, .type=IO_READ},
        {.addr=0x885e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x213a, .a=0x1e, .x=0x1e, .y=0xa8, .sp=0x10, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x213a, .value=0x48}, {.addr=0x213b, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0x2e, .x=0x1e, .y=0xa8, .sp=0x10, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x213a, .value=0x48}, {.addr=0x213b, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x213a, .value=0x48, .type=IO_READ},
        {.addr=0x213b, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x8c52, .a=0x41, .x=0x3f, .y=0xd2, .sp=0xa1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8c52, .value=0x48}, {.addr=0x8c53, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8c54, .a=0x4c, .x=0x3f, .y=0xd2, .sp=0xa1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8c52, .value=0x48}, {.addr=0x8c53, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8c52, .value=0x48, .type=IO_READ},
        {.addr=0x8c53, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xa9e6, .a=0x98, .x=0xf5, .y=0x95, .sp=0xe4, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e6, .value=0x48}, {.addr=0xa9e7, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xa9e8, .a=0xdc, .x=0xf5, .y=0x95, .sp=0xe4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa9e6, .value=0x48}, {.addr=0xa9e7, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xa9e6, .value=0x48, .type=IO_READ},
        {.addr=0xa9e7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x40de, .a=0x73, .x=0x41, .y=0x69, .sp=0x28, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x40de, .value=0x48}, {.addr=0x40df, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x40e0, .a=0x27, .x=0x41, .y=0x69, .sp=0x28, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x40de, .value=0x48}, {.addr=0x40df, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x40de, .value=0x48, .type=IO_READ},
        {.addr=0x40df, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xc367, .a=0xf2, .x=0x6b, .y=0x12, .sp=0xea, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc367, .value=0x48}, {.addr=0xc368, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc369, .a=0xa0, .x=0x6b, .y=0x12, .sp=0xea, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc367, .value=0x48}, {.addr=0xc368, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc367, .value=0x48, .type=IO_READ},
        {.addr=0xc368, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x4484, .a=0x0b, .x=0xfb, .y=0xfa, .sp=0x7d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4484, .value=0x48}, {.addr=0x4485, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x4486, .a=0x2e, .x=0xfb, .y=0xfa, .sp=0x7d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4484, .value=0x48}, {.addr=0x4485, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4484, .value=0x48, .type=IO_READ},
        {.addr=0x4485, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xf009, .a=0x7c, .x=0x01, .y=0xa3, .sp=0xc4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf009, .value=0x48}, {.addr=0xf00a, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf00b, .a=0xae, .x=0x01, .y=0xa3, .sp=0xc4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf009, .value=0x48}, {.addr=0xf00a, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf009, .value=0x48, .type=IO_READ},
        {.addr=0xf00a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x3190, .a=0x5c, .x=0x81, .y=0x06, .sp=0x5c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3190, .value=0x48}, {.addr=0x3191, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x3192, .a=0xcb, .x=0x81, .y=0x06, .sp=0x5c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3190, .value=0x48}, {.addr=0x3191, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x3190, .value=0x48, .type=IO_READ},
        {.addr=0x3191, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6563, .a=0xd7, .x=0xdb, .y=0xa5, .sp=0xb3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6563, .value=0x48}, {.addr=0x6564, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6565, .a=0xa4, .x=0xdb, .y=0xa5, .sp=0xb3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6563, .value=0x48}, {.addr=0x6564, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6563, .value=0x48, .type=IO_READ},
        {.addr=0x6564, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x14c4, .a=0x20, .x=0x46, .y=0xad, .sp=0xf7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x14c4, .value=0x48}, {.addr=0x14c5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x14c6, .a=0xdc, .x=0x46, .y=0xad, .sp=0xf7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x14c4, .value=0x48}, {.addr=0x14c5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x14c4, .value=0x48, .type=IO_READ},
        {.addr=0x14c5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xdeb7, .a=0xc9, .x=0x44, .y=0xa9, .sp=0x83, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xdeb7, .value=0x48}, {.addr=0xdeb8, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xdeb9, .a=0xf0, .x=0x44, .y=0xa9, .sp=0x83, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xdeb7, .value=0x48}, {.addr=0xdeb8, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xdeb7, .value=0x48, .type=IO_READ},
        {.addr=0xdeb8, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xccd9, .a=0xf0, .x=0xd1, .y=0x22, .sp=0x56, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xccd9, .value=0x48}, {.addr=0xccda, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xccdb, .a=0xef, .x=0xd1, .y=0x22, .sp=0x56, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xccd9, .value=0x48}, {.addr=0xccda, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xccd9, .value=0x48, .type=IO_READ},
        {.addr=0xccda, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x246d, .a=0x12, .x=0x23, .y=0x46, .sp=0xed, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x246d, .value=0x48}, {.addr=0x246e, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x246f, .a=0xb3, .x=0x23, .y=0x46, .sp=0xed, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x246d, .value=0x48}, {.addr=0x246e, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x246d, .value=0x48, .type=IO_READ},
        {.addr=0x246e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6b5f, .a=0xc0, .x=0xa4, .y=0xfc, .sp=0xd0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5f, .value=0x48}, {.addr=0x6b60, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x6b61, .a=0x89, .x=0xa4, .y=0xfc, .sp=0xd0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6b5f, .value=0x48}, {.addr=0x6b60, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x6b5f, .value=0x48, .type=IO_READ},
        {.addr=0x6b60, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x425f, .a=0xbf, .x=0xb8, .y=0xc0, .sp=0xe2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x425f, .value=0x48}, {.addr=0x4260, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x4261, .a=0x2c, .x=0xb8, .y=0xc0, .sp=0xe2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x425f, .value=0x48}, {.addr=0x4260, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x425f, .value=0x48, .type=IO_READ},
        {.addr=0x4260, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3d99, .a=0x71, .x=0xf6, .y=0xa7, .sp=0xd6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x3d99, .value=0x48}, {.addr=0x3d9a, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x3d9b, .a=0x68, .x=0xf6, .y=0xa7, .sp=0xd6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3d99, .value=0x48}, {.addr=0x3d9a, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x3d99, .value=0x48, .type=IO_READ},
        {.addr=0x3d9a, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe87a, .a=0x78, .x=0xd8, .y=0xc5, .sp=0x8f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe87a, .value=0x48}, {.addr=0xe87b, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe87c, .a=0xfc, .x=0xd8, .y=0xc5, .sp=0x8f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe87a, .value=0x48}, {.addr=0xe87b, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe87a, .value=0x48, .type=IO_READ},
        {.addr=0xe87b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xd184, .a=0xee, .x=0x67, .y=0x63, .sp=0xe8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd184, .value=0x48}, {.addr=0xd185, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd186, .a=0x40, .x=0x67, .y=0x63, .sp=0xe8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd184, .value=0x48}, {.addr=0xd185, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd184, .value=0x48, .type=IO_READ},
        {.addr=0xd185, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xa2d4, .a=0x73, .x=0x9e, .y=0xfc, .sp=0xae, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d4, .value=0x48}, {.addr=0xa2d5, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa2d6, .a=0xd4, .x=0x9e, .y=0xfc, .sp=0xae, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa2d4, .value=0x48}, {.addr=0xa2d5, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa2d4, .value=0x48, .type=IO_READ},
        {.addr=0xa2d5, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x621a, .a=0x19, .x=0xbb, .y=0x9c, .sp=0x13, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x621a, .value=0x48}, {.addr=0x621b, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x621c, .a=0xb2, .x=0xbb, .y=0x9c, .sp=0x13, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x621a, .value=0x48}, {.addr=0x621b, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x621a, .value=0x48, .type=IO_READ},
        {.addr=0x621b, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xcb0c, .a=0xd8, .x=0xa7, .y=0xc2, .sp=0x43, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xcb0c, .value=0x48}, {.addr=0xcb0d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xcb0e, .a=0xb0, .x=0xa7, .y=0xc2, .sp=0x43, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xcb0c, .value=0x48}, {.addr=0xcb0d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xcb0c, .value=0x48, .type=IO_READ},
        {.addr=0xcb0d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x0d70, .a=0x02, .x=0xc1, .y=0x38, .sp=0xd5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0d70, .value=0x48}, {.addr=0x0d71, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0d72, .a=0x24, .x=0xc1, .y=0x38, .sp=0xd5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0d70, .value=0x48}, {.addr=0x0d71, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0d70, .value=0x48, .type=IO_READ},
        {.addr=0x0d71, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xab72, .a=0x36, .x=0xaa, .y=0x9a, .sp=0x26, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xab72, .value=0x48}, {.addr=0xab73, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xab74, .a=0x60, .x=0xaa, .y=0x9a, .sp=0x26, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xab72, .value=0x48}, {.addr=0xab73, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xab72, .value=0x48, .type=IO_READ},
        {.addr=0xab73, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xd75d, .a=0x17, .x=0x14, .y=0x1b, .sp=0xb6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd75d, .value=0x48}, {.addr=0xd75e, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xd75f, .a=0x08, .x=0x14, .y=0x1b, .sp=0xb6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd75d, .value=0x48}, {.addr=0xd75e, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xd75d, .value=0x48, .type=IO_READ},
        {.addr=0xd75e, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x3de6, .a=0xaf, .x=0x09, .y=0x51, .sp=0xaa, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3de6, .value=0x48}, {.addr=0x3de7, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x3de8, .a=0x35, .x=0x09, .y=0x51, .sp=0xaa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3de6, .value=0x48}, {.addr=0x3de7, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x3de6, .value=0x48, .type=IO_READ},
        {.addr=0x3de7, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0x12, .x=0x18, .y=0xf8, .sp=0x7c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0x48}, {.addr=0x821c, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0xf0, .x=0x18, .y=0xf8, .sp=0x7c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0x48}, {.addr=0x821c, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0x48, .type=IO_READ},
        {.addr=0x821c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x6ab4, .a=0xc8, .x=0xe4, .y=0x13, .sp=0x35, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6ab4, .value=0x48}, {.addr=0x6ab5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6ab6, .a=0xc8, .x=0xe4, .y=0x13, .sp=0x35, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6ab4, .value=0x48}, {.addr=0x6ab5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6ab4, .value=0x48, .type=IO_READ},
        {.addr=0x6ab5, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x8b2b, .a=0x41, .x=0x1a, .y=0x02, .sp=0xe9, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8b2b, .value=0x48}, {.addr=0x8b2c, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x8b2d, .a=0xd2, .x=0x1a, .y=0x02, .sp=0xe9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8b2b, .value=0x48}, {.addr=0x8b2c, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x8b2b, .value=0x48, .type=IO_READ},
        {.addr=0x8b2c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xe3ff, .a=0x46, .x=0xed, .y=0x5b, .sp=0xe0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe3ff, .value=0x48}, {.addr=0xe400, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xe401, .a=0x61, .x=0xed, .y=0x5b, .sp=0xe0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe3ff, .value=0x48}, {.addr=0xe400, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xe3ff, .value=0x48, .type=IO_READ},
        {.addr=0xe400, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x33d6, .a=0x0c, .x=0xb2, .y=0x16, .sp=0x5b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x33d6, .value=0x48}, {.addr=0x33d7, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x33d8, .a=0x1e, .x=0xb2, .y=0x16, .sp=0x5b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x33d6, .value=0x48}, {.addr=0x33d7, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x33d6, .value=0x48, .type=IO_READ},
        {.addr=0x33d7, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xdd53, .a=0xda, .x=0xea, .y=0xf8, .sp=0x1d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xdd53, .value=0x48}, {.addr=0xdd54, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xdd55, .a=0xf4, .x=0xea, .y=0xf8, .sp=0x1d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdd53, .value=0x48}, {.addr=0xdd54, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xdd53, .value=0x48, .type=IO_READ},
        {.addr=0xdd54, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xf230, .a=0x33, .x=0xee, .y=0x7a, .sp=0x5b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf230, .value=0x48}, {.addr=0xf231, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xf232, .a=0xed, .x=0xee, .y=0x7a, .sp=0x5b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf230, .value=0x48}, {.addr=0xf231, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xf230, .value=0x48, .type=IO_READ},
        {.addr=0xf231, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x0d37, .a=0xaf, .x=0x61, .y=0x43, .sp=0xf7, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0d37, .value=0x48}, {.addr=0x0d38, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x0d39, .a=0x1a, .x=0x61, .y=0x43, .sp=0xf7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0d37, .value=0x48}, {.addr=0x0d38, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x0d37, .value=0x48, .type=IO_READ},
        {.addr=0x0d38, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xb2d5, .a=0x64, .x=0x01, .y=0x49, .sp=0x55, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d5, .value=0x48}, {.addr=0xb2d6, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xb2d7, .a=0x50, .x=0x01, .y=0x49, .sp=0x55, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb2d5, .value=0x48}, {.addr=0xb2d6, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xb2d5, .value=0x48, .type=IO_READ},
        {.addr=0xb2d6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xad76, .a=0x94, .x=0x8a, .y=0x60, .sp=0x64, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xad76, .value=0x48}, {.addr=0xad77, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xad78, .a=0x51, .x=0x8a, .y=0x60, .sp=0x64, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xad76, .value=0x48}, {.addr=0xad77, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xad76, .value=0x48, .type=IO_READ},
        {.addr=0xad77, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x8305, .a=0x21, .x=0xf8, .y=0x5a, .sp=0x8c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8305, .value=0x48}, {.addr=0x8306, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x8307, .a=0xd4, .x=0xf8, .y=0x5a, .sp=0x8c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8305, .value=0x48}, {.addr=0x8306, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x8305, .value=0x48, .type=IO_READ},
        {.addr=0x8306, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x5705, .a=0xa7, .x=0xe2, .y=0x5b, .sp=0x8c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5705, .value=0x48}, {.addr=0x5706, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x5707, .a=0x59, .x=0xe2, .y=0x5b, .sp=0x8c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5705, .value=0x48}, {.addr=0x5706, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x5705, .value=0x48, .type=IO_READ},
        {.addr=0x5706, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x25ad, .a=0x7a, .x=0xad, .y=0x94, .sp=0x29, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x25ad, .value=0x48}, {.addr=0x25ae, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x25af, .a=0x52, .x=0xad, .y=0x94, .sp=0x29, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x25ad, .value=0x48}, {.addr=0x25ae, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x25ad, .value=0x48, .type=IO_READ},
        {.addr=0x25ae, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x29a6, .a=0x87, .x=0x54, .y=0x04, .sp=0x88, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x29a6, .value=0x48}, {.addr=0x29a7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x29a8, .a=0xb7, .x=0x54, .y=0x04, .sp=0x88, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x29a6, .value=0x48}, {.addr=0x29a7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x29a6, .value=0x48, .type=IO_READ},
        {.addr=0x29a7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x2dbf, .a=0x8f, .x=0xcf, .y=0x8d, .sp=0x72, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbf, .value=0x48}, {.addr=0x2dc0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2dc1, .a=0x33, .x=0xcf, .y=0x8d, .sp=0x72, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2dbf, .value=0x48}, {.addr=0x2dc0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2dbf, .value=0x48, .type=IO_READ},
        {.addr=0x2dc0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x1827, .a=0x9c, .x=0x40, .y=0x3c, .sp=0xa7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1827, .value=0x48}, {.addr=0x1828, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x1829, .a=0x58, .x=0x40, .y=0x3c, .sp=0xa7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1827, .value=0x48}, {.addr=0x1828, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x1827, .value=0x48, .type=IO_READ},
        {.addr=0x1828, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xceea, .a=0x6a, .x=0xd4, .y=0xd0, .sp=0x00, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xceea, .value=0x48}, {.addr=0xceeb, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xceec, .a=0x08, .x=0xd4, .y=0xd0, .sp=0x00, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xceea, .value=0x48}, {.addr=0xceeb, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xceea, .value=0x48, .type=IO_READ},
        {.addr=0xceeb, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5cc7, .a=0x94, .x=0x6d, .y=0xe5, .sp=0xe4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc7, .value=0x48}, {.addr=0x5cc8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5cc9, .a=0xb4, .x=0x6d, .y=0xe5, .sp=0xe4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5cc7, .value=0x48}, {.addr=0x5cc8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5cc7, .value=0x48, .type=IO_READ},
        {.addr=0x5cc8, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x48d8, .a=0x04, .x=0xaf, .y=0xb3, .sp=0x3d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x48d8, .value=0x48}, {.addr=0x48d9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x48da, .a=0x49, .x=0xaf, .y=0xb3, .sp=0x3d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x48d8, .value=0x48}, {.addr=0x48d9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x48d8, .value=0x48, .type=IO_READ},
        {.addr=0x48d9, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xd42c, .a=0x00, .x=0x85, .y=0xbd, .sp=0x75, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd42c, .value=0x48}, {.addr=0xd42d, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xd42e, .a=0xba, .x=0x85, .y=0xbd, .sp=0x75, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd42c, .value=0x48}, {.addr=0xd42d, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xd42c, .value=0x48, .type=IO_READ},
        {.addr=0xd42d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x0eb1, .a=0xb6, .x=0x61, .y=0x46, .sp=0x56, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb1, .value=0x48}, {.addr=0x0eb2, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x0eb3, .a=0x72, .x=0x61, .y=0x46, .sp=0x56, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0eb1, .value=0x48}, {.addr=0x0eb2, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x0eb1, .value=0x48, .type=IO_READ},
        {.addr=0x0eb2, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xbbf9, .a=0x6c, .x=0x00, .y=0xd9, .sp=0x6f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf9, .value=0x48}, {.addr=0xbbfa, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xbbfb, .a=0x97, .x=0x00, .y=0xd9, .sp=0x6f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbbf9, .value=0x48}, {.addr=0xbbfa, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xbbf9, .value=0x48, .type=IO_READ},
        {.addr=0xbbfa, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x6f06, .a=0xab, .x=0x67, .y=0x44, .sp=0x54, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6f06, .value=0x48}, {.addr=0x6f07, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f08, .a=0x46, .x=0x67, .y=0x44, .sp=0x54, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6f06, .value=0x48}, {.addr=0x6f07, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f06, .value=0x48, .type=IO_READ},
        {.addr=0x6f07, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x2695, .a=0x5a, .x=0x6f, .y=0xcd, .sp=0xec, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2695, .value=0x48}, {.addr=0x2696, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x2697, .a=0xa1, .x=0x6f, .y=0xcd, .sp=0xec, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2695, .value=0x48}, {.addr=0x2696, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x2695, .value=0x48, .type=IO_READ},
        {.addr=0x2696, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xf37d, .a=0x22, .x=0x8e, .y=0x44, .sp=0xec, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf37d, .value=0x48}, {.addr=0xf37e, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xf37f, .a=0xc6, .x=0x8e, .y=0x44, .sp=0xec, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf37d, .value=0x48}, {.addr=0xf37e, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xf37d, .value=0x48, .type=IO_READ},
        {.addr=0xf37e, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x1051, .a=0x3b, .x=0x02, .y=0xae, .sp=0x4c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1051, .value=0x48}, {.addr=0x1052, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x1053, .a=0x81, .x=0x02, .y=0xae, .sp=0x4c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1051, .value=0x48}, {.addr=0x1052, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x1051, .value=0x48, .type=IO_READ},
        {.addr=0x1052, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xf4dd, .a=0xef, .x=0xde, .y=0x44, .sp=0xe6, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf4dd, .value=0x48}, {.addr=0xf4de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf4df, .a=0x33, .x=0xde, .y=0x44, .sp=0xe6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf4dd, .value=0x48}, {.addr=0xf4de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf4dd, .value=0x48, .type=IO_READ},
        {.addr=0xf4de, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xad13, .a=0xa9, .x=0x01, .y=0x96, .sp=0x82, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xad13, .value=0x48}, {.addr=0xad14, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xad15, .a=0x8c, .x=0x01, .y=0x96, .sp=0x82, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xad13, .value=0x48}, {.addr=0xad14, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xad13, .value=0x48, .type=IO_READ},
        {.addr=0xad14, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x1ae3, .a=0x2b, .x=0x8d, .y=0x37, .sp=0xed, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae3, .value=0x48}, {.addr=0x1ae4, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x1ae5, .a=0x64, .x=0x8d, .y=0x37, .sp=0xed, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1ae3, .value=0x48}, {.addr=0x1ae4, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x1ae3, .value=0x48, .type=IO_READ},
        {.addr=0x1ae4, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xdf7a, .a=0x1b, .x=0x3b, .y=0xe9, .sp=0xe5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7a, .value=0x48}, {.addr=0xdf7b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdf7c, .a=0xa4, .x=0x3b, .y=0xe9, .sp=0xe5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdf7a, .value=0x48}, {.addr=0xdf7b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdf7a, .value=0x48, .type=IO_READ},
        {.addr=0xdf7b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe914, .a=0x98, .x=0x35, .y=0x07, .sp=0xae, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe914, .value=0x48}, {.addr=0xe915, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xe916, .a=0x81, .x=0x35, .y=0x07, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe914, .value=0x48}, {.addr=0xe915, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xe914, .value=0x48, .type=IO_READ},
        {.addr=0xe915, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xad8e, .a=0x51, .x=0x27, .y=0xa9, .sp=0x38, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xad8e, .value=0x48}, {.addr=0xad8f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xad90, .a=0x7f, .x=0x27, .y=0xa9, .sp=0x38, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xad8e, .value=0x48}, {.addr=0xad8f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xad8e, .value=0x48, .type=IO_READ},
        {.addr=0xad8f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x6f87, .a=0xac, .x=0x2a, .y=0x43, .sp=0x81, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6f87, .value=0x48}, {.addr=0x6f88, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x6f89, .a=0xd2, .x=0x2a, .y=0x43, .sp=0x81, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6f87, .value=0x48}, {.addr=0x6f88, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x6f87, .value=0x48, .type=IO_READ},
        {.addr=0x6f88, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x44c0, .a=0xb3, .x=0x54, .y=0x6a, .sp=0x4e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x44c0, .value=0x48}, {.addr=0x44c1, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x44c2, .a=0xcd, .x=0x54, .y=0x6a, .sp=0x4e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x44c0, .value=0x48}, {.addr=0x44c1, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x44c0, .value=0x48, .type=IO_READ},
        {.addr=0x44c1, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xa94f, .a=0xd2, .x=0x82, .y=0xf8, .sp=0xe0, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa94f, .value=0x48}, {.addr=0xa950, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa951, .a=0x70, .x=0x82, .y=0xf8, .sp=0xe0, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa94f, .value=0x48}, {.addr=0xa950, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa94f, .value=0x48, .type=IO_READ},
        {.addr=0xa950, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xa395, .a=0x02, .x=0x01, .y=0x9a, .sp=0x58, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa395, .value=0x48}, {.addr=0xa396, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa397, .a=0xb7, .x=0x01, .y=0x9a, .sp=0x58, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa395, .value=0x48}, {.addr=0xa396, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa395, .value=0x48, .type=IO_READ},
        {.addr=0xa396, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x287f, .a=0xb6, .x=0xac, .y=0x4c, .sp=0x05, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x287f, .value=0x48}, {.addr=0x2880, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2881, .a=0x5b, .x=0xac, .y=0x4c, .sp=0x05, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x287f, .value=0x48}, {.addr=0x2880, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x287f, .value=0x48, .type=IO_READ},
        {.addr=0x2880, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x5d4f, .a=0x6f, .x=0x40, .y=0x80, .sp=0x8a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4f, .value=0x48}, {.addr=0x5d50, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x5d51, .a=0xad, .x=0x40, .y=0x80, .sp=0x8a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5d4f, .value=0x48}, {.addr=0x5d50, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x5d4f, .value=0x48, .type=IO_READ},
        {.addr=0x5d50, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8e4a, .a=0xaa, .x=0xc4, .y=0x99, .sp=0x70, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8e4a, .value=0x48}, {.addr=0x8e4b, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x8e4c, .a=0x5a, .x=0xc4, .y=0x99, .sp=0x70, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8e4a, .value=0x48}, {.addr=0x8e4b, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x8e4a, .value=0x48, .type=IO_READ},
        {.addr=0x8e4b, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xbb72, .a=0xec, .x=0x60, .y=0x09, .sp=0x64, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xbb72, .value=0x48}, {.addr=0xbb73, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xbb74, .a=0xe6, .x=0x60, .y=0x09, .sp=0x64, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbb72, .value=0x48}, {.addr=0xbb73, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xbb72, .value=0x48, .type=IO_READ},
        {.addr=0xbb73, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x68e1, .a=0x9f, .x=0x61, .y=0x25, .sp=0x4c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x68e1, .value=0x48}, {.addr=0x68e2, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x68e3, .a=0x0d, .x=0x61, .y=0x25, .sp=0x4c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x68e1, .value=0x48}, {.addr=0x68e2, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x68e1, .value=0x48, .type=IO_READ},
        {.addr=0x68e2, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x9e8f, .a=0xeb, .x=0x1d, .y=0x6f, .sp=0x40, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9e8f, .value=0x48}, {.addr=0x9e90, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x9e91, .a=0xa8, .x=0x1d, .y=0x6f, .sp=0x40, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9e8f, .value=0x48}, {.addr=0x9e90, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x9e8f, .value=0x48, .type=IO_READ},
        {.addr=0x9e90, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x6ceb, .a=0x16, .x=0x19, .y=0x52, .sp=0x63, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6ceb, .value=0x48}, {.addr=0x6cec, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x6ced, .a=0x6c, .x=0x19, .y=0x52, .sp=0x63, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6ceb, .value=0x48}, {.addr=0x6cec, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x6ceb, .value=0x48, .type=IO_READ},
        {.addr=0x6cec, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xe364, .a=0xec, .x=0xd1, .y=0xc1, .sp=0xc2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe364, .value=0x48}, {.addr=0xe365, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xe366, .a=0x84, .x=0xd1, .y=0xc1, .sp=0xc2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe364, .value=0x48}, {.addr=0xe365, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xe364, .value=0x48, .type=IO_READ},
        {.addr=0xe365, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xec2f, .a=0xc4, .x=0xd7, .y=0x73, .sp=0x03, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xec2f, .value=0x48}, {.addr=0xec30, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xec31, .a=0x0b, .x=0xd7, .y=0x73, .sp=0x03, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xec2f, .value=0x48}, {.addr=0xec30, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xec2f, .value=0x48, .type=IO_READ},
        {.addr=0xec30, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x5978, .a=0x09, .x=0x83, .y=0x75, .sp=0x95, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5978, .value=0x48}, {.addr=0x5979, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x597a, .a=0xef, .x=0x83, .y=0x75, .sp=0x95, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5978, .value=0x48}, {.addr=0x5979, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5978, .value=0x48, .type=IO_READ},
        {.addr=0x5979, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7451, .a=0xbd, .x=0xa8, .y=0xf1, .sp=0x4f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x7451, .value=0x48}, {.addr=0x7452, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x7453, .a=0x95, .x=0xa8, .y=0xf1, .sp=0x4f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7451, .value=0x48}, {.addr=0x7452, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x7451, .value=0x48, .type=IO_READ},
        {.addr=0x7452, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x7a64, .a=0xbf, .x=0xb5, .y=0x6f, .sp=0x30, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7a64, .value=0x48}, {.addr=0x7a65, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x7a66, .a=0xa1, .x=0xb5, .y=0x6f, .sp=0x30, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7a64, .value=0x48}, {.addr=0x7a65, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x7a64, .value=0x48, .type=IO_READ},
        {.addr=0x7a65, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x9110, .a=0xee, .x=0x12, .y=0x11, .sp=0x04, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9110, .value=0x48}, {.addr=0x9111, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9112, .a=0x37, .x=0x12, .y=0x11, .sp=0x04, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9110, .value=0x48}, {.addr=0x9111, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9110, .value=0x48, .type=IO_READ},
        {.addr=0x9111, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x8110, .a=0xa0, .x=0xaf, .y=0x3d, .sp=0x96, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8110, .value=0x48}, {.addr=0x8111, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x8112, .a=0xf1, .x=0xaf, .y=0x3d, .sp=0x96, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8110, .value=0x48}, {.addr=0x8111, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x8110, .value=0x48, .type=IO_READ},
        {.addr=0x8111, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xf44e, .a=0x18, .x=0xd5, .y=0xf3, .sp=0xf3, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf44e, .value=0x48}, {.addr=0xf44f, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf450, .a=0xca, .x=0xd5, .y=0xf3, .sp=0xf3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf44e, .value=0x48}, {.addr=0xf44f, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf44e, .value=0x48, .type=IO_READ},
        {.addr=0xf44f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x19c6, .a=0xb5, .x=0x81, .y=0x8f, .sp=0x98, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x19c6, .value=0x48}, {.addr=0x19c7, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x19c8, .a=0x41, .x=0x81, .y=0x8f, .sp=0x98, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x19c6, .value=0x48}, {.addr=0x19c7, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x19c6, .value=0x48, .type=IO_READ},
        {.addr=0x19c7, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x83e9, .a=0x33, .x=0xd6, .y=0xc5, .sp=0x89, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x83e9, .value=0x48}, {.addr=0x83ea, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x83eb, .a=0x22, .x=0xd6, .y=0xc5, .sp=0x89, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x83e9, .value=0x48}, {.addr=0x83ea, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x83e9, .value=0x48, .type=IO_READ},
        {.addr=0x83ea, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x3c64, .a=0x44, .x=0xce, .y=0xe6, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3c64, .value=0x48}, {.addr=0x3c65, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x3c66, .a=0x66, .x=0xce, .y=0xe6, .sp=0x2a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3c64, .value=0x48}, {.addr=0x3c65, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x3c64, .value=0x48, .type=IO_READ},
        {.addr=0x3c65, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xfd3c, .a=0x3c, .x=0x03, .y=0xf1, .sp=0x1e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3c, .value=0x48}, {.addr=0xfd3d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfd3e, .a=0xfa, .x=0x03, .y=0xf1, .sp=0x1e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xfd3c, .value=0x48}, {.addr=0xfd3d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfd3c, .value=0x48, .type=IO_READ},
        {.addr=0xfd3d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xd9b8, .a=0x15, .x=0xe7, .y=0x02, .sp=0x80, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b8, .value=0x48}, {.addr=0xd9b9, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xd9ba, .a=0xc7, .x=0xe7, .y=0x02, .sp=0x80, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd9b8, .value=0x48}, {.addr=0xd9b9, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xd9b8, .value=0x48, .type=IO_READ},
        {.addr=0xd9b9, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x79e9, .a=0x98, .x=0x51, .y=0x4c, .sp=0x16, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x79e9, .value=0x48}, {.addr=0x79ea, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x79eb, .a=0xdf, .x=0x51, .y=0x4c, .sp=0x16, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x79e9, .value=0x48}, {.addr=0x79ea, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x79e9, .value=0x48, .type=IO_READ},
        {.addr=0x79ea, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x3ffb, .a=0xed, .x=0x6c, .y=0xfc, .sp=0x33, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x3ffb, .value=0x48}, {.addr=0x3ffc, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x3ffd, .a=0xe2, .x=0x6c, .y=0xfc, .sp=0x33, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3ffb, .value=0x48}, {.addr=0x3ffc, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x3ffb, .value=0x48, .type=IO_READ},
        {.addr=0x3ffc, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xceec, .a=0xfb, .x=0xf8, .y=0xcf, .sp=0xd5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xceec, .value=0x48}, {.addr=0xceed, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xceee, .a=0x17, .x=0xf8, .y=0xcf, .sp=0xd5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xceec, .value=0x48}, {.addr=0xceed, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xceec, .value=0x48, .type=IO_READ},
        {.addr=0xceed, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x1d31, .a=0x4d, .x=0x93, .y=0x1d, .sp=0xea, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d31, .value=0x48}, {.addr=0x1d32, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x1d33, .a=0x65, .x=0x93, .y=0x1d, .sp=0xea, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1d31, .value=0x48}, {.addr=0x1d32, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x1d31, .value=0x48, .type=IO_READ},
        {.addr=0x1d32, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe8f6, .a=0x06, .x=0xa2, .y=0x90, .sp=0x97, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f6, .value=0x48}, {.addr=0xe8f7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xe8f8, .a=0x36, .x=0xa2, .y=0x90, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe8f6, .value=0x48}, {.addr=0xe8f7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xe8f6, .value=0x48, .type=IO_READ},
        {.addr=0xe8f7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x0de0, .a=0xd0, .x=0x33, .y=0x6d, .sp=0xce, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0de0, .value=0x48}, {.addr=0x0de1, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0de2, .a=0x1d, .x=0x33, .y=0x6d, .sp=0xce, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0de0, .value=0x48}, {.addr=0x0de1, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0de0, .value=0x48, .type=IO_READ},
        {.addr=0x0de1, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x6b5a, .a=0x2e, .x=0x14, .y=0x04, .sp=0xa5, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5a, .value=0x48}, {.addr=0x6b5b, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x6b5c, .a=0x06, .x=0x14, .y=0x04, .sp=0xa5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6b5a, .value=0x48}, {.addr=0x6b5b, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x6b5a, .value=0x48, .type=IO_READ},
        {.addr=0x6b5b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0300) {
    const struct CPU_State initial_cpu = {.pc=0x2809, .a=0x59, .x=0xdd, .y=0x62, .sp=0xe2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2809, .value=0x48}, {.addr=0x280a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x280b, .a=0xa4, .x=0xdd, .y=0x62, .sp=0xe2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2809, .value=0x48}, {.addr=0x280a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2809, .value=0x48, .type=IO_READ},
        {.addr=0x280a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0301) {
    const struct CPU_State initial_cpu = {.pc=0xa05e, .a=0x2d, .x=0x95, .y=0xc9, .sp=0x30, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa05e, .value=0x48}, {.addr=0xa05f, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa060, .a=0x38, .x=0x95, .y=0xc9, .sp=0x30, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa05e, .value=0x48}, {.addr=0xa05f, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa05e, .value=0x48, .type=IO_READ},
        {.addr=0xa05f, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0302) {
    const struct CPU_State initial_cpu = {.pc=0x26f0, .a=0x99, .x=0x5d, .y=0xcb, .sp=0xed, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x26f0, .value=0x48}, {.addr=0x26f1, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x26f2, .a=0x22, .x=0x5d, .y=0xcb, .sp=0xed, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x26f0, .value=0x48}, {.addr=0x26f1, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x26f0, .value=0x48, .type=IO_READ},
        {.addr=0x26f1, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0303) {
    const struct CPU_State initial_cpu = {.pc=0xd514, .a=0x84, .x=0xec, .y=0xe6, .sp=0x62, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd514, .value=0x48}, {.addr=0xd515, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd516, .a=0xc2, .x=0xec, .y=0xe6, .sp=0x62, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd514, .value=0x48}, {.addr=0xd515, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd514, .value=0x48, .type=IO_READ},
        {.addr=0xd515, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4af1, .a=0x1c, .x=0x4b, .y=0x8d, .sp=0x11, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4af1, .value=0x48}, {.addr=0x4af2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4af3, .a=0x11, .x=0x4b, .y=0x8d, .sp=0x11, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4af1, .value=0x48}, {.addr=0x4af2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4af1, .value=0x48, .type=IO_READ},
        {.addr=0x4af2, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0305) {
    const struct CPU_State initial_cpu = {.pc=0x2435, .a=0x8d, .x=0x83, .y=0x40, .sp=0x37, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2435, .value=0x48}, {.addr=0x2436, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x2437, .a=0xdc, .x=0x83, .y=0x40, .sp=0x37, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2435, .value=0x48}, {.addr=0x2436, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x2435, .value=0x48, .type=IO_READ},
        {.addr=0x2436, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0306) {
    const struct CPU_State initial_cpu = {.pc=0x44c9, .a=0xe2, .x=0x56, .y=0x02, .sp=0xfe, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x44c9, .value=0x48}, {.addr=0x44ca, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x44cb, .a=0x2a, .x=0x56, .y=0x02, .sp=0xfe, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x44c9, .value=0x48}, {.addr=0x44ca, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x44c9, .value=0x48, .type=IO_READ},
        {.addr=0x44ca, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0307) {
    const struct CPU_State initial_cpu = {.pc=0x03c7, .a=0x5d, .x=0x4a, .y=0x01, .sp=0xc7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x03c7, .value=0x48}, {.addr=0x03c8, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x03c9, .a=0xb2, .x=0x4a, .y=0x01, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x03c7, .value=0x48}, {.addr=0x03c8, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x03c7, .value=0x48, .type=IO_READ},
        {.addr=0x03c8, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0308) {
    const struct CPU_State initial_cpu = {.pc=0x1172, .a=0xf6, .x=0x01, .y=0xed, .sp=0xca, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1172, .value=0x48}, {.addr=0x1173, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x1174, .a=0xf3, .x=0x01, .y=0xed, .sp=0xca, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1172, .value=0x48}, {.addr=0x1173, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x1172, .value=0x48, .type=IO_READ},
        {.addr=0x1173, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0309) {
    const struct CPU_State initial_cpu = {.pc=0xa0c7, .a=0xa8, .x=0x22, .y=0xbf, .sp=0x5f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c7, .value=0x48}, {.addr=0xa0c8, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xa0c9, .a=0x78, .x=0x22, .y=0xbf, .sp=0x5f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa0c7, .value=0x48}, {.addr=0xa0c8, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xa0c7, .value=0x48, .type=IO_READ},
        {.addr=0xa0c8, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030A) {
    const struct CPU_State initial_cpu = {.pc=0xb54c, .a=0x7c, .x=0xbb, .y=0xfe, .sp=0xb7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb54c, .value=0x48}, {.addr=0xb54d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xb54e, .a=0x14, .x=0xbb, .y=0xfe, .sp=0xb7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb54c, .value=0x48}, {.addr=0xb54d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xb54c, .value=0x48, .type=IO_READ},
        {.addr=0xb54d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030B) {
    const struct CPU_State initial_cpu = {.pc=0x8d16, .a=0x33, .x=0x7a, .y=0x49, .sp=0x49, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8d16, .value=0x48}, {.addr=0x8d17, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8d18, .a=0x56, .x=0x7a, .y=0x49, .sp=0x49, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8d16, .value=0x48}, {.addr=0x8d17, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8d16, .value=0x48, .type=IO_READ},
        {.addr=0x8d17, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030C) {
    const struct CPU_State initial_cpu = {.pc=0xb6fe, .a=0x45, .x=0x7c, .y=0x6d, .sp=0x54, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb6fe, .value=0x48}, {.addr=0xb6ff, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb700, .a=0xfb, .x=0x7c, .y=0x6d, .sp=0x54, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xb6fe, .value=0x48}, {.addr=0xb6ff, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb6fe, .value=0x48, .type=IO_READ},
        {.addr=0xb6ff, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030D) {
    const struct CPU_State initial_cpu = {.pc=0x6653, .a=0x60, .x=0xc3, .y=0x97, .sp=0xca, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6653, .value=0x48}, {.addr=0x6654, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x6655, .a=0xde, .x=0xc3, .y=0x97, .sp=0xca, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6653, .value=0x48}, {.addr=0x6654, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6653, .value=0x48, .type=IO_READ},
        {.addr=0x6654, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030E) {
    const struct CPU_State initial_cpu = {.pc=0x7c69, .a=0x82, .x=0xf5, .y=0xef, .sp=0x8e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7c69, .value=0x48}, {.addr=0x7c6a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x7c6b, .a=0x0b, .x=0xf5, .y=0xef, .sp=0x8e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7c69, .value=0x48}, {.addr=0x7c6a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x7c69, .value=0x48, .type=IO_READ},
        {.addr=0x7c6a, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_030F) {
    const struct CPU_State initial_cpu = {.pc=0x5861, .a=0x80, .x=0x49, .y=0x3a, .sp=0x44, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5861, .value=0x48}, {.addr=0x5862, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5863, .a=0x6a, .x=0x49, .y=0x3a, .sp=0x44, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5861, .value=0x48}, {.addr=0x5862, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x5861, .value=0x48, .type=IO_READ},
        {.addr=0x5862, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0310) {
    const struct CPU_State initial_cpu = {.pc=0x54da, .a=0xdd, .x=0x89, .y=0x52, .sp=0x44, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x54da, .value=0x48}, {.addr=0x54db, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x54dc, .a=0xd1, .x=0x89, .y=0x52, .sp=0x44, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x54da, .value=0x48}, {.addr=0x54db, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x54da, .value=0x48, .type=IO_READ},
        {.addr=0x54db, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0311) {
    const struct CPU_State initial_cpu = {.pc=0x2fe1, .a=0x0d, .x=0xd4, .y=0xe7, .sp=0x24, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe1, .value=0x48}, {.addr=0x2fe2, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x2fe3, .a=0xf5, .x=0xd4, .y=0xe7, .sp=0x24, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2fe1, .value=0x48}, {.addr=0x2fe2, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x2fe1, .value=0x48, .type=IO_READ},
        {.addr=0x2fe2, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0312) {
    const struct CPU_State initial_cpu = {.pc=0x8c4d, .a=0x61, .x=0x21, .y=0x49, .sp=0x1d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4d, .value=0x48}, {.addr=0x8c4e, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x8c4f, .a=0x2b, .x=0x21, .y=0x49, .sp=0x1d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8c4d, .value=0x48}, {.addr=0x8c4e, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x8c4d, .value=0x48, .type=IO_READ},
        {.addr=0x8c4e, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0313) {
    const struct CPU_State initial_cpu = {.pc=0xb059, .a=0x63, .x=0xc3, .y=0x35, .sp=0xd0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xb059, .value=0x48}, {.addr=0xb05a, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xb05b, .a=0x49, .x=0xc3, .y=0x35, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb059, .value=0x48}, {.addr=0xb05a, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xb059, .value=0x48, .type=IO_READ},
        {.addr=0xb05a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0314) {
    const struct CPU_State initial_cpu = {.pc=0x90d6, .a=0x1b, .x=0x0e, .y=0xac, .sp=0xef, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x90d6, .value=0x48}, {.addr=0x90d7, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x90d8, .a=0xd6, .x=0x0e, .y=0xac, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x90d6, .value=0x48}, {.addr=0x90d7, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x90d6, .value=0x48, .type=IO_READ},
        {.addr=0x90d7, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0315) {
    const struct CPU_State initial_cpu = {.pc=0x35e2, .a=0x00, .x=0xb2, .y=0x54, .sp=0xb8, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x35e2, .value=0x48}, {.addr=0x35e3, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x35e4, .a=0xa1, .x=0xb2, .y=0x54, .sp=0xb8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x35e2, .value=0x48}, {.addr=0x35e3, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x35e2, .value=0x48, .type=IO_READ},
        {.addr=0x35e3, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0316) {
    const struct CPU_State initial_cpu = {.pc=0x39e1, .a=0xf0, .x=0xe7, .y=0x6c, .sp=0x44, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x39e1, .value=0x48}, {.addr=0x39e2, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x39e3, .a=0xb5, .x=0xe7, .y=0x6c, .sp=0x44, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x39e1, .value=0x48}, {.addr=0x39e2, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x39e1, .value=0x48, .type=IO_READ},
        {.addr=0x39e2, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0317) {
    const struct CPU_State initial_cpu = {.pc=0x8277, .a=0xec, .x=0x3f, .y=0xf9, .sp=0xca, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x8277, .value=0x48}, {.addr=0x8278, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x8279, .a=0x9a, .x=0x3f, .y=0xf9, .sp=0xca, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8277, .value=0x48}, {.addr=0x8278, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x8277, .value=0x48, .type=IO_READ},
        {.addr=0x8278, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0318) {
    const struct CPU_State initial_cpu = {.pc=0x53cb, .a=0x43, .x=0x0d, .y=0x44, .sp=0xed, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x53cb, .value=0x48}, {.addr=0x53cc, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x53cd, .a=0x49, .x=0x0d, .y=0x44, .sp=0xed, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x53cb, .value=0x48}, {.addr=0x53cc, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x53cb, .value=0x48, .type=IO_READ},
        {.addr=0x53cc, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd503, .a=0x35, .x=0xa7, .y=0xe5, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xd503, .value=0x48}, {.addr=0xd504, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd505, .a=0xe9, .x=0xa7, .y=0xe5, .sp=0x2e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd503, .value=0x48}, {.addr=0xd504, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd503, .value=0x48, .type=IO_READ},
        {.addr=0xd504, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031A) {
    const struct CPU_State initial_cpu = {.pc=0x9338, .a=0x02, .x=0x9f, .y=0xf5, .sp=0x3c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9338, .value=0x48}, {.addr=0x9339, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x933a, .a=0x08, .x=0x9f, .y=0xf5, .sp=0x3c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9338, .value=0x48}, {.addr=0x9339, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x9338, .value=0x48, .type=IO_READ},
        {.addr=0x9339, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4912, .a=0x00, .x=0x94, .y=0x55, .sp=0x31, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4912, .value=0x48}, {.addr=0x4913, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x4914, .a=0x16, .x=0x94, .y=0x55, .sp=0x31, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4912, .value=0x48}, {.addr=0x4913, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4912, .value=0x48, .type=IO_READ},
        {.addr=0x4913, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031C) {
    const struct CPU_State initial_cpu = {.pc=0xd093, .a=0x9b, .x=0x07, .y=0x2a, .sp=0x18, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd093, .value=0x48}, {.addr=0xd094, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xd095, .a=0xd0, .x=0x07, .y=0x2a, .sp=0x18, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd093, .value=0x48}, {.addr=0xd094, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xd093, .value=0x48, .type=IO_READ},
        {.addr=0xd094, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031D) {
    const struct CPU_State initial_cpu = {.pc=0x0ba5, .a=0x6c, .x=0xc7, .y=0x1b, .sp=0x02, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba5, .value=0x48}, {.addr=0x0ba6, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0ba7, .a=0xd4, .x=0xc7, .y=0x1b, .sp=0x02, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0ba5, .value=0x48}, {.addr=0x0ba6, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0ba5, .value=0x48, .type=IO_READ},
        {.addr=0x0ba6, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031E) {
    const struct CPU_State initial_cpu = {.pc=0xfc63, .a=0xb1, .x=0x82, .y=0x01, .sp=0xf5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfc63, .value=0x48}, {.addr=0xfc64, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xfc65, .a=0x68, .x=0x82, .y=0x01, .sp=0xf5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfc63, .value=0x48}, {.addr=0xfc64, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xfc63, .value=0x48, .type=IO_READ},
        {.addr=0xfc64, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_031F) {
    const struct CPU_State initial_cpu = {.pc=0x6575, .a=0xb6, .x=0x6e, .y=0xdd, .sp=0x30, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6575, .value=0x48}, {.addr=0x6576, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x6577, .a=0x1c, .x=0x6e, .y=0xdd, .sp=0x30, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6575, .value=0x48}, {.addr=0x6576, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x6575, .value=0x48, .type=IO_READ},
        {.addr=0x6576, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0320) {
    const struct CPU_State initial_cpu = {.pc=0x0e3f, .a=0x68, .x=0x11, .y=0xff, .sp=0x77, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0e3f, .value=0x48}, {.addr=0x0e40, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x0e41, .a=0xf9, .x=0x11, .y=0xff, .sp=0x77, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0e3f, .value=0x48}, {.addr=0x0e40, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x0e3f, .value=0x48, .type=IO_READ},
        {.addr=0x0e40, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0321) {
    const struct CPU_State initial_cpu = {.pc=0xeeba, .a=0x98, .x=0x27, .y=0x8d, .sp=0x25, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xeeba, .value=0x48}, {.addr=0xeebb, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xeebc, .a=0x2f, .x=0x27, .y=0x8d, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xeeba, .value=0x48}, {.addr=0xeebb, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xeeba, .value=0x48, .type=IO_READ},
        {.addr=0xeebb, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0322) {
    const struct CPU_State initial_cpu = {.pc=0x8b93, .a=0x11, .x=0xb8, .y=0xf7, .sp=0x01, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8b93, .value=0x48}, {.addr=0x8b94, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8b95, .a=0x99, .x=0xb8, .y=0xf7, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8b93, .value=0x48}, {.addr=0x8b94, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8b93, .value=0x48, .type=IO_READ},
        {.addr=0x8b94, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0323) {
    const struct CPU_State initial_cpu = {.pc=0x554d, .a=0xb0, .x=0x0b, .y=0x94, .sp=0xee, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x554d, .value=0x48}, {.addr=0x554e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x554f, .a=0x2c, .x=0x0b, .y=0x94, .sp=0xee, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x554d, .value=0x48}, {.addr=0x554e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x554d, .value=0x48, .type=IO_READ},
        {.addr=0x554e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0324) {
    const struct CPU_State initial_cpu = {.pc=0x6370, .a=0xf1, .x=0xd8, .y=0xbb, .sp=0xf8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6370, .value=0x48}, {.addr=0x6371, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x6372, .a=0xbd, .x=0xd8, .y=0xbb, .sp=0xf8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6370, .value=0x48}, {.addr=0x6371, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x6370, .value=0x48, .type=IO_READ},
        {.addr=0x6371, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0325) {
    const struct CPU_State initial_cpu = {.pc=0x792b, .a=0x34, .x=0x17, .y=0xb5, .sp=0x44, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x792b, .value=0x48}, {.addr=0x792c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x792d, .a=0x48, .x=0x17, .y=0xb5, .sp=0x44, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x792b, .value=0x48}, {.addr=0x792c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x792b, .value=0x48, .type=IO_READ},
        {.addr=0x792c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0326) {
    const struct CPU_State initial_cpu = {.pc=0x60df, .a=0xf5, .x=0xe8, .y=0xdb, .sp=0xf4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x60df, .value=0x48}, {.addr=0x60e0, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x60e1, .a=0x01, .x=0xe8, .y=0xdb, .sp=0xf4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x60df, .value=0x48}, {.addr=0x60e0, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x60df, .value=0x48, .type=IO_READ},
        {.addr=0x60e0, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0327) {
    const struct CPU_State initial_cpu = {.pc=0x5e50, .a=0x5d, .x=0x91, .y=0xfa, .sp=0x99, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5e50, .value=0x48}, {.addr=0x5e51, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5e52, .a=0x9b, .x=0x91, .y=0xfa, .sp=0x99, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5e50, .value=0x48}, {.addr=0x5e51, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5e50, .value=0x48, .type=IO_READ},
        {.addr=0x5e51, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc83b, .a=0x8e, .x=0xa4, .y=0x92, .sp=0x78, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc83b, .value=0x48}, {.addr=0xc83c, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc83d, .a=0xb0, .x=0xa4, .y=0x92, .sp=0x78, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc83b, .value=0x48}, {.addr=0xc83c, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc83b, .value=0x48, .type=IO_READ},
        {.addr=0xc83c, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0329) {
    const struct CPU_State initial_cpu = {.pc=0x275f, .a=0x36, .x=0x3a, .y=0xa7, .sp=0xb8, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x275f, .value=0x48}, {.addr=0x2760, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x2761, .a=0x60, .x=0x3a, .y=0xa7, .sp=0xb8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x275f, .value=0x48}, {.addr=0x2760, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x275f, .value=0x48, .type=IO_READ},
        {.addr=0x2760, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032A) {
    const struct CPU_State initial_cpu = {.pc=0xbf1c, .a=0xac, .x=0x75, .y=0xaf, .sp=0xfc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbf1c, .value=0x48}, {.addr=0xbf1d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbf1e, .a=0x03, .x=0x75, .y=0xaf, .sp=0xfc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbf1c, .value=0x48}, {.addr=0xbf1d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbf1c, .value=0x48, .type=IO_READ},
        {.addr=0xbf1d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032B) {
    const struct CPU_State initial_cpu = {.pc=0xce69, .a=0x80, .x=0xdf, .y=0xed, .sp=0x95, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xce69, .value=0x48}, {.addr=0xce6a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xce6b, .a=0x2e, .x=0xdf, .y=0xed, .sp=0x95, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xce69, .value=0x48}, {.addr=0xce6a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xce69, .value=0x48, .type=IO_READ},
        {.addr=0xce6a, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032C) {
    const struct CPU_State initial_cpu = {.pc=0x0b6b, .a=0x99, .x=0xb3, .y=0x9b, .sp=0x9f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6b, .value=0x48}, {.addr=0x0b6c, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x0b6d, .a=0xd8, .x=0xb3, .y=0x9b, .sp=0x9f, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0b6b, .value=0x48}, {.addr=0x0b6c, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x0b6b, .value=0x48, .type=IO_READ},
        {.addr=0x0b6c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032D) {
    const struct CPU_State initial_cpu = {.pc=0x869e, .a=0x52, .x=0x3b, .y=0x8d, .sp=0x87, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x869e, .value=0x48}, {.addr=0x869f, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x86a0, .a=0x82, .x=0x3b, .y=0x8d, .sp=0x87, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x869e, .value=0x48}, {.addr=0x869f, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x869e, .value=0x48, .type=IO_READ},
        {.addr=0x869f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032E) {
    const struct CPU_State initial_cpu = {.pc=0x477a, .a=0x4d, .x=0xd9, .y=0xa0, .sp=0xd5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x477a, .value=0x48}, {.addr=0x477b, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x477c, .a=0x58, .x=0xd9, .y=0xa0, .sp=0xd5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x477a, .value=0x48}, {.addr=0x477b, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x477a, .value=0x48, .type=IO_READ},
        {.addr=0x477b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_032F) {
    const struct CPU_State initial_cpu = {.pc=0x1318, .a=0x0d, .x=0xc4, .y=0x8d, .sp=0xb9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1318, .value=0x48}, {.addr=0x1319, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x131a, .a=0x8d, .x=0xc4, .y=0x8d, .sp=0xb9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1318, .value=0x48}, {.addr=0x1319, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1318, .value=0x48, .type=IO_READ},
        {.addr=0x1319, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0330) {
    const struct CPU_State initial_cpu = {.pc=0x64ec, .a=0x7d, .x=0x96, .y=0x6e, .sp=0x1c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x64ec, .value=0x48}, {.addr=0x64ed, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x64ee, .a=0x76, .x=0x96, .y=0x6e, .sp=0x1c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x64ec, .value=0x48}, {.addr=0x64ed, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x64ec, .value=0x48, .type=IO_READ},
        {.addr=0x64ed, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0331) {
    const struct CPU_State initial_cpu = {.pc=0xe6d8, .a=0x40, .x=0xe3, .y=0xf2, .sp=0x0c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d8, .value=0x48}, {.addr=0xe6d9, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xe6da, .a=0x05, .x=0xe3, .y=0xf2, .sp=0x0c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe6d8, .value=0x48}, {.addr=0xe6d9, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xe6d8, .value=0x48, .type=IO_READ},
        {.addr=0xe6d9, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0332) {
    const struct CPU_State initial_cpu = {.pc=0x096b, .a=0x03, .x=0x57, .y=0xab, .sp=0x8b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x096b, .value=0x48}, {.addr=0x096c, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x096d, .a=0x6c, .x=0x57, .y=0xab, .sp=0x8b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x096b, .value=0x48}, {.addr=0x096c, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x096b, .value=0x48, .type=IO_READ},
        {.addr=0x096c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0333) {
    const struct CPU_State initial_cpu = {.pc=0xee41, .a=0x52, .x=0x18, .y=0xc1, .sp=0x79, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xee41, .value=0x48}, {.addr=0xee42, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xee43, .a=0x0b, .x=0x18, .y=0xc1, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xee41, .value=0x48}, {.addr=0xee42, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xee41, .value=0x48, .type=IO_READ},
        {.addr=0xee42, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0334) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0x25, .x=0x7f, .y=0x62, .sp=0x40, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf13a, .value=0x48}, {.addr=0xf13b, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xf13c, .a=0x6a, .x=0x7f, .y=0x62, .sp=0x40, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf13a, .value=0x48}, {.addr=0xf13b, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0x48, .type=IO_READ},
        {.addr=0xf13b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0335) {
    const struct CPU_State initial_cpu = {.pc=0x0d12, .a=0xf8, .x=0x13, .y=0x76, .sp=0x0b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0d12, .value=0x48}, {.addr=0x0d13, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0d14, .a=0xe9, .x=0x13, .y=0x76, .sp=0x0b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0d12, .value=0x48}, {.addr=0x0d13, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0d12, .value=0x48, .type=IO_READ},
        {.addr=0x0d13, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0336) {
    const struct CPU_State initial_cpu = {.pc=0xd5e8, .a=0xfe, .x=0x9e, .y=0xbd, .sp=0x8e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd5e8, .value=0x48}, {.addr=0xd5e9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd5ea, .a=0x5c, .x=0x9e, .y=0xbd, .sp=0x8e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd5e8, .value=0x48}, {.addr=0xd5e9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd5e8, .value=0x48, .type=IO_READ},
        {.addr=0xd5e9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0337) {
    const struct CPU_State initial_cpu = {.pc=0xacd7, .a=0x59, .x=0x4f, .y=0x54, .sp=0x9c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xacd7, .value=0x48}, {.addr=0xacd8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xacd9, .a=0xd9, .x=0x4f, .y=0x54, .sp=0x9c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xacd7, .value=0x48}, {.addr=0xacd8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xacd7, .value=0x48, .type=IO_READ},
        {.addr=0xacd8, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0338) {
    const struct CPU_State initial_cpu = {.pc=0x0777, .a=0x68, .x=0x33, .y=0x8d, .sp=0x2e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0777, .value=0x48}, {.addr=0x0778, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x0779, .a=0x81, .x=0x33, .y=0x8d, .sp=0x2e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0777, .value=0x48}, {.addr=0x0778, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x0777, .value=0x48, .type=IO_READ},
        {.addr=0x0778, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0339) {
    const struct CPU_State initial_cpu = {.pc=0xe0a0, .a=0x6b, .x=0x2c, .y=0x8a, .sp=0x32, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a0, .value=0x48}, {.addr=0xe0a1, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xe0a2, .a=0x70, .x=0x2c, .y=0x8a, .sp=0x32, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe0a0, .value=0x48}, {.addr=0xe0a1, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xe0a0, .value=0x48, .type=IO_READ},
        {.addr=0xe0a1, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe3e9, .a=0xdf, .x=0xb1, .y=0x4d, .sp=0xef, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e9, .value=0x48}, {.addr=0xe3ea, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xe3eb, .a=0xbd, .x=0xb1, .y=0x4d, .sp=0xef, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe3e9, .value=0x48}, {.addr=0xe3ea, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xe3e9, .value=0x48, .type=IO_READ},
        {.addr=0xe3ea, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8e8e, .a=0x74, .x=0xbd, .y=0xf5, .sp=0x4c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8e8e, .value=0x48}, {.addr=0x8e8f, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x8e90, .a=0x9c, .x=0xbd, .y=0xf5, .sp=0x4c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8e8e, .value=0x48}, {.addr=0x8e8f, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x8e8e, .value=0x48, .type=IO_READ},
        {.addr=0x8e8f, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa384, .a=0xea, .x=0x91, .y=0xcc, .sp=0x36, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa384, .value=0x48}, {.addr=0xa385, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa386, .a=0x2b, .x=0x91, .y=0xcc, .sp=0x36, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa384, .value=0x48}, {.addr=0xa385, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa384, .value=0x48, .type=IO_READ},
        {.addr=0xa385, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9ecd, .a=0x06, .x=0x1f, .y=0x67, .sp=0x3f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9ecd, .value=0x48}, {.addr=0x9ece, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x9ecf, .a=0x29, .x=0x1f, .y=0x67, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9ecd, .value=0x48}, {.addr=0x9ece, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x9ecd, .value=0x48, .type=IO_READ},
        {.addr=0x9ece, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033E) {
    const struct CPU_State initial_cpu = {.pc=0x022f, .a=0x36, .x=0x93, .y=0xfb, .sp=0xeb, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x022f, .value=0x48}, {.addr=0x0230, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x0231, .a=0x63, .x=0x93, .y=0xfb, .sp=0xeb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x022f, .value=0x48}, {.addr=0x0230, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x022f, .value=0x48, .type=IO_READ},
        {.addr=0x0230, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_033F) {
    const struct CPU_State initial_cpu = {.pc=0xcef3, .a=0xd5, .x=0xad, .y=0xc8, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xcef3, .value=0x48}, {.addr=0xcef4, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xcef5, .a=0x2f, .x=0xad, .y=0xc8, .sp=0x07, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xcef3, .value=0x48}, {.addr=0xcef4, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xcef3, .value=0x48, .type=IO_READ},
        {.addr=0xcef4, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0340) {
    const struct CPU_State initial_cpu = {.pc=0xdaff, .a=0xe4, .x=0x4b, .y=0x2c, .sp=0x08, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdaff, .value=0x48}, {.addr=0xdb00, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xdb01, .a=0x8a, .x=0x4b, .y=0x2c, .sp=0x08, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdaff, .value=0x48}, {.addr=0xdb00, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xdaff, .value=0x48, .type=IO_READ},
        {.addr=0xdb00, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0341) {
    const struct CPU_State initial_cpu = {.pc=0x0a41, .a=0x66, .x=0x69, .y=0xbd, .sp=0x91, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a41, .value=0x48}, {.addr=0x0a42, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0a43, .a=0xcc, .x=0x69, .y=0xbd, .sp=0x91, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0a41, .value=0x48}, {.addr=0x0a42, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0a41, .value=0x48, .type=IO_READ},
        {.addr=0x0a42, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0342) {
    const struct CPU_State initial_cpu = {.pc=0x78c0, .a=0x18, .x=0x15, .y=0xf4, .sp=0x3d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x78c0, .value=0x48}, {.addr=0x78c1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x78c2, .a=0xc7, .x=0x15, .y=0xf4, .sp=0x3d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x78c0, .value=0x48}, {.addr=0x78c1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x78c0, .value=0x48, .type=IO_READ},
        {.addr=0x78c1, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0343) {
    const struct CPU_State initial_cpu = {.pc=0x0106, .a=0xe9, .x=0x38, .y=0xae, .sp=0x37, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x48}, {.addr=0x0107, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x0108, .a=0x58, .x=0x38, .y=0xae, .sp=0x37, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x48}, {.addr=0x0107, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x0106, .value=0x48, .type=IO_READ},
        {.addr=0x0107, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0344) {
    const struct CPU_State initial_cpu = {.pc=0xa9dd, .a=0x97, .x=0x18, .y=0xab, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa9dd, .value=0x48}, {.addr=0xa9de, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xa9df, .a=0x45, .x=0x18, .y=0xab, .sp=0x04, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa9dd, .value=0x48}, {.addr=0xa9de, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xa9dd, .value=0x48, .type=IO_READ},
        {.addr=0xa9de, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb6e4, .a=0xf2, .x=0x42, .y=0x4f, .sp=0xb8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e4, .value=0x48}, {.addr=0xb6e5, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xb6e6, .a=0x22, .x=0x42, .y=0x4f, .sp=0xb8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb6e4, .value=0x48}, {.addr=0xb6e5, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xb6e4, .value=0x48, .type=IO_READ},
        {.addr=0xb6e5, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0f88, .a=0xa4, .x=0xef, .y=0x63, .sp=0x64, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f88, .value=0x48}, {.addr=0x0f89, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x0f8a, .a=0x88, .x=0xef, .y=0x63, .sp=0x64, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0f88, .value=0x48}, {.addr=0x0f89, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x0f88, .value=0x48, .type=IO_READ},
        {.addr=0x0f89, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9049, .a=0xd9, .x=0xe0, .y=0x18, .sp=0xfc, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9049, .value=0x48}, {.addr=0x904a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x904b, .a=0xbb, .x=0xe0, .y=0x18, .sp=0xfc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9049, .value=0x48}, {.addr=0x904a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x9049, .value=0x48, .type=IO_READ},
        {.addr=0x904a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0348) {
    const struct CPU_State initial_cpu = {.pc=0x23da, .a=0x5d, .x=0xfe, .y=0x15, .sp=0xe7, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x23da, .value=0x48}, {.addr=0x23db, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x23dc, .a=0xcb, .x=0xfe, .y=0x15, .sp=0xe7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x23da, .value=0x48}, {.addr=0x23db, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x23da, .value=0x48, .type=IO_READ},
        {.addr=0x23db, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0349) {
    const struct CPU_State initial_cpu = {.pc=0x184d, .a=0x9c, .x=0x63, .y=0x32, .sp=0x8a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x184d, .value=0x48}, {.addr=0x184e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x184f, .a=0x9c, .x=0x63, .y=0x32, .sp=0x8a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x184d, .value=0x48}, {.addr=0x184e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x184d, .value=0x48, .type=IO_READ},
        {.addr=0x184e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe813, .a=0x66, .x=0xaa, .y=0x24, .sp=0x23, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xe813, .value=0x48}, {.addr=0xe814, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xe815, .a=0xdc, .x=0xaa, .y=0x24, .sp=0x23, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe813, .value=0x48}, {.addr=0xe814, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xe813, .value=0x48, .type=IO_READ},
        {.addr=0xe814, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034B) {
    const struct CPU_State initial_cpu = {.pc=0x5d1a, .a=0xe7, .x=0xe7, .y=0xad, .sp=0x86, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5d1a, .value=0x48}, {.addr=0x5d1b, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x5d1c, .a=0xcf, .x=0xe7, .y=0xad, .sp=0x86, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5d1a, .value=0x48}, {.addr=0x5d1b, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x5d1a, .value=0x48, .type=IO_READ},
        {.addr=0x5d1b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034C) {
    const struct CPU_State initial_cpu = {.pc=0x9092, .a=0x2c, .x=0x0b, .y=0x2a, .sp=0xeb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9092, .value=0x48}, {.addr=0x9093, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9094, .a=0xc6, .x=0x0b, .y=0x2a, .sp=0xeb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9092, .value=0x48}, {.addr=0x9093, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9092, .value=0x48, .type=IO_READ},
        {.addr=0x9093, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034D) {
    const struct CPU_State initial_cpu = {.pc=0xd4b2, .a=0x6f, .x=0x2a, .y=0x28, .sp=0x66, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b2, .value=0x48}, {.addr=0xd4b3, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xd4b4, .a=0x44, .x=0x2a, .y=0x28, .sp=0x66, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd4b2, .value=0x48}, {.addr=0xd4b3, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xd4b2, .value=0x48, .type=IO_READ},
        {.addr=0xd4b3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034E) {
    const struct CPU_State initial_cpu = {.pc=0xfb69, .a=0xcb, .x=0x56, .y=0x0e, .sp=0x02, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xfb69, .value=0x48}, {.addr=0xfb6a, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xfb6b, .a=0x79, .x=0x56, .y=0x0e, .sp=0x02, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xfb69, .value=0x48}, {.addr=0xfb6a, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xfb69, .value=0x48, .type=IO_READ},
        {.addr=0xfb6a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_034F) {
    const struct CPU_State initial_cpu = {.pc=0x4d6e, .a=0x82, .x=0x13, .y=0x0a, .sp=0x13, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4d6e, .value=0x48}, {.addr=0x4d6f, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x4d70, .a=0xa3, .x=0x13, .y=0x0a, .sp=0x13, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4d6e, .value=0x48}, {.addr=0x4d6f, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x4d6e, .value=0x48, .type=IO_READ},
        {.addr=0x4d6f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0350) {
    const struct CPU_State initial_cpu = {.pc=0x045f, .a=0x2c, .x=0x5e, .y=0x35, .sp=0x7b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x045f, .value=0x48}, {.addr=0x0460, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0461, .a=0xd9, .x=0x5e, .y=0x35, .sp=0x7b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x045f, .value=0x48}, {.addr=0x0460, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x045f, .value=0x48, .type=IO_READ},
        {.addr=0x0460, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0351) {
    const struct CPU_State initial_cpu = {.pc=0xda8c, .a=0x7c, .x=0xf9, .y=0x27, .sp=0x0a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xda8c, .value=0x48}, {.addr=0xda8d, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xda8e, .a=0xc6, .x=0xf9, .y=0x27, .sp=0x0a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xda8c, .value=0x48}, {.addr=0xda8d, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xda8c, .value=0x48, .type=IO_READ},
        {.addr=0xda8d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0352) {
    const struct CPU_State initial_cpu = {.pc=0xfb5c, .a=0xc7, .x=0x17, .y=0x13, .sp=0x59, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xfb5c, .value=0x48}, {.addr=0xfb5d, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xfb5e, .a=0x7c, .x=0x17, .y=0x13, .sp=0x59, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfb5c, .value=0x48}, {.addr=0xfb5d, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xfb5c, .value=0x48, .type=IO_READ},
        {.addr=0xfb5d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0353) {
    const struct CPU_State initial_cpu = {.pc=0xce74, .a=0xf5, .x=0x9a, .y=0xc1, .sp=0x8b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xce74, .value=0x48}, {.addr=0xce75, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xce76, .a=0x84, .x=0x9a, .y=0xc1, .sp=0x8b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xce74, .value=0x48}, {.addr=0xce75, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xce74, .value=0x48, .type=IO_READ},
        {.addr=0xce75, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0354) {
    const struct CPU_State initial_cpu = {.pc=0x4569, .a=0xf5, .x=0x66, .y=0xc2, .sp=0xc9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4569, .value=0x48}, {.addr=0x456a, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x456b, .a=0x7a, .x=0x66, .y=0xc2, .sp=0xc9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4569, .value=0x48}, {.addr=0x456a, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x4569, .value=0x48, .type=IO_READ},
        {.addr=0x456a, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0355) {
    const struct CPU_State initial_cpu = {.pc=0x7036, .a=0xa8, .x=0x63, .y=0x1f, .sp=0x02, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7036, .value=0x48}, {.addr=0x7037, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7038, .a=0x13, .x=0x63, .y=0x1f, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7036, .value=0x48}, {.addr=0x7037, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7036, .value=0x48, .type=IO_READ},
        {.addr=0x7037, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0356) {
    const struct CPU_State initial_cpu = {.pc=0x2a10, .a=0xe5, .x=0x5b, .y=0x3f, .sp=0x65, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x2a10, .value=0x48}, {.addr=0x2a11, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2a12, .a=0x73, .x=0x5b, .y=0x3f, .sp=0x65, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2a10, .value=0x48}, {.addr=0x2a11, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2a10, .value=0x48, .type=IO_READ},
        {.addr=0x2a11, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0357) {
    const struct CPU_State initial_cpu = {.pc=0x632d, .a=0xf7, .x=0xbb, .y=0xe2, .sp=0x19, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x632d, .value=0x48}, {.addr=0x632e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x632f, .a=0x06, .x=0xbb, .y=0xe2, .sp=0x19, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x632d, .value=0x48}, {.addr=0x632e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x632d, .value=0x48, .type=IO_READ},
        {.addr=0x632e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0358) {
    const struct CPU_State initial_cpu = {.pc=0x19cf, .a=0x55, .x=0x6b, .y=0xa1, .sp=0xfc, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x19cf, .value=0x48}, {.addr=0x19d0, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x19d1, .a=0xff, .x=0x6b, .y=0xa1, .sp=0xfc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x19cf, .value=0x48}, {.addr=0x19d0, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x19cf, .value=0x48, .type=IO_READ},
        {.addr=0x19d0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0359) {
    const struct CPU_State initial_cpu = {.pc=0x5794, .a=0x34, .x=0x6b, .y=0x82, .sp=0xda, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5794, .value=0x48}, {.addr=0x5795, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x5796, .a=0x70, .x=0x6b, .y=0x82, .sp=0xda, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5794, .value=0x48}, {.addr=0x5795, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x5794, .value=0x48, .type=IO_READ},
        {.addr=0x5795, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035A) {
    const struct CPU_State initial_cpu = {.pc=0x0a93, .a=0xba, .x=0xeb, .y=0x5a, .sp=0x0f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0a93, .value=0x48}, {.addr=0x0a94, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x0a95, .a=0xc8, .x=0xeb, .y=0x5a, .sp=0x0f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0a93, .value=0x48}, {.addr=0x0a94, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x0a93, .value=0x48, .type=IO_READ},
        {.addr=0x0a94, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035B) {
    const struct CPU_State initial_cpu = {.pc=0x50d7, .a=0x16, .x=0x11, .y=0x90, .sp=0xee, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x50d7, .value=0x48}, {.addr=0x50d8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x50d9, .a=0x9f, .x=0x11, .y=0x90, .sp=0xee, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x50d7, .value=0x48}, {.addr=0x50d8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x50d7, .value=0x48, .type=IO_READ},
        {.addr=0x50d8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035C) {
    const struct CPU_State initial_cpu = {.pc=0x7aa2, .a=0x91, .x=0x57, .y=0xf2, .sp=0x07, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa2, .value=0x48}, {.addr=0x7aa3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7aa4, .a=0x77, .x=0x57, .y=0xf2, .sp=0x07, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7aa2, .value=0x48}, {.addr=0x7aa3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7aa2, .value=0x48, .type=IO_READ},
        {.addr=0x7aa3, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035D) {
    const struct CPU_State initial_cpu = {.pc=0x1dd3, .a=0x3d, .x=0xfe, .y=0x3d, .sp=0xb6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd3, .value=0x48}, {.addr=0x1dd4, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1dd5, .a=0x5f, .x=0xfe, .y=0x3d, .sp=0xb6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1dd3, .value=0x48}, {.addr=0x1dd4, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1dd3, .value=0x48, .type=IO_READ},
        {.addr=0x1dd4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa8a0, .a=0x2e, .x=0x35, .y=0x52, .sp=0x3d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a0, .value=0x48}, {.addr=0xa8a1, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xa8a2, .a=0x8d, .x=0x35, .y=0x52, .sp=0x3d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa8a0, .value=0x48}, {.addr=0xa8a1, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xa8a0, .value=0x48, .type=IO_READ},
        {.addr=0xa8a1, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd2bc, .a=0x22, .x=0x12, .y=0x5f, .sp=0xb7, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd2bc, .value=0x48}, {.addr=0xd2bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd2be, .a=0x62, .x=0x12, .y=0x5f, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd2bc, .value=0x48}, {.addr=0xd2bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd2bc, .value=0x48, .type=IO_READ},
        {.addr=0xd2bd, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc6dc, .a=0x74, .x=0x0f, .y=0x58, .sp=0xd6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xc6dc, .value=0x48}, {.addr=0xc6dd, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xc6de, .a=0xb6, .x=0x0f, .y=0x58, .sp=0xd6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc6dc, .value=0x48}, {.addr=0xc6dd, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xc6dc, .value=0x48, .type=IO_READ},
        {.addr=0xc6dd, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0361) {
    const struct CPU_State initial_cpu = {.pc=0xe0c2, .a=0xcc, .x=0xe8, .y=0x79, .sp=0x22, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c2, .value=0x48}, {.addr=0xe0c3, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xe0c4, .a=0xa4, .x=0xe8, .y=0x79, .sp=0x22, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe0c2, .value=0x48}, {.addr=0xe0c3, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xe0c2, .value=0x48, .type=IO_READ},
        {.addr=0xe0c3, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0362) {
    const struct CPU_State initial_cpu = {.pc=0x3e36, .a=0xa0, .x=0x5d, .y=0x9e, .sp=0xdb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x3e36, .value=0x48}, {.addr=0x3e37, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x3e38, .a=0x41, .x=0x5d, .y=0x9e, .sp=0xdb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3e36, .value=0x48}, {.addr=0x3e37, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x3e36, .value=0x48, .type=IO_READ},
        {.addr=0x3e37, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0363) {
    const struct CPU_State initial_cpu = {.pc=0xdb99, .a=0x08, .x=0x9a, .y=0xd2, .sp=0xae, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb99, .value=0x48}, {.addr=0xdb9a, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xdb9b, .a=0x37, .x=0x9a, .y=0xd2, .sp=0xae, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdb99, .value=0x48}, {.addr=0xdb9a, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xdb99, .value=0x48, .type=IO_READ},
        {.addr=0xdb9a, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8c9b, .a=0x25, .x=0x77, .y=0xdf, .sp=0xff, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9b, .value=0x48}, {.addr=0x8c9c, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x8c9d, .a=0xd7, .x=0x77, .y=0xdf, .sp=0xff, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8c9b, .value=0x48}, {.addr=0x8c9c, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x8c9b, .value=0x48, .type=IO_READ},
        {.addr=0x8c9c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0365) {
    const struct CPU_State initial_cpu = {.pc=0xbe95, .a=0x0b, .x=0xa1, .y=0xbd, .sp=0xde, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xbe95, .value=0x48}, {.addr=0xbe96, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xbe97, .a=0x4f, .x=0xa1, .y=0xbd, .sp=0xde, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbe95, .value=0x48}, {.addr=0xbe96, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xbe95, .value=0x48, .type=IO_READ},
        {.addr=0xbe96, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0366) {
    const struct CPU_State initial_cpu = {.pc=0xa492, .a=0x6e, .x=0xa8, .y=0xaf, .sp=0x38, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa492, .value=0x48}, {.addr=0xa493, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xa494, .a=0xca, .x=0xa8, .y=0xaf, .sp=0x38, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa492, .value=0x48}, {.addr=0xa493, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xa492, .value=0x48, .type=IO_READ},
        {.addr=0xa493, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0367) {
    const struct CPU_State initial_cpu = {.pc=0xda6d, .a=0xbd, .x=0xbb, .y=0xd9, .sp=0x85, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xda6d, .value=0x48}, {.addr=0xda6e, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xda6f, .a=0x98, .x=0xbb, .y=0xd9, .sp=0x85, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xda6d, .value=0x48}, {.addr=0xda6e, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xda6d, .value=0x48, .type=IO_READ},
        {.addr=0xda6e, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0368) {
    const struct CPU_State initial_cpu = {.pc=0x7729, .a=0x65, .x=0xd4, .y=0xe3, .sp=0xbd, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7729, .value=0x48}, {.addr=0x772a, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x772b, .a=0xb5, .x=0xd4, .y=0xe3, .sp=0xbd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7729, .value=0x48}, {.addr=0x772a, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x7729, .value=0x48, .type=IO_READ},
        {.addr=0x772a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0369) {
    const struct CPU_State initial_cpu = {.pc=0x2241, .a=0x1c, .x=0xd4, .y=0xf0, .sp=0x23, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2241, .value=0x48}, {.addr=0x2242, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x2243, .a=0xbd, .x=0xd4, .y=0xf0, .sp=0x23, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2241, .value=0x48}, {.addr=0x2242, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x2241, .value=0x48, .type=IO_READ},
        {.addr=0x2242, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036A) {
    const struct CPU_State initial_cpu = {.pc=0xbc92, .a=0xd8, .x=0x31, .y=0x86, .sp=0x4c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xbc92, .value=0x48}, {.addr=0xbc93, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xbc94, .a=0x3d, .x=0x31, .y=0x86, .sp=0x4c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbc92, .value=0x48}, {.addr=0xbc93, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xbc92, .value=0x48, .type=IO_READ},
        {.addr=0xbc93, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036B) {
    const struct CPU_State initial_cpu = {.pc=0x3a1f, .a=0xa4, .x=0x09, .y=0x91, .sp=0x15, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1f, .value=0x48}, {.addr=0x3a20, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x3a21, .a=0x1d, .x=0x09, .y=0x91, .sp=0x15, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3a1f, .value=0x48}, {.addr=0x3a20, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x3a1f, .value=0x48, .type=IO_READ},
        {.addr=0x3a20, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036C) {
    const struct CPU_State initial_cpu = {.pc=0x567d, .a=0x19, .x=0x43, .y=0xd9, .sp=0x68, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x567d, .value=0x48}, {.addr=0x567e, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x567f, .a=0xdd, .x=0x43, .y=0xd9, .sp=0x68, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x567d, .value=0x48}, {.addr=0x567e, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x567d, .value=0x48, .type=IO_READ},
        {.addr=0x567e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036D) {
    const struct CPU_State initial_cpu = {.pc=0x530f, .a=0xb0, .x=0x49, .y=0x3e, .sp=0x08, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x530f, .value=0x48}, {.addr=0x5310, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5311, .a=0x5c, .x=0x49, .y=0x3e, .sp=0x08, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x530f, .value=0x48}, {.addr=0x5310, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x530f, .value=0x48, .type=IO_READ},
        {.addr=0x5310, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036E) {
    const struct CPU_State initial_cpu = {.pc=0x5082, .a=0x44, .x=0xb1, .y=0x4f, .sp=0x5b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5082, .value=0x48}, {.addr=0x5083, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x5084, .a=0x60, .x=0xb1, .y=0x4f, .sp=0x5b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5082, .value=0x48}, {.addr=0x5083, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x5082, .value=0x48, .type=IO_READ},
        {.addr=0x5083, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_036F) {
    const struct CPU_State initial_cpu = {.pc=0xb7f0, .a=0xa8, .x=0xdc, .y=0xd2, .sp=0x6b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f0, .value=0x48}, {.addr=0xb7f1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb7f2, .a=0xa5, .x=0xdc, .y=0xd2, .sp=0x6b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb7f0, .value=0x48}, {.addr=0xb7f1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb7f0, .value=0x48, .type=IO_READ},
        {.addr=0xb7f1, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0370) {
    const struct CPU_State initial_cpu = {.pc=0xad9f, .a=0xa7, .x=0x12, .y=0xfd, .sp=0x78, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xad9f, .value=0x48}, {.addr=0xada0, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xada1, .a=0x59, .x=0x12, .y=0xfd, .sp=0x78, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xad9f, .value=0x48}, {.addr=0xada0, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xad9f, .value=0x48, .type=IO_READ},
        {.addr=0xada0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0371) {
    const struct CPU_State initial_cpu = {.pc=0x9b41, .a=0x7e, .x=0x39, .y=0xb1, .sp=0xf0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b41, .value=0x48}, {.addr=0x9b42, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x9b43, .a=0x57, .x=0x39, .y=0xb1, .sp=0xf0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9b41, .value=0x48}, {.addr=0x9b42, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x9b41, .value=0x48, .type=IO_READ},
        {.addr=0x9b42, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0372) {
    const struct CPU_State initial_cpu = {.pc=0xace8, .a=0x77, .x=0xd1, .y=0xad, .sp=0xb5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xace8, .value=0x48}, {.addr=0xace9, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xacea, .a=0x32, .x=0xd1, .y=0xad, .sp=0xb5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xace8, .value=0x48}, {.addr=0xace9, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xace8, .value=0x48, .type=IO_READ},
        {.addr=0xace9, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0373) {
    const struct CPU_State initial_cpu = {.pc=0x8ac1, .a=0x90, .x=0xb6, .y=0x87, .sp=0xd0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac1, .value=0x48}, {.addr=0x8ac2, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x8ac3, .a=0x7b, .x=0xb6, .y=0x87, .sp=0xd0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8ac1, .value=0x48}, {.addr=0x8ac2, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x8ac1, .value=0x48, .type=IO_READ},
        {.addr=0x8ac2, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0374) {
    const struct CPU_State initial_cpu = {.pc=0x9789, .a=0xdb, .x=0xb5, .y=0x31, .sp=0x41, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9789, .value=0x48}, {.addr=0x978a, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x978b, .a=0x3c, .x=0xb5, .y=0x31, .sp=0x41, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9789, .value=0x48}, {.addr=0x978a, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x9789, .value=0x48, .type=IO_READ},
        {.addr=0x978a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0375) {
    const struct CPU_State initial_cpu = {.pc=0x0c7f, .a=0xad, .x=0x27, .y=0x30, .sp=0xae, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7f, .value=0x48}, {.addr=0x0c80, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0c81, .a=0xae, .x=0x27, .y=0x30, .sp=0xae, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0c7f, .value=0x48}, {.addr=0x0c80, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0c7f, .value=0x48, .type=IO_READ},
        {.addr=0x0c80, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0376) {
    const struct CPU_State initial_cpu = {.pc=0xa3a6, .a=0xdb, .x=0x71, .y=0xd9, .sp=0x65, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa3a6, .value=0x48}, {.addr=0xa3a7, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xa3a8, .a=0x29, .x=0x71, .y=0xd9, .sp=0x65, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa3a6, .value=0x48}, {.addr=0xa3a7, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xa3a6, .value=0x48, .type=IO_READ},
        {.addr=0xa3a7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0377) {
    const struct CPU_State initial_cpu = {.pc=0x420a, .a=0x05, .x=0xed, .y=0x80, .sp=0xab, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x420a, .value=0x48}, {.addr=0x420b, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x420c, .a=0x3a, .x=0xed, .y=0x80, .sp=0xab, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x420a, .value=0x48}, {.addr=0x420b, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x420a, .value=0x48, .type=IO_READ},
        {.addr=0x420b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0378) {
    const struct CPU_State initial_cpu = {.pc=0x628d, .a=0x64, .x=0x75, .y=0x45, .sp=0xe8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x628d, .value=0x48}, {.addr=0x628e, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x628f, .a=0x06, .x=0x75, .y=0x45, .sp=0xe8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x628d, .value=0x48}, {.addr=0x628e, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x628d, .value=0x48, .type=IO_READ},
        {.addr=0x628e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0379) {
    const struct CPU_State initial_cpu = {.pc=0xde25, .a=0x47, .x=0x56, .y=0x01, .sp=0x58, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xde25, .value=0x48}, {.addr=0xde26, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xde27, .a=0xad, .x=0x56, .y=0x01, .sp=0x58, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xde25, .value=0x48}, {.addr=0xde26, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xde25, .value=0x48, .type=IO_READ},
        {.addr=0xde26, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037A) {
    const struct CPU_State initial_cpu = {.pc=0x1873, .a=0x3b, .x=0xc2, .y=0x1a, .sp=0xf2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1873, .value=0x48}, {.addr=0x1874, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x1875, .a=0x63, .x=0xc2, .y=0x1a, .sp=0xf2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1873, .value=0x48}, {.addr=0x1874, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x1873, .value=0x48, .type=IO_READ},
        {.addr=0x1874, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037B) {
    const struct CPU_State initial_cpu = {.pc=0x27c2, .a=0xa2, .x=0xe0, .y=0x6f, .sp=0x3c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x27c2, .value=0x48}, {.addr=0x27c3, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x27c4, .a=0x71, .x=0xe0, .y=0x6f, .sp=0x3c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x27c2, .value=0x48}, {.addr=0x27c3, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x27c2, .value=0x48, .type=IO_READ},
        {.addr=0x27c3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037C) {
    const struct CPU_State initial_cpu = {.pc=0x1dbe, .a=0x9c, .x=0x60, .y=0x74, .sp=0x4b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1dbe, .value=0x48}, {.addr=0x1dbf, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x1dc0, .a=0xb2, .x=0x60, .y=0x74, .sp=0x4b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1dbe, .value=0x48}, {.addr=0x1dbf, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x1dbe, .value=0x48, .type=IO_READ},
        {.addr=0x1dbf, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037D) {
    const struct CPU_State initial_cpu = {.pc=0x18be, .a=0x2c, .x=0xb9, .y=0x9c, .sp=0x16, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x18be, .value=0x48}, {.addr=0x18bf, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x18c0, .a=0x5c, .x=0xb9, .y=0x9c, .sp=0x16, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x18be, .value=0x48}, {.addr=0x18bf, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x18be, .value=0x48, .type=IO_READ},
        {.addr=0x18bf, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0190, .a=0xd7, .x=0x41, .y=0x5c, .sp=0xca, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x48}, {.addr=0x0191, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0192, .a=0x2b, .x=0x41, .y=0x5c, .sp=0xca, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x48}, {.addr=0x0191, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0190, .value=0x48, .type=IO_READ},
        {.addr=0x0191, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_037F) {
    const struct CPU_State initial_cpu = {.pc=0xac11, .a=0x69, .x=0x38, .y=0x57, .sp=0x19, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xac11, .value=0x48}, {.addr=0xac12, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xac13, .a=0xf5, .x=0x38, .y=0x57, .sp=0x19, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xac11, .value=0x48}, {.addr=0xac12, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xac11, .value=0x48, .type=IO_READ},
        {.addr=0xac12, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0380) {
    const struct CPU_State initial_cpu = {.pc=0xeeb5, .a=0xf1, .x=0x8a, .y=0x28, .sp=0x04, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb5, .value=0x48}, {.addr=0xeeb6, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xeeb7, .a=0x67, .x=0x8a, .y=0x28, .sp=0x04, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeeb5, .value=0x48}, {.addr=0xeeb6, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xeeb5, .value=0x48, .type=IO_READ},
        {.addr=0xeeb6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0381) {
    const struct CPU_State initial_cpu = {.pc=0x2354, .a=0xe0, .x=0xd7, .y=0x19, .sp=0xd6, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2354, .value=0x48}, {.addr=0x2355, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2356, .a=0xad, .x=0xd7, .y=0x19, .sp=0xd6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2354, .value=0x48}, {.addr=0x2355, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2354, .value=0x48, .type=IO_READ},
        {.addr=0x2355, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0382) {
    const struct CPU_State initial_cpu = {.pc=0x3785, .a=0x50, .x=0x59, .y=0x60, .sp=0xd5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x3785, .value=0x48}, {.addr=0x3786, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3787, .a=0x92, .x=0x59, .y=0x60, .sp=0xd5, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3785, .value=0x48}, {.addr=0x3786, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x3785, .value=0x48, .type=IO_READ},
        {.addr=0x3786, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0383) {
    const struct CPU_State initial_cpu = {.pc=0xf7bf, .a=0xc3, .x=0x40, .y=0x53, .sp=0xa0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bf, .value=0x48}, {.addr=0xf7c0, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xf7c1, .a=0x34, .x=0x40, .y=0x53, .sp=0xa0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf7bf, .value=0x48}, {.addr=0xf7c0, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xf7bf, .value=0x48, .type=IO_READ},
        {.addr=0xf7c0, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0384) {
    const struct CPU_State initial_cpu = {.pc=0x5701, .a=0x7c, .x=0xc9, .y=0x28, .sp=0x20, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5701, .value=0x48}, {.addr=0x5702, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x5703, .a=0x04, .x=0xc9, .y=0x28, .sp=0x20, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5701, .value=0x48}, {.addr=0x5702, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x5701, .value=0x48, .type=IO_READ},
        {.addr=0x5702, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0385) {
    const struct CPU_State initial_cpu = {.pc=0x8b73, .a=0xb5, .x=0x53, .y=0x60, .sp=0x8c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8b73, .value=0x48}, {.addr=0x8b74, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x8b75, .a=0x9d, .x=0x53, .y=0x60, .sp=0x8c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8b73, .value=0x48}, {.addr=0x8b74, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x8b73, .value=0x48, .type=IO_READ},
        {.addr=0x8b74, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0386) {
    const struct CPU_State initial_cpu = {.pc=0xf2cc, .a=0x5f, .x=0x5a, .y=0xc6, .sp=0x2f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf2cc, .value=0x48}, {.addr=0xf2cd, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf2ce, .a=0xef, .x=0x5a, .y=0xc6, .sp=0x2f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf2cc, .value=0x48}, {.addr=0xf2cd, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf2cc, .value=0x48, .type=IO_READ},
        {.addr=0xf2cd, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0387) {
    const struct CPU_State initial_cpu = {.pc=0x37dd, .a=0x18, .x=0xe7, .y=0xce, .sp=0xdd, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x37dd, .value=0x48}, {.addr=0x37de, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x37df, .a=0xa6, .x=0xe7, .y=0xce, .sp=0xdd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x37dd, .value=0x48}, {.addr=0x37de, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x37dd, .value=0x48, .type=IO_READ},
        {.addr=0x37de, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0388) {
    const struct CPU_State initial_cpu = {.pc=0xdde0, .a=0x68, .x=0x74, .y=0x9c, .sp=0xb8, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xdde0, .value=0x48}, {.addr=0xdde1, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xdde2, .a=0x3a, .x=0x74, .y=0x9c, .sp=0xb8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdde0, .value=0x48}, {.addr=0xdde1, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xdde0, .value=0x48, .type=IO_READ},
        {.addr=0xdde1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0389) {
    const struct CPU_State initial_cpu = {.pc=0xe291, .a=0x3e, .x=0x76, .y=0xff, .sp=0x12, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe291, .value=0x48}, {.addr=0xe292, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xe293, .a=0x75, .x=0x76, .y=0xff, .sp=0x12, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe291, .value=0x48}, {.addr=0xe292, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xe291, .value=0x48, .type=IO_READ},
        {.addr=0xe292, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038A) {
    const struct CPU_State initial_cpu = {.pc=0x0c29, .a=0x14, .x=0x9f, .y=0x18, .sp=0xa8, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c29, .value=0x48}, {.addr=0x0c2a, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x0c2b, .a=0x61, .x=0x9f, .y=0x18, .sp=0xa8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0c29, .value=0x48}, {.addr=0x0c2a, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x0c29, .value=0x48, .type=IO_READ},
        {.addr=0x0c2a, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb962, .a=0x9c, .x=0xe3, .y=0x0c, .sp=0xa9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb962, .value=0x48}, {.addr=0xb963, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb964, .a=0x41, .x=0xe3, .y=0x0c, .sp=0xa9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb962, .value=0x48}, {.addr=0xb963, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb962, .value=0x48, .type=IO_READ},
        {.addr=0xb963, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2c73, .a=0x37, .x=0x1a, .y=0xe8, .sp=0x41, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c73, .value=0x48}, {.addr=0x2c74, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2c75, .a=0x77, .x=0x1a, .y=0xe8, .sp=0x41, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2c73, .value=0x48}, {.addr=0x2c74, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2c73, .value=0x48, .type=IO_READ},
        {.addr=0x2c74, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038D) {
    const struct CPU_State initial_cpu = {.pc=0x762a, .a=0x3a, .x=0x1b, .y=0x6d, .sp=0x76, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x762a, .value=0x48}, {.addr=0x762b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x762c, .a=0x9c, .x=0x1b, .y=0x6d, .sp=0x76, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x762a, .value=0x48}, {.addr=0x762b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x762a, .value=0x48, .type=IO_READ},
        {.addr=0x762b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038E) {
    const struct CPU_State initial_cpu = {.pc=0x0e46, .a=0x6b, .x=0x76, .y=0xf8, .sp=0x9c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0e46, .value=0x48}, {.addr=0x0e47, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x0e48, .a=0xb5, .x=0x76, .y=0xf8, .sp=0x9c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0e46, .value=0x48}, {.addr=0x0e47, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x0e46, .value=0x48, .type=IO_READ},
        {.addr=0x0e47, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_038F) {
    const struct CPU_State initial_cpu = {.pc=0x12e3, .a=0x03, .x=0x2a, .y=0xbf, .sp=0x2c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x12e3, .value=0x48}, {.addr=0x12e4, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x12e5, .a=0x15, .x=0x2a, .y=0xbf, .sp=0x2c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x12e3, .value=0x48}, {.addr=0x12e4, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x12e3, .value=0x48, .type=IO_READ},
        {.addr=0x12e4, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0390) {
    const struct CPU_State initial_cpu = {.pc=0xfe73, .a=0xa9, .x=0xde, .y=0x61, .sp=0xae, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe73, .value=0x48}, {.addr=0xfe74, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfe75, .a=0x47, .x=0xde, .y=0x61, .sp=0xae, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfe73, .value=0x48}, {.addr=0xfe74, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfe73, .value=0x48, .type=IO_READ},
        {.addr=0xfe74, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0391) {
    const struct CPU_State initial_cpu = {.pc=0xbed0, .a=0x7e, .x=0xaa, .y=0x26, .sp=0xbd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xbed0, .value=0x48}, {.addr=0xbed1, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xbed2, .a=0x6c, .x=0xaa, .y=0x26, .sp=0xbd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbed0, .value=0x48}, {.addr=0xbed1, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xbed0, .value=0x48, .type=IO_READ},
        {.addr=0xbed1, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0392) {
    const struct CPU_State initial_cpu = {.pc=0xff45, .a=0x37, .x=0xc1, .y=0x30, .sp=0xb4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xff45, .value=0x48}, {.addr=0xff46, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xff47, .a=0x3e, .x=0xc1, .y=0x30, .sp=0xb4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xff45, .value=0x48}, {.addr=0xff46, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xff45, .value=0x48, .type=IO_READ},
        {.addr=0xff46, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0393) {
    const struct CPU_State initial_cpu = {.pc=0xc503, .a=0x00, .x=0xff, .y=0xfc, .sp=0xbc, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc503, .value=0x48}, {.addr=0xc504, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc505, .a=0x6d, .x=0xff, .y=0xfc, .sp=0xbc, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc503, .value=0x48}, {.addr=0xc504, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc503, .value=0x48, .type=IO_READ},
        {.addr=0xc504, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0394) {
    const struct CPU_State initial_cpu = {.pc=0x1f42, .a=0x7c, .x=0x29, .y=0xfc, .sp=0x67, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x1f42, .value=0x48}, {.addr=0x1f43, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1f44, .a=0x9d, .x=0x29, .y=0xfc, .sp=0x67, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1f42, .value=0x48}, {.addr=0x1f43, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x1f42, .value=0x48, .type=IO_READ},
        {.addr=0x1f43, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0395) {
    const struct CPU_State initial_cpu = {.pc=0x18a6, .a=0xa1, .x=0xb7, .y=0x44, .sp=0xb4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x18a6, .value=0x48}, {.addr=0x18a7, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x18a8, .a=0x7b, .x=0xb7, .y=0x44, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x18a6, .value=0x48}, {.addr=0x18a7, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x18a6, .value=0x48, .type=IO_READ},
        {.addr=0x18a7, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0396) {
    const struct CPU_State initial_cpu = {.pc=0x231e, .a=0x85, .x=0xcc, .y=0xa2, .sp=0x15, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x231e, .value=0x48}, {.addr=0x231f, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x2320, .a=0xf2, .x=0xcc, .y=0xa2, .sp=0x15, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x231e, .value=0x48}, {.addr=0x231f, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x231e, .value=0x48, .type=IO_READ},
        {.addr=0x231f, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0397) {
    const struct CPU_State initial_cpu = {.pc=0x5535, .a=0x87, .x=0xf7, .y=0x7a, .sp=0x7c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5535, .value=0x48}, {.addr=0x5536, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5537, .a=0x9b, .x=0xf7, .y=0x7a, .sp=0x7c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5535, .value=0x48}, {.addr=0x5536, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5535, .value=0x48, .type=IO_READ},
        {.addr=0x5536, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0398) {
    const struct CPU_State initial_cpu = {.pc=0x18db, .a=0x1b, .x=0xb9, .y=0x6d, .sp=0x8b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x18db, .value=0x48}, {.addr=0x18dc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x18dd, .a=0xfb, .x=0xb9, .y=0x6d, .sp=0x8b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x18db, .value=0x48}, {.addr=0x18dc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x18db, .value=0x48, .type=IO_READ},
        {.addr=0x18dc, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_0399) {
    const struct CPU_State initial_cpu = {.pc=0x5985, .a=0x73, .x=0xad, .y=0xcb, .sp=0x8d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5985, .value=0x48}, {.addr=0x5986, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x5987, .a=0x09, .x=0xad, .y=0xcb, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5985, .value=0x48}, {.addr=0x5986, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x5985, .value=0x48, .type=IO_READ},
        {.addr=0x5986, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039A) {
    const struct CPU_State initial_cpu = {.pc=0xacf5, .a=0x98, .x=0x6b, .y=0xda, .sp=0x19, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xacf5, .value=0x48}, {.addr=0xacf6, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xacf7, .a=0xf2, .x=0x6b, .y=0xda, .sp=0x19, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xacf5, .value=0x48}, {.addr=0xacf6, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xacf5, .value=0x48, .type=IO_READ},
        {.addr=0xacf6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039B) {
    const struct CPU_State initial_cpu = {.pc=0x118f, .a=0x74, .x=0xaf, .y=0x05, .sp=0xc1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x118f, .value=0x48}, {.addr=0x1190, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x1191, .a=0x5a, .x=0xaf, .y=0x05, .sp=0xc1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x118f, .value=0x48}, {.addr=0x1190, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x118f, .value=0x48, .type=IO_READ},
        {.addr=0x1190, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039C) {
    const struct CPU_State initial_cpu = {.pc=0x7691, .a=0xa2, .x=0x13, .y=0xb8, .sp=0xb4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7691, .value=0x48}, {.addr=0x7692, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x7693, .a=0x45, .x=0x13, .y=0xb8, .sp=0xb4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7691, .value=0x48}, {.addr=0x7692, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x7691, .value=0x48, .type=IO_READ},
        {.addr=0x7692, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039D) {
    const struct CPU_State initial_cpu = {.pc=0xb233, .a=0xab, .x=0x6a, .y=0xbb, .sp=0xcd, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xb233, .value=0x48}, {.addr=0xb234, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xb235, .a=0x38, .x=0x6a, .y=0xbb, .sp=0xcd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb233, .value=0x48}, {.addr=0xb234, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xb233, .value=0x48, .type=IO_READ},
        {.addr=0xb234, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039E) {
    const struct CPU_State initial_cpu = {.pc=0x0910, .a=0xa8, .x=0xc4, .y=0x94, .sp=0xf3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0910, .value=0x48}, {.addr=0x0911, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0912, .a=0xa8, .x=0xc4, .y=0x94, .sp=0xf3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0910, .value=0x48}, {.addr=0x0911, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0910, .value=0x48, .type=IO_READ},
        {.addr=0x0911, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe431, .a=0x68, .x=0x89, .y=0xfe, .sp=0xe8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe431, .value=0x48}, {.addr=0xe432, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xe433, .a=0x00, .x=0x89, .y=0xfe, .sp=0xe8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xe431, .value=0x48}, {.addr=0xe432, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xe431, .value=0x48, .type=IO_READ},
        {.addr=0xe432, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x8734, .a=0xe7, .x=0x88, .y=0x74, .sp=0x02, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8734, .value=0x48}, {.addr=0x8735, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x8736, .a=0xb9, .x=0x88, .y=0x74, .sp=0x02, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8734, .value=0x48}, {.addr=0x8735, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x8734, .value=0x48, .type=IO_READ},
        {.addr=0x8735, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xf5d6, .a=0x4c, .x=0xa8, .y=0x9a, .sp=0x97, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d6, .value=0x48}, {.addr=0xf5d7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf5d8, .a=0x01, .x=0xa8, .y=0x9a, .sp=0x97, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf5d6, .value=0x48}, {.addr=0xf5d7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf5d6, .value=0x48, .type=IO_READ},
        {.addr=0xf5d7, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xbac4, .a=0x8f, .x=0x63, .y=0x3a, .sp=0x4f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xbac4, .value=0x48}, {.addr=0xbac5, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xbac6, .a=0xc1, .x=0x63, .y=0x3a, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbac4, .value=0x48}, {.addr=0xbac5, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xbac4, .value=0x48, .type=IO_READ},
        {.addr=0xbac5, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x3cae, .a=0x4e, .x=0xba, .y=0x47, .sp=0x95, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3cae, .value=0x48}, {.addr=0x3caf, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x3cb0, .a=0x5a, .x=0xba, .y=0x47, .sp=0x95, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3cae, .value=0x48}, {.addr=0x3caf, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x3cae, .value=0x48, .type=IO_READ},
        {.addr=0x3caf, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x606f, .a=0x81, .x=0xad, .y=0xa8, .sp=0x85, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x606f, .value=0x48}, {.addr=0x6070, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x6071, .a=0xba, .x=0xad, .y=0xa8, .sp=0x85, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x606f, .value=0x48}, {.addr=0x6070, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x606f, .value=0x48, .type=IO_READ},
        {.addr=0x6070, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xa317, .a=0x74, .x=0x04, .y=0xe9, .sp=0x61, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xa317, .value=0x48}, {.addr=0xa318, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xa319, .a=0x3a, .x=0x04, .y=0xe9, .sp=0x61, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa317, .value=0x48}, {.addr=0xa318, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xa317, .value=0x48, .type=IO_READ},
        {.addr=0xa318, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3e62, .a=0x97, .x=0x40, .y=0x1c, .sp=0x2f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3e62, .value=0x48}, {.addr=0x3e63, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3e64, .a=0x31, .x=0x40, .y=0x1c, .sp=0x2f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3e62, .value=0x48}, {.addr=0x3e63, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e62, .value=0x48, .type=IO_READ},
        {.addr=0x3e63, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xf004, .a=0xa6, .x=0xc1, .y=0x81, .sp=0xb8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf004, .value=0x48}, {.addr=0xf005, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xf006, .a=0xb9, .x=0xc1, .y=0x81, .sp=0xb8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf004, .value=0x48}, {.addr=0xf005, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xf004, .value=0x48, .type=IO_READ},
        {.addr=0xf005, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x6c09, .a=0x09, .x=0x5c, .y=0x1a, .sp=0xd4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6c09, .value=0x48}, {.addr=0x6c0a, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x6c0b, .a=0x7c, .x=0x5c, .y=0x1a, .sp=0xd4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6c09, .value=0x48}, {.addr=0x6c0a, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x6c09, .value=0x48, .type=IO_READ},
        {.addr=0x6c0a, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xe587, .a=0xa0, .x=0xa0, .y=0x9d, .sp=0xdc, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe587, .value=0x48}, {.addr=0xe588, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xe589, .a=0x93, .x=0xa0, .y=0x9d, .sp=0xdc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe587, .value=0x48}, {.addr=0xe588, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xe587, .value=0x48, .type=IO_READ},
        {.addr=0xe588, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x9d32, .a=0x6f, .x=0x1a, .y=0x20, .sp=0xd0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9d32, .value=0x48}, {.addr=0x9d33, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x9d34, .a=0x1f, .x=0x1a, .y=0x20, .sp=0xd0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9d32, .value=0x48}, {.addr=0x9d33, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x9d32, .value=0x48, .type=IO_READ},
        {.addr=0x9d33, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x48e8, .a=0x78, .x=0x03, .y=0xbe, .sp=0xdf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x48e8, .value=0x48}, {.addr=0x48e9, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x48ea, .a=0xa2, .x=0x03, .y=0xbe, .sp=0xdf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x48e8, .value=0x48}, {.addr=0x48e9, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x48e8, .value=0x48, .type=IO_READ},
        {.addr=0x48e9, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x6040, .a=0xee, .x=0x8f, .y=0x8a, .sp=0xb1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6040, .value=0x48}, {.addr=0x6041, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x6042, .a=0xe9, .x=0x8f, .y=0x8a, .sp=0xb1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6040, .value=0x48}, {.addr=0x6041, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x6040, .value=0x48, .type=IO_READ},
        {.addr=0x6041, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x10ae, .a=0x3f, .x=0x36, .y=0x66, .sp=0x91, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x10ae, .value=0x48}, {.addr=0x10af, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x10b0, .a=0x5f, .x=0x36, .y=0x66, .sp=0x91, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x10ae, .value=0x48}, {.addr=0x10af, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x10ae, .value=0x48, .type=IO_READ},
        {.addr=0x10af, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xa1b1, .a=0xbc, .x=0x38, .y=0x5d, .sp=0x8d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b1, .value=0x48}, {.addr=0xa1b2, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xa1b3, .a=0xaf, .x=0x38, .y=0x5d, .sp=0x8d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa1b1, .value=0x48}, {.addr=0xa1b2, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xa1b1, .value=0x48, .type=IO_READ},
        {.addr=0xa1b2, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xc003, .a=0xfc, .x=0x07, .y=0xcb, .sp=0xda, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc003, .value=0x48}, {.addr=0xc004, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xc005, .a=0xe7, .x=0x07, .y=0xcb, .sp=0xda, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc003, .value=0x48}, {.addr=0xc004, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xc003, .value=0x48, .type=IO_READ},
        {.addr=0xc004, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xb1a5, .a=0xc1, .x=0xb7, .y=0x48, .sp=0x93, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a5, .value=0x48}, {.addr=0xb1a6, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xb1a7, .a=0xdf, .x=0xb7, .y=0x48, .sp=0x93, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb1a5, .value=0x48}, {.addr=0xb1a6, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xb1a5, .value=0x48, .type=IO_READ},
        {.addr=0xb1a6, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x99a1, .a=0x3d, .x=0x60, .y=0x8c, .sp=0x78, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x99a1, .value=0x48}, {.addr=0x99a2, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x99a3, .a=0x86, .x=0x60, .y=0x8c, .sp=0x78, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x99a1, .value=0x48}, {.addr=0x99a2, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x99a1, .value=0x48, .type=IO_READ},
        {.addr=0x99a2, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x2510, .a=0x98, .x=0x70, .y=0x8d, .sp=0x34, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2510, .value=0x48}, {.addr=0x2511, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2512, .a=0x61, .x=0x70, .y=0x8d, .sp=0x34, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2510, .value=0x48}, {.addr=0x2511, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2510, .value=0x48, .type=IO_READ},
        {.addr=0x2511, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x3d1a, .a=0xab, .x=0xa6, .y=0xe3, .sp=0x54, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1a, .value=0x48}, {.addr=0x3d1b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3d1c, .a=0x16, .x=0xa6, .y=0xe3, .sp=0x54, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3d1a, .value=0x48}, {.addr=0x3d1b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3d1a, .value=0x48, .type=IO_READ},
        {.addr=0x3d1b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb872, .a=0x17, .x=0x48, .y=0xb1, .sp=0xf8, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xb872, .value=0x48}, {.addr=0xb873, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xb874, .a=0xd3, .x=0x48, .y=0xb1, .sp=0xf8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb872, .value=0x48}, {.addr=0xb873, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xb872, .value=0x48, .type=IO_READ},
        {.addr=0xb873, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x69bd, .a=0xee, .x=0x3b, .y=0xc6, .sp=0xf9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x69bd, .value=0x48}, {.addr=0x69be, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x69bf, .a=0x29, .x=0x3b, .y=0xc6, .sp=0xf9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x69bd, .value=0x48}, {.addr=0x69be, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x69bd, .value=0x48, .type=IO_READ},
        {.addr=0x69be, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x7e56, .a=0x42, .x=0x5d, .y=0xab, .sp=0x7d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7e56, .value=0x48}, {.addr=0x7e57, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x7e58, .a=0xca, .x=0x5d, .y=0xab, .sp=0x7d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7e56, .value=0x48}, {.addr=0x7e57, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x7e56, .value=0x48, .type=IO_READ},
        {.addr=0x7e57, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2165, .a=0xcf, .x=0xf0, .y=0xd1, .sp=0x41, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x2165, .value=0x48}, {.addr=0x2166, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2167, .a=0x22, .x=0xf0, .y=0xd1, .sp=0x41, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2165, .value=0x48}, {.addr=0x2166, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2165, .value=0x48, .type=IO_READ},
        {.addr=0x2166, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x8729, .a=0xcc, .x=0x81, .y=0x97, .sp=0x2c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8729, .value=0x48}, {.addr=0x872a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x872b, .a=0xf4, .x=0x81, .y=0x97, .sp=0x2c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8729, .value=0x48}, {.addr=0x872a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x8729, .value=0x48, .type=IO_READ},
        {.addr=0x872a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x5881, .a=0xb1, .x=0x1d, .y=0xbf, .sp=0x3a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5881, .value=0x48}, {.addr=0x5882, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5883, .a=0x9c, .x=0x1d, .y=0xbf, .sp=0x3a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5881, .value=0x48}, {.addr=0x5882, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5881, .value=0x48, .type=IO_READ},
        {.addr=0x5882, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x63ba, .a=0x71, .x=0xc5, .y=0xb4, .sp=0x73, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x63ba, .value=0x48}, {.addr=0x63bb, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x63bc, .a=0xba, .x=0xc5, .y=0xb4, .sp=0x73, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x63ba, .value=0x48}, {.addr=0x63bb, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x63ba, .value=0x48, .type=IO_READ},
        {.addr=0x63bb, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xa531, .a=0x77, .x=0x67, .y=0x41, .sp=0xf2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa531, .value=0x48}, {.addr=0xa532, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xa533, .a=0x69, .x=0x67, .y=0x41, .sp=0xf2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa531, .value=0x48}, {.addr=0xa532, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xa531, .value=0x48, .type=IO_READ},
        {.addr=0xa532, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xa760, .a=0x7f, .x=0xe9, .y=0x7d, .sp=0x81, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa760, .value=0x48}, {.addr=0xa761, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa762, .a=0x4f, .x=0xe9, .y=0x7d, .sp=0x81, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa760, .value=0x48}, {.addr=0xa761, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xa760, .value=0x48, .type=IO_READ},
        {.addr=0xa761, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x0a7d, .a=0x10, .x=0xb7, .y=0xc2, .sp=0x52, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0a7d, .value=0x48}, {.addr=0x0a7e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0a7f, .a=0xcb, .x=0xb7, .y=0xc2, .sp=0x52, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0a7d, .value=0x48}, {.addr=0x0a7e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0a7d, .value=0x48, .type=IO_READ},
        {.addr=0x0a7e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xff06, .a=0x7e, .x=0x66, .y=0x05, .sp=0x1d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xff06, .value=0x48}, {.addr=0xff07, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xff08, .a=0x30, .x=0x66, .y=0x05, .sp=0x1d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xff06, .value=0x48}, {.addr=0xff07, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xff06, .value=0x48, .type=IO_READ},
        {.addr=0xff07, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x37a0, .a=0xf2, .x=0xd0, .y=0x26, .sp=0x4c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x37a0, .value=0x48}, {.addr=0x37a1, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x37a2, .a=0xd0, .x=0xd0, .y=0x26, .sp=0x4c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x37a0, .value=0x48}, {.addr=0x37a1, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x37a0, .value=0x48, .type=IO_READ},
        {.addr=0x37a1, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x5307, .a=0x4e, .x=0x04, .y=0x23, .sp=0x94, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x5307, .value=0x48}, {.addr=0x5308, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x5309, .a=0x20, .x=0x04, .y=0x23, .sp=0x94, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5307, .value=0x48}, {.addr=0x5308, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x5307, .value=0x48, .type=IO_READ},
        {.addr=0x5308, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x229f, .a=0x83, .x=0xdf, .y=0x2b, .sp=0xde, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x229f, .value=0x48}, {.addr=0x22a0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x22a1, .a=0x63, .x=0xdf, .y=0x2b, .sp=0xde, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x229f, .value=0x48}, {.addr=0x22a0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x229f, .value=0x48, .type=IO_READ},
        {.addr=0x22a0, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x8ef7, .a=0xb9, .x=0xde, .y=0xeb, .sp=0xef, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8ef7, .value=0x48}, {.addr=0x8ef8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8ef9, .a=0xb9, .x=0xde, .y=0xeb, .sp=0xef, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8ef7, .value=0x48}, {.addr=0x8ef8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8ef7, .value=0x48, .type=IO_READ},
        {.addr=0x8ef8, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x405a, .a=0x36, .x=0x75, .y=0x56, .sp=0x47, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x405a, .value=0x48}, {.addr=0x405b, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x405c, .a=0xf7, .x=0x75, .y=0x56, .sp=0x47, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x405a, .value=0x48}, {.addr=0x405b, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x405a, .value=0x48, .type=IO_READ},
        {.addr=0x405b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x40b4, .a=0xab, .x=0x4c, .y=0xee, .sp=0x22, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x40b4, .value=0x48}, {.addr=0x40b5, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x40b6, .a=0x64, .x=0x4c, .y=0xee, .sp=0x22, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x40b4, .value=0x48}, {.addr=0x40b5, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x40b4, .value=0x48, .type=IO_READ},
        {.addr=0x40b5, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xf1a7, .a=0x2a, .x=0x0f, .y=0x59, .sp=0xbf, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf1a7, .value=0x48}, {.addr=0xf1a8, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xf1a9, .a=0x20, .x=0x0f, .y=0x59, .sp=0xbf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf1a7, .value=0x48}, {.addr=0xf1a8, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xf1a7, .value=0x48, .type=IO_READ},
        {.addr=0xf1a8, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x57a5, .a=0x7c, .x=0x65, .y=0x50, .sp=0x74, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x57a5, .value=0x48}, {.addr=0x57a6, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x57a7, .a=0xfb, .x=0x65, .y=0x50, .sp=0x74, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x57a5, .value=0x48}, {.addr=0x57a6, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x57a5, .value=0x48, .type=IO_READ},
        {.addr=0x57a6, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x98ff, .a=0x46, .x=0x0a, .y=0xe4, .sp=0x82, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x98ff, .value=0x48}, {.addr=0x9900, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9901, .a=0xe0, .x=0x0a, .y=0xe4, .sp=0x82, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x98ff, .value=0x48}, {.addr=0x9900, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x98ff, .value=0x48, .type=IO_READ},
        {.addr=0x9900, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x6969, .a=0x32, .x=0x81, .y=0xea, .sp=0xe0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6969, .value=0x48}, {.addr=0x696a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x696b, .a=0x72, .x=0x81, .y=0xea, .sp=0xe0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6969, .value=0x48}, {.addr=0x696a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6969, .value=0x48, .type=IO_READ},
        {.addr=0x696a, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x86e2, .a=0x48, .x=0x14, .y=0xf6, .sp=0xe1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x86e2, .value=0x48}, {.addr=0x86e3, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x86e4, .a=0x5c, .x=0x14, .y=0xf6, .sp=0xe1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x86e2, .value=0x48}, {.addr=0x86e3, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x86e2, .value=0x48, .type=IO_READ},
        {.addr=0x86e3, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xb9b2, .a=0x93, .x=0xf3, .y=0x4e, .sp=0xe5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb9b2, .value=0x48}, {.addr=0xb9b3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb9b4, .a=0x7d, .x=0xf3, .y=0x4e, .sp=0xe5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb9b2, .value=0x48}, {.addr=0xb9b3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb9b2, .value=0x48, .type=IO_READ},
        {.addr=0xb9b3, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x432a, .a=0x9e, .x=0xa1, .y=0x40, .sp=0x38, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x432a, .value=0x48}, {.addr=0x432b, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x432c, .a=0xce, .x=0xa1, .y=0x40, .sp=0x38, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x432a, .value=0x48}, {.addr=0x432b, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x432a, .value=0x48, .type=IO_READ},
        {.addr=0x432b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x5049, .a=0x68, .x=0xac, .y=0x0b, .sp=0x8d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5049, .value=0x48}, {.addr=0x504a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x504b, .a=0xb7, .x=0xac, .y=0x0b, .sp=0x8d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5049, .value=0x48}, {.addr=0x504a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5049, .value=0x48, .type=IO_READ},
        {.addr=0x504a, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x9105, .a=0x8c, .x=0xcf, .y=0x66, .sp=0x58, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x9105, .value=0x48}, {.addr=0x9106, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x9107, .a=0x52, .x=0xcf, .y=0x66, .sp=0x58, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9105, .value=0x48}, {.addr=0x9106, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9105, .value=0x48, .type=IO_READ},
        {.addr=0x9106, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x901f, .a=0xbb, .x=0x06, .y=0x0f, .sp=0xf4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x901f, .value=0x48}, {.addr=0x9020, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x9021, .a=0xe9, .x=0x06, .y=0x0f, .sp=0xf4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x901f, .value=0x48}, {.addr=0x9020, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x901f, .value=0x48, .type=IO_READ},
        {.addr=0x9020, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x7766, .a=0x02, .x=0x53, .y=0x34, .sp=0x85, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7766, .value=0x48}, {.addr=0x7767, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x7768, .a=0x53, .x=0x53, .y=0x34, .sp=0x85, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7766, .value=0x48}, {.addr=0x7767, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x7766, .value=0x48, .type=IO_READ},
        {.addr=0x7767, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x5af9, .a=0x2f, .x=0x5b, .y=0xf3, .sp=0x68, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5af9, .value=0x48}, {.addr=0x5afa, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5afb, .a=0x6c, .x=0x5b, .y=0xf3, .sp=0x68, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5af9, .value=0x48}, {.addr=0x5afa, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x5af9, .value=0x48, .type=IO_READ},
        {.addr=0x5afa, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xece5, .a=0x00, .x=0xec, .y=0x7f, .sp=0x2e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xece5, .value=0x48}, {.addr=0xece6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xece7, .a=0x2d, .x=0xec, .y=0x7f, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xece5, .value=0x48}, {.addr=0xece6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xece5, .value=0x48, .type=IO_READ},
        {.addr=0xece6, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x8053, .a=0x23, .x=0xfe, .y=0x32, .sp=0xdf, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8053, .value=0x48}, {.addr=0x8054, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x8055, .a=0xea, .x=0xfe, .y=0x32, .sp=0xdf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8053, .value=0x48}, {.addr=0x8054, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x8053, .value=0x48, .type=IO_READ},
        {.addr=0x8054, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xfeee, .a=0x41, .x=0x9a, .y=0xc0, .sp=0xe8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfeee, .value=0x48}, {.addr=0xfeef, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xfef0, .a=0x4d, .x=0x9a, .y=0xc0, .sp=0xe8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfeee, .value=0x48}, {.addr=0xfeef, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xfeee, .value=0x48, .type=IO_READ},
        {.addr=0xfeef, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1453, .a=0xd4, .x=0xb9, .y=0xd1, .sp=0x48, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1453, .value=0x48}, {.addr=0x1454, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x1455, .a=0x2b, .x=0xb9, .y=0xd1, .sp=0x48, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1453, .value=0x48}, {.addr=0x1454, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x1453, .value=0x48, .type=IO_READ},
        {.addr=0x1454, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x0639, .a=0x23, .x=0xca, .y=0x01, .sp=0xbe, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0639, .value=0x48}, {.addr=0x063a, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x063b, .a=0x78, .x=0xca, .y=0x01, .sp=0xbe, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0639, .value=0x48}, {.addr=0x063a, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x0639, .value=0x48, .type=IO_READ},
        {.addr=0x063a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x7a91, .a=0xf3, .x=0x7b, .y=0xa5, .sp=0x57, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7a91, .value=0x48}, {.addr=0x7a92, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a93, .a=0x3d, .x=0x7b, .y=0xa5, .sp=0x57, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7a91, .value=0x48}, {.addr=0x7a92, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a91, .value=0x48, .type=IO_READ},
        {.addr=0x7a92, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x2796, .a=0x2c, .x=0x35, .y=0xd0, .sp=0x22, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2796, .value=0x48}, {.addr=0x2797, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x2798, .a=0x5d, .x=0x35, .y=0xd0, .sp=0x22, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2796, .value=0x48}, {.addr=0x2797, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x2796, .value=0x48, .type=IO_READ},
        {.addr=0x2797, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x31ea, .a=0x18, .x=0x5a, .y=0x7b, .sp=0xad, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x31ea, .value=0x48}, {.addr=0x31eb, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x31ec, .a=0x66, .x=0x5a, .y=0x7b, .sp=0xad, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x31ea, .value=0x48}, {.addr=0x31eb, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x31ea, .value=0x48, .type=IO_READ},
        {.addr=0x31eb, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3560, .a=0x45, .x=0x72, .y=0xa1, .sp=0x7f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3560, .value=0x48}, {.addr=0x3561, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3562, .a=0x76, .x=0x72, .y=0xa1, .sp=0x7f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3560, .value=0x48}, {.addr=0x3561, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3560, .value=0x48, .type=IO_READ},
        {.addr=0x3561, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x3730, .a=0xa5, .x=0xff, .y=0x51, .sp=0xe0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3730, .value=0x48}, {.addr=0x3731, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x3732, .a=0xaa, .x=0xff, .y=0x51, .sp=0xe0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3730, .value=0x48}, {.addr=0x3731, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x3730, .value=0x48, .type=IO_READ},
        {.addr=0x3731, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xfb51, .a=0x35, .x=0x6a, .y=0x23, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xfb51, .value=0x48}, {.addr=0xfb52, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xfb53, .a=0x46, .x=0x6a, .y=0x23, .sp=0x5b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfb51, .value=0x48}, {.addr=0xfb52, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xfb51, .value=0x48, .type=IO_READ},
        {.addr=0xfb52, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x2892, .a=0xc2, .x=0x65, .y=0x21, .sp=0xd6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2892, .value=0x48}, {.addr=0x2893, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x2894, .a=0x5c, .x=0x65, .y=0x21, .sp=0xd6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2892, .value=0x48}, {.addr=0x2893, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x2892, .value=0x48, .type=IO_READ},
        {.addr=0x2893, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xdff6, .a=0x6b, .x=0xdd, .y=0xb4, .sp=0x22, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xdff6, .value=0x48}, {.addr=0xdff7, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xdff8, .a=0x70, .x=0xdd, .y=0xb4, .sp=0x22, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdff6, .value=0x48}, {.addr=0xdff7, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xdff6, .value=0x48, .type=IO_READ},
        {.addr=0xdff7, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xd415, .a=0xaf, .x=0x1e, .y=0x42, .sp=0x20, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd415, .value=0x48}, {.addr=0xd416, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd417, .a=0xe3, .x=0x1e, .y=0x42, .sp=0x20, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd415, .value=0x48}, {.addr=0xd416, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd415, .value=0x48, .type=IO_READ},
        {.addr=0xd416, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xcada, .a=0xbc, .x=0x19, .y=0x07, .sp=0x68, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xcada, .value=0x48}, {.addr=0xcadb, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xcadc, .a=0x02, .x=0x19, .y=0x07, .sp=0x68, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcada, .value=0x48}, {.addr=0xcadb, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xcada, .value=0x48, .type=IO_READ},
        {.addr=0xcadb, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xe72a, .a=0xd6, .x=0x33, .y=0xbd, .sp=0x56, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe72a, .value=0x48}, {.addr=0xe72b, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xe72c, .a=0xb2, .x=0x33, .y=0xbd, .sp=0x56, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe72a, .value=0x48}, {.addr=0xe72b, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xe72a, .value=0x48, .type=IO_READ},
        {.addr=0xe72b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xdcc1, .a=0xbb, .x=0xc8, .y=0xc3, .sp=0x99, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc1, .value=0x48}, {.addr=0xdcc2, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xdcc3, .a=0xff, .x=0xc8, .y=0xc3, .sp=0x99, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdcc1, .value=0x48}, {.addr=0xdcc2, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xdcc1, .value=0x48, .type=IO_READ},
        {.addr=0xdcc2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xbefb, .a=0xee, .x=0x30, .y=0x71, .sp=0x29, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbefb, .value=0x48}, {.addr=0xbefc, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xbefd, .a=0x5b, .x=0x30, .y=0x71, .sp=0x29, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbefb, .value=0x48}, {.addr=0xbefc, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xbefb, .value=0x48, .type=IO_READ},
        {.addr=0xbefc, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xdb1a, .a=0x58, .x=0x10, .y=0xf7, .sp=0x0f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1a, .value=0x48}, {.addr=0xdb1b, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xdb1c, .a=0x4d, .x=0x10, .y=0xf7, .sp=0x0f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xdb1a, .value=0x48}, {.addr=0xdb1b, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xdb1a, .value=0x48, .type=IO_READ},
        {.addr=0xdb1b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xafba, .a=0xd5, .x=0xfd, .y=0x97, .sp=0xa6, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xafba, .value=0x48}, {.addr=0xafbb, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xafbc, .a=0x43, .x=0xfd, .y=0x97, .sp=0xa6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xafba, .value=0x48}, {.addr=0xafbb, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xafba, .value=0x48, .type=IO_READ},
        {.addr=0xafbb, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x04ab, .a=0x98, .x=0x34, .y=0xf6, .sp=0x91, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x04ab, .value=0x48}, {.addr=0x04ac, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x04ad, .a=0x08, .x=0x34, .y=0xf6, .sp=0x91, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x04ab, .value=0x48}, {.addr=0x04ac, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x04ab, .value=0x48, .type=IO_READ},
        {.addr=0x04ac, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xbbe3, .a=0xad, .x=0x5e, .y=0x50, .sp=0x1c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xbbe3, .value=0x48}, {.addr=0xbbe4, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xbbe5, .a=0xc9, .x=0x5e, .y=0x50, .sp=0x1c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbbe3, .value=0x48}, {.addr=0xbbe4, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xbbe3, .value=0x48, .type=IO_READ},
        {.addr=0xbbe4, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_48, _48_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xbc34, .a=0xc9, .x=0x9c, .y=0x57, .sp=0x19, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xbc34, .value=0x48}, {.addr=0xbc35, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xbc36, .a=0x99, .x=0x9c, .y=0x57, .sp=0x19, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xbc34, .value=0x48}, {.addr=0xbc35, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xbc34, .value=0x48, .type=IO_READ},
        {.addr=0xbc35, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("48 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
